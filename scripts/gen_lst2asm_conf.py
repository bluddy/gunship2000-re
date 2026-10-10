#!/usr/bin/env python3
"""
Generate an lst2asm config (json) + include file (.inc) from an IDA segment
dump log (scripts/ida_dump_segments.idc output), the IDA listing (.lst),
and optionally the source binary (to recover raw bytes for far encodings
that IDA renders symbolically but UASM cannot parse).

Classification:
  - segments inside the loaded image containing procs  -> CODE
  - everything else (post-image min-alloc/DGROUP/stack) -> DATA (bss)

Encoding fixes detected automatically from the listing:
  - `call/jmp far ptr 0:0`            -> db of the original 5 bytes
  - cross-segment plain `jmp label`   -> db of the original 5 bytes
    (IDA renders far jumps to other segments as plain near jumps;
     UASM rejects them with A2170)
  - `.686p/.mmx/.model` header directives -> removed
  - listing's own `end start`          -> removed (coda emits END)

EA mapping: listing offsets are relative to the loader-created segment
base, while SEGATTR_START reflects the first content byte. We recover
listing_base = SEGATTR_START - first_listing_offset per segment.

Usage:
  venv\\Scripts\\python scripts/gen_lst2asm_conf.py ^
      --segs analysis\\ida\\GS.segs2.log ^
      --lst  analysis\\ida\\GS.i64.lst ^
      --bin  analysis\\GS.exe ^
      --image-size 0x1A788 ^
      --base 0x10000 ^
      --id   GS_GS2 ^
      --out-conf tools\\f19re\\conf\\gs_gs2.json ^
      --out-inc  lst\\gs_gs2.inc
"""
import argparse
import bisect
import json
import os
import re
import struct
import sys

from capstone import Cs, CS_ARCH_X86, CS_MODE_16
from capstone.x86_const import X86_OP_IMM

SEG_RE = re.compile(r'^SEG (\S+) start=([0-9A-F]+) end=([0-9A-F]+) size=([0-9A-F]+)')
PROC_RE = re.compile(r'^(\S+):([0-9a-fA-F]{4})\s+(\S+)\s+proc\s+(near|far)')
LINE_RE = re.compile(r'^(\S+):([0-9a-fA-F]{4})\s*(.*)$')
LABEL_RE = re.compile(r'^(\w+):')
BR_RE = re.compile(
    r'^(jmp|call|j(?:z|nz|c|nc|a|ae|nb|na|nbe|b|be|e|ne|p|np|o|no|s|ns|g|ge|l|le|'
    r'nge|nl|ng)|loop(?:z|nz|e|ne)?|jcxz)\s+(short\s+)?(\S+)$')
PUSH_RE = re.compile(r'^push\s+(-?(?:0[xX][0-9A-Fa-f]+|[0-9A-Fa-f]+h|[0-9]+))$')
PLUS0_RE = re.compile(r'\+0\]')
# x86 prefixes before an opcode byte (16-bit protected/real mode set)
PREFIXES = {0x26, 0x2E, 0x36, 0x3E, 0x64, 0x65, 0xF0, 0xF2, 0xF3, 0x66, 0x67}
FARPTR0_RE = re.compile(r'\b(jmp|call)\s+far\s+ptr\s+0:0')
ENDSTART_RE = re.compile(r'^end\s+\w+')
FS_COUNT_RE = re.compile(r'fs:nothing|gs:nothing')
# lines that do not emit code/data bytes
EMIT_EXCL_RE = re.compile(r'\b(segment|ends|assume|endp|proc)\b|^end\b')
DATA_RE = re.compile(r'^(db|dw|dd)\b')
DATAISH_RE = re.compile(r'(?:^|\s)(db|dw|dd)\s')
# explicit far branch: `jmp far ptr <label>`
FARPTR_RE = re.compile(r'^(jmp|call)\s+far\s+ptr\s+(\S+)$')
# ax-imm ALU: dual encodings (83 /xx imm8 vs the special 05/3D/... opcodes)
AXALU_RE = re.compile(r'^(cmp|add|and|sub|sbb|adc|or|xor)\s+ax,\s*(\S+)$')
ALIGN_RE = re.compile(r'^align\s+\S+$')
SEGDECL_RE = re.compile(r'^\S+\s+segment\b')
# IDA data labels have no trailing colon: `word_2A756 dw 1A1Ch`
DLABEL_RE = re.compile(r'^(\w+)\s+(db|dw|dd)\s')
AXALU_OPCODES = {0x83, 0x05, 0x0D, 0x15, 0x1D, 0x25, 0x2D, 0x35, 0x3D}


def parse_segments(logpath):
    segs = []
    with open(logpath, encoding='utf-8', errors='replace') as f:
        for line in f:
            m = SEG_RE.match(line.strip())
            if m:
                segs.append({
                    'name': m.group(1),
                    'start': int(m.group(2), 16),
                    'end': int(m.group(3), 16),
                    'size': int(m.group(4), 16),
                })
    return segs


def scan_listing(lstpath):
    """Single pass over the listing.

    Returns dict with:
      proc_segs     segments containing at least one proc
      labels        label/proc name -> (seg, off) definitions
      first_off     seg -> offset of its first content line
      farptr0       [(seg, off, op)] 'call/jmp far ptr 0:0' sites
      plain_jmps    [(seg, off, op, target)] plain (unqualified) branch sites;
                    classification against raw bytes happens in main()
      pushes        [(seg, off, literal)] plain `push <imm>` sites
      plus0         [(seg, off)] instructions with a '+0]' memory operand
      emitting_offs seg -> [offsets of byte-emitting listing lines]
      endstarts     [(seg, off)] listing 'end start' lines
      nprocs        total proc count
      fs_count      fs/gs assume lines (to justify the subs rule)
    """
    proc_segs = set()
    proc_names = set()
    labels = {}
    first_off = {}
    farptr0 = []
    plain_jmps = []
    farptr_sites = []
    axalu = []
    aligns = []
    pushes = []
    plus0 = []
    emitting_offs = {}
    instrs_at = {}
    segdecl = {}
    endstarts = []
    assumes = []
    nprocs = 0
    fs_count = 0

    with open(lstpath, encoding='cp437') as f:
        for line in f:
            if FS_COUNT_RE.search(line):
                fs_count += 1
            m = LINE_RE.match(line.strip())
            if not m:
                continue
            seg, off_s, rest = m.group(1), m.group(2), m.group(3).strip()
            off = int(off_s, 16)

            # remember the first content line offset per segment
            if rest and not rest.startswith(';'):
                first_off.setdefault(seg, off)

            pm = PROC_RE.match(line.strip())
            if pm:
                proc_segs.add(seg)
                nprocs += 1
                labels[pm.group(3)] = (seg, off)
                proc_names.add(pm.group(3))
                continue

            if not rest or rest.startswith(';'):
                continue

            lm = LABEL_RE.match(rest)
            if lm:
                labels[lm.group(1)] = (seg, off)
                continue

            if ENDSTART_RE.match(rest):
                endstarts.append((seg, off))
                continue

            # offsets of lines that emit bytes (no segment/assume/proc bookkeeping)
            plain = rest.split(';')[0].strip()
            if SEGDECL_RE.match(plain):
                segdecl.setdefault(seg, plain)
            if plain.startswith('assume'):
                assumes.append((seg, off, plain))
            dl = DLABEL_RE.match(plain)
            if dl:
                labels.setdefault(dl.group(1), (seg, off))
            if not EMIT_EXCL_RE.search(plain):
                emitting_offs.setdefault(seg, []).append(off)
                instrs_at[(seg, off)] = plain

            if FARPTR0_RE.search(rest):
                op = FARPTR0_RE.search(rest).group(1)
                farptr0.append((seg, off, op))
                continue

            # instruction text without trailing comment (BR_RE is $-anchored)
            instr = plain

            jm = BR_RE.match(instr)
            if jm and not jm.group(2):  # plain branch (no 'short')
                op, target = jm.group(1), jm.group(3)
                # classification happens later against the raw original bytes
                plain_jmps.append((seg, off, op, target))

            fm = FARPTR_RE.match(instr)
            if fm:
                farptr_sites.append((seg, off, fm.group(1), fm.group(2), instr))

            am = AXALU_RE.match(instr)
            if am:
                axalu.append((seg, off, instr))

            if ALIGN_RE.match(instr):
                aligns.append((seg, off, instr))

            pmk = PUSH_RE.match(instr)
            if pmk:
                pushes.append((seg, off, pmk.group(1), instr))

            if PLUS0_RE.search(instr) and not DATA_RE.match(instr):
                plus0.append((seg, off, instr))

    # Resolve plain call/jmp sites by inspecting the ORIGINAL bytes at each
    # site (main() has the binary; here we only bucket by label knowledge for
    # reporting). The authoritative classification is done in main() against
    # raw bytes: 9A/EA = direct far -> force `far ptr` (keeps the fixup);
    # E8/EB/FF/... = near/indirect -> keep native encoding.
    kept_far = []       # cross-seg to proc far: UASM already emits 9A + fixup
    same_far = []       # same-seg to proc far: UASM would emit push cs; call
    near_targets = []   # plain labels (candidates for db if bytes say far)
    indirect = []       # register/memory targets
    for site in plain_jmps:
        seg, off, op, target = site
        if target in labels:
            tseg = labels[target][0]
            if tseg == seg and target in proc_names:
                same_far.append(site)
            elif tseg != seg:
                kept_far.append(site)
            else:
                near_targets.append(site)   # same-seg near (native is fine)
        else:
            indirect.append(site)

    return {
        'proc_segs': proc_segs,
        'labels': labels,
        'first_off': first_off,
        'farptr0': farptr0,
        'plain_jmps': plain_jmps,
        'farptr_sites': farptr_sites,
        'axalu': axalu,
        'aligns': aligns,
        'pushes': pushes,
        'plus0': plus0,
        'emitting_offs': emitting_offs,
        'instrs_at': instrs_at,
        'segdecl': segdecl,
        'assumes': assumes,
        'kept_far_calls': kept_far,
        'same_far_calls': same_far,
        'near_targets': near_targets,
        'indirect_jmps': indirect,
        'endstarts': endstarts,
        'nprocs': nprocs,
        'fs_count': fs_count,
    }


def parse_int_literal(s):
    """Parse an assembler immediate: -1, 64, 0FFFFh, 0x1F."""
    if s.startswith('-'):
        return -parse_int_literal(s[1:])
    if s.lower().startswith('0x'):
        return int(s, 16)
    if s.endswith('h') or s.endswith('H'):
        return int(s[:-1], 16)
    return int(s, 10)


def squeeze_text(s):
    """Same normalization lst2asm applies to listing lines (squeeze)."""
    return ' '.join(s.split())


def hexbyte(b):
    """MASM/UASM hex literal: must start with a digit (0EAh, not EAh)."""
    s = f'{b:02X}h'
    return ('0' + s) if s[0] in 'ABCDEF' else s


def db_bytes(raw):
    """`db` line for raw bytes, compressing runs >= 8 into `N dup(XXh)`.

    Keeps the line under lst2asm's 120-char Output.MAXLINE (a 32-byte
    zero pad as individual literals is ~190 chars and aborts the build).
    """
    parts = []
    i = 0
    while i < len(raw):
        j = i + 1
        while j < len(raw) and raw[j] == raw[i]:
            j += 1
        if j - i >= 8:
            parts.append(f'{j - i} dup({hexbyte(raw[i])})')
        else:
            parts.extend(hexbyte(b) for b in raw[i:j])
        i = j
    return 'db ' + ', '.join(parts)


def hexlit(v, digits=4):
    """Hex literal for dw: 0B74h, not B74h."""
    s = f'{v:0{digits}X}h'
    return ('0' + s) if s[0] in 'ABCDEF' else s


def read_bytes(binpath, listing_base, listing_off, base, hdr_image_off, n=8):
    with open(binpath, 'rb') as f:
        ea = listing_base + listing_off
        file_off = hdr_image_off + (ea - base)
        f.seek(file_off)
        return f.read(n)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('--segs', required=True, help='ida_dump_segments.idc log')
    ap.add_argument('--lst', required=True, help='IDA listing file')
    ap.add_argument('--bin', help='original binary (for raw far-encoding bytes)')
    ap.add_argument('--image-size', required=True, help='loaded image size (hex)')
    ap.add_argument('--base', default='0x10000', help='IDA segment base EA')
    ap.add_argument('--file-base', default='0x2000',
                    help='file offset of the load image (MZ header size)')
    ap.add_argument('--id', required=True, help='identifier, e.g. GS_GS2')
    ap.add_argument('--out-conf', required=True)
    ap.add_argument('--out-inc', required=True)
    ap.add_argument('--entry-label', default='start')
    args = ap.parse_args()

    image_size = int(args.image_size, 16)
    base = int(args.base, 16)
    file_base = int(args.file_base, 16)
    image_end = base + image_size

    segs = parse_segments(args.segs)
    if not segs:
        sys.exit(f'no segments parsed from {args.segs}')
    info = scan_listing(args.lst)

    # listing base per segment = SEGATTR_START - first listing offset
    seg_start = {s['name']: s['start'] for s in segs}
    segsize = {s['name']: s['size'] for s in segs}
    listing_base = {}
    for name, s in seg_start.items():
        listing_base[name] = s - info['first_off'].get(name, 0)

    code_segs, data_segs = [], []
    for s in segs:
        if s['start'] < image_end and s['name'] in info['proc_segs']:
            code_segs.append(s['name'])
        else:
            data_segs.append(s['name'])
    in_segments = code_segs + data_segs

    # whole of every post-image segment is uninitialized in the file
    bss = [{'seg': s['name'], 'begin': '0x0', 'end': hex(s['size'] - 1)}
           for s in segs if s['name'] in data_segs and s['start'] >= image_end]

    # ---- encoding fixes (byte-driven) ------------------------------------
    # For every plain branch site, read the ORIGINAL bytes at that address:
    #   9A / EA  = direct far. UASM would either reject the label (A2170,
    #              cross-segment to a near label) or optimize a same-segment
    #              far-proc call into `push cs; call near` (4B vs 5B).
    #              Rewrite as `op far ptr target` -> 9A/EA + relocation fixup.
    #   E9       = near jmp. UASM silently shortens plain `jmp label` to EB
    #              when the target is in range -> -1 byte. Force `near ptr`.
    #   E8       = near call. Native is correct, BUT if the target label
    #              lives in another IDA segment UASM refuses (A2170);
    #              force with `op near ptr target`.
    #   0F 8x    = near jcc. UASM shortens plain `jcc label` to the 7x form
    #              -> -2 bytes. Force `jcc near ptr`.
    #   EB/7x/E0-E3/FF = short/indirect: native encoding is correct.
    # far ptr 0:0 (RTLink bind slots) have no meaningful target symbol and
    # are NOT relocated -> emit their exact original bytes as db.
    FAROPS = (0x9A, 0xEA)
    replace = []
    trailing_remove = []
    preamble = ['.286', 'OPTION NOSCOPED']
    stats = {'far_ptr': 0, 'near_ptr': 0, 'jcc_near': 0, 'far_db': 0,
             'native': 0, 'missing': 0, 'push_imm8': 0, 'plus0_db': 0,
             'seg_fill': 0, 'align_db': 0, 'axalu_db': 0, 'far_nc': 0,
             'beyond_rm': 0, 'beyond_keep': 0, 'para_align': 0,
             'reloc_dw': 0, 'longform_db': 0,
             'groups': 0, 'group_assume': 0, 'push_sym': 0}

    def far_expected(target):
        """(segword, offset) a canonical linker would emit for a label."""
        tseg, toff = info['labels'][target]
        smod = listing_base[tseg] - base
        return (smod >> 4, toff + (smod & 15))

    def seg_name_for_para(word):
        for s in segs:
            if ((listing_base[s['name']] - base) >> 4) == word:
                return s['name']
        return None

    def far_db_form(raw, name):
        """5-byte far encoding keeping the original split + a segment fixup."""
        off16 = raw[1] | (raw[2] << 8)
        return [f'db {hexbyte(raw[0])}',
                f'dw {hexlit(off16)}',
                f'dw seg {name}']

    def site_size(seg, off):
        offs = info['emitting_offs'].get(seg, [])
        j = bisect.bisect_right(offs, off)
        if j >= len(offs):
            return None
        return offs[j] - off

    if args.bin:
        for seg, off, op, target in info['plain_jmps']:
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base)
            b0, b1 = raw[0], raw[1]
            if b0 in FAROPS:
                o_off = raw[1] | (raw[2] << 8)
                o_seg = raw[3] | (raw[4] << 8)
                exp = (far_expected(target)
                       if target in info['labels'] else (o_seg, o_off))
                if (o_seg, o_off) != exp:
                    # original used a non-canonical segment:offset split;
                    # reproduce it byte-exactly, keeping the segment fixup
                    name = seg_name_for_para(o_seg)
                    if name is None:
                        sys.exit(f'no segment for para {o_seg:#06x} '
                                 f'at {seg}:{off:#x}')
                    replace.append({'seg': seg, 'off': hex(off), 'from': op,
                                    'to': far_db_form(raw, name)})
                    stats['far_nc'] += 1
                else:
                    replace.append({'seg': seg, 'off': hex(off), 'from': op,
                                    'to': [f'{op} far ptr {target}']})
                    stats['far_ptr'] += 1
            elif op == 'jmp' and b0 == 0xE9:
                replace.append({'seg': seg, 'off': hex(off), 'from': op,
                                'to': [f'jmp near ptr {target}']})
                stats['near_ptr'] += 1
            elif op == 'call' and b0 == 0xE8:
                # only need an explicit form when the label is in another segment
                tseg = info['labels'].get(target, (seg, None))[0]
                if tseg != seg:
                    replace.append({'seg': seg, 'off': hex(off), 'from': op,
                                    'to': [f'call near ptr {target}']})
                    stats['near_ptr'] += 1
                else:
                    stats['native'] += 1
            elif b0 == 0x0F and 0x80 <= b1 <= 0x8F:
                replace.append({'seg': seg, 'off': hex(off), 'from': op,
                                'to': [f'{op} near ptr {target}']})
                stats['jcc_near'] += 1
            else:
                # short forms (EB/7x/E0-E3) or indirect (FF): native is right
                stats['native'] += 1
        # explicit `jmp/call far ptr <label>` in the listing: usually already
        # canonical, but the original sometimes pairs the target offset with
        # a different (equally valid) segment para - reproduce the original
        # split byte-exactly while keeping the segment fixup (relocation).
        for seg, off, op, target, instr in info['farptr_sites']:
            if target not in info['labels']:
                continue
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 5)
            if raw[0] not in FAROPS:
                continue
            o_off = raw[1] | (raw[2] << 8)
            o_seg = raw[3] | (raw[4] << 8)
            if (o_seg, o_off) == far_expected(target):
                stats['native'] += 1
                continue
            name = seg_name_for_para(o_seg)
            if name is None:
                sys.exit(f'no segment for para {o_seg:#06x} at {seg}:{off:#x}')
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': far_db_form(raw, name)})
            stats['far_nc'] += 1

        # RTLink bind slots: `call/jmp far ptr 0:0` -> exact original bytes
        for seg, off, op in info['farptr0']:
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 5)
            if raw[0] not in FAROPS:
                sys.exit(f'unexpected byte {raw[0]:02X} at {seg}:{off:#x}')
            replace.append({'seg': seg, 'off': hex(off), 'from': op,
                            'to': [db_bytes(raw)]})
            stats['far_db'] += 1

        # `push imm` with original imm8 encoding (6A): the listing prints
        # values >= 0xFF80 as unsigned hex (0FFFFh), which UASM assembles
        # as 68 (imm16) -> +1 byte. Rewrite to signed decimal.
        for seg, off, lit, instr in info['pushes']:
            try:
                v = parse_int_literal(lit)
            except ValueError:
                continue
            v16 = v & 0xFFFF
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 2)
            b0 = raw[0]
            if b0 == 0x6A and v16 >= 0xFF80:
                replace.append({'seg': seg, 'off': hex(off),
                                'from': squeeze_text(instr),
                                'to': [f'push {v16 - 0x10000}']})
                stats['push_imm8'] += 1
            elif b0 == 0x68 and lit.startswith('-') and v16 >= 0xFF80:
                replace.append({'seg': seg, 'off': hex(off),
                                'from': squeeze_text(instr),
                                'to': [f'push 0{v16:04X}h']})
                stats['push_imm8'] += 1

        # Explicit `[reg+0]` operands: the original kept the disp16 form
        # (mod=10) but UASM canonicalizes to mod=00 -> -2 bytes. Emit the
        # original bytes instead (only where mod is actually 10; `[bp+0]`
        # uses mod=01 disp8 and assembles identically).
        for seg, off, instr in info['plus0']:
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 8)
            i = 0
            while i < len(raw) and raw[i] in PREFIXES:
                i += 1
            if i >= len(raw):
                continue
            if raw[i] == 0x0F:
                i += 1
            i += 1
            if i >= len(raw):
                continue
            if (raw[i] & 0xC0) != 0x80:
                stats['native'] += 1
                continue
            offs = info['emitting_offs'].get(seg, [])
            j = bisect.bisect_right(offs, off)
            if j >= len(offs):
                sys.exit(f'no next emitting offset for {seg}:{off:#x}')
            size = offs[j] - off
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': [db_bytes(raw[:size])]})
            stats['plus0_db'] += 1

        # Alignment padding: reproduce the original pad bytes (the original
        # used 00 in some code gaps where lst2asm writes nops).
        seg_order = [s['name'] for s in segs]
        for seg, off, instr in info['aligns']:
            if listing_base[seg] + off >= image_end:
                continue  # past the load image: keep lst2asm's bss handling
            size = site_size(seg, off)
            if size is None:
                # trailing align: pads to the end of the segment
                i = seg_order.index(seg)
                if i + 1 >= len(seg_order):
                    stats['native'] += 1
                    continue
                size = (listing_base[seg_order[i + 1]]
                        - listing_base[seg]) - off
            if size <= 0:
                sys.exit(f'bad align size {size} at {seg}:{off:#x}')
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, size)
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': [db_bytes(raw[:size])]})
            stats['align_db'] += 1

        # ax,imm ALU: two equal-length encodings (83 /xx imm8 vs the special
        # 05/3D/... opcodes); UASM/lst2asm pick one, the original used the
        # other. Emit the original bytes to be exact.
        for seg, off, instr in info['axalu']:
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 4)
            if raw[0] not in AXALU_OPCODES:
                stats['native'] += 1
                continue
            size = site_size(seg, off)
            if size is None:
                sys.exit(f'no next emitting offset for {seg}:{off:#x}')
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': [db_bytes(raw[:size])]})
            stats['axalu_db'] += 1

        # Over-long encodings the original used where UASM picks a shorter
        # canonical form; emit the original bytes so later offsets align:
        #   - disp16: mod=10/disp16 with an imm-in-byte displacement
        #     (e.g. `cmp byte ptr [si+1],0` = 80 BC 01 00 00 vs 80 7C 01 00)
        #   - imm16: 81 /x iw with a byte-fitting immediate
        #     (e.g. `add bx, 0Eh` = 81 C3 0E 00 vs 83 C3 0E)
        md16 = Cs(CS_ARCH_X86, CS_MODE_16)
        md16.detail = True
        claimed = {}
        for r in replace:
            claimed.setdefault(r['seg'], set()).add(r['off'])
        for (seg, off), instr in sorted(info['instrs_at'].items()):
            if seg not in listing_base or hex(off) in claimed.get(seg, ()):
                continue
            if listing_base[seg] + off >= image_end:
                continue
            if DATAISH_RE.search(instr) or ALIGN_RE.match(instr):
                continue
            raw = read_bytes(args.bin, listing_base[seg], off,
                             base, file_base, 16)
            ins = next(md16.disasm(raw, off), None)
            if ins is None or ins.modrm is None:
                continue
            overlong = False
            modrm = ins.modrm
            if (ins.disp_size == 2 and (modrm & 0xC0) == 0x80
                    and (modrm & 7) != 6 and -0x80 <= ins.disp <= 0x7F):
                overlong = True
            elif raw[0] == 0x81:
                ops = ins.operands
                if ops and ops[-1].type == X86_OP_IMM:
                    imm = ops[-1].imm & 0xFFFF
                    if imm < 0x80 or imm >= 0xFF80:
                        overlong = True
            if overlong:
                replace.append({'seg': seg, 'off': hex(off),
                                'from': squeeze_text(instr),
                                'to': [db_bytes(raw[:ins.size])]})
                stats['longform_db'] += 1

        # ---- group reconstruction (byte-driven) --------------------------
        # Direct `[disp16]` references whose displacement is relative to a
        # DIFFERENT (contiguous, earlier) segment reveal a MASM GROUP in the
        # original object (GS2: seg011+seg012 form DGROUP; `ds:label` offsets
        # are group-relative). Without a group UASM emits segment-relative
        # offsets, off by the head segment's length. Reconstruct the groups
        # from (label_EA - disp) bases and declare them in the preamble.
        lab_full = re.compile(r'\b((?:word|dword|byte|off)_([0-9A-Fa-f]+))\b')
        refre = re.compile(
            r'\b(ds|ss|es|cs):((?:word|dword|byte|off)_[0-9A-Fa-f]+)')
        seg_by_start = {listing_base[s['name']]: s['name'] for s in segs}
        cand = {}
        for (seg, off), instr in info['instrs_at'].items():
            if seg not in listing_base:
                continue
            rm = refre.search(instr)
            if not rm:
                continue
            label = rm.group(2)
            if label not in info['labels']:
                continue
            lseg, loff = info['labels'][label]
            ea = listing_base[lseg] + loff
            nm = lab_full.match(label)
            if nm and int(nm.group(2), 16) != ea:
                continue            # name/EA mismatch: not a data label
            raw = read_bytes(args.bin, listing_base[seg], off,
                             base, file_base, 16)
            ins = next(md16.disasm(raw, off), None)
            if ins is None or ins.disp_size != 2 or (ins.modrm & 0xC7) != 0x06:
                continue            # not a direct [disp16] operand
            rbase = ea - ins.disp
            head = seg_by_start.get(rbase)
            if head is None or head == lseg:
                continue            # segment-relative: no group involved
            # head must precede lseg and the span must be covered by the
            # segments between them (group members are contiguous)
            order = [s['name'] for s in segs]
            if order.index(head) >= order.index(lseg):
                continue
            cand.setdefault(head, set()).add(lseg)
        groups = []
        for head, members in sorted(cand.items()):
            order = [s['name'] for s in segs]
            lo, hi = order.index(head), max(order.index(m) for m in members)
            full = order[lo:hi + 1]  # fill gaps: groups are contiguous
            groups.append((head, full))
        for i, (head, members) in enumerate(groups):
            gname = 'DGROUP' if len(groups) == 1 else f'DGROUP{i + 1}'
            preamble.append(f'{gname} GROUP ' + ', '.join(members))
            stats['groups'] = len(groups)
            for m in members:
                for aseg, aoff, atext in info['assumes']:
                    if f'ds:{m}' in atext:
                        replace.append({
                            'seg': aseg, 'off': hex(aoff), 'from': atext,
                            'to': [atext.replace(f'ds:{m}', f'ds:{gname}')]})
                        stats['group_assume'] += 1

        # IDA associates raw immediates with nearby labels (a far-pointer
        # argument `push 4` renders as `push offset unk_3A294`); UASM then
        # assembles the symbolic group/segment offset, which differs from the
        # original immediate. Rewrite such pushes to the original literal.
        group_of = {}
        for _head, _members in groups:
            for _m in _members:
                group_of[_m] = _head
        claimed = {}
        for r in replace:
            claimed.setdefault(r['seg'], set()).add(r['off'])
        for (seg, off), instr in sorted(info['instrs_at'].items()):
            if seg not in listing_base or hex(off) in claimed.get(seg, ()):
                continue
            if not instr.startswith('push') or PUSH_RE.match(instr):
                continue
            raw = read_bytes(args.bin, listing_base[seg], off,
                             base, file_base, 3)
            if raw[0] != 0x68:
                continue
            imm = raw[1] | (raw[2] << 8)
            pm2 = re.match(r'^push\s+(seg|offset)\s+(\S+)$', instr)
            if not pm2:
                continue
            kind, name = pm2.group(1), pm2.group(2)
            if kind == 'seg':
                expected = ((listing_base[name] - base) >> 4
                            if name in listing_base else None)
            else:
                if name not in info['labels']:
                    continue
                lseg, loff = info['labels'][name]
                if lseg in group_of:
                    head = group_of[lseg]
                    expected = listing_base[lseg] - listing_base[head] + loff
                else:
                    expected = loff
            if expected is None or expected == imm:
                stats['native'] += 1
                continue
            # a plain `push <small imm>` would re-optimize to the 6A imm8
            # form; emit the original 68 imm16 bytes to stay exact
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': [db_bytes(raw[:3])]})
            stats['push_sym'] += 1

        # Uninitialized data in the last image segment straddling the image
        # end. Two cases:
        #  - `db N dup(?)` = IDA's pure gap filler between the last file byte
        #    and the next segment's PARA placement (GS seg039). Remove it and
        #    let the following segment's PARA alignment recreate the gap.
        #  - anything else (bare `db ?`, `dw ?`, labeled decls) = real tail
        #    of a segment that extends past the image (SETUP dseg). Keep it:
        #    `?` reserves space without emitting file bytes, preserving label
        #    definitions, true segment sizes, and the original minalloc. Mark
        #    the segment tail as bss so `align` pads with `db ?`, not zeros.
        beyond = {}
        for (seg, off), instr in info['instrs_at'].items():
            if not DATAISH_RE.search(instr):
                continue
            if seg_start.get(seg, image_end) >= image_end:
                continue          # non-image data segment: already bss
            if listing_base[seg] + off < image_end:
                continue
            beyond.setdefault(seg, []).append((off, instr))
            if 'dup(?)' in instr:
                trailing_remove.append({'seg': seg, 'off': hex(off),
                                        'from': squeeze_text(instr)})
                stats['beyond_rm'] += 1
            else:
                stats['beyond_keep'] += 1
        for seg, items in beyond.items():
            if any('dup(?)' not in instr for _off, instr in items):
                # bss bounds are LISTING offsets; a segment's listing may not
                # start at 0 (seg007's first line is at 0007)
                lend = info['first_off'].get(seg, 0) + segsize[seg] - 1
                bss.append({'seg': seg,
                            'begin': hex(image_end - listing_base[seg]),
                            'end': hex(lend)})
        if beyond:
            first_data = next(s['name'] for s in segs if s['name'] in data_segs)
            decl = info['segdecl'].get(first_data)
            if decl and ' byte ' in decl:
                replace.append({'seg': first_data, 'off': '0x0',
                                'from': 'segment',
                                'to': [decl.replace(' byte ', ' para ')]})
                stats['para_align'] += 1

        # Segments past the image with no listing content (seg061: the
        # uninitialized tail after the stack). Give them the STACK class so
        # LINK places them after the stack, and a length that reproduces the
        # original header's minalloc (0x1F8A paragraphs imply a total module
        # of 0x3A020 bytes; IDA cannot see this segment's true extent).
        for s in segs:
            name = s['name']
            if (name in data_segs and s['start'] >= image_end
                    and s['size'] > 0 and not info['emitting_offs'].get(name)):
                replace.append({'seg': name, 'off': '0x0', 'from': 'segment',
                                'to': [f"{name} segment byte public 'STACK' use16",
                                       'db 200h dup(?)']})
                stats['seg_fill'] += 1

        # Relocations landing on plain instructions: IDA renders relocated
        # segment words (a runtime-read DGROUP para here) as bogus code.
        # Emit `dw seg <target>` to recreate the fixup.
        hb = open(args.bin, 'rb').read(0x2000)
        rn = struct.unpack_from('<H', hb, 6)[0]
        roff = struct.unpack_from('<H', hb, 0x18)[0]
        handled = {(s, o) for s, o, _t, _u in info['plain_jmps']}
        handled |= {(s, o) for s, o, _t, _u, _i in info['farptr_sites']}
        handled |= {(s, o) for s, o, _t in info['farptr0']}
        for k in range(rn):
            poff, pseg = struct.unpack_from('<HH', hb, roff + k * 4)
            ea = base + pseg * 16 + poff
            tgt = next((s for s in segs if s['start'] <= ea < s['end']), None)
            if tgt is None:
                continue
            seg, off = tgt['name'], ea - listing_base[tgt['name']]
            if (seg, off) in handled:
                continue
            instr = info['instrs_at'].get((seg, off))
            if instr is None or DATAISH_RE.search(instr):
                continue
            if ALIGN_RE.match(instr) or re.search(r'\bseg\b', instr):
                continue
            raw = read_bytes(args.bin, listing_base[seg], off, base, file_base, 4)
            word = raw[0] | (raw[1] << 8)
            name = seg_name_for_para(word)
            if name is None:
                sys.exit(f'reloc word {word:#06x} at {seg}:{off:#x} '
                         f'matches no segment')
            size = site_size(seg, off)
            if size != 2:
                sys.exit(f'reloc instruction at {seg}:{off:#x} has size '
                         f'{size}, expected 2')
            replace.append({'seg': seg, 'off': hex(off),
                            'from': squeeze_text(instr),
                            'to': [f'dw seg {name}']})
            stats['reloc_dw'] += 1
    else:
        stats = None

    remove = [
        {'seg': code_segs[0], 'off': '0x0', 'from': '.686p'},
        {'seg': code_segs[0], 'off': '0x0', 'from': '.mmx'},
        {'seg': code_segs[0], 'off': '0x0', 'from': '.model'},
    ]
    # the listing's own END (coda writes the authoritative one);
    # 'end start' is specific enough not to catch '...ends' directives
    for seg, off in info['endstarts']:
        remove.append({'seg': seg, 'off': hex(off), 'from': 'end start'})
    remove.extend(trailing_remove)

    config = {
        # IDA listings contain 186+ instructions; UASM's default PROC scoping
        # hides proc-interior labels from cross-proc references (A2102)
        # (group declarations detected from the binary are appended)
        'preamble': preamble,
        'coda': [f'END {args.entry_label}'],
        'include': args.out_inc.replace('\\', '/'),
        'in_segments': in_segments,
        'code_segments': code_segs,
        'data_segments': data_segs,
        'data_size': hex(image_size),
        'bss': bss,
        # IDA emits assume lines with fs/gs which are illegal in 16-bit mode
        'subs': [{'from': r',\s*fs:nothing,\s*gs:nothing', 'to': ''}],
        'extract': [],
        'replace': replace,
        'remove': remove,
        'insert': [],
        'preserves': [],
        'externs': [],
        'publics': [],
        'header_preamble': [
            f'#ifndef {args.id}',
            f'#define {args.id}',
            '#include <stdio.h>',
            '',
            '#if !defined(MSDOS) && !defined(__MSDOS__)',
            '#define far',
            '#endif',
            '',
            '#define __int32 long',
            '#define __int8 char',
            '#define __cdecl',
            '#define __far far',
        ],
        'header_coda': f'#endif // {args.id}',
    }

    os.makedirs(os.path.dirname(args.out_conf) or '.', exist_ok=True)
    with open(args.out_conf, 'w') as f:
        json.dump(config, f, indent=4)
        f.write('\n')

    # include file: entry-point public; segment/group declarations come from
    # the listing itself (lst2asm passes segment directives through)
    os.makedirs(os.path.dirname(args.out_inc) or '.', exist_ok=True)
    with open(args.out_inc, 'w') as f:
        f.write(f'; Include file for {args.id} assembly reconstruction\n')
        f.write('; Generated by scripts/gen_lst2asm_conf.py\n\n')
        f.write(f'PUBLIC {args.entry_label}\n\n')

    print(f'segments: {len(segs)}  code: {len(code_segs)}  data: {len(data_segs)}'
          f'  procs: {info["nprocs"]}  fs/gs assumes: {info["fs_count"]}')
    print(f'plain call/jmp sites: {len(info["plain_jmps"])}'
          f'  (same-seg far-proc: {len(info["same_far_calls"])},'
          f' cross-seg: {len(info["kept_far_calls"])},'
          f' other/indirect: {len(info["indirect_jmps"])})')
    if stats:
        print(f'encoding fixes: far ptr={stats["far_ptr"]}'
              f'  far nc={stats["far_nc"]}'
              f'  near ptr={stats["near_ptr"]}'
              f'  jcc near={stats["jcc_near"]}'
              f'  far db={stats["far_db"]}')
        print(f'byte fixes: push imm8={stats["push_imm8"]}'
              f'  +0 db={stats["plus0_db"]}'
              f'  align db={stats["align_db"]}'
              f'  axalu db={stats["axalu_db"]}'
              f'  longform db={stats["longform_db"]}'
              f'  push sym={stats["push_sym"]}'
              f'  reloc dw={stats["reloc_dw"]}')
        print(f'structural: seg fill={stats["seg_fill"]}'
              f'  beyond rm={stats["beyond_rm"]}'
              f'  beyond keep={stats["beyond_keep"]}'
              f'  para align={stats["para_align"]}'
              f'  native={stats["native"]}')
        if stats['groups']:
            print(f'groups: {stats["groups"]}'
                  f'  assume rewrites: {stats["group_assume"]}'
                  f'  ({"; ".join(h + "=" + "+".join(m) for h, m in groups)})')
    print(f'far ptr 0:0 slots: {len(info["farptr0"])}'
          f'  listing end starts: {len(info["endstarts"])}')
    print(f'image: {hex(base)}..{hex(image_end)}')
    print(f'wrote {args.out_conf}')
    print(f'wrote {args.out_inc}')


if __name__ == '__main__':
    main()

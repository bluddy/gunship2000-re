"""Find where original vs rebuilt byte streams diverge in a segment.

Ranges: original = IDA EA range; rebuilt = LINK map range.
Uses difflib at byte level (robust against decode-grouping artifacts),
then disassembles around each divergence; reports size-changing blocks
plus a category tally.
Usage: find_sizediv.py [SEG] [--segs LOG] [--orig PATH] [--new PATH]
                       [--map PATH] [--max N]
"""
import argparse
import difflib
import re
import struct
from collections import Counter
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

ap = argparse.ArgumentParser()
ap.add_argument('seg', nargs='?', default='seg002')
ap.add_argument('--segs', default=r'analysis\ida\GS.segs2.log')
ap.add_argument('--orig', default=r'analysis\GS.exe')
ap.add_argument('--new', default=r'analysis\ida\GS_rebuilt.exe')
ap.add_argument('--map', dest='mapfile', default=None,
                help='LINK map (default: --new with .map extension)')
ap.add_argument('--max', type=int, default=12)
args = ap.parse_args()
seg = args.seg
max_report = args.max
mapfile = args.mapfile or re.sub(r'\.exe$', '.map', args.new, flags=re.I)

# IDA segment dump -> EA ranges + IDA base (seg000 start)
segre = re.compile(r'^SEG (\S+) start=([0-9A-F]+) end=([0-9A-F]+)')
ida_start = ida_end = None
base = None
with open(args.segs, encoding='utf-8', errors='replace') as f:
    for line in f:
        m = segre.match(line.strip())
        if not m:
            continue
        if m.group(1) == 'seg000':
            base = int(m.group(2), 16)
        if m.group(1) == seg:
            ida_start, ida_end = int(m.group(2), 16), int(m.group(3), 16)
if ida_start is None:
    raise SystemExit(f'segment {seg} not found in {args.segs}')
if base is None:
    raise SystemExit(f'seg000 not found in {args.segs}')

# LINK map -> link ranges
mapre = re.compile(r'^\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+(\S+)\s+(\S+)')
new_start = new_end = None
with open(mapfile, errors='replace') as f:
    for line in f:
        m = mapre.match(line)
        if m and m.group(4) == seg.upper():
            new_start, new_end = int(m.group(1), 16), int(m.group(2), 16) + 1
if new_start is None:
    raise SystemExit(f'segment {seg} not found in {mapfile}')

orig_full = open(args.orig, 'rb').read()
ohdr = struct.unpack_from('<H', orig_full, 8)[0] * 16
orig = orig_full[ohdr + (ida_start - base): ohdr + (ida_end - base)]

nd = open(args.new, 'rb').read()
hdr, = struct.unpack_from('<H', nd, 8)
hdr *= 16
new = nd[hdr + new_start: hdr + new_end]

print(f'{seg}: orig {len(orig):#x} bytes, new {len(new):#x} bytes, delta {len(new)-len(orig):+d}')

md = Cs(CS_ARCH_X86, CS_MODE_16)

def disaround(base, buf, pos, before=10, after=12):
    lo = max(0, pos - before)
    hi = min(len(buf), pos + after)
    out = []
    for ins in md.disasm(buf[lo:hi], base + lo):
        out.append(ins)
    return out

sm = difflib.SequenceMatcher(None, orig, new, autojunk=False)
n = 0
total = 0
valueonly = 0
for tag, i1, i2, j1, j2 in sm.get_opcodes():
    if tag == 'equal':
        continue
    total += 1
    if i2 - i1 == j2 - j1:
        valueonly += 1
        continue
    if n >= max_report:
        continue
    n += 1
    print(f'\n[{tag}] {seg}:{i1:#x} orig {i2-i1:+d}B vs new {j2-j1:+d}B '
          f'(orig bytes {orig[i1:i2][:16].hex()}, new bytes {new[j1:j2][:16].hex()})')
    print('  ORIG:')
    for ins in disaround(ida_start, orig, i1):
        mark = '>>' if i1 <= ins.address - ida_start < i2 else '  '
        print(f'    {mark} {ins.address:#07x}: {ins.mnemonic} {ins.op_str} ({ins.size}B)')
    print('  NEW:')
    for ins in disaround(new_start, new, j1):
        mark = '>>' if j1 <= ins.address - new_start < j2 else '  '
        print(f'    {mark} {ins.address:#07x}: {ins.mnemonic} {ins.op_str} ({ins.size}B)')
print(f'\ntotal divergence blocks: {total} '
      f'(value-only {valueonly}, size-changing shown {n})')

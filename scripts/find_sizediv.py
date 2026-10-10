"""Find where original vs rebuilt byte streams diverge in a segment.

Ranges: original = IDA EA range; rebuilt = LINK map range.
Uses difflib at byte level (robust against decode-grouping artifacts),
then disassembles around each divergence.
Usage: find_sizediv.py seg002 [max_report]
"""
import difflib
import re
import struct
import sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

seg = sys.argv[1] if len(sys.argv) > 1 else 'seg002'
max_report = int(sys.argv[2]) if len(sys.argv) > 2 else 12

# IDA segment dump -> EA ranges
segre = re.compile(r'^SEG (\S+) start=([0-9A-F]+) end=([0-9A-F]+)')
ida_start = ida_end = None
with open(r'analysis\ida\GS.segs2.log', encoding='utf-8', errors='replace') as f:
    for line in f:
        m = segre.match(line.strip())
        if m and m.group(1) == seg:
            ida_start, ida_end = int(m.group(2), 16), int(m.group(3), 16)
if ida_start is None:
    sys.exit(f'segment {seg} not found in ida dump')

# LINK map -> link ranges
mapre = re.compile(r'^\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+(\S+)\s+(\S+)')
new_start = new_end = None
with open(r'analysis\ida\GS_rebuilt.map', errors='replace') as f:
    for line in f:
        m = mapre.match(line)
        if m and m.group(4) == seg.upper():
            new_start, new_end = int(m.group(1), 16), int(m.group(2), 16) + 1
if new_start is None:
    sys.exit(f'segment {seg} not found in link map')

orig_full = open(r'analysis\GS.exe', 'rb').read()
orig = orig_full[0x2000 + (ida_start - 0x10000): 0x2000 + (ida_end - 0x10000)]

nd = open(r'analysis\ida\GS_rebuilt.exe', 'rb').read()
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

"""Byte-level comparison of original vs rebuilt load modules.

Prints every differing range with a classification hint and disassembly
context from both sides, then a category tally.
Exit code: 0 when identical, 1 when any bytes differ (CI-friendly).

Usage: diff_bytes.py [--orig PATH] [--new PATH] [--max-ranges N]
Defaults: analysis\\GS.exe vs analysis\\ida\\GS_rebuilt.exe
"""
import argparse
import struct
import sys
from collections import Counter
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

ap = argparse.ArgumentParser()
ap.add_argument('--orig', default=r'analysis\GS.exe')
ap.add_argument('--new', default=r'analysis\ida\GS_rebuilt.exe')
ap.add_argument('--max-ranges', type=int, default=40)
args = ap.parse_args()

o = open(args.orig, 'rb').read()
n = open(args.new, 'rb').read()
ohdr = struct.unpack_from('<H', o, 8)[0] * 16
nhdr = struct.unpack_from('<H', n, 8)[0] * 16
om = o[ohdr:]
nm = n[nhdr:]
# compare over the original's declared load module (orig continues with
# overlays); pad the rebuilt side if it is still short (WIP builds)
lastpg, pages = struct.unpack_from('<HH', o, 2)
content = (pages - 1) * 512 + lastpg if lastpg else pages * 512
L = content - ohdr
if len(nm) < L:
    print(f'NOTE: rebuilt module is {L - len(nm)} bytes short')
    nm = nm + bytes(L - len(nm))
om = om[:L]
nm = nm[:L]

md = Cs(CS_ARCH_X86, CS_MODE_16)

ranges = []
i = 0
while i < L:
    if om[i] != nm[i]:
        j = i
        while j < L and om[j] != nm[j]:
            j += 1
        ranges.append((i, j))
        i = j
    else:
        i += 1

total = sum(j - i for i, j in ranges)
print(f'comparing {args.new} vs {args.orig}:')
print(f'  module bytes: {L:#x} ({L}), differing: {total} '
      f'in {len(ranges)} ranges')


def classify(a, b):
    if a == b:
        return 'equal'
    # original 83 /xx imm8 form vs our 05/3D/... ax-imm form (same length)
    if len(a) == len(b) == 3 and a[0] == 0x83 and b[0] in (
            0x05, 0x0D, 0x15, 0x1D, 0x25, 0x2D, 0x35, 0x3D):
        return 'ax-imm: orig 83 form, ours special-opcode form'
    if a == b' nop' or (a[0] == 0x90 and b[0] == 0x00):
        return 'align pad: ours nop, orig 00'
    if a[0] == 0x00 and b[0] == 0x90:
        return 'align pad: orig 00, ours nop'
    return ''


shown = 0
tally = Counter()
for (i, j) in ranges:
    a, b = om[i:j], nm[i:j]
    hint = classify(a, b)
    tally[hint if hint else f'other: orig {a[:8].hex()} new {b[:8].hex()}'] += 1
    if shown >= args.max_ranges:
        continue
    shown += 1
    print(f'\n[{i:#07x}..{j:#07x}) len {j-i}: orig {a[:12].hex()}  new {b[:12].hex()}'
          + (f'  <== {hint}' if hint else ''))
    lo = max(0, i - 8)
    oa = list(md.disasm(om[lo:j + 8], lo))
    nb = list(md.disasm(nm[lo:j + 8], lo))
    print('  ORIG:')
    for ins in oa:
        mark = '>>' if i <= ins.address < j else '  '
        print(f'    {mark} {ins.address:#07x}: {ins.mnemonic} {ins.op_str}')
    print('  NEW:')
    for ins in nb:
        mark = '>>' if i <= ins.address < j else '  '
        print(f'    {mark} {ins.address:#07x}: {ins.mnemonic} {ins.op_str}')
if len(ranges) > shown:
    print(f'\n... {len(ranges) - shown} more ranges not shown '
          f'(raise --max-ranges to see them)')

if tally:
    print('\ncategory tally:')
    for k, v in tally.most_common():
        print(f'{v:5}  {k}')

sys.exit(0 if total == 0 else 1)


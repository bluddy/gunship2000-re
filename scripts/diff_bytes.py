"""Byte-level comparison of original vs rebuilt load modules.

Prints every differing range with a classification hint and disassembly
context from both sides.
Usage: diff_bytes.py [max_ranges]
"""
import struct
import sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

max_ranges = int(sys.argv[1]) if len(sys.argv) > 1 else 40

o = open(r'analysis\GS.exe', 'rb').read()
n = open(r'analysis\ida\GS_rebuilt.exe', 'rb').read()
ohdr = struct.unpack_from('<H', o, 8)[0] * 16
nhdr = struct.unpack_from('<H', n, 8)[0] * 16
om = o[ohdr:]
nm = n[nhdr:]
# compare the rebuilt module length (orig continues into its overlay)
L = len(nm)
om = om[:L]

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
print(f'module bytes compared: {L:#x} ({L}), differing: {total} '
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
for (i, j) in ranges:
    if shown >= max_ranges:
        break
    shown += 1
    a, b = om[i:j], nm[i:j]
    hint = classify(a, b)
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
    print(f'\n... {len(ranges) - shown} more ranges not shown')

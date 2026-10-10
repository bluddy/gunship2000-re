"""Instruction-level comparison of original vs rebuilt segment bytes (capstone x16)."""
import struct
import sys
from capstone import Cs, CS_ARCH_X86, CS_MODE_16

seg = sys.argv[1] if len(sys.argv) > 1 else 'seg002'
# IDA EA ranges from the segment dump (base 0x10000 == file off 0x2000)
ranges = {
    'seg002': (0x10BF6, 0x165A4),
}
link_ranges = {  # from rebuilt LINK map
    'seg002': (0x0BF6, 0x6543),
}

ida_start, ida_end = ranges[seg]
new_start, new_end = link_ranges[seg]

orig_full = open(r'analysis\GS.exe', 'rb').read()
orig = orig_full[0x2000 + (ida_start - 0x10000): 0x2000 + (ida_end - 0x10000)]

# rebuilt module: parse MZ
nd = open(r'analysis\ida\GS_rebuilt.exe', 'rb').read()
hdr_paras, = struct.unpack_from('<H', nd, 8)
hdr = hdr_paras * 16
new = nd[hdr + new_start: hdr + new_end]

print(f'{seg}: orig {len(orig):#x} bytes, new {len(new):#x} bytes, delta {len(new)-len(orig):+d}')

md = Cs(CS_ARCH_X86, CS_MODE_16)
md.detail = False

oi = list(md.disasm(orig, ida_start))
ni = list(md.disasm(new, new_start))

print(f'orig insns: {len(oi)}  new insns: {len(ni)}')

# walk in lockstep: compare mnemonic+op_str, allow resync on divergence
i = j = 0
mismatches = []
MAXM = 60
while i < len(oi) and j < len(ni) and len(mismatches) < MAXM:
    a, b = oi[i], ni[j]
    if a.mnemonic == b.mnemonic and a.op_str == b.op_str:
        i += 1
        j += 1
        continue
    # try to resync: look ahead for re-alignment of next 3 instructions
    best = None
    for da in range(0, 6):
        for db_ in range(0, 6):
            if i + da >= len(oi) or j + db_ >= len(ni):
                continue
            ok = all(
                oi[i+da+k].mnemonic == ni[j+db_+k].mnemonic
                and oi[i+da+k].op_str == ni[j+db_+k].op_str
                for k in range(min(3, len(oi)-i-da, len(ni)-j-db_))
            )
            if ok and (best is None or da + db_ < best[0] + best[1]):
                best = (da, db_)
    if best is None:
        mismatches.append((a, b, 'DIVERGED'))
        break
    da, db_ = best
    for k in range(da):
        mismatches.append((oi[i+k], None, 'orig-only'))
    for k in range(db_):
        mismatches.append((None, ni[j+k], 'new-only'))
    i += da
    j += db_

print(f'mismatch events: {len(mismatches)}')
for a, b, kind in mismatches[:MAXM]:
    if kind == 'orig-only':
        print(f'  ORIG-ONLY @{a.address:#07x}: {a.mnemonic} {a.op_str}   ({a.size}B)')
    elif kind == 'new-only':
        print(f'  NEW-ONLY  @{b.address:#07x}: {b.mnemonic} {b.op_str}   ({b.size}B)')
    else:
        if a:
            print(f'  ORIG @{a.address:#07x}: {a.mnemonic} {a.op_str} ({a.size}B)')
        if b:
            print(f'  NEW  @{b.address:#07x}: {b.mnemonic} {b.op_str} ({b.size}B)')
        print('  ---')
if i < len(oi):
    rem_o = sum(x.size for x in oi[i:])
    rem_n = sum(x.size for x in ni[j:])
    print(f'remaining: orig {rem_o:#x} bytes ({len(oi)-i} insns), new {rem_n:#x} bytes ({len(ni)-j} insns)')

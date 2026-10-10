"""Byte-compare original GS.exe load module vs rebuilt GS.EXE."""
import struct
import sys

orig_path = r'analysis\GS.exe'
new_path = sys.argv[1] if len(sys.argv) > 1 else r'C:\Users\yotam\projects\gunship_2000\analysis\ida\GS_rebuilt.exe'

def mz_info(path):
    d = open(path, 'rb').read()
    hdr_paras, = struct.unpack_from('<H', d, 8)
    hdr = hdr_paras * 16
    # load module = everything from end of header? No: image starts at hdr size
    # but MZ pages: actual payload = file[hdr:] up to (pages*512 - lastpage bytes)
    pages, lastbytes = struct.unpack_from('<HH', d, 2)
    total = pages * 512 - (512 - lastbytes if lastbytes else 0)
    module = d[hdr:total]
    ss, sp, cs, ip, relocoff, nreloc = struct.unpack_from('<HHHHHH', d, 0x0E)
    print(f'{path}:')
    print(f'  header={hdr} file={len(d)} imgtotal={total} module={len(module)}')
    print(f'  CS:IP={cs:04X}:{ip:04X} SS:SP={ss:04X}:{sp:04X} nreloc={nreloc}')
    return module, nreloc, d, hdr

om, orel, od, ohdr = mz_info(orig_path)
nm, nrel, nd, nhdr = mz_info(new_path)

minlen = min(len(om), len(nm))
first = None
ndiff = 0
for i in range(minlen):
    if om[i] != nm[i]:
        if first is None:
            first = i
        ndiff += 1

print()
print(f'orig module: {len(om)}  new module: {len(nm)}  delta={len(nm)-len(om)}')
print(f'differing bytes (first {minlen}): {ndiff}  first at {first:#x}' if first is not None else 'IDENTICAL')
if first is not None:
    s = max(0, first - 16)
    print(f'orig[{s:#x}..]: {om[s:s+48].hex()}')
    print(f'new [{s:#x}..]: {nm[s:s+48].hex()}')

# original had nreloc relocation entries; new should too for load-time fixups
print(f'orig relocs={orel}  new relocs={nrel}')

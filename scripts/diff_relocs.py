"""Diff the MZ relocation tables of original vs rebuilt."""
import struct

def relocs(path):
    d = open(path, 'rb').read()
    n, = struct.unpack_from('<H', d, 6)
    off, = struct.unpack_from('<H', d, 0x18)
    out = set()
    for i in range(n):
        ro, rs = struct.unpack_from('<HH', d, off + i * 4)
        out.add(rs * 16 + ro)
    return out

o = relocs(r'analysis\GS.exe')
n = relocs(r'analysis\ida\GS_rebuilt.exe')
print(f'orig relocs: {len(o)}  new relocs: {len(n)}')
print(f'in orig only ({len(o-n)}):', sorted(hex(x) for x in (o - n))[:20])
print(f'in new only  ({len(n-o)}):', sorted(hex(x) for x in (n - o))[:20])

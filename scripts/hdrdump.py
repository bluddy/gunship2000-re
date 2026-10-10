import struct
import sys

def hdr(path):
    d = open(path, 'rb').read()
    ss, sp, csum, ip, cs, relocoff, ov = struct.unpack_from('<7H', d, 0x0E)
    nreloc, = struct.unpack_from('<H', d, 6)
    hdrparas, = struct.unpack_from('<H', d, 8)
    print(f'{path}:')
    print(f'  CS:IP={cs:04X}:{ip:04X}  SS:SP={ss:04X}:{sp:04X}  '
          f'nreloc={nreloc} relocoff={relocoff:#x} hdr={hdrparas*16}')
    return cs, ip, ss, sp

print('ORIGINAL:'); o = hdr(r'analysis\GS.exe')
print('REBUILT:');  n = hdr(r'analysis\ida\GS_rebuilt.exe')
print()
print(f'IP delta: {n[1]-o[1]:+#x}  SS delta: {n[2]-o[2]:+#x}')

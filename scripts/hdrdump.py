import argparse
import struct

ap = argparse.ArgumentParser()
ap.add_argument('--orig', default=r'analysis\GS.exe')
ap.add_argument('--new', default=r'analysis\ida\GS_rebuilt.exe')
args = ap.parse_args()


def hdr(path):
    d = open(path, 'rb').read()
    ss, sp, csum, ip, cs, relocoff, ov = struct.unpack_from('<7H', d, 0x0E)
    nreloc, = struct.unpack_from('<H', d, 6)
    hdrparas, = struct.unpack_from('<H', d, 8)
    minalloc, = struct.unpack_from('<H', d, 0x0A)
    lastpg, pages = struct.unpack_from('<HH', d, 2)
    print(f'{path}:')
    print(f'  CS:IP={cs:04X}:{ip:04X}  SS:SP={ss:04X}:{sp:04X}  '
          f'nreloc={nreloc} relocoff={relocoff:#x} hdr={hdrparas*16} '
          f'minalloc={minalloc:04X} content={(pages-1)*512+lastpg:#x}')
    return cs, ip, ss, sp, nreloc, minalloc


print('ORIGINAL:'); o = hdr(args.orig)
print('REBUILT:');  n = hdr(args.new)
print()
deltas = [f'IP {n[1]-o[1]:+#x}' if n[1] != o[1] else None,
          f'SS {n[2]-o[2]:+#x}' if n[2] != o[2] else None,
          f'relocs {n[3]-o[3]:+#d}' if n[3] != o[3] else None,
          f'minalloc {n[4]-o[4]:+#x}' if n[4] != o[4] else None]
live = [d for d in deltas if d]
print('header deltas: ' + (', '.join(live) if live else 'NONE - exact match'))

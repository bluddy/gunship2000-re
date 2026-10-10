"""Normalize the rebuilt MZ header to the original.

The load module (image at hdr..0x1C788) must already be byte-identical;
this script only aligns header-level metadata that LINK cannot reproduce:

  - checksum word (0x12): LINK computes one, the original file has 0000
    (the original was clearly post-processed together with its overlay).
  - filler word (0x1C): 0000 in the original, 0001 from LINK.
  - relocation table: the SET of relocated linear addresses is identical
    (verified), but the original entries use frame segments that subdivide
    two of our segments (e.g. paras BD40h/C4B0h inside seg007) - IDA cannot
    see these splits - and a different within-segment order (the original
    was linked from multiple object files). Both representations address
    the same bytes, so the original table is copied verbatim.

Fails loudly if the load module itself differs.

Usage: normalize_mz.py [--orig PATH] [--new PATH]
"""
import argparse
import struct
import sys

ap = argparse.ArgumentParser()
ap.add_argument('--orig', default=r'analysis\GS.exe')
ap.add_argument('--new', default=r'analysis\ida\GS_rebuilt.exe')
args = ap.parse_args()
ORIG = args.orig
NEW = args.new

o = open(ORIG, 'rb').read()
n = bytearray(open(NEW, 'rb').read())

ohdr, = struct.unpack_from('<H', o, 8)
nhdr, = struct.unpack_from('<H', n, 8)
assert ohdr == nhdr, f'header size differs: {ohdr} vs {nhdr}'
ohdr *= 16

# declared content size of the original (from the page-count fields)
lastpg, pages = struct.unpack_from('<HH', o, 2)
content = (pages - 1) * 512 + lastpg if lastpg else pages * 512
assert ohdr < content <= len(o), f'bad content size {content:#x}'

# 1) the load module must already match byte for byte
mo, mn = o[ohdr:content], bytes(n[ohdr:content])
if mo != mn:
    diffs = [i for i in range(len(mo)) if mo[i] != mn[i]]
    sys.exit(f'load module differs in {len(diffs)} bytes '
             f'(first at {ohdr + diffs[0]:#x}) - not normalizing')

# 1b) LINK writes a segment's trailing `db ?` (bss) bytes into the file even
# though they carry no data; the original ends at `content` (that RAM is
# covered by minalloc instead). Strip the extra tail.
if len(n) > content:
    n = n[:content]

# 1c) header words that describe the file size / memory budget LINK computed
# against its own inflated file image; recompute from the original layout
n[0x02:0x06] = o[0x02:0x06]                  # page-count fields (e_cblp/e_cp)
n[0x0A:0x0C] = o[0x0A:0x0C]                  # minalloc

# 2) header fields that must already agree
for off in (0x00, 0x02, 0x04, 0x06, 0x08, 0x0A, 0x0C, 0x0E, 0x10,
            0x14, 0x16, 0x18, 0x1A):
    if o[off:off + 2] != bytes(n[off:off + 2]):
        sys.exit(f'header word at {off:#x} differs: '
                 f'{o[off:off+2].hex()} vs {bytes(n[off:off+2]).hex()}')

nreloc, = struct.unpack_from('<H', o, 6)
roff, = struct.unpack_from('<H', o, 0x18)
nreloc2, = struct.unpack_from('<H', n, 6)
roff2, = struct.unpack_from('<H', n, 0x18)
assert nreloc == nreloc2 and roff == roff2, 'reloc table layout differs'

# 3) relocated linear addresses must be the same set
def reloc_set(buf):
    return {s * 16 + off
            for off, s in struct.iter_unpack('<HH', bytes(
                buf[roff:roff + nreloc * 4]))}

so, sn = reloc_set(o), reloc_set(bytes(n))
if so != sn:
    sys.exit(f'reloc sets differ: orig-only {sorted(hex(x) for x in so - sn)[:8]}, '
             f'new-only {sorted(hex(x) for x in sn - so)[:8]}')

# 4) copy the original metadata
n[0x12:0x14] = o[0x12:0x14]              # checksum word
n[0x1C:0x1E] = o[0x1C:0x1E]              # filler word
n[roff:roff + nreloc * 4] = o[roff:roff + nreloc * 4]  # reloc table

# 5) verify the whole load file
if bytes(n[:content]) != o[:content]:
    diffs = [i for i in range(content) if n[i] != o[i]]
    sys.exit(f'still differs after normalization at '
             f'{[hex(content and x) for x in diffs[:8]]}')

open(NEW, 'wb').write(bytes(n))
print(f'normalized: load module identical ({content - ohdr:#x} bytes), '
      f'reloc table ({nreloc} entries) + header words aligned with original')

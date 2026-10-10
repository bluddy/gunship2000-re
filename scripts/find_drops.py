"""Find content drops between original and rebuilt load modules using block matching."""
import struct
import sys

def mz_module(path, hdr_override=None):
    d = open(path, 'rb').read()
    hdr_paras, = struct.unpack_from('<H', d, 8)
    hdr = hdr_paras * 16
    # module = everything after header up to end of declared pages
    pages, lastbytes = struct.unpack_from('<HH', d, 2)
    total = pages * 512 - ((512 - lastbytes) if lastbytes else 0)
    return d[hdr:total]

# original image = header..header+0x1A788 (per state.md: file 8192..116616)
orig_full = open(r'analysis\GS.exe', 'rb').read()
orig_img = orig_full[8192:8192 + 0x1A788]

new_mod = mz_module(r'analysis\ida\GS_rebuilt.exe')
print(f'orig image: {len(orig_img):#x}  new module: {len(new_mod):#x}')

# Walk both: find longest common prefix/suffix style mismatch blocks.
# Simple approach: split into 64-byte chunks, find where alignment breaks.
i = j = 0
mismatches = []
N = min(len(orig_img), len(new_mod))
while i < N:
    if orig_img[i] == new_mod[i]:
        i += 1
        continue
    # mismatch at i: try to resync within next 512 bytes
    window = 512
    best = None
    for skip in range(1, window):
        # new dropped 'skip' bytes?
        if i + skip < len(new_mod) and orig_img[i:i+64] == new_mod[i+skip:i+skip+64]:
            best = ('drop', skip)
            break
        if i + skip < len(orig_img) and orig_img[i+skip:i+skip+64] == new_mod[i:i+64]:
            best = ('add', skip)
            break
    if best is None:
        mismatches.append(('diverge', i, 0))
        # advance a chunk to avoid infinite loop
        i += 64
        continue
    kind, skip = best
    mismatches.append((kind, i, skip))
    if kind == 'drop':
        print(f'{i:#07x}: NEW dropped {skip} bytes: {orig_img[i:i+skip].hex()}')
        i += skip
        j += skip
    else:
        print(f'{i:#07x}: NEW inserted {skip} bytes: {new_mod[i:i+skip].hex()}')
        i += 1  # continue scanning after marking

print(f'total mismatch events: {len(mismatches)}')
if mismatches:
    total_drop = sum(s for k, _, s in mismatches if k == 'drop')
    total_add = sum(s for k, _, s in mismatches if k == 'add')
    print(f'dropped total: {total_drop}  inserted total: {total_add}')

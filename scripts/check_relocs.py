import struct, json, re, sys

BIN = sys.argv[1] if len(sys.argv) > 1 else r'analysis\GS.exe'
CONF = sys.argv[2] if len(sys.argv) > 2 else r'tools\f19re\conf\gs_gs2.json'
SEGS = sys.argv[3] if len(sys.argv) > 3 else r'analysis\ida\GS.segs2.log'
LST = sys.argv[4] if len(sys.argv) > 4 else r'analysis\ida\GS.i64.lst'

d = open(BIN, 'rb').read()
nreloc, = struct.unpack_from('<H', d, 6)
reloff, = struct.unpack_from('<H', d, 0x18)
targets = set()
for i in range(nreloc):
    off, seg = struct.unpack_from('<HH', d, reloff + i * 4)
    targets.add(seg * 16 + off)

c = json.load(open(CONF))

segs = {}
for line in open(SEGS, encoding='utf-8', errors='replace'):
    m = re.match(r'^SEG (\S+) start=([0-9A-F]+)', line.strip())
    if m:
        segs[m.group(1)] = int(m.group(2), 16)

first_off = {}
for line in open(LST, encoding='cp437'):
    m = re.match(r'^(\S+):([0-9a-fA-F]{4})\s*(\S.*)$', line.strip())
    if m and not m.group(3).startswith(';'):
        first_off.setdefault(m.group(1), int(m.group(2), 16))

rel = norel = missing = 0
rel_sites = []
norel_sites = []
for r in c['replace']:
    seg, off = r['seg'], int(r['off'], 16)
    if seg not in segs:
        missing += 1
        continue
    ea = (segs[seg] - first_off.get(seg, 0)) + off
    link = ea - 0x10000
    if link + 3 in targets:
        rel += 1
        rel_sites.append(f'{seg}:{off:#x}')
    else:
        norel += 1
        norel_sites.append(f'{seg}:{off:#x}')

print(f'replaces: {len(c["replace"])}  segword-relocated: {rel}  '
      f'not-relocated: {norel}  missing-seg: {missing}')
print('relocated sites:', rel_sites[:20])
print('unrelocated sites:', norel_sites[:20])

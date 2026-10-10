"""Compare per-segment sizes: IDA dump vs LINK map.

Usage: cmp_segsizes.py [--segs LOG] [--map PATH]
"""
import argparse
import re

ap = argparse.ArgumentParser()
ap.add_argument('--segs', default=r'analysis\ida\GS.segs2.log')
ap.add_argument('--map', dest='mapfile', default=r'analysis\ida\GS_rebuilt.map')
args = ap.parse_args()

# 1) IDA segment dump
segre = re.compile(r'^SEG (\S+) start=([0-9A-F]+) end=([0-9A-F]+) size=([0-9A-F]+)')
ida = {}
order = []
for line in open(args.segs, encoding='utf-8', errors='replace'):
    m = segre.match(line.strip())
    if m:
        name = m.group(1)
        ida[name] = int(m.group(4), 16)
        order.append(name)

# 2) LINK map
mapre = re.compile(r'^\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+(\S+)\s+(\S+)')
link = {}
lorder = []
for line in open(args.mapfile, errors='replace'):
    m = mapre.match(line)
    if m:
        name = m.group(4).upper()
        link[name] = int(m.group(3), 16)
        lorder.append(name)

print(f"{'seg':7} {'IDA':>8} {'LINK':>8} {'diff':>7}")
tot_i = tot_l = 0
for name in order:
    i = ida[name]
    l = link.get(name.upper(), 0)
    if name.upper() not in link:
        print(f'{name:7} {i:8X} {"MISSING":>8}')
        continue
    tot_i += i
    tot_l += l
    d = l - i
    if d != 0:
        print(f'{name:7} {i:8X} {l:8X} {d:+7X}  <-- DIFF')
print(f'{"TOTAL":7} {tot_i:8X} {tot_l:8X} {tot_l-tot_i:+7X}')
print('note: IDA sizes can include phantom gap bytes the original never '
      'loaded (pre-BSS gap, seg061 tail) - trust diff_bytes for content')

# extra link segments not in ida
for name in lorder:
    if name not in {n.upper() for n in order}:
        print(f'{name:7} {"-":>8} {link[name]:8X} (link-only)')

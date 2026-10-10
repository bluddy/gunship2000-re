"""Compare per-segment sizes: IDA dump vs LINK map, and listing lines vs asm lines."""
import re
import sys

# 1) IDA segment dump
segre = re.compile(r'^SEG (\S+) start=([0-9A-F]+) end=([0-9A-F]+) size=([0-9A-F]+)')
ida = {}
order = []
for line in open(r'analysis\ida\GS.segs2.log', encoding='utf-8', errors='replace'):
    m = segre.match(line.strip())
    if m:
        name = m.group(1)
        ida[name] = int(m.group(4), 16)
        order.append(name)

# 2) LINK map
mapre = re.compile(r'^\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+([0-9A-F]+)H\s+(\S+)\s+(\S+)')
link = {}
lorder = []
for line in open(r'analysis\ida\GS_rebuilt.map', errors='replace'):
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

# extra link segments not in ida
for name in lorder:
    if name not in {n.upper() for n in order}:
        print(f'{name:7} {"-":>8} {link[name]:8X} (link-only)')

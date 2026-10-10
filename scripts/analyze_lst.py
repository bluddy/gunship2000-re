import re, collections, sys

path = sys.argv[1] if len(sys.argv) > 1 else r'analysis\ida\GS.i64.lst'
line_re = re.compile(r'^(\S+):([0-9a-fA-F]{4})\s*(.*)$')
seg_info = collections.OrderedDict()
seg_lines = collections.defaultdict(list)

with open(path, encoding='cp437') as f:
    for line in f:
        line = line.rstrip('\n')
        m = line_re.match(line.strip())
        if not m:
            continue
        seg, off, rest = m.group(1), m.group(2), m.group(3).strip()
        if seg not in seg_info:
            seg_info[seg] = {'proc': 0, 'data': 0, 'other': 0, 'first': None, 'first_addr': None, 'lines': 0}
        info = seg_info[seg]
        info['lines'] += 1
        if info['first'] is None and rest and not rest.startswith(';'):
            info['first'] = rest
            info['first_addr'] = off
        if re.match(r'proc\s+(near|far)', rest):
            info['proc'] += 1
        elif re.match(r'(db|dw|dd|dq|dt|struc|assume|segment|ends|endp|equ|align)\b', rest) or ' dup(' in rest:
            info['data'] += 1
        elif rest:
            info['other'] += 1
        if len(seg_lines[seg]) < 3 and rest and not rest.startswith(';'):
            seg_lines[seg].append(f'{off}: {rest[:90]}')

print(f"{'seg':7} {'lines':>6} {'proc':>4} {'data':>5} {'oth':>4}  first-content")
for seg, info in seg_info.items():
    print(f"{seg:7} {info['lines']:6} {info['proc']:4} {info['data']:5} {info['other']:4}  [{info['first_addr']}] {str(info['first'])[:70]}")

print()
print('--- sample content lines (segments index 36+) ---')
for seg in list(seg_info)[36:]:
    for l in seg_lines[seg]:
        print(f'{seg} {l}')

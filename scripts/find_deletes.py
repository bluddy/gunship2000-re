"""Show only listing lines that have NO counterpart in the asm (content drops)."""
import re
import sys
import difflib

seg = sys.argv[1] if len(sys.argv) > 1 else 'seg002'
lst_path = r'analysis\ida\GS.i64.lst'
asm_path = r'analysis\ida\GS.asm'
line_re = re.compile(r'^(\S+):([0-9a-fA-F]{4})\s*(.*)$')

def norm(s):
    s = re.sub(r'\s+', ' ', s.strip())
    s = re.sub(r';.*$', '', s).strip()
    return s

lst_lines = []
with open(lst_path, encoding='cp437') as f:
    for raw in f:
        m = line_re.match(raw.strip())
        if not m or m.group(1) != seg:
            continue
        rest = m.group(3)
        if not rest or rest.startswith(';'):
            continue
        instr = rest.split(';')[0].strip()
        if instr:
            lst_lines.append((int(m.group(2), 16), instr))

asm_lines = []
in_seg = False
with open(asm_path, encoding='cp437') as f:
    for raw in f:
        st = raw.rstrip('\n').strip()
        if re.match(rf'^{seg}\s+segment\b', st):
            in_seg = True
            continue
        if in_seg and re.match(rf'^{seg}\s+ends\b', st):
            break
        if not in_seg or not st or st.startswith(';'):
            continue
        asm_lines.append(st)

l_norm = [norm(x[1]) for x in lst_lines]
a_norm = [norm(x) for x in asm_lines]

sm = difflib.SequenceMatcher(None, l_norm, a_norm, autojunk=False)
deleted = []
for tag, i1, i2, j1, j2 in sm.get_opcodes():
    if tag in ('delete', 'replace') and i2 > i1:
        for k in range(i1, i2):
            deleted.append((lst_lines[k][0], l_norm[k], tag, j2 - j1))

print(f'{seg}: deleted/replaced listing lines: {len(deleted)}')
for off, instr, tag, repl in deleted:
    print(f'  {off:04X} [{tag} -> {repl}]: {instr[:110]}')

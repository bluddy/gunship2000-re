"""Diff listing vs generated asm content per segment (line-by-line)."""
import re
import sys

seg = sys.argv[1] if len(sys.argv) > 1 else 'seg002'
lst_path = r'analysis\ida\GS.i64.lst'
asm_path = r'analysis\ida\GS.asm'

line_re = re.compile(r'^(\S+):([0-9a-fA-F]{4})\s*(.*)$')

def norm(s):
    s = re.sub(r'\s+', ' ', s.strip())
    s = re.sub(r';.*$', '', s).strip()  # drop comments
    return s

# listing: collect content lines for seg (non-comment, non-empty instr)
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

# asm: extract the segment block
asm_lines = []
in_seg = False
with open(asm_path, encoding='cp437') as f:
    for raw in f:
        s = raw.rstrip('\n')
        st = s.strip()
        if re.match(rf'^{seg}\s+segment\b', st):
            in_seg = True
            continue
        if in_seg and re.match(rf'^{seg}\s+ends\b', st):
            break
        if not in_seg:
            continue
        if not st or st.startswith(';'):
            continue
        # strip leading indentation
        asm_lines.append(st)

print(f'listing content lines for {seg}: {len(lst_lines)}')
print(f'asm content lines for {seg}:     {len(asm_lines)}')

# Normalize listing lines the way lst2asm does (it keeps instr as-is mostly)
# Compare sequence: walk both, find first divergence
import difflib
l_norm = [norm(x[1]) for x in lst_lines]
a_norm = [norm(x) for x in asm_lines]

sm = difflib.SequenceMatcher(None, l_norm, a_norm, autojunk=False)
for tag, i1, i2, j1, j2 in sm.get_opcodes():
    if tag == 'equal':
        continue
    print(f'--- {tag}: listing[{i1}:{i2}] vs asm[{j1}:{j2}]')
    for k in range(i1, min(i2, i1 + 12)):
        off = lst_lines[k][0]
        print(f'  L {off:04X}: {l_norm[k][:100]}')
    if i2 - i1 > 12:
        print(f'  ... ({i2-i1} listing lines)')
    for k in range(j1, min(j2, j1 + 12)):
        print(f'  A       : {a_norm[k][:100]}')
    if j2 - j1 > 12:
        print(f'  ... ({j2-j1} asm lines)')

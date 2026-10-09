#!/usr/bin/env python3
"""
Convert Ghidra DumpProgram.java output to mzretools .lst format
"""
import re
import sys

def parse_functions(content):
    functions = []
    in_functions = False
    cur_func = None
    
    for line in content.split('\n'):
        if line.startswith('=== FUNCTIONS ==='):
            in_functions = True
            continue
        if line.startswith('=== FUNCTION ==='):
            if cur_func:
                functions.append(cur_func)
            cur_func = {'addr': '', 'name': '', 'sig': '', 'ret': '', 'conv': '', 'thunk': False}
            continue
        if in_functions and cur_func:
            if line.startswith('addr='):
                cur_func['addr'] = line[5:].strip()
            elif line.startswith('name='):
                cur_func['name'] = line[5:].strip()
            elif line.startswith('signature='):
                cur_func['sig'] = line[10:].strip()
            elif line.startswith('returnType='):
                cur_func['ret'] = line[11:].strip()
            elif line.startswith('callingConvention='):
                cur_func['conv'] = line[18:].strip()
            elif line.startswith('isThunk='):
                cur_func['thunk'] = line[8:].strip() == 'true'
    if cur_func:
        functions.append(cur_func)
    return functions

def write_lst(functions, lst_path):
    # Map functions to segments
    mapped_functions = []
    for func in functions:
        addr = func['addr']
        if not addr or ':' not in addr:
            continue
        seg_part, off_part = addr.split(':')
        try:
            seg = int(seg_part, 16)
            off = int(off_part, 16)
        except:
            continue
        
        name = func['name']
        conv = func['conv']
        is_far = 'far' in func['conv'].lower()
        routine_type = 'FAR' if is_far else 'NEAR'
        
        safe_name = name.replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
        if safe_name.startswith('switchD_') or safe_name.startswith('caseD_'):
            safe_name = 'routine_' + safe_name
        
        mapped_functions.append({
            'name': safe_name,
            'seg': seg,
            'off': off,
            'type': 'FAR' if is_far else 'NEAR',
        })
    
    # Deduplicate by address
    seen = set()
    unique_funcs = []
    for f in mapped_functions:
        key = (f['seg'], f['off'])
        if key not in seen:
            seen.add(key)
            unique_funcs.append(f)
    
    # Main segments from original map
    main_segments = [0x17d1, 0x18d4, 0x10bf]
    
    # Write .lst file
    with open(sys.argv[2], 'w') as f:
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        f.write("Data1 DATA 0773 default\n")
        f.write("Code1 CODE 17d1\n")
        f.write("Code2 CODE 18d4\n")
        f.write("Code3 CODE 10bf\n")
        f.write("#\n")
        f.write("# Discovered routines...\n")
        f.write("#\n")
        
        for func in sorted(unique_funcs, key=lambda x: (x['seg'], x['off'])):
            if func['seg'] not in [0x17d1, 0x18d4, 0x10bf]:
                continue
            seg_idx = [0x17d1, 0x18d4, 0x10bf].index(func['seg'])
            seg_name = f"Code{seg_idx + 1}"
            
            f.write(f"{func['name']}: {seg_name} {func['type']} {func['off']:04x}-{func['off']:04x} R{func['off']:04x}-{func['off']:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered variables...\n")
        f.write("#\n")
    
    print(f"Mapped {len(mapped_functions)} functions, {len(unique_funcs)} unique")
    print(f"Wrote {sys.argv[2]}")

def main():
    if len(sys.argv) < 3:
        print("Usage: python ghidra_dump_to_lst_final.py <dump.txt> <output.lst>")
        sys.exit(1)
    
    with open(sys.argv[1], 'r') as f:
        content = f.read()
    
    # Parse functions
    functions = []
    in_functions = False
    cur_func = None
    
    for line in content.split('\n'):
        if line.startswith('=== FUNCTIONS ==='):
            in_functions = True
            continue
        if line.startswith('=== FUNCTION ==='):
            if cur_func:
                functions.append(cur_func)
            cur_func = {'addr': '', 'name': '', 'sig': '', 'ret': '', 'conv': '', 'thunk': False}
            continue
        if in_functions and cur_func:
            if line.startswith('addr='):
                cur_func['addr'] = line[5:].strip()
            elif line.startswith('name='):
                cur_func['name'] = line[5:].strip()
            elif line.startswith('signature='):
                cur_func['sig'] = line[10:].strip()
            elif line.startswith('returnType='):
                cur_func['ret'] = line[11:].strip()
            elif line.startswith('callingConvention='):
                cur_func['conv'] = line[18:].strip()
            elif line.startswith('isThunk='):
                cur_func['thunk'] = line[8:].strip() == 'true'
    if cur_func:
        functions.append(cur_func)
    
    # Map functions
    mapped_functions = []
    for func in functions:
        addr = func['addr']
        if not addr or ':' not in addr:
            continue
        seg_part, off_part = addr.split(':')
        try:
            seg = int(seg_part, 16)
            off = int(off_part, 16)
        except:
            continue
        
        name = func['name']
        conv = func['conv']
        is_far = 'far' in func['conv'].lower()
        routine_type = 'FAR' if is_far else 'NEAR'
        
        safe_name = name.replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
        if safe_name.startswith('switchD_') or safe_name.startswith('caseD_'):
            safe_name = 'routine_' + safe_name
        
        mapped_functions.append({
            'name': safe_name,
            'seg': seg,
            'off': off,
            'type': 'FAR' if is_far else 'NEAR',
        })
    
    # Deduplicate
    seen = set()
    unique_funcs = []
    for f in mapped_functions:
        key = (f['seg'], f['off'])
        if key not in seen:
            seen.add(key)
            unique_funcs.append(f)
    
    # Write
    with open(sys.argv[2], 'w') as f:
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        f.write("Data1 DATA 0773 default\n")
        f.write("Code1 CODE 17d1\n")
        f.write("Code2 CODE 18d4\n")
        f.write("Code3 CODE 10bf\n")
        f.write("#\n")
        f.write("# Discovered routines...\n")
        f.write("#\n")
        
        for func in sorted(unique_funcs, key=lambda x: (x['seg'], x['off'])):
            if func['seg'] not in [0x17d1, 0x18d4, 0x10bf]:
                continue
            seg_idx = [0x17d1, 0x18d4, 0x10bf].index(func['seg'])
            seg_name = f"Code{seg_idx + 1}"
            routine_type = func['type']
            
            f.write(f"{func['name']}: {seg_name} {routine_type} {func['off']:04x}-{func['off']:04x} R{func['off']:04x}-{func['off']:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered variables...\n")
        f.write("#\n")
    
    print(f"Mapped {len(mapped_functions)} functions, {len(unique_funcs)} unique")
    print(f"Wrote {sys.argv[2]}")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: python ghidra_dump_to_lst_final.py <dump.txt> <output.lst>")
        sys.exit(1)
    
    with open(sys.argv[1], 'r') as f:
        content = f.read()
    
    functions = []
    in_functions = False
    cur_func = None
    
    for line in content.split('\n'):
        if line.startswith('=== FUNCTIONS ==='):
            in_functions = True
            continue
        if line.startswith('=== FUNCTION ==='):
            if cur_func:
                functions.append(cur_func)
            cur_func = {'addr': '', 'name': '', 'sig': '', 'ret': '', 'conv': '', 'thunk': False}
            continue
        if in_functions and cur_func:
            if line.startswith('addr='):
                cur_func['addr'] = line[5:].strip()
            elif line.startswith('name='):
                cur_func['name'] = line[5:].strip()
            elif line.startswith('signature='):
                cur_func['sig'] = line[10:].strip()
            elif line.startswith('returnType='):
                cur_func['ret'] = line[11:].strip()
            elif line.startswith('callingConvention='):
                cur_func['conv'] = line[18:].strip()
            elif line.startswith('isThunk='):
                cur_func['thunk'] = line[8:].strip() == 'true'
    if cur_func:
        functions.append(cur_func)
    
    mapped_functions = []
    for func in functions:
        addr = func['addr']
        if not addr or ':' not in addr:
            continue
        seg_part, off_part = addr.split(':')
        try:
            seg = int(seg_part, 16)
            off = int(off_part, 16)
        except:
            continue
        
        is_far = 'far' in func['conv'].lower()
        routine_type = 'FAR' if is_far else 'NEAR'
        
        safe_name = func['name'].replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
        if safe_name.startswith('switchD_') or safe_name.startswith('caseD_'):
            safe_name = 'routine_' + safe_name
        
        mapped_functions.append({
            'name': safe_name,
            'seg': seg,
            'off': off,
            'type': routine_type,
        })
    
    seen = set()
    unique_funcs = []
    for f in mapped_functions:
        key = (f['seg'], f['off'])
        if key not in seen:
            seen.add(key)
            unique_funcs.append(f)
    
    with open(sys.argv[2], 'w') as f:
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        f.write("Data1 DATA 0773 default\n")
        f.write("Code1 CODE 17d1\n")
        f.write("Code2 CODE 18d4\n")
        f.write("Code3 CODE 10bf\n")
        f.write("#\n")
        f.write("# Discovered routines...\n")
        f.write("#\n")
        
        for func in sorted(unique_funcs, key=lambda x: (x['seg'], x['off'])):
            if func['seg'] not in [0x17d1, 0x18d4, 0x10bf]:
                continue
            seg_idx = [0x17d1, 0x18d4, 0x10bf].index(func['seg'])
            seg_name = f"Code{seg_idx + 1}"
            
            f.write(f"{func['name']}: {seg_name} {func['type']} {func['off']:04x}-{func['off']:04x} R{func['off']:04x}-{func['off']:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered variables...\n")
        f.write("#\n")
    
    print(f"Mapped {len(mapped_functions)} functions, {len(unique_funcs)} unique")
    print(f"Wrote {sys.argv[2]}")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: python ghidra_dump_to_lst_final.py <dump.txt> <output.lst>")
        sys.exit(1)
    
    with open(sys.argv[1], 'r') as f:
        content = f.read()
    
    functions = []
    in_functions = False
    cur_func = None
    
    for line in content.split('\n'):
        if line.startswith('=== FUNCTIONS ==='):
            in_functions = True
            continue
        if line.startswith('=== FUNCTION ==='):
            if cur_func:
                functions.append(cur_func)
            cur_func = {'addr': '', 'name': '', 'sig': '', 'ret': '', 'conv': '', 'thunk': False}
            continue
        if in_functions and cur_func:
            if line.startswith('addr='):
                cur_func['addr'] = line[5:].strip()
            elif line.startswith('name='):
                cur_func['name'] = line[5:].strip()
            elif line.startswith('signature='):
                cur_func['sig'] = line[10:].strip()
            elif line.startswith('returnType='):
                cur_func['ret'] = line[11:].strip()
            elif line.startswith('callingConvention='):
                cur_func['conv'] = line[18:].strip()
            elif line.startswith('isThunk='):
                cur_func['thunk'] = line[8:].strip() == 'true'
    if cur_func:
        functions.append(cur_func)
    
    mapped_functions = []
    for func in functions:
        addr = func['addr']
        if not addr or ':' not in addr:
            continue
        seg_part, off_part = addr.split(':')
        try:
            seg = int(seg_part, 16)
            off = int(off_part, 16)
        except:
            continue
        
        is_far = 'far' in func['conv'].lower()
        routine_type = 'FAR' if is_far else 'NEAR'
        
        safe_name = func['name'].replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
        if safe_name.startswith('switchD_') or safe_name.startswith('caseD_'):
            safe_name = 'routine_' + safe_name
        
        mapped_functions.append({
            'name': safe_name,
            'seg': seg,
            'off': off,
            'type': routine_type,
        })
    
    seen = set()
    unique_funcs = []
    for f in mapped_functions:
        key = (f['seg'], f['off'])
        if key not in seen:
            seen.add(key)
            unique_funcs.append(f)
    
    with open(sys.argv[2], 'w') as f:
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        f.write("Data1 DATA 0773 default\n")
        f.write("Code1 CODE 17d1\n")
        f.write("Code2 CODE 18d4\n")
        f.write("Code3 CODE 10bf\n")
        f.write("#\n")
        f.write("# Discovered routines...\n")
        f.write("#\n")
        
        for func in sorted(unique_funcs, key=lambda x: (x['seg'], x['off'])):
            if func['seg'] not in [0x17d1, 0x18d4, 0x10bf]:
                continue
            seg_idx = [0x17d1, 0x18d4, 0x10bf].index(func['seg'])
            seg_name = f"Code{seg_idx + 1}"
            
            f.write(f"{func['name']}: {seg_name} {func['type']} {func['off']:04x}-{func['off']:04x} R{func['off']:04x}-{func['off']:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered variables...\n")
        f.write("#\n")
    
    print(f"Mapped {len(mapped_functions)} functions, {len(unique_funcs)} unique")
    print(f"Wrote {sys.argv[2]}")

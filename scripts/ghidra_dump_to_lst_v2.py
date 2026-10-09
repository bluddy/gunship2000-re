#!/usr/bin/env python3
"""
Convert Ghidra DumpProgram.java output to mzretools .lst format
v2: Uses actual loaded segment addresses (relocation + base)
"""
import re
import sys

def parse_dump(dump_path, lst_path):
    with open(dump_path, 'r') as f:
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
    
    # Map Ghidra segments to actual loaded segments
    # From the original GS.map: Code1=17d1, Code2=18d4
    # Ghidra blocks at 1000, 106f, 10bf, 165a, 165c, 1b1d, 1b63, 1bca, 1c6b, 1c87, 1d02, 1dea, 1ef4, 1f32, 1f61, 1ffa, 2000, 202b, 206a, 2092, 20bc, 20e4, 212a, 2134, 2163, 2330, 2351, 239c, 23ac, 23ed, 24de, 24e6, 2581, 25f0, 2627, 2634, 2658, 2741, 27d1, 28d4
    # We need to map Ghidra's internal segment bases to actual loaded segments
    
    # The actual loaded segments from the MZ header: 17d1 (entry), 18d4 (data/stack)
    # But mzretools also sees 17d1 and 18d4 as the main code segments
    # Let's map: all Ghidra segments that are part of the loaded image -> 17d1 or 18d4
    
    # From mzmap analysis earlier, it found segments: 17d1, 18d4, and 10bf
    # The load segment is 0x1000, so actual = ghidra_segment + 0x1000
    
    seg_mapping = {}
    for ghidra_seg in [0x1000, 0x106f, 0x10bf, 0x165a, 0x165c, 0x1b1d, 0x1b63, 0x1bca, 0x1c6b, 0x1c87, 0x1d02, 0x1dea, 0x1ef4, 0x1f32, 0x1f61, 0x1ffa, 0x2000, 0x202b, 0x206a, 0x2092, 0x20bc, 0x20e4, 0x212a, 0x2134, 0x2163, 0x2330, 0x2351, 0x239c, 0x23ac, 0x23ed, 0x24de, 0x24e6, 0x2581, 0x25f0, 0x2627, 0x2634, 0x2658, 0x2741, 0x27d1, 0x28d4]:
        actual = ghidra_seg + 0x1000  # load segment adjustment
        seg_mapping[ghidra_seg] = actual
    
    # Also add the uninitialized data segments
    for ghidra_seg in [0x2a79, 0x2ab5, 0x2abf, 0x2b72, 0x2bb6, 0x2bf6, 0x2bff, 0x2c07, 0x2c4b, 0x2c89, 0x2cf5, 0x2d50, 0x2d6b, 0x2dbd, 0x2df9, 0x2f13, 0x30f4, 0x3896, 0x3a38, 0x3b38]:
        actual = ghidra_seg + 0x1000
        seg_mapping[ghidra_seg] = actual
    
    # Parse functions and assign to actual segments
    mapped_functions = []
    for func in functions:
        addr = func['addr']
        if not addr or ':' not in addr:
            continue
        seg_part, off_part = addr.split(':')
        try:
            ghidra_seg = int(seg_part, 16)
            off = int(off_part, 16)
        except:
            continue
        
        actual_seg = seg_mapping.get(ghidra_seg, ghidra_seg + 0x1000)
        
        name = func['name']
        conv = func['conv']
        is_thunk = func['thunk']
        
        is_far = 'far' in func['conv'].lower()
        routine_type = 'FAR' if is_far else 'NEAR'
        
        safe_name = name.replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
        if safe_name.startswith('routine_') and safe_name[8:].isdigit():
            # Keep as is
            pass
        elif safe_name.startswith('switchD_') or safe_name.startswith('caseD_'):
            safe_name = 'routine_' + safe_name
        
        mapped_functions.append({
            'name': safe_name,
            'seg': actual_seg,
            'off': off,
            'type': 'FAR' if is_far else 'NEAR',
            'thunk': func['thunk']
        })
    
    # Deduplicate by address
    seen = set()
    unique_funcs = []
    for f in mapped_functions:
        key = (f['seg'], f['off'])
        if key not in seen:
            seen.add(key)
            unique_funcs.append(f)
    
    # Group by segment
    seg_funcs = {}
    for f in unique_funcs:
        if f['seg'] not in seg_funcs:
            seg_funcs[f['seg']] = []
        seg_funcs[f['seg']].append(f)
    
    # Write .lst file
    with open(lst_path, 'w') as f:
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        # Write segments
        f.write("Data1 DATA 0773 default\n")
        
        # Only write the main code segments that mzretools expects
        main_segments = sorted(set([f['seg'] for f in unique_funcs if f['seg'] in [0x17d1, 0x18d4, 0x10bf]]))
        for seg in main_segments:
            f.write(f"Code{len([s for s in main_segments if s <= seg])} CODE {seg:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered routines...\n")
        f.write("#\n")
        
        # Write routines
        for func in sorted(unique_funcs, key=lambda x: (x['seg'], x['off'])):
            # Find segment name
            seg_idx = main_segments.index(func['seg']) if func['seg'] in main_segments else 0
            seg_name = f"Code{seg_idx + 1}" if func['seg'] in main_segments else "Code1"
            
            f.write(f"{func['name']}: {seg_name} {func['type']} {func['off']:04x}-{func['off']:04x} R{func['off']:04x}-{func['off']:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered variables...\n")
        f.write("#\n")
    
    print(f"Mapped {len(mapped_functions)} functions, {len(unique_funcs)} unique")
    print(f"Segments: {sorted(seg_mapping.values())[:10]}...")
    print(f"Wrote {lst_path}")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: python ghidra_dump_to_lst_v2.py <dump.txt> <output.lst>")
        sys.exit(1)
    parse_dump(sys.argv[1], sys.argv[2])

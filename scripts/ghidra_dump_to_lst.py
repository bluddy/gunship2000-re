#!/usr/bin/env python3
"""
Convert Ghidra DumpProgram.java output to mzretools .lst format
"""
import re
import sys

def parse_dump(dump_path, lst_path):
    with open(dump_path, 'r') as f:
        content = f.read()
    
    # Parse segments
    blocks = []
    in_blocks = False
    for line in content.split('\n'):
        if line.startswith('=== BLOCKS ==='):
            in_blocks = True
            continue
        if line.startswith('===') and in_blocks:
            break
        if in_blocks and line.startswith('block='):
            # block=CODE_0|1000:0000|1000:06ff|RWX|Default
            parts = line[6:].split('|')
            if len(parts) >= 3:
                name = parts[0]
                start = parts[1]
                end = parts[2]
                blocks.append((name, start, end))
    
    # Parse functions
    functions = []
    in_functions = False
    cur_func = None
    in_c = False
    
    for line in content.split('\n'):
        if line.startswith('=== FUNCTIONS ==='):
            in_functions = True
            continue
        if line.startswith('=== FUNCTION ==='):
            if cur_func:
                functions.append(cur_func)
            cur_func = {'addr': '', 'name': '', 'sig': '', 'ret': '', 'conv': '', 'thunk': False}
            in_c = False
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
            elif line == '--- C ---':
                in_c = True
            elif line == '--- END C ---':
                in_c = False
    
    if cur_func:
        functions.append(cur_func)
    
    # Write .lst file
    with open(lst_path, 'w') as f:
        # Size from MZ header (we'll use the actual code size)
        # The GS.exe code size is 0x1a788 (108424 bytes)
        f.write("#\n")
        f.write("# Size of the executable's load module covered by the map\n")
        f.write("#\n")
        f.write("Size 1a788\n")
        f.write("#\n")
        f.write("# Discovered segments, one per line, syntax is \"SegmentName Type(CODE/DATA/STACK) Address [default]\"\n")
        f.write("# The default data segment is assumed to be used by all routines which don't have data segment overrides.\n")
        f.write("# If no default segment is specified, the first one will be used as default.\n")
        f.write("#\n")
        
        # Map Ghidra block names to our segment names
        # We need to determine the segment base for each block
        # Ghidra uses segments like 1000:0000 which means segment 0x1000
        # But mzretools wants segment names and their base addresses
        
        # Collect unique segment bases
        seg_bases = {}
        for name, start, end in blocks:
            if ':' in start:
                seg_part = start.split(':')[0]
                try:
                    base = int(seg_part, 16)
                    if base not in seg_bases:
                        seg_bases[base] = f"Code{len(seg_bases)}"
                except:
                    pass
        
        # Add default data segment
        f.write("Data1 DATA 0773 default\n")
        
        for base in sorted(seg_bases.keys()):
            f.write(f"{seg_bases[base]} CODE {base:04x}\n")
        
        f.write("#\n")
        f.write("# Discovered routines, one per line, syntax is \"RoutineName: Segment Type(NEAR/FAR) Extents[DS] [R/U]Block1[DS] [R/U]Block2[DS]... [annotation1] [annotation2]...\"\n")
        f.write("# The routine extents is the largest continuous block of instructions attributed to this routine and originating\n")
        f.write("# at the location determined to be the routine's entrypoint.\n")
        f.write("# Blocks are offset ranges relative to the segment that the routine belongs to, specifying address as belonging to the routine.\n")
        f.write("# Blocks starting with R contain code that was determined reachable, U were unreachable but still likely belong to the routine.\n")
        f.write("# The routine blocks may cover a greater area than the extents if the routine has disconected chunks it jumps into.\n")
        f.write("# The extents block and/or the individual routine blocks can have an optional data segment override which is the name\n")
        f.write("# of the data segment assumed to be selected within that block.# Possible annotation types:\n")
        f.write("# ignore - ignore this routine in processing (comparison, signature extraction etc.)\n")
        f.write("# complete - this routine was completely reconstructed into C, only influences stat display when printing map\n")
        f.write("# external - is part of an external library (e.g. libc), ignore in comparison, don't count as uncompleted in stats\n")
        f.write("# detached - routine has no callers, looks useless, don't count as uncompleted in stats\n")
        f.write("# assembly - routine was written in assembly, don't include in comparisons by default\n")
        f.write("# duplicate - routine is a duplicate of another\n")
        f.write("#\n")
        
        for func in functions:
            addr = func['addr']
            name = func['name']
            sig = func['sig']
            conv = func['conv']
            is_thunk = func['thunk']
            
            if not addr or ':' not in addr:
                continue
            
            seg_part, off_part = addr.split(':')
            try:
                seg = int(seg_part, 16)
                off = int(off_part, 16)
            except:
                continue
            
            # Find segment name
            seg_name = None
            for base, sname in seg_bases.items():
                if base == seg:
                    seg_name = sname
                    break
            if not seg_name:
                seg_name = f"Code{len(seg_bases)}"
                seg_bases[seg] = seg_name
            
            # Determine NEAR/FAR from calling convention
            is_far = 'far' in conv.lower()
            routine_type = 'FAR' if is_far else 'NEAR'
            
            # Sanitize name
            safe_name = name.replace('FUN_', 'routine_').replace(':', '_').replace(' ', '_')
            
            # Write routine entry - simplified
            f.write(f"{safe_name}: {seg_name} {routine_type} {off_part}-{off_part} R{off_part}-{off_part}\n")
        
        f.write("#\n")
        f.write("# Discovered variables, one per line, syntax is \"VariableName: Segment VAR OffsetWithinSegment\"\n")
        f.write("#\n")
    
    print(f"Parsed {len(blocks)} blocks, {len(functions)} functions")
    print(f"Wrote {lst_path}")

if __name__ == '__main__':
    if len(sys.argv) < 3:
        print("Usage: python ghidra_dump_to_lst.py <dump.txt> <output.lst>")
        sys.exit(1)
    parse_dump(sys.argv[1], sys.argv[2])

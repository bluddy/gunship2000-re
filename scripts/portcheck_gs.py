#!/usr/bin/env python3
"""
Portcheck for Gunship 2000 - compile C routines with MSC 6.0 under DOSBox-X
and verify against original binary bytes.
"""

import argparse
import os
import subprocess
import sys
import tempfile
import re
from pathlib import Path

# MSC 6.0 under DOSBox-X
DOSBOX_X = r"C:\DOSBox-X\dosbox-x.exe"
MSC_ROOT = "tools/msc6.0/C600"

# 8.3 filename constraints
def to_83(name: str) -> str:
    """Convert filename to 8.3 format (uppercase, max 8.3)."""
    base, ext = os.path.splitext(name)
    base = base.upper()[:8]
    ext = ext.upper()[:4]
    return base + ext

def run_dosbox(config_path: str, timeout: int = 60) -> tuple[bool, str]:
    """Run DOSBox-X with config and return (success, output)."""
    try:
        result = subprocess.run(
            [DOSBOX_X, "-exit", "-conf", config_path],
            capture_output=True, text=True, timeout=timeout, cwd=os.getcwd()
        )
        return result.returncode == 0, result.stdout + result.stderr
    except subprocess.TimeoutExpired:
        return False, f"Timeout after {timeout}s"
    except Exception as e:
        return False, str(e)

def parse_cod_listing(cod_path: str, routine_name: str) -> bytes:
    """Parse MSC /Fc .cod listing to extract routine code bytes."""
    if not os.path.exists(cod_path):
        return b""
    
    with open(cod_path, "r", encoding="cp437", errors="ignore") as f:
        lines = f.readlines()
    
    in_routine = False
    routine_bytes = bytearray()
    
    # MSC prefixes C function names with underscore in .cod listing
    search_name = "_" + routine_name
    
    for line in lines:
        # Match with flexible whitespace: _name PROC or _name\tPROC etc.
        if search_name.upper() in line.upper() and "PROC" in line.upper():
            in_routine = True
            continue
        if in_routine and "ENDP" in line.upper():
            break
        if in_routine:
            # Parse code bytes from MSC /Fc listing format:
            # *** 000000\t9a 00 00 00 00 \t\tcall\tFAR PTR _sub_10bf_02c0
            # Extract hex bytes between offset and double-tab/instruction
            # Offset uses lowercase hex; bytes are uppercase
            match = re.match(r'\s*\*{3}\s+[0-9a-fA-F]{6}[\t\s]+(.+?)(?:\t{2,}|\s{2,}|$)', line)
            if match:
                hex_bytes = match.group(1).strip().split()
                routine_bytes.extend(bytes(int(b, 16) for b in hex_bytes))
    
    return bytes(routine_bytes)

def to_83_cod(name: str) -> str:
    """Convert routine name to 8.3 .cod filename."""
    base = name.upper()[:8]
    return base + ".COD"

def get_original_bytes(exe_path: str, segment: int, offset: int, length: int) -> bytes:
    """Extract bytes from original EXE at given IDA segment:offset.
    
    IDA uses segment base 0x1000 for first code segment (seg000).
    Load module starts at header_paras * 16 in the file.
    File offset = load_offset + (segment - 0x1000) * 16 + offset
    """
    with open(exe_path, "rb") as f:
        f.seek(0x08)
        header_paras = int.from_bytes(f.read(2), "little")
        load_offset = header_paras * 16
    
    # IDA segment 0x1000 = first code segment at load module offset 0
    linear_in_module = (segment - 0x1000) * 16 + offset
    file_offset = load_offset + linear_in_module
    
    with open(exe_path, "rb") as f:
        f.seek(file_offset)
        return f.read(length)

def verify_routine(module: str, routine_name: str, c_source: str, 
                   segment: int, offset: int, length: int) -> bool:
    """Compile C routine and verify against original binary."""
    
    msc_dir = os.path.join(os.getcwd(), MSC_ROOT)
    
    # 8.3 names
    c_83 = f"{routine_name[:8]}.c"
    cod_83 = f"{routine_name[:8].upper()}.COD"  # 8.3 .cod filename
    
    with tempfile.TemporaryDirectory() as tmpdir:
        # Write C source with 8.3 name in MSC dir
        c_path = os.path.join(msc_dir, c_83)
        with open(c_path, "w", encoding="ascii") as f:
            f.write(c_source)
        
        # Create DOSBox config - use 8.3 .cod filename
        config_content = f"""[sdl]
fullscreen=false
[dosbox]
machine=svga_s3
memsize=16
[cpu]
core=normal
cputype=386
cycles=max
[mixer]
nosound=true
[autoexec]
mount c {MSC_ROOT}
c:
bin\\cl /c /Gs /Fc{cod_83[:-4]} /Ic:\\include {c_83} > compile.log
exit
"""
        config_path = os.path.join(tmpdir, "dosbox_portcheck.conf")
        with open(config_path, "w", encoding="ascii") as f:
            f.write(config_content)
        
        # Run DOSBox
        success, output = run_dosbox(config_path)
        
        if not success:
            print(f"Compile failed for {routine_name}")
            # Check compile.log
            log_path = os.path.join(msc_dir, "compile.log")
            if os.path.exists(log_path):
                with open(log_path, "r") as f:
                    print(f.read())
            return False
        
        # Parse routine bytes from .cod
        cod_path = os.path.join(msc_dir, cod_83)
        routine_bytes = parse_cod_listing(cod_path, routine_name)
        
        if not routine_bytes:
            print(f"Could not extract bytes for {routine_name}")
            return False
        
        # Get original bytes
        module_exe = {"gs_gs2": "GS", "gs2_gs2": "GS2", "setup_gs2": "SETUP"}.get(module, module)
        orig_exe = f"analysis/{module_exe}.exe"
        actual_length = length if length > 0 else len(routine_bytes)
        original_bytes = get_original_bytes(orig_exe, segment, offset, actual_length)
        
        # Cleanup MSC dir
        for fname in [c_83, f"{routine_name[:8]}.OBJ", cod_83, "compile.log"]:
            fpath = os.path.join(msc_dir, fname)
            if os.path.exists(fpath):
                os.remove(fpath)
        
        if routine_bytes[:actual_length] == original_bytes:
            print(f"OK {routine_name}: MATCH ({len(routine_bytes)} bytes)")
            return True
        else:
            print(f"FAIL {routine_name}: MISMATCH")
            print(f"  Expected ({len(original_bytes)}): {original_bytes.hex()}")
            print(f"  Got      ({len(routine_bytes)}): {routine_bytes.hex()}")
            return False

def main():
    parser = argparse.ArgumentParser(description="Gunship 2000 portcheck - verify C routine against original")
    parser.add_argument("module", help="Module name (gs_gs2, gs2_gs2, setup_gs2)")
    parser.add_argument("routine", help="Routine name")
    parser.add_argument("--source", required=True, help="C source file")
    parser.add_argument("--segment", type=lambda x: int(x, 0), required=True, help="Segment (hex)")
    parser.add_argument("--offset", type=lambda x: int(x, 0), required=True, help="Offset (hex)")
    parser.add_argument("--length", type=lambda x: int(x, 0), help="Length (optional)")
    
    args = parser.parse_args()
    
    with open(args.source, "r") as f:
        c_source = f.read()
    
    length = args.length if args.length else 0
    
    ok = verify_routine(args.module, args.routine, c_source, 
                       args.segment, args.offset, length)
    
    sys.exit(0 if ok else 1)

if __name__ == "__main__":
    main()
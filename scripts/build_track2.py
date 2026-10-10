#!/usr/bin/env python3
"""
Track 2 Full Build Pipeline for Gunship 2000 C Ports

Pipeline:
1. Compile C module with MSC 6.0 under DOSBox-X → .cod listing
2. extract_routines.py → per-routine .asm files
3. replace_routines.py → hybrid IDA asm with ported routines
4. UASM assemble → .obj
5. LINK.EXE (kvikdos) → hybrid .exe
6. mzdiff vs original
"""

import argparse
import os
import subprocess
import sys
import tempfile
import shutil
from pathlib import Path

# Paths
DOSBOX_X = r"C:\DOSBox-X\dosbox-x.exe"
MSC_ROOT = "tools/msc6.0/C600"
IDA_ASM = "analysis/ida/GS.asm"  # IDA-generated asm from Track 1
ORIG_EXE = "analysis/GS.exe"
EXTRACT_TOOL = "tools/f19re/mzretools/tools/extract_routines.py"
REPLACE_TOOL = "tools/f19re/mzretools/tools/replace_routines.py"
UASM = r"C:\tools\uasm\uasm64.exe"
LINK_SCRIPT = "scripts/link_mz.sh"
MZDIFF = "tools/f19re/mzretools/debug/mzdiff"

# 8.3 filename helper
def to_83(name: str) -> str:
    base, ext = os.path.splitext(name)
    return base.upper()[:8] + ext.upper()[:4]

def run_dosbox(config_path: str, timeout: int = 120) -> tuple[bool, str]:
    try:
        result = subprocess.run(
            [DOSBOX_X, "-exit", "-log-con", "-conf", config_path],
            capture_output=True, text=True, timeout=timeout, cwd=os.getcwd()
        )
        return result.returncode == 0, result.stdout + result.stderr
    except subprocess.TimeoutExpired:
        return False, f"Timeout after {timeout}s"
    except Exception as e:
        return False, str(e)

def compile_c_module(c_files: list, module_name: str, workdir: str) -> tuple[bool, str]:
    """Compile C files with MSC 6.0 under DOSBox-X, return (success, cod_path)."""
    msc_dir = os.path.join(os.getcwd(), MSC_ROOT)
    
    # Copy C files to MSC dir with 8.3 names
    c_83_list = []
    for c_file in c_files:
        c_83 = to_83(os.path.basename(c_file))
        shutil.copy2(c_file, os.path.join(msc_dir, c_83))
        c_83_list.append(c_83)
    
    # Use first C file's name for COD base (8.3 format)
    first_c = os.path.basename(c_files[0])
    cod_base = os.path.splitext(first_c)[0].upper()[:8]
    c_83_list = [os.path.basename(f).upper()[:8] + ".C" for f in c_files]
    c_args = " ".join(c_83_list)
    
    # Create batch file for compilation
    bat_content = f"""@echo off
echo BATCH_START
dir bin\\cl.exe
ver
bin\\cl /c /Gs /Fc{cod_base} /Ic:\\include {c_args}
echo CL_RAN
dir *.COD
dir *.OBJ
echo BATCH_END
"""
    bat_path = os.path.join(msc_dir, "compile.bat")
    with open(bat_path, "w", encoding="ascii") as f:
        f.write(bat_content)
    
    config = f"""[sdl]
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
compile.bat
exit
"""
    bat_path = os.path.join(msc_dir, "compile.bat")
    with open(bat_path, "w", encoding="ascii") as f:
        f.write(bat_content)
    
    config = f"""[sdl]
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
compile.bat
exit
"""
    config_path = os.path.join(workdir, "dosbox_compile.conf")
    with open(config_path, "w", encoding="ascii") as f:
        f.write(config)
    
    success, output = run_dosbox(config_path, timeout=180)
    
    # Print DOSBox output for debugging
    print(f"DOSBox output:\n{output}")
    
    # Check if COD file was created
    cod_path = os.path.join(msc_dir, f"{cod_base}.COD")
    if not os.path.exists(cod_path):
        return False, f".cod file not found: {cod_path}"
    
    # Copy .cod to workdir for extract_routines
    shutil.copy2(cod_path, os.path.join(workdir, f"{cod_base}.cod"))
    
    # Cleanup MSC dir
    for fname in c_83_list + [f"{cod_base}.COD", f"{cod_base}.OBJ", "compile.log", "compile.bat"]:
        fpath = os.path.join(msc_dir, fname)
        if os.path.exists(fpath):
            os.remove(fpath)
    
    return True, os.path.join(workdir, f"{cod_base}.cod")

def extract_routines(cod_path: str, outdir: str) -> bool:
    """Run extract_routines.py on .cod listing."""
    os.makedirs(outdir, exist_ok=True)
    try:
        result = subprocess.run([
            sys.executable, EXTRACT_TOOL, cod_path, outdir
        ], capture_output=True, text=True, timeout=60, cwd=os.getcwd())
        if result.returncode != 0:
            print(f"extract_routines failed: {result.stderr}")
            return False
        return True
    except Exception as e:
        print(f"extract_routines error: {e}")
        return False

def replace_routines(ida_asm: str, routine_dir: str, output_asm: str) -> bool:
    """Run replace_routines.py to create hybrid asm."""
    try:
        result = subprocess.run([
            sys.executable, REPLACE_TOOL, ida_asm, output_asm, routine_dir
        ], capture_output=True, text=True, timeout=60, cwd=os.getcwd())
        if result.returncode != 0:
            print(f"replace_routines failed: {result.stderr}")
            return False
        return True
    except Exception as e:
        print(f"replace_routines error: {e}")
        return False

def assemble_link(asm_file: str, name: str) -> tuple[bool, str]:
    """Assemble with UASM (Windows) and link with LINK.EXE via DOSBox."""
    try:
        # UASM (Windows) - compile 16-bit code
        obj_file = os.path.join(os.getcwd(), f"{name}.obj")
        print(f"Assembling {asm_file} -> {obj_file}")
        result = subprocess.run([
            UASM, "-0", "-q", "-Fo", obj_file, asm_file
        ], capture_output=True, text=True, timeout=60, cwd=os.getcwd())
        if result.returncode != 0:
            print(f"UASM failed (rc={result.returncode})")
            print(f"stdout: {result.stdout}")
            print(f"stderr: {result.stderr}")
            return False, ""
        
        # Link via DOSBox (like link_mz.sh but using DOSBox)
        print(f"Linking {name}.obj...")
        
        msc_dir = os.path.join(os.getcwd(), MSC_ROOT)
        build_dir = os.path.join(os.path.expanduser("~"), "gunship_build")
        os.makedirs(build_dir, exist_ok=True)
        
        # Copy .obj to build dir
        build_obj = os.path.join(build_dir, f"{name}.obj")
        shutil.copy2(obj_file, build_obj)
        
        # Create response file for LINK
        rsp_content = f"""D:\\{name}.obj
D:\\{name}.exe
D:\\{name}.map
;
"""
        rsp_path = os.path.join(build_dir, f"{name}.rsp")
        with open(rsp_path, "w", encoding="ascii") as f:
            f.write(rsp_content)
        
        # DOSBox config for linking
        link_config = f"""[sdl]
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
mount d {build_dir.replace(os.sep, '/')}
d:
C:\\BINB\\LINK.EXE @D:\\{name}.rsp
exit
"""
        link_config_path = os.path.join(os.getcwd(), f"link_{name}.conf")
        with open(link_config_path, "w", encoding="ascii") as f:
            f.write(link_config)
        
        result = subprocess.run([
            DOSBOX_X, "-exit", "-log-con", "-conf", link_config_path
        ], capture_output=True, text=True, timeout=120, cwd=os.getcwd())
        
        if result.returncode != 0:
            print(f"Link failed (rc={result.returncode})")
            print(f"stdout: {result.stdout}")
            print(f"stderr: {result.stderr}")
            return False, ""
        
        exe_path = os.path.join(build_dir, f"{name}.exe")
        if not os.path.exists(exe_path):
            print(f"Link failed: {exe_path} not created")
            return False, ""
        
        print(f"Linked: {exe_path}")
        return True, exe_path
    except Exception as e:
        print(f"Assemble/link error: {e}")
        import traceback
        traceback.print_exc()
        return False, ""

def run_mzdiff(orig_exe: str, test_exe: str, map_file: str) -> bool:
    """Run mzdiff (via WSL) to compare."""
    try:
        # Convert Windows paths to WSL paths
        def to_wsl_path(win_path: str) -> str:
            win_path = os.path.abspath(win_path)
            drive, path = os.path.splitdrive(win_path)
            drive_letter = drive[0].lower()  # 'C:' -> 'c'
            wsl_path = f"/mnt/{drive_letter}{path.replace(os.sep, '/')}"
            return wsl_path
        
        orig_wsl = to_wsl_path(orig_exe)
        test_wsl = to_wsl_path(test_exe)
        map_wsl = to_wsl_path(map_file)
        
        result = subprocess.run([
            "wsl", "/home/yotam/projects/gunship2000-re/tools/f19re/mzretools/debug/mzdiff",
            orig_wsl, test_wsl, "--map", map_wsl
        ], capture_output=True, text=True, timeout=60)
        print(result.stdout)
        if result.stderr:
            print(result.stderr)
        return result.returncode == 0
    except Exception as e:
        print(f"mzdiff error: {e}")
        return False

def main():
    parser = argparse.ArgumentParser(description="Track 2 full build pipeline")
    parser.add_argument("module", help="Module name (gs_gs2, gs2_gs2, setup_gs2)")
    parser.add_argument("--c-dir", help="Directory with C source files")
    parser.add_argument("--routines", nargs="+", help="Specific routines to build")
    args = parser.parse_args()
    
    if args.module == "gs_gs2":
        ida_asm = "analysis/ida/GS.asm"
        orig_exe = "analysis/GS.exe"
        map_file = "analysis/GS.map"
    elif args.module == "gs2_gs2":
        ida_asm = "analysis/ida/GS2.asm"
        orig_exe = "analysis/GS2.exe"
        map_file = "analysis/GS2.map"
    elif args.module == "setup_gs2":
        ida_asm = "analysis/ida/SETUP.asm"
        orig_exe = "analysis/SETUP.exe"
        map_file = "analysis/SETUP.map"
    else:
        print(f"Unknown module: {args.module}")
        return 1
    
    if not args.c_dir:
        print("--c-dir required")
        return 1
    
    c_files = [os.path.join(args.c_dir, f) for f in os.listdir(args.c_dir) if f.endswith(".c")]
    if args.routines:
        c_files = [f for f in c_files if any(r in f for r in args.routines)]
    
    if not c_files:
        print("No C files found")
        return 1
    
    with tempfile.TemporaryDirectory() as tmpdir:
        print(f"Working in {tmpdir}")
        
        # 1. Compile C module
        print("=== Compiling C module ===")
        ok, cod_path = compile_c_module(c_files, args.module, tmpdir)
        if not ok:
            print(f"Compile failed: {cod_path}")
            return 1
        print(f"Generated {cod_path}")
        
        # 2. Extract routines
        print("=== Extracting routines ===")
        routine_dir = os.path.join(tmpdir, "routines")
        if not extract_routines(cod_path, routine_dir):
            return 1
        print(f"Extracted routines to {routine_dir}")
        
        # 3. Replace routines in IDA asm
        print("=== Replacing routines ===")
        hybrid_asm = os.path.join(tmpdir, f"{args.module}_hybrid.asm")
        if not replace_routines(ida_asm, routine_dir, hybrid_asm):
            return 1
        print(f"Created hybrid asm: {hybrid_asm}")
        
        # 4. Assemble and link
        print("=== Assembling and linking ===")
        ok, exe_path = assemble_link(hybrid_asm, args.module)
        if not ok:
            return 1
        print(f"Built {exe_path}")
        
        # 5. mzdiff
        print("=== Running mzdiff ===")
        if not run_mzdiff(orig_exe, exe_path, map_file):
            print("mzdiff found differences")
            return 1
        print("SUCCESS: Binary matches original!")
    
    return 0

if __name__ == "__main__":
    sys.exit(main())
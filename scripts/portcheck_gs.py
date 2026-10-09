"""
Portcheck for Gunship 2000 - compile C modules with MSC 6.0 under DOSBox
and verify against original binaries using mzdiff.
"""

import argparse
import os
import subprocess
import sys
import tempfile
import shutil
from pathlib import Path

# Module-specific compiler flags (determined empirically)
MODULE_FLAGS = {
    "gs_gs2": "/Os",
    "gs2_gs2": "/Os",
    "setup_gs2": "/Os",
    "gs_ovl0": "/Os",
    "gs_ovl1": "/Os",
    "gs_ovl2": "/Os",
    "gs_ovl3": "/Os",
    "gs2_id2": "/Os",
    "gs2_id3": "/Os",
    "gs2_id4": "/Os",
    "gs2_id5": "/Os",
    "gs2_id6": "/Os",
    "gs2_id7": "/Os",
    "gs2_id8": "/Os",
    "gs2_id9": "/Os",
}

# DOSBox configuration
DOSBOX = r"C:\tools\dosbox-staging-v0.83.0\dosbox.exe"
DOSBOX_CONF = "dosbox_msc60.conf"
MSC_ROOT = "dos/msc60"

# Paths
GAME_DIR = Path("game")
ANALYSIS_DIR = Path("analysis")
REGISTRY_DIR = Path("registry")
DECOMPILED_DIR = Path("decompiled")
TOOLS_DIR = Path("tools")
F19RE_TOOLS = Path("tools/f19re/mzretools/build")

# MSC 6.0 compiler flags
MSC_FLAGS = "/AS /Gs /Os /Fc{0}.cod /c"

def run_cmd(cmd, cwd=None, capture=True, timeout=300):
    """Run a command and return (success, stdout, stderr)."""
    try:
        result = subprocess.run(cmd, cwd=cwd, capture_output=capture, 
                                text=True, timeout=timeout, shell=True)
        return result.returncode == 0, result.stdout, result.stderr
    except subprocess.TimeoutExpired:
        return False, "", f"Timeout after {timeout}s"
    except Exception as e:
        return False, "", str(e)

def build_module(module_name, source_file, routines=None):
    """Compile a C module with MSC 6.0 under DOSBox."""
    flags = MODULE_FLAGS.get(module_name, "/Os")
    c_file = Path(source_file)
    obj_file = c_file.with_suffix(".obj")
    cod_file = c_file.with_suffix(".cod")
    
    # Build DOSBox command
    # We need to run CL.EXE with the right flags
    cl_cmd = f"cl {flags} /Fc{c_file.stem}.cod /c {c_file.name}"
    
    # Create a batch file to run in DOSBox
    batch_content = f"""@echo off
cd /d c:\\src
{cl_cmd} 2>&1
echo EXIT_CODE=%ERRORLEVEL%
"""
    
    # Write batch file
    batch_file = Path("compile_temp.bat")
    batch_file.write_text(batch_content, encoding="ascii")
    
    # Run in DOSBox
    dosbox_cmd = [
        "dosbox.exe", "-conf", "dosbox_msc60.conf",
        "-c", f"compile_temp.bat > compile.log 2>&1",
        "-exit"
    ]
    
    success, stdout, stderr = run_cmd(dosbox_cmd, timeout=120)
    
    # Check compile.log for results
    if Path("compile.log").exists():
        with open("compile.log", "r") as f:
            log = f.read()
        print(log)
    
    return success

def mzdiff_routine(original_exe, test_exe, routine_name, map_file):
    """Run mzdiff on a specific routine."""
    # Get routine address from map
    # Run mzdiff
    pass

def main():
    parser = argparse.ArgumentParser(description="Gunship 2000 portcheck - MSC 6.0 + DOSBox + mzdiff")
    parser.add_argument("module", help="Module name (gs_gs2, gs2_gs2, etc.)")
    parser.add_argument("routine", nargs="?", help="Specific routine to verify")
    parser.add_argument("--source", help="Source file to compile")
    parser.add_argument("--all", action="store_true", help="Verify all routines in module")
    parser.add_argument("--clean", action="store_true", help="Clean build artifacts")
    
    args = parser.parse_args()
    
    if args.clean:
        # Clean build artifacts
        for f in Path(".").glob("*.obj"):
            f.unlink(missing_ok=True)
        for f in Path(".").glob("*.cod"):
            f.unlink(missing_ok=True)
        for f in Path(".").glob("compile.log"):
            f.unlink(missing_ok=True)
        print("Cleaned build artifacts")
        return
    
    if args.routine:
        print(f"Verifying routine {args.routine} in module {args.module}")
        # TODO: Implement single routine verification
    elif args.all:
        print(f"Verifying all routines in module {args.module}")
        # TODO: Implement full module verification
    else:
        parser.print_help()

if __name__ == "__main__":
    main()
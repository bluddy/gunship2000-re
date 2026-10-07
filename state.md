# Gunship 2000 Decompilation - State Summary

## Project Status

**Phase**: Environment Setup & Toolchain Investigation
**Date**: 2026-10-07
**Platform**: Windows (current) / Linux (recommended)

---

## What We Have

### Game Executable
- **File**: `game/GS2000.COM` (2,738 bytes)
- **Format**: DOS COM (16-bit real mode, loads at CS:0100h)
- **Entry Point**: Offset 0x0000 (`mov sp, 0x0804` - stack setup)
- **Additional files**: `GS2000.DAT` (423KB data), `GS2000.CAT` (1.2MB catalog)
- **Game**: Gunship 2000 by MicroProse (1993), DOS helicopter combat sim

### Decompiler Toolchain
- **Tool**: Inertia Decompiler (`../../source/inertia_decompiler`)
- **Purpose**: DOS/x86-16 decompiler that produces C from executables
- **Key entry points**: `decompile.py`, `python -m inertia.cli.cli`
- **Supports**: .COM, .EXE (MZ), .COD listings, .BIN blobs
- **Output**: C code with `msc-dos` or `portable-flat` target styles

---

## Issues Found & Fixed

### 1. Architecture Guard Path Separator Bug (FIXED)
**Problem**: On Windows, `Path.relative_to()` returns backslash-separated paths (e.g., `structuring\condition_materialization.py`), but the allowlist in `check_decompiler_architecture.py` uses forward slashes. This caused ALL semantic layer import checks to fail, preventing decompiler startup.

**Fix**: Added `.replace("\\", "/")` normalization in `_check_semantic_layer_file_does_not_import_postprocess` at `tools/dev/check_decompiler_architecture.py:4883`.

**File**: `C:\Users\yotam\source\inertia_decompiler\tools\dev\check_decompiler_architecture.py`

### 2. Unix-only `resource` Module (FIXED)
**Problem**: `inertia/cli/runtime_support.py` and `inertia/cli/corpus_scan.py` import `resource` (Unix-only, provides `setrlimit` for memory limits).

**Fix**: Made imports conditional with `try/except ModuleNotFoundError`, set to `None` on Windows. Added guards at usage sites to skip when `None`.

**Files**:
- `inertia/cli/runtime_support.py` (import + `apply_memory_limit` usage)
- `inertia/cli/corpus_scan.py` (import + `set_memory_limit` usage)

### 3. Unix-only `fcntl` Module (FIXED)
**Problem**: `inertia/cli/recompile_check.py` imports `fcntl` for file locking.

**Fix**: Made import conditional with `try/except ModuleNotFoundError`. The `_msc51_compiler_lock_8616` context manager now yields immediately (skips locking) when `fcntl` is unavailable.

**File**: `inertia/cli/recompile_check.py`

### 4. Unicorn Engine DLL Missing (UNRESOLVED on Windows)
**Problem**: `unicornlib.dll` cannot load on this Windows environment. angr's unicorn engine is disabled, which is required for VEX lifting during decompilation. This causes an ACCESS_VIOLATION (0xC0000005) crash during decompilation.

**Status**: `pip install unicorn` was initiated but may not resolve the DLL loading issue on this specific Windows configuration.

---

## Decompilation Approach

### How Inertia Decompiler Works (from README.md)
The core pipeline is:
```
IR -> Alias -> Widening -> Types -> Structuring -> Rewrite
```

For DOS games, the workflow is:
1. **Runtime evidence collection** via instrumented DOSBox
2. **Static analysis** with ada_script, Inertia, Ghidra, Reko
3. **C reconstruction** via Inertia decompiler
4. **Build candidate** (DOS reconstruction or native translation with masm2c)
5. **Comparison** via mzdiff, SSA/Z3, dosunit

### Key Decompile Commands
```bash
# Basic decompilation
decompile.py GS2000.COM

# With timeout and C output
decompile.py GS2000.COM --timeout 60 --c-target msc-dos --output-c-dir ./output/

# Single function
decompile.py GS2000.COM --addr 0x1000

# With tail validation
INERTIA_ENABLE_TAIL_VALIDATION=1 decompile.py GS2000.COM
```

### Inertia Decompiler Options for Our Use
- `--c-target msc-dos`: MS C DOS helper style (matches era of game)
- `--c-target portable-flat`: Portable C without DOS specifics
- `--dump-layers --dump-layer-dir DIR`: Per-stage C artifacts
- `--function-discovery-backend auto|angr|rizin|hybrid`: Function discovery method
- `--signature-catalog PATH`: Library signature matching

---

## Environment

### Virtual Environment
- **Location**: `./venv`
- **Python**: 3.14.2 (CPython)
- **Key packages**: angr==9.3.3, pyvex==9.3.3, z3-solver==4.13.0.0, capstone==5.0.9

### What Was Installed
- angr 9.3.3 (with x86-16 support via vextest-x86-16)
- pyvex 9.3.3 (VEX IR lifter)
- z3-solver 4.13.0.0 (SSA comparison)
- capstone 5.0.9 (disassembly)
- textual 8.2.8 (TUI debugger)
- Cython 3.3.0 (VEX lifter build)

---

## Next Steps

1. **If on Linux**: The decompiler should work without the Windows-specific issues. Run:
   ```bash
   cd gunship_2000
   source venv/bin/activate
   python -m inertia.cli.cli game/GS2000.COM --timeout 60
   ```

2. **If staying on Windows**: Need to resolve unicorn DLL loading issue, or find alternative lifting backend.

3. **Alternative approaches if decompiler fails**:
   - Use Ghidra (free, cross-platform) for disassembly and decompilation
   - Use Reko (Windows-friendly decompiler) for initial analysis
   - Manual disassembly with IDA Pro
   - Use the inertia_decompiler's `dump_debug_info.py` to inspect embedded symbols

4. **Game-specific analysis**:
   - Determine if GS2000.COM is a stub/loader or full executable
   - Analyze GS2000.DAT and GS2000.CAT for game data structures
   - Map mission files to gameplay content

---

## Project Structure

```
gunship_2000/
├── venv/              # Python virtual environment
├── game/              # Game files (from original distribution)
│   ├── GS2000.COM     # Main executable (2,738 bytes)
│   ├── GS2000.DAT     # Game data (423KB)
│   ├── GS2000.CAT     # Catalog (1.2MB)
│   └── ...            # Mission/asset files
├── logs/              # Discovery log
│   └── discovery_log.md
├── registry/          # Decompilation registry
│   └── file_registry.md
└── state.md           # This file
```

---

## Registry Entries

| Category | File | Status | Notes |
|----------|------|--------|-------|
| Executable | GS2000.COM | BLOCKED | Unicorn DLL crash on Windows; should work on Linux |
| Data | GS2000.DAT | PENDING | 423KB, unknown format |
| Data | GS2000.CAT | PENDING | 1.2MB, likely archive |
| Tool | inertia_decompiler | FIXED | 3 Windows bugs fixed, unicorn issue remains |
| Tool | decompile.py | WORKS | CLI help responds; execution crashes due to unicorn |

---

## Modified Files in inertia_decompiler

These changes were made to enable the decompiler on Windows:
1. `tools/dev/check_decompiler_architecture.py` - Path separator normalization
2. `inertia/cli/runtime_support.py` - Conditional `resource` import
3. `inertia/cli/corpus_scan.py` - Conditional `resource` import
4. `inertia/cli/recompile_check.py` - Conditional `fcntl` import

**Note**: These fixes may need to be reverted or maintained separately if the inertia_decompiler is updated upstream.

# Gunship 2000 Decompilation Discovery Log

## Project Overview
- **Game**: Gunship 2000 (MicroProse, 1993)
- **Platform**: DOS (16-bit real mode)
- **Executable**: GS2000.COM (2,738 bytes)
- **Decompiler**: Inertia Decompiler (from ../../source/inertia_decompiler)

## Initial Analysis (2026-10-07)

### Game Files Structure
The game directory contains:
- **GS2000.COM** - Main executable (2,738 bytes), DOS COM format
- **GS2000.DAT** - Data file (423,292 bytes)
- **GS2000.CAT** - Catalog file (1,253,543 bytes)
- Various mission/terrain files (ANTC1, ANTC2, ANTC3, EURO6-9, GULF2-5, PHIL1-3)
- Asset files: .GS2, .GS3, .GS4 (graphics/sound), .PAL (palettes), .PIC (pictures)
- Data files: .DAT files for enemy, object, weapon, ship, target definitions
- Sound files: ASOUND, DSOUND, ISOUND, NSOUND, RSOUND, XSOUND
- Simulation files: .SIM (APOCOLYP, BACKALLE, BATTLEOF, FROZENGR, LINEINTH, RAINOFTE, SCUDINYO)

### Executable Analysis
**GS2000.COM** (2,738 bytes):
- DOS COM format (loads at CS:0100h)
- Entry point: `mov sp, 0x0804` (sets up stack)
- Small size suggests it may be a loader/stub that loads the main game from GS2000.DAT or GS2000.CAT

### Inertia Decompiler Status
- Installed in venv at `./venv`
- **Initial Issue**: Architecture guard fails due to circular imports between semantic layer and postprocess layer
- **Root Cause Found**: Windows path separator bug - `Path.relative_to()` returns backslashes on Windows but allowlist uses forward slashes
- **Fix Applied**: Added `.replace("\\", "/")` normalization in `check_decompiler_architecture.py:4883`
- **Additional Fixes**: Made Unix-only `resource` and `fcntl` imports conditional for Windows compatibility
- **Current Issue**: Decompiler crashes with ACCESS_VIOLATION (0xC0000005) during execution due to unicornlib.dll not loading on Windows
- **Recommendation**: This toolchain works better on Linux where all dependencies are available
- **Violations were**: Known "Temporary relocation debt" imports that are in the allowlist but the allowlist lookup was failing due to path separators

### Fixes Applied to inertia_decompiler
1. `tools/dev/check_decompiler_architecture.py` - Path separator normalization for Windows
2. `inertia/cli/runtime_support.py` - Conditional `resource` module import (Unix-only)
3. `inertia/cli/corpus_scan.py` - Conditional `resource` module import (Unix-only)
4. `inertia/cli/recompile_check.py` - Conditional `fcntl` module import (Unix-only)

### Next Steps
1. Investigate bypassing or fixing the architecture guard
2. Try running decompiler with environment variables to disable guard
3. If decompiler cannot run, consider alternative approaches (Ghidra, manual disassembly, etc.)
4. Document findings in registry

## 2026-10-08: Plan Revision

### Key Finding: GS2000.COM is a Stub
GS2000.COM is only 2,738 bytes - it's a DOS loader, NOT the real game executable. The real 16-bit MZ .EXE must be extracted from GS2000.DAT, GS2000.CAT, or CD-ROM before any decompilation begins.

Stub behavior:
- Sets up stack (`mov sp, 0x0804`)
- System checks via INT 21h (CPU 286+, DOS 5+, MSCDEX 2.1+, CD-ROM present)
- Copy protection checks
- Loads real game code from external source

### Plan Revised Per User's Workflow Tips
- **16-bit with stack calling → Ghidra to C** (primary decompilation path)
- **Unit tests with AI** for all code (original vs rebuilt validation)
- **mzretools** for binary comparison (target: ~100% binary match)
- **Ada script + masm2c** for assembly/register ABI sections (secondary path)

### Tooling Status
| Tool | Status | Notes |
|------|--------|-------|
| Ghidra | NEEDS INSTALL | Download from ghidra-re.org; Java 11 available |
| mzretools | NEEDS INSTALL | For binary comparison after rebuild |
| angr 9.3.3 | WORKING | Static analysis OK; unicorn DLL missing on Windows |
| inertia_decompiler | FIXED | 4 Windows bugs fixed; decompiler CLI works; runtime crashes on unicorn |
| ghidra-bridge | INSTALLED | Python-Ghidra RPC bridge |

### Immediate Actions
1. Install Ghidra from ghidra-re.org
2. Install mzretools
3. Fully disassemble GS2000.COM stub (2738 bytes - tiny enough for full analysis)
4. Search GS2000.DAT and GS2000.CAT for MZ headers to find real executable
5. Set up test harness for AI-generated unit tests

## Registry Entries
See `registry/` directory for detailed file analysis entries.
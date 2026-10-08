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

## 2026-10-08 (later): Phase 0 + Phase 1 COMPLETE

### Real Executables Found — the .GS2 files ARE the executables
- `GS2000.DAT`: 0 MZ headers → ruled out. `GS2000.CAT`: 28 `MZ` byte pairs, all invalid header fields → ruled out.
- **`GS.GS2`** (280,350) — valid MZ: 2017 relocs, header 8192B, cs:ip=17d1:82f, load module 0x1A788. Microsoft C + RTLink overlay exe. Strings: "GUNSHIP 2000: Mission Builder", debrief texts. Resident image ~116KB, ~163KB trailing = overlay sections (far-pointer tables `XX XX 79 1A` seen at image boundary).
- **`GS2.GS2`** (413,971) — valid MZ: 300 relocs, header 1536B, cs:ip=851:6f8. The flight game: aircraft DB, cockpit UI, sound controls. Resident ~40KB + overlays.
- **`SETUP.GS2`** (21,687) — valid MZ, image size == file size exactly. "GUNSHIP 2OOO + ISLANDS & ICE SETUP Version 469.085".
- All three: "MS Run-Time Library - Copyright (c) 1990, Microsoft Corp", RTLink/Plus overlay manager strings.

### GS2000.COM fully disassembled (launcher, org 100h)
- DOS ≥5 + 286 + video checks; MSCDEX via INT 2Fh (1500/150C/150D/150F), CD drive scan (max 26)
- INT 21h hook installed at CS:01E6 (getvector/setvector 2521/3521): intercepts open(3D)/create(3C,5B)/rename(56)/findfirst(4E)/getdrive(19); open handler builds `X:pathname` (X = current/CD drive from CS:05F0) in buffer CS:02BE then `ljmp [0x602]` to original handler
- Subprogram table at CS:040E (file 0x30E), 6-byte entries: name_ptr, dir_ptr, cmdtail_ptr (length-prefixed, 0Dh-terminated):
  setup.gs2 `-t`; labs.gs2 ` nsound.log logo -es`; player.gs2 ` nsound.gs3 gst`; gs.gs2 ×4 args (` -g -m`, ` -g -c -m`, ` -g -l -m`, ` -g -e`); gs2.gs2 ` /r`; ads.gs2
- Dispatcher CS:034A: chdir + DOS EXEC 4B00, restores SS:SP, gets child exit code (AH=4D)
- Decision tree CS:000A..00A4 chains subprograms by exit codes 1/2
- Note: real address = file offset + 0x100 (COM org); capstone disasm script `tools/disasm16.py`

### mzretools BUILT (C:\tools\mzretools\build\Release) — 42/42 tests pass
- CMake 4.4.4 (winget) + VS 2022 Community MSVC; submodules (googletest, kvikdos) cloned
- Pacman path abandoned (dependency conflicts would have broken MSYS2)
- Windows port patches: CMakeLists (MSVC flags, /STACK:64MB — 1MB default overflows on 1MB `Memory` member, version.cpp at configure time, `$<TARGET_FILE:runtest>`), unistd shims (output.cpp/util.cpp/types.h), memory.h iterator fix
- **Upstream bug fixed**: `src/analysis.cpp:1237` far-jump decoded as linear address → seg:off (matches far-call path at :1286). Was crashing mzmap on every Gunship binary ("Linear address too big: 0x10bf0018")
- Gotcha: exe spec parser rejects `C:\...` (colon = entrypoint separator) → run from workdir with relative paths

### mzmap results (analysis/*.map)
- SETUP.exe: 103 routines / 8 segments, full scan
- GS.exe: 54 routines / 3 segments (resident only — overlay far jumps stop the scan)
- GS2.exe: 25 routines / 2 segments (same)

## Registry Entries
See `registry/` directory for detailed file analysis entries.
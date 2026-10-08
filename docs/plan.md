# Gunship 2000 Reverse Engineering & Rebuild Plan

**Date**: 2026-10-08
**Status**: Planning
**Target**: Gunship 2000 (MicroProse, 1993) - 16-bit DOS game

---

## Phase 0: Find the Real Executable

**Problem**: `game/GS2000.COM` is only 2,738 bytes - it's a stub/loader, not the real game code.

**What we know about the stub** (from disassembly of first bytes):
- Sets up stack: `mov sp, 0x0804`
- Makes INT 21h DOS calls (system checks)
- Error messages found in binary:
  - "ERROR: 286/386/486 required"
  - "Gunship: 2000 cannot be run on your system"
  - "Dos version 5 or later is required"
  - "MSCDEX not loaded"
  - "Failed copy protection"
  - "Unable to locate CD-ROM with Gunship 2000 on it"
- References `G:\gs\pack2.cd` (likely CD-ROM path)
- References `setup.gs2`, `labs.gs2`, `player.gs2`, `ads.gs2`, `gs.gs2`, `gs2.gs2`

**Possible scenarios for real code**:
1. The stub loads and decrypts the real executable from GS2000.DAT
2. The stub loads and decrypts the real executable from GS2000.CAT
3. The real .EXE is elsewhere in the distribution (maybe a CD-ROM install)
4. The stub is self-extracting - it unpacks code from its own data section

**Actions**:
- [ ] Disassemble full GS2000.COM (2738 bytes is tiny - can be fully analyzed)
- [ ] Determine what file/offset the stub loads code from
- [ ] Check GS2000.DAT for embedded MZ/EXE headers (search for "MZ" magic at known offsets)
- [ ] Check GS2000.CAT for embedded executables
- [ ] If found, extract the real .EXE and proceed

---

## Phase 1: Tool Setup

### Tools Available (Confirmed Working)
| Tool | Purpose | Status |
|------|---------|--------|
| Python 3.14 + venv | Analysis scripts | Working |
| angr 9.3.3 | Static analysis, CFG recovery | Working (static only - unicorn DLL missing) |
| pyvex 9.3.3 | VEX IR lifter | Working |
| z3-solver 4.13 | SSA comparison, symbolic execution | Working |
| capstone 5.0.9 | Disassembly | Working |
| Ghidra (download) | Decompilation to C | Need to download (Java 11 OK) |
| ghidra-bridge | Python-Ghidra RPC | Installed |
| Git | Version control | Working |
| mzretools (download) | Binary comparison | Need to download |

### Tools to Install
| Tool | Install Method | Priority |
|------|---------------|----------|
| Ghidra | Download from ghidra-re.org, requires Java 11 | HIGH |
| mzretools | Build from source or find prebuilt | HIGH |
| DOSBox-X or DOSBox | For runtime testing | MEDIUM |
| unicorn (Python) | `pip install unicorn` - may fix Windows DLL issue | MEDIUM |

### Environment Fixes Applied
1. **check_decompiler_architecture.py**: Path separator normalization (Windows fix)
2. **runtime_support.py**: Conditional `resource` import (Unix-only)
3. **corpus_scan.py**: Conditional `resource` import (Unix-only)
4. **recompile_check.py**: Conditional `fcntl` import (Unix-only)

---

## Phase 2: Static Analysis (Pre-Decompilation)

### 2a. Full Disassembly of GS2000.COM Stub
- Use angr to lift and analyze the full 2738-byte COM file
- Map all INT 21h calls and determine what system checks are performed
- Trace file access patterns to find where real code is loaded from
- Identify the copy protection mechanism
- Document all code paths in the stub

### 2b. Extract Real Executable
- Search GS2000.DAT for MZ/PE headers: `MZ` at arbitrary offsets
- Search GS2000.CAT for MZ headers
- If found, extract and validate as proper DOS .EXE
- If not found, analyze stub more deeply to determine loading mechanism

### 2c. Ghidra Analysis of Real Executable
1. Load in Ghidra as 16-bit DOS MZ EXE
2. Auto-analysis with default settings (8086 processor)
3. Review auto-detected functions, strings, and cross-references
4. Identify key areas:
   - Entry point and initialization
   - Main game loop
   - Graphics rendering routines
   - Sound/music routines
   - Input handling
   - Memory management
   - CD-ROM access
5. Export Ghidra C output

### 2d. angr Analysis
1. Load real executable in angr (x86-16 mode)
2. CFG recovery - identify all functions
3. Identify library vs custom code
4. Cross-reference with Ghidra findings
5. Generate function boundaries for mzretools comparison later

---

## Phase 3: Decompilation to C

### Primary Path: Ghidra → C
Per user's tip for 16-bit code with stack calling:
1. Use Ghidra's decompiler to generate C from the real executable
2. Review and clean up Ghidra output:
   - Rename functions based on strings/cross-references
   - Fix type definitions (especially segment:offset pointers)
   - Identify and document calling conventions
   - Handle assembly blocks that Ghidra can't structure

### Secondary Path: Inertia Decompiler
1. Once real executable is found, run inertia_decompiler:
   ```bash
   python -m inertia.cli.cli REAL.EXE --c-target msc-dos --timeout 120
   INERTIA_ENABLE_TAIL_VALIDATION=1 python -m inertia.cli.cli REAL.EXE
   ```
2. Compare inertia output with Ghidra output
3. Use whichever produces better C for each function

### Tertiary Path: Ada Script (if needed)
For assembly-heavy sections or register ABI code:
1. Use IDA Ada script for annotated assembly
2. Translate to fake C with masm2c
3. Review and rewrite in proper C

---

## Phase 4: Unit Testing with AI

Per user's workflow - this is the critical validation step:

### For each decompiled function:
1. **Identify inputs/outputs**: Determine calling convention, parameters, return values
2. **Generate test vectors**: Use AI to create comprehensive test cases covering:
   - Normal inputs
   - Edge cases (zero, max, min, null, overflow)
   - All branch conditions
   - Known good outputs from original binary runtime
3. **Write unit tests**: Create Python/C test harness for each function
4. **Run on original**: Execute test against original binary (via dosunit/DOSBox)
5. **Run on rebuilt**: Execute test against rebuilt C code
6. **Compare results**: All outputs must match

### Validation Hierarchy:
1. **Function-level**: Each individual function passes all tests
2. **Module-level**: All functions in a module pass together
3. **Binary-level**: Full rebuild produces byte-identical output (via mzretools)

---

## Phase 5: Build and Compare

### mzretools Binary Comparison
1. Build the rebuilt C code using original compiler/toolchain (MS C 5.1 era)
2. Use mzretools to compare original vs rebuilt:
   ```bash
   mzdiff ORIGINAL.EXE REBUILT.EXE --map original.map --tmap rebuilt.map
   ```
3. Target: ~100% binary match per user's experience

### Iteration Loop:
1. Build → Compare → Identify mismatches → Fix C code → Rebuild → Compare
2. Use Z3 SSA comparison for proving semantic equivalence of individual functions
3. Use dosunit for concrete execution testing of specific functions

---

## Phase 6: Full Game Testing

Once binary-level match is achieved:
1. Run game scenarios in DOSBox with original vs rebuilt
2. Compare: graphics, sound, gameplay, save/load, all missions
3. Test all 5+ mission campaigns (ANTC, EURO, GULF, PHIL series)
4. Validate CD-ROM access, copy protection bypass
5. Final acceptance testing

---

## Project Structure (Target)

```
gunship_2000/
├── venv/                  # Python environment
├── game/                  # Game files (original)
├── analysis/              # Analysis artifacts
│   ├── stub/             # GS2000.COM stub analysis
│   ├── ghidra/           # Ghidra projects and C output
│   ├── angr/             # angr analysis results
│   ├── inertia/          # Inertia decompiler output
│   └── symbols/          # Function symbol mappings
├── rebuild/              # Rebuilt project
│   ├── src/              # C source code
│   ├── Makefile          # Build recipe
│   └── build/            # Build artifacts
├── tests/                # Unit tests
│   ├── generated/        # AI-generated test cases
│   └── harness/          # Test infrastructure
├── docs/                 # Documentation
│   ├── state.md          # Current status
│   ├── plan.md           # This plan
│   └── findings/         # Detailed findings
├── logs/                  # Discovery log
├── registry/              # File registry
└── tools/                 # Custom analysis scripts
```

---

## Immediate Next Steps (Priority Order)

1. **Install Ghidra** - Download from ghidra-re.org, run with Java 11
2. **Fully disassemble GS2000.COM stub** - Understand what it does, find real executable
3. **Search GS2000.DAT and GS2000.CAT for embedded MZ headers** - Extract real .EXE
4. **Install mzretools** - For binary comparison after rebuild
5. **Set up test harness** - Python framework for comparing original vs rebuilt function outputs

---

## Risk Assessment

| Risk | Likelihood | Impact | Mitigation |
|------|-----------|--------|------------|
| Real executable not in provided files | Medium | High | Analyze stub deeply; may need original CD image |
| Copy protection blocks analysis | Medium | Medium | Stub has copy protection checks; may need bypass |
| 16-bit MZ format unsupported by tools | Low | High | angr, Ghidra, mzretools all support MZ/8086 |
| C rebuild doesn't match binary | Medium | Medium | mzretools + Z3 + AI-guided iteration |
| DOS runtime environment hard to set up | Medium | Medium | DOSBox-X recommended |
| Giant codebase (too many functions) | Medium | Medium | Focus on critical paths first; use AI for bulk work |

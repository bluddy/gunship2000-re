# Gunship 2000 Reverse Engineering - State Summary

**Phase**: Planning & Initial Reconnaissance
**Date**: 2026-10-08
**Platform**: Windows (current), Linux (user picks up)
**Goal**: Fully reverse engineer and rebuild Gunship 2000 from original binaries

---

## Key Discovery: GS2000.COM is a Stub

`game/GS2000.COM` (2,738 bytes) is **NOT the real game executable**. It's a DOS loader that:
- Sets up stack: `mov sp, 0x0804`
- Makes INT 21h DOS calls (system checks)
- Verifies: 286+ CPU, DOS 5+, MSCDEX 2.1+, CD-ROM present
- Handles copy protection
- Loads real game code from GS2000.DAT, GS2000.CAT, or CD-ROM

**The real executable must be found/extracted before any decompilation begins.**

Strings found in stub:
- "ERROR: 286/386/486 required"
- "Gunship: 2000 cannot be run on your system"
- "Dos version 5 or later is required"
- "MSCDEX not loaded", "MSCDEX version 2.1 or later is required"
- "Unable to locate CD-ROM with Gunship 2000 on it"
- "Failed copy protection"
- "Internal error", "Not enough near space", "Not enough system memory", "Incompatible version"
- File references: `G:\gs\pack2.cd`, `setup.gs2`, `labs.gs2`, `player.gs2`, `ads.gs2`, `gs.gs2`, `gs2.gs2`

---

## Reverse Engineering Plan

### Phase 0: Find the Real Executable
- Disassemble GS2000.COM stub (2738 bytes - tiny enough for full analysis)
- Trace what file/offset the stub loads code from
- Search GS2000.DAT/GS2000.CAT for embedded MZ headers (`MZ` magic bytes)
- Extract real 16-bit MZ .EXE

### Phase 1: Tool Setup
| Tool | Purpose | Status |
|------|---------|--------|
| Ghidra | Primary decompiler (Ghidra → C for 16-bit stack calling) | Need to download (Java 11 OK) |
| mzretools | Binary comparison (~100% match target) | Need to download |
| DOSBox-X | Runtime testing | Need to install |
| angr 9.3.3 | Static analysis, CFG recovery | Working (static only - unicorn DLL missing on Windows) |
| pyvex 9.3.3 | VEX IR lifter | Working |
| z3-solver 4.13 | SSA comparison, semantic equivalence proofs | Working |
| capstone 5.0.9 | Disassembly | Working |
| ghidra-bridge | Python-Ghidra RPC | Installed |
| inertia_decompiler | Secondary decompiler | Fixed 3 Windows bugs |

### Phase 2: Static Analysis
- **Ghidra**: Load real .EXE as 16-bit DOS MZ, auto-analysis, review functions/strings/xrefs
- **angr**: CFG recovery, function boundary identification, library vs custom code separation
- Cross-reference findings between both tools

### Phase 3: Decompilation to C
Per user's tip for 16-bit with stack calling: **Ghidra → C (primary path)**
1. Ghidra decompiler output → initial C
2. Clean up: rename functions, fix types, document calling conventions
3. Inertia decompiler as secondary (MSC-DOS target style)
4. Ada script + masm2c for assembly-heavy sections (if needed)

### Phase 4: Unit Testing with AI
For each decompiled function:
1. Identify inputs/outputs and calling convention
2. Generate comprehensive test vectors with AI (normal, edge, branch coverage)
3. Run tests against original binary (via dosunit/DOSBox)
4. Run tests against rebuilt C code
5. All outputs must match

### Phase 5: Build & Compare
1. Build rebuilt C with original toolchain (MS C 5.1 era)
2. mzretools binary comparison: `mzdiff ORIGINAL.EXE REBUILT.EXE`
3. Z3 SSA comparison for proving semantic equivalence
4. Iterate: build → compare → fix → rebuild → compare

### Phase 6: Full Game Testing
- DOSBox scenario comparison (all mission campaigns: ANTC, EURO, GULF, PHIL)
- Validate graphics, sound, gameplay, save/load, CD-ROM access

---

## Immediate Next Steps

1. **Install Ghidra** - Download from ghidra-re.org (requires Java 11, available)
2. **Install mzretools** - For binary comparison after rebuild
3. **Fully disassemble GS2000.COM stub** - Understand loading mechanism, find real executable
4. **Search GS2000.DAT/GS2000.CAT for MZ headers** - Extract real .EXE
5. **Set up test harness** - Python framework for comparing original vs rebuilt function outputs

---

## Issues Found & Fixed (inertia_decompiler)

1. **`tools/dev/check_decompiler_architecture.py:4883`** - Windows path separator bug (allowlist used forward slashes, `Path.relative_to` returns backslashes on Windows)
2. **`inertia/cli/runtime_support.py`** - Unix-only `resource` module made conditional
3. **`inertia/cli/corpus_scan.py`** - Unix-only `resource` module made conditional
4. **`inertia/cli/recompile_check.py`** - Unix-only `fcntl` module made conditional
5. **Unresolved**: `unicornlib.dll` cannot load on Windows (required for dynamic VEX lifting); static analysis unaffected

---

## Project Structure

```
gunship_2000/
├── venv/                  # Python environment (angr 9.3.3, pyvex, z3, capstone)
├── game/                  # Original game files
│   ├── GS2000.COM         # Loader stub (2,738 bytes) - NOT the real exe
│   ├── GS2000.DAT         # Game data (423KB) - may contain real exe
│   ├── GS2000.CAT         # Catalog (1.2MB) - may contain real exe
│   └── ...                # Mission/asset files
├── docs/
│   └── plan.md            # Full reverse engineering plan
├── logs/
│   └── discovery_log.md   # Ongoing discovery log
├── registry/
│   └── file_registry.md   # File catalog and decompilation status
├── state.md               # This file
└── .gitignore
```

---

## Registry Entries

| Category | File | Status | Notes |
|----------|------|--------|-------|
| Stub | GS2000.COM | ANALYZING | 2738-byte DOS loader; real exe not found yet |
| Data | GS2000.DAT | PENDING | 423KB; may contain real .EXE; search for MZ headers |
| Data | GS2000.CAT | PENDING | 1.2MB; likely archive; search for MZ headers |
| Tool | Ghidra | NEEDS INSTALL | Download from ghidra-re.org; Java 11 available |
| Tool | mzretools | NEEDS INSTALL | For binary comparison after rebuild |
| Tool | angr 9.3.3 | WORKING | Static analysis OK; unicorn DLL missing on Windows |
| Tool | inertia_decompiler | FIXED | 4 Windows bugs fixed; unicorn issue remains |
| Tool | ghidra-bridge | INSTALLED | Python-Ghidra RPC bridge |

---

## Git History

Initial commit `c6aaf8d` - all game files, logs, registry, plan, state.md committed.

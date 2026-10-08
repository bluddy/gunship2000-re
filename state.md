# Gunship 2000 Reverse Engineering - State Summary

**Phase**: Phase 0 COMPLETE (real executables found) / Phase 1 COMPLETE (tools built)
**Date**: 2026-10-08
**Platform**: Windows
**Goal**: Fully reverse engineer and rebuild Gunship 2000 from original binaries

---

## Key Discovery: Real Executables Found

**The real 16-bit MZ executables are the `.GS2` files themselves** — no extraction needed:

| File | Size | Image | Role |
|------|------|-------|------|
| `game/GS.GS2` | 280,350 | 116,736 (resident) + ~163KB overlays | Mission Builder + campaign/debrief shell |
| `game/GS2.GS2` | 413,971 | 40,448 (resident) + overlays | Flight game (aircraft DB, cockpit UI, sounds) |
| `game/SETUP.GS2` | 21,687 | 21,687 (exact) | Setup program ("GUNSHIP 2OOO + ISLANDS & ICE SETUP Version 469.085") |

**Compiler/runtime**: Microsoft C (1990 MS Run-Time Library) + RTLink/Plus overlay manager
("Overlay Manager Internal Reload Stack Overflow", "Internal error in .RTLink(R)/Plus run-time code").

## GS2000.COM = Launcher (fully disassembled)

2,738-byte COM loader, org 100h (real addresses = file offsets + 0x100):
- Checks: DOS ≥ 5 (INT 21h AH=30), 286+ CPU, video mode (INT 10h AH=0F)
- MSCDEX detection via INT 2Fh AX=1500/150C/150D/150F; scans CD drives (max 26) for the game disc
- Hooks INT 21h (vector 21h → CS:01E6): intercepts **open (3Dh)**, create (3Ch/5Bh), rename (56h), findfirst (4Eh), getdrive (19h); open handler prefixes relative paths with the CD drive letter (`X:pathname`) then chains to original handler
- `chdir` to `G:\gs` root string, then **DOS EXEC (AX=4B00)** of subprograms from a 6-byte entry table at CS:040E (= file 0x30E): `[name_ptr][dir_ptr][cmdtail_ptr]`
- Subprogram table: `setup.gs2 -t`, `labs.gs2 " nsound.log logo -es"`, `player.gs2 " nsound.gs3 gst"`, `gs.gs2` with 4 arg variants (` -g -m`, ` -g -c -m`, ` -g -l -m`, ` -g -e`), `gs2.gs2 /r`, `ads.gs2`
- Decision tree at CS:000A chains programs by child exit codes (AL from INT 21h AH=4D)
- Error strings: "Unable to load subprogram", "Can't find directory", "Failed copy protection", "File missing.", "Not enough near space.", "Not enough system memory.", "Incompatible version.", "Internal error."

**Not** loaded from DAT/CAT: `GS2000.DAT` (423KB) has no MZ headers; `GS2000.CAT` MZ hits are all garbage (invalid header fields).

---

## Reverse Engineering Plan Progress

### Phase 0: Find the Real Executable — **DONE**
- GS2000.COM fully disassembled (launcher, EXEC-based)
- GS.GS2 / GS2.GS2 / SETUP.GS2 validated as MZ executables (mzhdr parses coherent headers, reloc counts fit header sizes)
- SETUP.GS2 image size == file size exactly (classic exe); GS.GS2/GS2.GS2 have overlay data past the resident image

### Phase 1: Tool Setup — **DONE**
| Tool | Purpose | Status |
|------|---------|--------|
| mzretools v1.0.20 | Binary comparison, routine mapping | **BUILT** at `C:\tools\mzretools\build\Release\` (MSVC 2022, 42/42 tests pass) |
| Ghidra | Primary decompiler (Ghidra → C) | Installed per user (Java 11 OK) |
| DOSBox staging 0.83 | Runtime testing | Already at `C:\tools\dosbox-staging-v0.83.0` |
| CMake 4.4.4 | Build system | Installed (winget, `C:\Program Files\CMake`) |
| angr 9.3.3 | Static analysis, CFG recovery | Working (static only - unicorn DLL missing on Windows) |
| pyvex 9.3.3 | VEX IR lifter | Working |
| z3-solver 4.13 | Semantic equivalence proofs | Working |
| capstone 5.0.7 | Disassembly | Working (tools/disasm16.py added) |
| ghidra-bridge | Python-Ghidra RPC | Installed |

**mzretools Windows port (patches applied in C:\tools\mzretools):**
1. `CMakeLists.txt` — MSVC flags branch (`/Zi /Od /W3 /permissive- /D_CRT_SECURE_NO_WARNINGS`), `/STACK:67108864` (1MB stack default overflows on `Memory mem` 1MB member), version.cpp generated at configure time (replaces version_gen.sh), test runner uses `$<TARGET_FILE:runtest>`
2. `src/output.cpp`, `src/util.cpp`, `include/dos/types.h` — `unistd.h` → Windows shims (`_isatty`, `_unlink`, `ssize_t`)
3. `include/dos/memory.h` — `data_.cbegin()+addr` → `data_.data()+addr` (MSVC C++20 checked iterators)
4. **BUG FIX (upstream-worthy)**: `src/analysis.cpp:1237` — far-jump immediate was decoded as linear address (`Address{immval.u32}`) instead of packed seg:off; now uses `Address(DWORD_SEGMENT(v), DWORD_OFFSET(v))` like the far-call path. This crashed mzmap on every Gunship binary with "Linear address too big".

**mzretools usage notes**: exe spec parser can't handle `C:\` (colon conflict) — use relative paths / workdir. `mzmap <exe> <map>` generates routine maps; `--linkmap` can seed from Microsoft C linker maps (we don't have .map files from the game).

### Analysis results (mzmap):
- `analysis/SETUP.exe` → **103 routines over 8 segments** (SETUP.map)
- `analysis/GS.exe` → 54 routines over 3 segments (resident part only; overlay jumps stop the scan early)
- `analysis/GS2.exe` → 25 routines over 2 segments (same limitation)

### Phase 2: Static Analysis — NEXT
- **Ghidra**: Load GS.GS2/GS2.GS2 as 16-bit DOS MZ, auto-analysis
- Seed mzretools scans better: extract far-pointer tables past resident images (overlay directories) as entry points; consider `--linkmap` if MS linker maps can be reconstructed
- angr: CFG recovery cross-check

### Phase 3-6: unchanged (Ghidra → C, AI unit tests, mzdiff comparison, DOSBox testing)

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

# Gunship 2000 Reverse Engineering - State Summary

**Phase**: Phase 0 COMPLETE / Phase 1 COMPLETE / Phase 2 IN PROGRESS (static analysis + binary structure decoded)
**Date**: 2026-10-08
**Platform**: Windows
**Goal**: Fully reverse engineer and rebuild Gunship 2000 from original binaries

---

## Key Discovery: Real Executables Found

**The real 16-bit MZ executables are the `.GS2` files themselves** — no extraction needed:

| File | Size | Image | Role |
|------|------|-------|------|
| `game/GS.GS2` | 280,350 | 108,424 (image file 8,192–116,616) + 5 overlays | Mission Builder + campaign/debrief shell |
| `game/GS2.GS2` | 413,971 | 38,735 (image file 1,536–40,271) + 9 overlays | Flight game (aircraft DB, cockpit UI, sounds) |
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

## GS.GS2 Binary Structure — DECODED (2026-10-08, all byte-verified)

Full detail in `registry/file_registry.md` § "Overlay System". Headlines:

- **MZ header**: header 512 paras (8,192 B); image = file 8,192–116,616 (108,424 B ≈ link `[0,0x1A79)`); 2,017 relocations @off 30 in **(offset, segment)** order (linear = seg×16+off — verified: reloc[0] target = `00BF`, operand of image-start `call 00bf:02c0`); min alloc 8074 paras; SS:SP 3962:0800; IP 0x082F @bytes[20..21], CS 0x17D1 @bytes[22..23]; entry = `17D1:082F` (file 107,839).
- **Relocations cover code far-call segwords + the CRT `mov di,0x2b38` immediate → runtime = link + L everywhere** (L = PSP+0x10); no absolute segments. Earlier "absolute" conclusion was a word-order-swap artifact.
- **Startup chain** (raw disasm): entry saves PSP ES/DS @cs:0xb98/9a → `17D1:0878` (RTLink bootstrap) → stack switch via `[17D1:0D23]` → `17D1:08E9` (overlay dir walk, loads rec4) → `ljmp 00BF:0018` CRT → `049a`(envp)/`0308`(argv from PSP:81h)/`0110` → `lcall 0DEA:0006` = **main(argc@0x6887, argv@0x6889, envp@0x688B)** → flag parser `1dea_0d28` (/B/C/E/G/L/M/P/R/T/Z → flags 0x8616/860f/861e/8611/861d/8618/e287/8619/8617 — matches launcher's `-g -m`/`-g -c -m`/`-g -l -m`/`-g -e`) → `1dea_0046` (game init).
- **RTLink overlay directory** in-image @ `17D1:0D2D` (file 109,117): count = **5**, 5 × 18-byte records. Fields: load base (link paras), filename ptr (all → **"GS.EXE"** @ file 109,256), file para of fixup table (w2×16 = file offset), flags (w3 high byte; rec4 = 0x01 = startup-loaded), allocated span, fixup count (dwords), 0xFFFF, id 2..6, actual data size. Groups: `[116624,134032,197088,221504,238704,280350)`.
- **DGROUP init mystery SOLVED**: DGROUP link = 0x2B38 but the MZ image ends at 0x1A79 → init data ships as **overlay rec4** (loaded at startup, base 0x2896): file `[239824,280350)` = gap `[0x2896,0x2B38)` + **DGROUP `[0x0000,0x742E)` at file 250608 → ends exactly at EOF (280,350)**. rec4 end link 0x327B = DGROUP:0x742E = start of CRT BSS-zero range `[0x742E,0xE2A0)` — byte-exact. rec4's 279 fixups (file 238704) add +L to far ptrs (seg = 0x2896).
- **String pack inside rec4** (DGROUP offsets, byte-verified): `0x0008` MS CRT banner | `0x07FB` **"GS2000.CAT"** (105-chain) | `0x0806` **"GS2000.DAT"** (85-entry catalog — the filename passed to `FUN_1f61_060e`, single call site file 65,521) | `0x0811` **"MISC.GS2"** (EXEC AX=4B03 via `FUN_2658_034c`) | `0x6848` **"_C_FILE_INFO="** (13-byte CRT env key) | mission strings (OBJECT.DAT, TARGET.DAT, DROP OFF/COLLECT/DESTROY/RECON, SCORE.DAT).
- Two directory systems: **RTLink overlay dir** (above) vs **catalog reader** `FUN_1f61_060e` (`u16 count` + count×24, len/off u32 @+0x10/+0x14 = the GS2000.CAT/DAT/MBUILDER.CAT chain format, verified 105/85/16).
- **Overlays mapped**: 51 call-through thunks (`call 17D1:05F8` + `ljmp` + `dw rec_id`) at file 109,384–109,884 → `analysis/overlay_thunks.tsv`; rec0 = campaign/mission-select+replay (8 entries), rec1 = mission editor (16, largest), rec2 = briefing (11), rec3 = debrief/awards (15) — classified via DGROUP string refs; shared transient arena = `[L+0x1A79, L+0x2896)`.
- **GS2.GS2 DECODED — same RTLink scheme, 9 overlays (ids 2..10)**: dir count=9 @file 38,523 (`cs:[0xb6b]`, header words [9][0][96]), records @38,529; file layout chains exactly image-end→EOF (`[fixups][data]` per record); arenas tightly packed: image `[0,0x975)` | {2,3,6,7} @0x975 (64KB, transient swap) | {4,5} @0x1975 | {8,9} @0x1D47 | id10 @0x272D = startup data (string pool + BSS + stack; MZ SS 0x45FE inside) — min-alloc sized to arena end (18079 ≥ 0x467E); startup loads = **id2 (flag 0x05) + id10 (flag 0x01)**; 10 thunks @38,917–39,016 (`call 0851:0529` + `ljmp w0:off` + `dw idx`, trailer=record index 0..7 verified vs w0); startup chain mirrors GS.GS2 (entry → bootstrap file 37,452 → dir-walk file 37,549 → `ljmp 02A2:0016` CRT). SETUP.GS2 = classic (no RTLink). Detail: `registry/file_registry.md` § Overlay System.

---

## Reverse Engineering Plan Progress

### Phase 0: Find the Real Executable — **DONE**
- GS2000.COM fully disassembled (launcher, EXEC-based)
- GS.GS2 / GS2.GS2 / SETUP.GS2 validated as MZ executables (mzhdr parses coherent headers, reloc counts fit header sizes)
- SETUP.GS2 image size == file size exactly (classic exe); GS.GS2/GS2.GS2 have overlay data past the resident image

### Phase 1: Tool Setup — **DONE** (upgraded to F-19 methodology)
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
| **MSC 6.0 (Gunship compiler)** | Original compiler for byte-exact verification | **DISK IMAGES FOUND** at `tools/Microsoft C Professional Development System 6.00ax` + `6.0a` (floppy IMGs) |
| **kvikdos** | DOS emulator to run MSC 6.0 | **COPIED** from f19re at `tools/f19re/mzretools/tools/emulators/kvikdos` |
| **mzretools (f19re fork)** | lst2asm, lst2ch, mzdiff, mzmap, mzdup, portcheck, z3check | **COPIED** from f19re at `tools/f19re/mzretools` |
| **F-19 tools** | portcheck.py, lst2asm.py, lst2ch.py, z3check.py, dosbuild, mzdiff | **COPIED** at `tools/f19re/` |
| **F-19 configs** | conf/egame.json, routine_names.txt, toolchain.conf, map/*.map, sig/*.sig | **COPIED** at `tools/f19re/conf`, `map`, `sig` |
| **F-19 signatures** | mzdup signatures for cross-project routine matching | **COPIED** at `tools/f19re/sig` |
| **F-19 maps** | Routine maps for f15se2/f19 cross-project matching | **COPIED** at `tools/f19re/map` |
| **F-19 conf** | lst2asm config, routine_names, toolchain | **COPIED** at `tools/f19re/conf` |

### Analysis results (mzmap):
- `analysis/SETUP.exe` → **103 routines over 8 segments** (SETUP.map)
- `analysis/GS.exe` → 54 routines over 3 segments (resident part only; overlay jumps stop the scan early)
- `analysis/GS2.exe` → 25 routines over 2 segments (same limitation)

### Analysis results (mzretools):
- `analysis/SETUP.exe` → **103 routines over 8 segments** (SETUP.map)
- `analysis/GS.exe` → 54 routines over 3 segments (resident part only; overlay jumps stop the scan early)
- `analysis/GS2.exe` → 25 routines over 2 segments (same limitation)

### Phase 2: Static Analysis — **IN PROGRESS (pipeline working)**
- **Ghidra 12.0 DEV** at `C:\tools\ghidra\ghidra_12.0_DEV` (Java 21: `C:\Program Files\OpenJDK\jdk-21.0.1`), project at `ghidra_proj/Gunship` (gitignored)
- Ghidra 12 dropped Jython — Python scripts need PyGhidra (venv is 3.14, unsupported) → dump script written in **Java** (`scripts/DumpProgram.java`)
- Imported + analyzed: SETUP.exe (126 fns), GS.exe (765 fns), GS2.exe (165 fns), **12 overlays (334 fns)**; calling convention `__cdecl16far` (confirms stack-calling), Ghidra blocks match mzretools segments
- **YAML registry pipeline** (per user recommendation) — source of truth for names/structs/variables:
  - `scripts/build_registry.py <dump.txt> --source <orig> --id <ID>` → `registry/<ID>.yaml` + `decompiled/<ID>/<seg_off>.c`
  - Re-runs MERGE: human edits (name/status/notes/structs/variables) preserved, auto fields refreshed
  - Existing: `registry/SETUP_GS2.yaml`, `registry/GS_GS2.yaml`, `registry/GS2_GS2.yaml`, **12 overlay YAMLs** + 1,400+ decompiled C files (tracked)
- Re-run pipeline:
  ```powershell
  $env:JAVA_HOME='C:\Program Files\OpenJDK\jdk-21.0.1'
  analyzeHeadless ghidra_proj Gunship -import analysis\GS.exe -scriptPath scripts -postScript DumpProgram.java <dump.txt>
  venv\Scripts\python scripts\build_registry.py <dump.txt> --source GS.GS2 --id GS_GS2
  ```
- mzretools coverage: SETUP=103 routines full scan; GS/GS2 resident only (overlay jumps stop scan) — improve later by seeding overlay far-pointer tables as entry points
- angr: CFG recovery cross-check (pending)

### Phase 3: F-19 Style Reconstruction Pipeline — **PLANNED**
**Goal**: Byte-exact reconstruction using F-19's dual-track methodology:
1. **Skeleton** — Full asm disassembly → `uasm` + original `LINK.EXE` → byte-identical EXE (`make verify`)
2. **C Ports** — Per-routine C rewrite → compile with **original MSC 6.0** under **DOSBox** → `portcheck.py` + `mzdiff` = MATCH

**Key tools adopted from F-19**:
- `tools/f19re/mzretools` — mzdiff, mzmap, mzdup, lst2asm, lst2ch, portcheck, z3check
- `tools/f19re/mzretools/tools/emulators/kvikdos` — runs MSC 6.0 under Linux/Windows (or DOSBox alternative)
- `tools/f19re/conf/egame.json` → adapt for GS.GS2/GS2.GS2 (segment layout, BSS, encoding fixes)
- `tools/f19re/conf/routine_names.txt` → rename registry format
- `tools/f19re/conf/toolchain.conf` — DOSBox/kvikdos config
- `tools/f19re/map/*.map` — routine extent maps for mzdiff
- `tools/f19re/sig/*.sig` — mzdup signatures for cross-project matching (GS.GS2 ↔ GS2.GS2)
- `tools/f19re/tools/portcheck.py` — per-routine MSC compile + mzdiff verification
- `tools/f19re/tools/z3check.py` — Z3 semantic equivalence for non-byte-exact routines

**Immediate next steps**:
1. Mount MSC 6.0 floppy images, extract compiler to `dos/msc60/` ✅ **DONE**
2. Build kvikdos emulator from f19re (skip - using DOSBox instead) ✅ **DONE**
3. Adapt f19re `conf/egame.json` → `conf/gs_gs2.json` + `conf/gs2_gs2.json` ✅ **DONE**
4. Generate routine maps with mzmap for GS.GS2 and GS2.GS2 ✅ **DONE**
5. Build mzdup signatures and cross-match GS.GS2 ↔ GS2.GS2 routines ✅ **DONE** (11 matches found)
6. Port first routine: GS_OVL1 mission editor entry points (16 known thunk targets) 🔄 **IN PROGRESS**
7. Set up portcheck.py for per-routine MSC 6.0 compilation + mzdiff verification 🔄 **IN PROGRESS**
7. DOSBox runtime verification of decoded structures ⏳ **PENDING**

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
| Binary | GS.GS2 | **STRUCTURE DECODED** | MZ + RTLink dir + DGROUP init (rec4) + string pack; 765 fns in registry |
| Binary | GS2.GS2 | **STRUCTURE DECODED** | MZ + RTLink dir (count=9, ids 2-10) + 10 thunks + startup chain; 165 fns in registry |
| Binary | SETUP.GS2 | PARSED | classic MZ (image == file), 126 fns, 261 relocs, cs:ip=11d:1e |
| Data | GS2000.DAT | PARSED | 85-entry chain catalog (count + count×24, len/off u32) — read by `FUN_1f61_060e` via DGROUP:0x806 |
| Data | GS2000.CAT | PARSED | 105-entry chain catalog (DGROUP:0x07FB) |
| Data | MBUILDER.CAT | PARSED | 16-entry chain catalog |
| Tool | Ghidra 12.0 DEV | WORKING | headless Java dump script; 1,056 decompiled C files |
| Tool | mzretools | WORKING | built at `C:\tools\mzretools\build\Release\` (42/42 tests) |
| Tool | angr 9.3.3 | PARTIAL | static analysis OK; unicorn DLL missing on Windows |
| Tool | inertia_decompiler | FIXED | 4 Windows bugs fixed; unicorn issue remains |
| Tool | ghidra-bridge | INSTALLED | Python-Ghidra RPC bridge |

---

## Git History

Initial commit `c6aaf8d` - all game files, logs, registry, plan, state.md committed.

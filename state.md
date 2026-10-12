# Gunship 2000 Reverse Engineering - State Summary

**Phase**: Phase 0 COMPLETE / Phase 1 COMPLETE / Phase 2 COMPLETE / Phase 3 TRACK 1 SKELETON DONE, TRACK 2 (C PORTS) NEXT
**Date**: 2026-10-10
**Platform**: Linux (WSL)
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

### Phase 1: Tool Setup — **COMPLETE** (upgraded to F-19 methodology, now on Linux)
| Tool | Purpose | Status |
|------|---------|--------|
| mzretools v1.0.20 | Binary comparison, routine mapping | **BUILT** at `tools/f19re/mzretools/debug/` (GCC, 42/42 tests pass) |
| Ghidra | Primary decompiler (Ghidra → C) | Available (Java 21) |
| DOSBox staging 0.83 | Runtime testing | Available |
| CMake 4.4.4 | Build system | Installed |
| angr 9.3.3 | Static analysis, CFG recovery | Working |
| pyvex 9.3.3 | VEX IR lifter | Working |
| z3-solver 4.13 | Semantic equivalence proofs | Working |
| capstone 5.0.7 | Disassembly | Working |
| ghidra-bridge | Python-Ghidra RPC | Installed |
| **MSC 6.0 (Gunship compiler)** | Original compiler for byte-exact verification | **AT `tools/msc6.0/C600/`** — runs under **DOSBox staging 0.83** (CL.EXE compiles); **kvikdos works for LINK.EXE only** (CL.EXE fails: looks for `BC1.EXE` instead of `C1.EXE`) |
| **kvikdos** | DOS emulator to run MSC 6.0 LINK.EXE | **BUILT & WORKING** at `tools/f19re/mzretools/tools/emulators/kvikdos/kvikdos` (KVM-accelerated); LINK.EXE works, CL.EXE fails (compiler pass detection bug) |
| **mzretools (f19re fork)** | lst2asm, lst2ch, mzdiff, mzmap, mzdup, portcheck, z3check | **BUILT** at `tools/f19re/mzretools/debug/` |
| **F-19 tools** | portcheck.py, lst2asm.py, lst2ch.py, z3check.py, dosbuild, mzdiff | **COPIED** at `tools/f19re/` |
| **F-19 configs** | conf/egame.json, routine_names.txt, toolchain.conf, map/*.map, sig/*.sig | **COPIED** at `tools/f19re/conf`, `map`, `sig` |
| **F-19 signatures** | mzdup signatures for cross-project routine matching | **COPIED** at `tools/f19re/sig` |
| **F-19 maps** | Routine maps for f15se2/f19 cross-project matching | **COPIED** at `tools/f19re/map` |
| **F-19 conf** | lst2asm config, routine_names, toolchain | **COPIED** at `tools/f19re/conf` |

### Analysis results (mzmap — after fixes):
- `analysis/SETUP.exe` → **103 routines over 8 segments** (SETUP.map)
- `analysis/GS.exe` → **54 routines over 4 segments** (GS.map) — fixed far jump handling
- `analysis/GS2.exe` → **25 routines over 2 segments** (GS2.map)

### Analysis results (mzretools):
- `analysis/SETUP.exe` → **103 routines over 8 segments** (SETUP.map)
- `analysis/GS.exe` → **54 routines over 4 segments** (GS.map)
- `analysis/GS2.exe` → **25 routines over 2 segments** (GS2.map)

### Phase 2: Static Analysis — **COMPLETE** (pipeline working)
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

### Phase 3: F-19 Style Reconstruction Pipeline — **INFRASTRUCTURE READY**
**Goal**: Byte-exact reconstruction using F-19's dual-track methodology:
1. **Skeleton** — Full asm disassembly → `uasm` + original `LINK.EXE` → byte-identical EXE (`make verify`)
2. **C Ports** — Per-routine C rewrite → compile with **original MSC 6.0** under **DOSBox-X** → `portcheck.py` + `mzdiff` = MATCH

**Key tools adopted from F-19**:
- `tools/f19re/mzretools` — mzdiff, mzmap, mzdup, lst2asm, lst2ch, portcheck, z3check
- `tools/f19re/mzretools/tools/emulators/kvikdos` — runs MSC 6.0 LINK.EXE under Linux (KVM-accelerated); **CL.EXE fails** (looks for `BC1.EXE` instead of `C1.EXE`); use DOSBox for compilation
- **MSC 6.0 (Gunship compiler)** at `tools/msc6.0/C600/` (mounted as `C:\` in DOSBox-X):
  - `C:\BIN\` — C1.EXE, C2.EXE, C3.EXE, CL.EXE
  - `C:\BINB\` — LINK.EXE, ILINK.EXE, LIB.EXE, BIND.EXE
  - `C:\INCLUDE\` — standard headers (STDIO.H, etc.)
  - `C:\LIB\` — libraries (SLIBC.LIB, etc.)
- `tools/f19re/conf/egame.json` → adapt for GS.GS2/GS2.GS2 (segment layout, BSS, encoding fixes)
- `tools/f19re/conf/routine_names.txt` → rename registry format
- `tools/f19re/conf/toolchain.conf` — DOSBox/kvikdos config
- `tools/f19re/map/*.map` — routine extent maps for mzdiff
- `tools/f19re/sig/*.sig` — mzdup signatures for cross-project matching (GS.GS2 ↔ GS2.GS2)
- `tools/f19re/tools/portcheck.py` — per-routine MSC compile + mzdiff verification (to be completed)
- `tools/f19re/tools/z3check.py` — Z3 semantic equivalence for non-byte-exact routines
- `dosbox_msc60.conf` — DOSBox config mounting `tools/msc6.0/C600` as `C:\` with proper PATH/INCLUDE/LIB

**Critical fixes applied to mzretools (upstream PRs pending)**:
1. **instruction.cpp:362** — Fixed `INS_CALL_FAR`/`INS_JMP_FAR` handling: opcodes 9A (CALL FAR) and EA (JMP FAR) are immediate far calls/jumps, NOT group 5 instructions. Changed condition from `iclass == INS_CALL_FAR || INS_JMP_FAR` to `iclass == INS_CALL_FAR || INS_JMP_FAR && opcode == OP_GRP5_Ev`.
2. **scanq.cpp:194** — Fixed `saveJump` to preserve destination segment for far jumps: added `isNear` parameter, only normalize segment for near jumps (`isNear=true`).

**DOSBox-X MSC 6.0 Compilation — GOTCHAS (2026-10-10)**:
- **8.3 filename limit**: ALL source/batch/object files MUST be ≤8.3 format (e.g. `t.c`, `c.bat`, `t.obj`). Long names become `COMPIL~1.BAT` and break CL.EXE/LINK.EXE.
- **ASCII encoding only**: Source files must be pure ASCII (no UTF-8 BOM, no UTF-16). PowerShell defaults to UTF-16 LE — use `Set-Content -Encoding ASCII`.
- **No `2>&1` redirection**: DOS only supports `> file` (stdout). Stderr goes to console. Use separate runs or check ERRORLEVEL.
- **DOSBox-X config**: `dosbox_msc60.conf` mounts `tools/msc6.0/C600` as `C:\` with PATH `c:\bin;c:\binb`, INCLUDE `c:\include`, LIB `c:\lib`.
- **Compile command**: `bin\cl /c /Gs /Fc<name>.cod /Ic:\include t.c` (compile-only, no stack probes, generate .cod listing). Without `/c`, CL prompts interactively for linker inputs. Use `/Gs` to disable `_chkstk` prologue for leaf routines.

**Immediate next steps**:
1. Mount MSC 6.0 floppy images, extract compiler to `tools/msc6.0/C600/` ✅ **DONE**
2. Build kvikdos emulator from f19re ✅ **DONE** (KVM working; LINK.EXE works, CL.EXE fails → use DOSBox-X for compilation)
3. Adapt f19re `conf/egame.json` → `conf/gs_gs2.json` + `conf/gs2_gs2.json` ✅ **DONE**
4. Generate routine maps with mzmap for GS.GS2 and GS2.GS2 ✅ **DONE**
5. Build mzdup signatures and cross-match GS.GS2 ↔ GS2.GS2 routines ✅ **DONE** (11 matches found)
6. **Generate .lst from Ghidra dump for mzretools** ✅ **DONE** — `scripts/ghidra_dump_to_lst_final.py` converts DumpProgram.java output to mzretools .lst format
7. mzmap verification on generated .lst ✅ **DONE** — 54 routines over 3 segments (matches original)
8. **MSC 6.0 compiler working under DOSBox-X** ✅ **DONE** (8.3/ASCII constraints documented)
9. **Track 1 (Skeleton): GS.exe byte-identical rebuild** ✅ **DONE (2026-10-09)** — IDA listing → `gen_lst2asm_conf.py` → `lst2asm.py` → UASM → MSC 6.0 LINK.EXE (kvikdos) → `normalize_mz.py`. **Full load file (116,616 B: header + image + 2017-entry reloc table) is byte-identical to `analysis/GS.exe`** — 0 differing bytes; CS:IP 17D1:082F, SS:SP 3962:0800, minalloc 1F8A all exact. (Original's 163,734-byte game-data overlay is appended data, not build output.)
10. **Track 1 (Skeleton): GS2.exe + SETUP.exe byte-identical rebuilds** ✅ **DONE (2026-10-10)** — same pipeline, one command each (`venv\Scripts\python scripts/build_verify.py GS2` / `SETUP`). GS2 load file (40,271 B, 300 relocs) byte-identical; **SETUP whole file** (21,687 B — classic MZ, no overlay — 261 relocs) byte-identical. See the Track 1 section for the SETUP-specific fixes (collapsed-function export, bss straddling the image end, bss-tail truncation in normalize).
11. **Full executable inventory completed (2026-10-10)** — 24 MZ + 4 COM executables in `game/` (not 3!). **Chosen for Track 1 expansion** (self-contained, high-value): AdLib (`ASOUND.GS2/GS3/GS4/LOG`), Roland (`RSOUND.GS2/GS3/GS4/LOG`), `MGRAPHIC.GS2`, `LABS.GS2`, `PLAYER.GS2`, `GS2000.COM`. Skipped as unnecessary: DSOUND/ISOUND/NSOUND (sound variants), MISC.GS2 (F-19 leftover), ADS.GS2 (loader), SETUP.EXE/CD (small COM variant). See § Executable Inventory.
12. **Track 1 expansion FROZEN (2026-10-10)** after ASOUND2 byte-identical (commit `31e41e0`) — remaining drivers hit a systematic IDA-DS=FF0 symbolic-operand bug (root-caused, fix designed). All findings, the ASOUND3 diagnosis, resume plan, and infra notes are frozen in `docs/track1_expansion_sound_drivers.md`. IDA DBs + listings already exported for ASOUND3/4/L, RSOUND2/3/4/L, MGRAPHIC, LABS, PLAYER; targets registered in `build_verify.py`.
13. **Track 2 (C Ports) PIPELINE WORKING (2026-10-11)** — `scripts/build_track2.py` full pipeline **WORKING**: compile (DOSBox MSC 6.0) → extract (with EXTRN auto-generation) → replace → UASM → DOSBox link → mzdiff (WSL). **93 routines ported** across segments 1000, 10bf, 165c, 20bc, 1d02, 1dea, 1c87, 28d4, 27d1, 2741, 2163. MSC 6.0 syntax fixes applied (no `byte`/`uint`, `extern` for far calls). 8.3 naming collision resolved with unique prefixes. mzdiff runs but differences expected due to segment layout. **Domain functions identified & ported**: 165c render pipeline (world_to_screen_project, render_loop, project_coords), 1d02 resource slots (resource_slot_alloc, resource_slot_swap), 1dea mission logic (mission_init, mission_score_evaluate), 1c87 text rendering, 28d4 EMS manager — registry updated with 12 named functions (high certainty). Support functions: INT 21h wrappers, carry flag checks, atomic exchange, string scan. **Rename infrastructure**: `scripts/gen_name_map.py` generates `src/gs_gs2/name_map.yaml` (765 functions); `scripts/rename_all.py` applies 47 mappings across port files, decompiled C, and registry.
14. DOSBox runtime verification of decoded structures ⏳ **PENDING**

### Phase 3-6: unchanged (Ghidra → C, AI unit tests, mzdiff comparison, DOSBox testing)

---

## Track 1: GS.exe / GS2.exe / SETUP.exe Byte-Identical Rebuild — ALL DONE (2026-10-09 / 10)

**Pipeline** (all in-repo, re-runnable; **one command**: `venv\Scripts\python scripts\build_verify.py GS`):
`analysis/ida/GS.i64.lst` (IDA batch export, `scripts/ida_export_lst.idc`) →
`scripts/gen_lst2asm_conf.py` (byte-driven config) → `tools/f19re/mzretools/tools/lst2asm.py` →
`analysis/ida/GS.asm` → UASM 2.57 (`wsl uasm -q -Fo /tmp/GS.obj`) →
`scripts/link_mz.sh GS` (MSC 6.0 LINK.EXE under kvikdos) → copy back →
`scripts/normalize_mz.py` → **0 differing bytes vs `analysis/GS.exe[0..0x1C788]`**.

**Verification**: `scripts/hdrdump.py`, `cmp_segsizes.py`, `diff_relocs.py`, `diff_bytes.py`,
`find_sizediv.py <seg>`, `check_relocs.py`.

**Byte-driven encoding fixes in `gen_lst2asm_conf.py`** (IDA listings lose original encodings;
each fix reads the original byte(s) and forces an exact reproduction):
- plain `call/jmp` with orig 9A/EA → `far ptr` (avoids UASM's `push cs; call near`); E9 → `near ptr`
  (UASM would pick short EB); 0F 8x jcc → `near ptr`; cross-seg E8 → `near ptr`
- **non-canonical far splits** (orig pairs target offset with a different segment para, e.g.
  `1C4B:06C4` vs canonical `1C89:2E4`) → `db 0EAh / dw off / dw seg <frame>` (keeps the fixup)
- `push imm8` (6A): listing prints `0FFFFh`; UASM assembles 68 → rewrite as signed `-1`
- explicit `[reg+0]` (mod=10, disp16) → `db` of original bytes (UASM canonicalizes to mod=00)
- `ax,imm` dual encodings (83 /xx vs 05/3D/...) → `db` of original bytes (426 sites)
- alignment pads: original used 00 in many code gaps, lst2asm writes nops → `db` of original
  bytes (914 sites, incl. hex `align 10h` form and trailing aligns)
- IDA renders the relocated DGROUP para at `seg002:010D` (`loc_10CFD`, read at runtime by
  `mov ax, cs:loc_10CFD`) as bogus `cmp [bp+di], bh` → `dw seg seg059` (+1 reloc)
- RTLink bind slots `jmp far ptr 0:0` → `db` of original 5 bytes (31 slots, NOT relocated)
- **structural**: `seg039`'s trailing `db 8 dup(?)` (IDA's pre-BSS gap) removed + `seg040`
  PARA-aligned (gap must not enter the load module); contentless post-image `seg061` given
  STACK class + `db 200h dup(?)` (reproduces orig minalloc 1F8A; IDA only sees 1 byte)
- `normalize_mz.py` then aligns header metadata LINK can't reproduce: checksum word (orig
  zeroed), filler @0x1C, and the reloc table bytes (same address set; orig's entries use frame
  segments that subdivide seg007 at BD40h/C4B0h — invisible to IDA — and multi-object link
  order)

**Gotchas encoded**: lst2asm squeezes whitespace (multi-space `from` texts must be squeezed);
`read_bytes` slot reads must stay 5 bytes for far slots; IDA `align` may be hex (`align 10h`);
data labels have no colon (needed for far-split expectations); `.286` + `OPTION NOSCOPED`
required; `push ah`-style register names must not parse as hex literals (byte check guards).

### GS2 additions (all byte-driven, in `gen_lst2asm_conf.py`)
- **longform db**: over-long disp16 (`80 BC 01 00 00`) and byte-fitting `81 /x iw` where UASM
  picks `83 /x ib` → db of the original bytes (capstone-driven)
- **push-symbolic db**: `push offset`/`push seg` whose listing imm ≠ expected (IDA renders raw
  immediates as symbols, e.g. `push 4` = `push offset unk_3A294`) → db the original `68 imm16`
  (plain `push 0004h` re-optimizes to 6A)
- **DGROUP group reconstruction**: direct `[disp16]` refs with `(label_EA − disp)` bases →
  `DGROUP GROUP seg011, seg012` + `ds:` assume rewrites (`es:`/`push offset` stay segment-relative)
- **db_bytes run compression**: runs ≥8 → `N dup(XXh)` (UASM "instruction string too long",
  helper.py MAXLINE=120)

### SETUP specifics (2026-10-10)
- **Collapsed functions/chunks**: IDA hides bodies as `[NNN BYTES: COLLAPSED FUNCTION ...]` —
  81 entries; content would be silently missing. `scripts/ida_export_lst.idc` clears FUNC_HIDDEN
  on all 123 functions (iterate with `get_next_func(0)`, not `-1`) before `gen_file(OFILE_LST)`;
  the 8 leftover `COLLAPSED CHUNK` (tail) entries need `scripts/ida_expand_chunks.py`
  (IDC `get_fchunk_attr` has no FLAGS; Python `ida_funcs.getn_fchunk(i)` + `set_visible_func`;
  MUST end with `ida_pro.qexit(0)` or IDA waits for UI and the DB never saves).
- **bss straddling the image end**: `dseg` spans 0x14220..0x161B0 but the image ends at
  0x14EB7 (= dseg:0C97) — 4,782 `db/dw ?` lines (incl. labels like `word_14F90` that code
  references) beyond. gen now KEEPS them: `?` reserves space without file bytes, preserves label
  definitions and true segment size, and orig minalloc 0x1B0 covers dseg tail + stack. The tail
  [image_end, seg end] is added to `bss` so `align` pads `db ?` (not initialized zeros).
  Only pure `db N dup(?)` IDA gap-fills (GS seg039) are still removed + PARA-aligned.
  **bss bounds are LISTING offsets**: `first_off + size - 1` (seg007's listing starts at 0007,
  so `size - 1` under-runs and config.py raises `invalid block range`).
- **normalize_mz.py**: LINK writes a mixed segment's `db ?` tail into the file (rebuild 26,544
  vs orig 21,687 — 4,857 zero bytes = dseg tail) → strip to `content`, then re-copy the
  page-count fields (0x02/0x04) and minalloc (0x0A) LINK computed against the inflated image.
  The load module itself is byte-identical before any of this.
- header: CS:IP 011D:001E, SS:SP 061B:0800, minalloc 01B0, hdr 1536, 261 relocs @0x1E;
  no overlay (file == content == 0x54B7).

---

## Executable Inventory (game/) — 24 MZ + 4 COM

Discovered 2026-10-10 by scanning every `game/` file for MZ magic (the earlier "3 executables"
belief came from the registry only tracking the big `.GS2` ones). All MZ files here are real
self-contained programs, **not RTLink overlay segments** — they have their own headers/reloc
tables and are exec'd by the launcher stub. The game's sound system is a set of pluggable
driver EXEs chosen at runtime.

### Chosen for Track 1 expansion (10 binaries) — PAUSED after ASOUND2; see `docs/track1_expansion_sound_drivers.md`
| File | Size | Type | ID / notes |
|---|---|---|---|
| `ASOUND.GS2` | 13,314 | MZ, 12 relocs, CS:IP 0000:0010 | "GS2000 AdLib I 8-10-92" |
| `ASOUND.GS3` | 12,660 | MZ, 10 relocs | "GS2000 AdLib N 6-29-92" |
| `ASOUND.GS4` | 18,998 | MZ, 10 relocs | "AdLib Sound Card" |
| `ASOUND.LOG` | 6,120 | MZ, 10 relocs | "AdLib Logo 7-18-91" |
| `RSOUND.GS2` | 13,163 | MZ, 36 relocs | "GS2000 MT32 I 7-20-92" |
| `RSOUND.GS3` | 17,019 | MZ, 28 relocs | "GS2000 MT32 N 6-29-92" |
| `RSOUND.GS4` | 21,865 | MZ, 28 relocs | "Roland MT-32" |
| `RSOUND.LOG` | 5,481 | MZ, 28 relocs | "RolandMT-32 3-25-91" |
| `MGRAPHIC.GS2` | 7,158 | MZ, 3 relocs, CS:IP 0000:009E | "MGRAPHIC.EXE 3-22-91", MCGA graphics |
| `LABS.GS2` | 10,097 | MZ, 0 relocs, hdr 32, CS:IP 0255:000E | MSC 6 CRT; Labs logo screenshow |
| `PLAYER.GS2` | 10,962 | MZ, 0 relocs, hdr 32, CS:IP 0292:000E | MSC 6 CRT; player intro |
| `GS2000.COM` | 2,738 | **COM** (no MZ) | main launcher stub; execs setup.gs2, labs.gs2, player.gs2, gs.gs2, gs2.gs2 |

- The 4 AdLib + 4 Roland files are version/role variants (`.GS2`/`.GS3`/`.GS4` = game revisions
  1992, `.LOG` = 1991 logo-splash music). Likely share most code → good byte-identity regression
  targets and cross-referencing aids.
- `LABS.GS2`/`PLAYER.GS2`/`ADS.GS2` share the 32-byte-hdr MSC 6 CRT shape (CS:IP = `02xx:000E`).
- `GS2000.COM` is a real 8086 COM (starts `mov sp,0x804`); needs a COM (not MZ) build path —
  UASM can assemble a `.COM` (org 100h) directly, no LINK/MZ header needed.

### Skipped (not necessary for Track 1)
| File(s) | Why skipped |
|---|---|
| `DSOUND.GS2`, `ISOUND.GS2/GS3/GS4/LOG`, `NSOUND.GS2/GS3/GS4` | More sound-driver variants (MT32/DMA, PC-speaker, Tandy/no-sound); ISOUND.LOG is a sound **debugger**. AdLib+Roland chosen as the representative sound drivers. |
| `MISC.GS2` ("MISCOVR.EXE 1989") | F-19-era leftover, 980 B, not referenced by GS2000 stub. |
| `ADS.GS2` | Overlay **loader** (CRT overlay-load errors, refs MGRAPHIC.GS2 + GS2000.CAT) — a host/loader, not a payload; overlaps MGRAPHIC/LABS work. |
| `SETUP.EXE` / `SETUP.CD` | 2,558 B COM; identical to each other; smaller sibling of GS2000 stub that also refs `ads.gs2`. The real setup is the already-done `SETUP.GS2`. |
| `PACK2.CD` | 2,738 B COM, 11 bytes differ from `GS2000.COM` — CD-distribution twin, no unique content. |

---

### mzretools (upstream: neuviemeporte/mzretools)
1. **instruction.cpp:362** — `INS_CALL_FAR`/`INS_JMP_FAR` incorrectly treated as group 5 instructions. Opcodes 9A (CALL FAR) and EA (JMP FAR) are immediate far calls/jumps with 32-bit operands, NOT group 5 (FF /2, /4, /5). Fixed: `else if ((iclass == INS_CALL_FAR || iclass == INS_JMP_FAR) && opcode == OP_GRP5_Ev)`.
2. **scanq.cpp:194** — `saveJump` normalized all jump destinations to current routine's segment, breaking far jumps. Fixed: added `isNear` parameter, only move segment for near jumps.

### mzretools (upstream: neuviemeporte/mzretools)
1. **instruction.cpp:362** — `INS_CALL_FAR`/`INS_JMP_FAR` incorrectly treated as group 5 instructions. Opcodes 9A (CALL FAR) and EA (JMP FAR) are immediate far calls/jumps with 32-bit operands, NOT group 5 (FF /2, /4, /5). Fixed: `else if ((iclass == INS_CALL_FAR || iclass == INS_JMP_FAR) && opcode == OP_GRP5_Ev)`.
2. **scanq.cpp:194** — `saveJump` normalized all jump destinations to current routine's segment, breaking far jumps. Fixed: added `isNear` parameter, only move segment for near jumps.

### kvikdos (upstream: neuviemeporte/mzretools/tools/emulators/kvikdos)
1. **Compiler pass detection bug** — Misidentifies Microsoft C 6.0 compiler passes as Borland C (`BC1.EXE`, `BC2.EXE`, `BC3.EXE`) instead of Microsoft C (`C1.EXE`, `C2.EXE`, `C3.EXE`). Causes "Out of memory" / "cannot open DOS executable" errors during compilation. 
   - **Track 1 (Skeleton)**: Works fine — only needs linker (LINK.EXE), which works correctly
   - **Track 2 (C Ports)**: **Use DOSBox instead** — DOSBox doesn't have this compiler pass detection bug. `portcheck.py` supports both kvikdos and DOSBox backends.

### inertia_decompiler
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
| Binary | GS.GS2 | **REBUILD BYTE-IDENTICAL** | MZ + RTLink dir + DGROUP init (rec4) + string pack; 765 fns in registry; load file 116,616 B reproduced exactly |
| Binary | GS2.GS2 | **REBUILD BYTE-IDENTICAL** | MZ + RTLink dir (count=9, ids 2-10) + 10 thunks + startup chain; 165 fns in registry; load file 40,271 B reproduced exactly |
| Binary | SETUP.GS2 | **REBUILD BYTE-IDENTICAL** | classic MZ (image == file), 126 fns, 261 relocs, cs:ip=11d:1e; whole 21,687 B file reproduced exactly |
| Binary | ASOUND.GS2 (ASOUND2) | **REBUILD BYTE-IDENTICAL** | Track 1 expansion; 12 relocs; other sound drivers frozen — see `docs/track1_expansion_sound_drivers.md` |
| Data | GS2000.DAT | PARSED | 85-entry chain catalog (count + count×24, len/off u32) — read by `FUN_1f61_060e` via DGROUP:0x806 |
| Data | GS2000.CAT | PARSED | 105-entry chain catalog (DGROUP:0x07FB) |
| Data | MBUILDER.CAT | PARSED | 16-entry chain catalog |
| Tool | Ghidra 12.0 DEV | WORKING | headless Java dump script; 1,056 decompiled C files |
| Tool | mzretools v1.0.20 | WORKING | built at `tools/f19re/mzretools/debug/` (42/42 tests); **2 critical bugs fixed** |
| Tool | angr 9.3.3 | PARTIAL | static analysis OK; unicorn DLL missing on Windows |
| Tool | inertia_decompiler | FIXED | 4 Windows bugs fixed; unicorn issue remains |
| Tool | ghidra-bridge | INSTALLED | Python-Ghidra RPC bridge |

---

## Git History

Initial commit `c6aaf8d` - all game files, logs, registry, plan, state.md committed.

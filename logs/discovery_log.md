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

## 2026-10-08 (evening): Phase 2 pipeline — Ghidra + YAML registry

### Ghidra headless setup
- Ghidra 12.0 DEV at `C:\tools\ghidra\ghidra_12.0_DEV`, JAVA_HOME=`C:\Program Files\OpenJDK\jdk-21.0.1`
- Ghidra 12 **dropped Jython**: .py scripts fail with "Ghidra was not started with PyGhidra" (venv Python 3.14 unsupported by PyGhidra anyway) → wrote `scripts/DumpProgram.java` (GhidraScript) instead
- Java script compile pitfalls fixed: `getExternalEntryPointIterator()` returns AddressIterator (not EntryPoint), `Program.getCompilerSpecID()` → `getCompilerSpec().getCompilerSpecID()`, `Function.getReturnType()` not `getReturn().getDataType()`
- Project `ghidra_proj/Gunship` (gitignored); imported SETUP.exe/GS.exe/GS2.exe (as byte-identical .exe copies — Ghidra needs MZ loader; relative paths for mzretools, absolute OK for Ghidra)

### Analysis results (Ghidra 12, 16-bit real mode)
| Program | Functions | Notes |
|---------|-----------|-------|
| SETUP.exe | 126 | full scan; entry 111d:001e = cs:ip ✓; blocks CODE_0..CODE_9 + DATA match mzretools 8 segments |
| GS.exe | 765 | resident image; overlay far jumps → decompile warnings (flow into uninitialized memory) |
| GS2.exe | 165 | resident image |

- Calling convention everywhere: `__cdecl16far` — confirms user's "16-bit stack calling" assessment
- Entry function decompiles to MS C CRT startup (PSP:80h command tail parsing)

### YAML registry (user's recommendation, adopted)
- `scripts/build_registry.py` parses DumpProgram output → `registry/<ID>.yaml` + per-function C in `decompiled/<ID>/<seg_off>.c`
- **Merge semantics verified**: re-run preserves human edits (renamed functions, status, notes, top-level structs/variables/strings), refreshes auto fields (sig, decompiled flag), marks stale functions
- Generated: SETUP_GS2.yaml (126), GS_GS2.yaml (765), GS2_GS2.yaml (165), 1,056 C files (1.1MB, tracked)
- Raw dumps `analysis/ghidra/*.txt` (1.3MB) gitignored as regenerable
- Merge bugs fixed during bring-up: functions only appended at EOF (append on new FUNCTION marker), unconditional `del old_funcs[addr]` KeyError on fresh registries


## 2026-10-08 (late night): Binary structure decoded — MZ relocs, RTLink directory, DGROUP initializer

### MZ relocation format fixed (word-order!)
- Entry = **(offset, segment)**, linear = seg×16+off; 2,017 entries @file off 30
- Verified: reloc[0] (off=5, seg=0) → lin 5 → word = **00BF** = seg operand of image-start `call 00bf:02c0` (bytes @8192: `33 C0 9A C0 02 BF 00 …` = xor ax,ax; call 00BF:02C0)
- reloc[919] (0x0157,0x0DEA) → lin 57,335 = the `lcall 0f61:60e` segword ✓; reloc[85] (0x0026,0x00BF) → lin 3,094 = CRT `mov di,0x2b38` immediate ✓
- ⇒ **runtime = link + L everywhere** (L = PSP+0x10); overlay loader's +L fixups consistent with MZ relocs; earlier "absolute segments / no DGROUP reloc" claim **retracted** (was swapped word-order artifact of my scan)

### Entry chain (raw disasm @file 107,839, `disasm16.py`)
- entry `17D1:082F`: `mov cs:[0xb98],es / cs:[0xb9a],ds` (PSP saved) → DS=0x17D1 → call `17D1:0878` → stack switch if `[17D1:0D23]≠0` (SS=that, SP=0x200) → call `17D1:08E9` → restore ES/DS → **`ljmp 0xBF:0018` (CRT)**
- `0878`: pushf/cld; `lcall 18D4:1510` (ES=PSP); al=1, dx=0xAE2; `lcall 18D4:1535`; ax=`[0xd2d]`(=5) → call `17D1:038B` → `[0xba2]=BX`; `[0xb74]=[0xd2f]×32+[0xba2]`; `[0xb72]=0`
- Address-check: Ghidra offs are REAL (17D1:0878 = file 107,912 = 0x1A588 ✓); file = real_seg×16+8192+off

### RTLink overlay record format (08e9 + 025c decompiled)
- 9 words / 18 bytes: `w0` load base (LINK paras) | `w1` filename ptr (all `17D1:0DB8` → file 109,256 = **"GS.EXE"**) | `w2` file para of fixup table (w2×16 = file offset) | `w3` **high byte = flags** (rec0-3 = 0x04 = transient; rec4 = 0x01 = startup-load) | `w4` allocated span (paras) | `w5` fixup count (dwords) | `0xFFFF` | `w7` id 2..6 | `w8` actual data size (paras)
- `08e9`: arena = [min w0, max w0+w4] → `[0xd05,0xd07]` = [0x1A79, 0x39E2]; calls `025c` only for flags&1 → **rec4 only at startup**
- `025c`: transient overlap-swap loop → `04e4` (opens host file, handle `[0xba0]`) → seek `w2+ceil(w5/4)` paras → read w8 data paras into **L+w0** → read w5 fixups → `word_at(seg:off) += L`
- Group arithmetic exact for all 5: table (w5×4, para-padded) + w4×16 = group size (rec0 2144+15264=17408 ✓, rec1 5248+57808 ✓, rec2 2960+21456 ✓, rec3 2176+15024 ✓, rec4 1120+10784+29742=41646 ✓). Earlier "fixup runs 126/9/259/42/103" = partial parses of (off, 0x1A79) pairs; true counts = w5 = **536/1312/740/543/279**

### DGROUP initializer = rec4 (BIG SOLVE)
- DGROUP link 0x2B38 > image end 0x1A79 → **not DOS-loaded**; natural file pos 185,216 = garbage (falls inside rec1 content) — the old blocker
- rec4 loads (08e9-time, before CRT) at L+0x2896; data = file `[239824, 280350)` = 10,784-B gap `[0x2896,0x2B38)` (RTLink far ptrs) + **DGROUP `[0x0000,0x742E)` @ file 250608 → ends EXACTLY at EOF** (250608+29742 = 280350); rec4 end `0x2896+0x9E5 = 0x327B` = 0x2B38+ceil(0x742E/16) = **exactly the CRT BSS-zero start** ✓
- rec4 fixup table @238704: 279 (off,seg) pairs, all seg `0x2896`, targets descending (0A8E, 0A8A, 0A86…)
- Byte-verified string pack: file 252651 = "GS2000.CAT" → **DGROUP:0x07FB** | 252662 = "GS2000.DAT" → **DGROUP:0x0806** | 252673 = "MISC.GS2" → **DGROUP:0x811** | 277304 = "_C_FILE_INFO=" (exactly 13 chars) → **DGROUP:0x6848** (CRT env key) | 250616 = "MS Run-Time Library - Copyright (c) 1990, Microsoft Corp." → DGROUP:0x0008
- **SOLVES**: writer of DGROUP:0x0806 (init image, not runtime), DGROUP init source (rec4), `060e`'s file = **GS2000.DAT** (85-chain; count question resolved), CRT env key

### Other
- `push 0x806` has exactly ONE call site: file 65,521 (`push 0x806; lcall 0f61:060e`, inside `1dea_0046`); `push 0x7fb` @65,510 (`lcall 1741:06ca`); `push 0x811` @65,564 (`lcall 1658:034c`)
- `1dea_0046` full body (94 lines) read: … `034c(0x811)` = EXEC "MISC.GS2" (AX=4B03 path), `[0xe02d]` byte = `[0x9f02]`, `034c(0xe02d)`, `thunk(0x2658,…)` import resolution, `[0x861a]` 0→1 around it
- `1741:07FB` = code (not a string) → `06ca`'s 0x7FB arg ambiguous (DGROUP "GS2000.CAT" vs callback off) — left open
- GS2000.COM = CD launcher confirmed: subprograms setup/labs/player/gs/gs2/ads.gs2, flags `-g -m` / `-g -c -m` / `-g -l -m` / `-g -e` ↔ parser 0d28
- GS2.GS2: header hdrparas=96, bytes[20..24]=`F8 06 51 08` (IP 0x06F8, CS 0x0851), **zero ".exe" strings in file** — overlay scheme unconfirmed
- Docs updated: `state.md` (new Binary Structure section, registry table), `registry/file_registry.md` (Overlay System rewritten + Next Actions)

### rec0-3 mapped (content + entries)
- 51 call-through thunks @file 109,384–109,884 (10 B each): `call 17D1:05F8` + `ljmp seg:off` + `dw rec_id` — **trailer = overlay index 0..3** (verified: thunk→0x1C07 id0 ↔ rec0's top fixup seg 1C07:300; →0x1ABF id1 ↔ rec1's 1ABF:295; →0x1C89 id2 ↔ rec2's; →0x1AB5/0x1C4B id3 ↔ rec3's); first thunk `0DEA:0EDA` id 0xFFFF = resident. **51/51 ljmp segwords covered by MZ relocs (+L)** ✓. Table: `analysis/overlay_thunks.tsv` (thunk pos, seg:off, rec, target file offset)
- Fixup-seg spreads all ∈ [0x1A79, 0x1A79+w4) → **shared-base transient arena** [0x1A79,0x2896) (size = rec1's w4 = 0xE1D paras = exactly arena span ✓); per-rec fixup segs: rec0 {1C07×300,1A79×126,1B72×57,1DF9×38,1BF3×15}, rec1 {20F4×639,1DA4×368,1ABF×295,1A79×9,1A8D×1}, rec2 {1A79×259,1D50×233,1F13×93,1C89×78,1BFF×77}, rec3 {1AB5×129,1C4B×88,1CF5×75,1BF6×56,1DBD×55,1D6B×54,1BB6×44,1A79×42}
- **rec0-3 = code-only overlays (no literals), classified by `push offset` → DGROUP strings (file 250608+off)**: rec0 = campaign/mission-select + replay/duty-roster ("You have a campaign %s…", SCENE_%02d.THR, LASTMISS.RPL, "No theaters found", "%s decorated") | rec1 (largest, 57,808 B, 16 entries) = **mission editor** ("EDITOR.PIC", "Excellent! you may now save this mission", "DELETE DEFENDERS", %sMIS.PIC, "%S by Don Goddard!") | rec2 = briefing ("BRIEFING", "Enemy air activity is expected…", "CHANGE HELICOPTER", "CALLSIGN:", campaign status) | rec3 = debrief + awards/promotions ("AWARD %c%s%c TO %s", "CONGRATULATIONS!…", posthumously, Purple Heart, "Awarded commission")
- Entry prologues = MS C: `push bp; mov bp,sp; mov ax,N; lcall 00BF:02C0` (chkstk); rec0 entry @118,768 does 0x122-byte struct-table copy via `rep movsw` indexed by [0xE281]
- Cross-overlay call mechanism (how rec1→rec2 swaps) still open; DS:0x9BF magic open

### GS2.GS2 decoded — same RTLink scheme, 9 overlays (2026-10-08, late)
- **Header**: hdr=96 paras (1,536 B), 300 relocs, CS:IP = 0851:06F8 (entry file 37,384),
  SS:SP = 45FE:0800 (SS inside id10's BSS), min-alloc 15,658 paras. Image = [1536, 40271)
  = 38,735 B = 2421 paras; **file-position rule confirmed: file = hdr + seg×16 + off**
  (GS.GS2's 8192 hdr was a special case of the same rule)
- **Startup chain (mirrors GS.GS2 1:1)**: entry `0851:06F8` saves PSP @cs:0x9de, DS=0851
  → bootstrap file 37,452 (`lcall 0926:0143`; alloc from dir words `[0xb6b]`count/`[0xb6d]`/`[0xb6f]`=96;
  sets reload-stack ptrs [0x9cb]/[0x9cd]) → stack switch via `[0xb61]` (SS,SP=0x200)
  → dir-walk file 37,549 (min/max arena → `[0xb4b]`/`[0xb4d]`, far-ptr exports via
  `[0xb63]`/`[0xb67]`; `flags&1` → `call 08d2c` loader = 025c analog; `[0x9e2]`==0 →
  `08f39` = 04e4 analog) → restore PSP to DS/ES → **`ljmp 02A2:0016`** = CRT startup
  (analog of GS.GS2's `ljmp 00BF:0018`)
- "Overlay Manager Internal Reload Stack Overflow" @file 35,873 (in-image ✓); no ".exe"
  strings because host name = **"GS2.GS2"** itself (w1 → file 38,789, between dir end
  38,691 and thunks 38,917)
- **Directory @file 38,523 = `cs:[0xb6b]`**: count = **9**; header words [9][0][96];
  records @38,529 stride 18; **ids 2..10**. (Earlier "count=1 @38595" = false positive —
  mid-record w6 of id5.) Record chain arithmetic exact for ALL 9: w2×16 (fixups) +
  ceil(w5/4)×16 + w8×16 = next w2×16; last ends 413,984 vs file 413,971 = 13-B EOF pad.
  Ids: 2: w2=40272 w4=724 w5=244 **flag 0x05** | 3: 52832/4096/659/04 (span = whole 64KB arena) |
  4: 121008/978/234/04 **w6=1** | 5: 137600/583/131/04 **w6=1** | 6: 147456/2897/163/04 |
  7: 194464/1246/11/04 | 8: 214448/2534/37/04 | 9: 255152/2529/38/04 |
  10: 295776/8017/289 **flag 0x01** w8=7315 (startup data)
- **Arenas (w0) tightly packed, no gaps**: image [0,0x975) | {id2,3,6,7} @0x975 → [0x975,0x1975)
  = exactly 4096 paras (id3 fills it exclusively) | {id4,5} @0x1975 → [0x1975,0x1D47) |
  {id8,9} @0x1D47 → [0x1D47,0x272D) | id10 @0x272D → [0x272D,0x467E) = data [0x272D,0x43AE)
  + BSS tail (MZ SS 0x45FE stack lives there). min-alloc: 2421+15658 = 18079 ≥ 0x467E = 18046 ✓
  — DOS allocation sized to fit all arenas (high)
- **Flags byte (w3 high)**: 0x04 transient, 0x01 startup-load, **0x05 = both (id2)** —
  GS.GS2 has no 0x05. `w6`: 0xFFFF normally, **1 for id4/id5 only** (meaning unknown)
- **Thunks: 10 @file 38,917–39,016** (stride 10): `call 0851:0529` (file 36,921 = reload
  stub: push regs, DS=0851, `ax = [bp+2]+5` = trailer word, rebuilds far frame) +
  `ljmp w0:off` + `dw idx` — **trailer = record index (0..7 = ids 2..9), VERIFIED**:
  every thunk's ljmp seg == its record's w0 (0975/1975/1D47 ×10/10); counts per idx
  2/2/1/1/1/1/1/1; id10 (startup data) has none. Same 10-byte format as GS.GS2's 51
  (there trailer 0..3 + 0xFFFF resident; target = `17D1:05F8` vs GS2's `0851:0529`)
- **String pool** = id10 data @296,944 ↔ runtime 0x272D (= DS): "Quit to DOS (Y/N)",
  settings menu ("[C] CRT FULL 3D ON"…), joystick wizard ("MOVE THE JOYSTICK TO THE
  UPPER-LEFT"), "GUNSHIP 2000: DEMO MODE", "Copyright 1991 MicroProse Software Inc.",
  wingman callouts (": I'm engaging enemy", ": Permission to fire!") — `push`/`mov reg,imm`
  refs from ids 2–9 resolve byte-exact (DGROUP0 = 296,944 confirmed)
- **id content (preliminary)**: id2 = startup init (calls CRT `02A2:0D5E`, joystick strings) |
  id3 = 64KB main module (far-calls within own arena span + resident `037F` code) |
  id4 = settings/graphics options | id5 = input/joystick | id6 = 46KB gameplay/UI
  ("DIS-ENGAGING"/"OUT OF ACTION" refs) | id7 = unknown (no str refs) |
  id8/id9 = combat/comms (both export `1D47:AA`; id9 refs wingman callouts)
- Ghidra bias for GS2 confirmed: decompiled segs are REAL+0x1000 (12A2→02A2 CRT,
  137F→037F image code); `thunk_EXT_FUN_0000_0000` @037F:191a+ = image-side import
  thunks, distinct from the 10 overlay thunks
- SETUP.GS2: **no RTLink** (no "Overlay Manager"/"Reload Stack" strings; image = file
  exactly, 21,687 B, hdr 96, CS:IP 011D:001E, 261 relocs) = classic standalone exe

## Registry Entries
See `registry/` directory for YAML database entries.

# Gunship 2000 File Registry

## Executable Files

### GS2000.COM
- **Size**: 2,738 bytes
- **Format**: DOS COM (16-bit real mode, loads at CS:0100h)
- **Entry Point**: Offset 0x0000 (`mov sp, 0x0804` - stack setup)
- **First Bytes**: `BC 04 08 E8 75 07 CD 21 33 C0 E8 3D 03 ...`
- **Analysis**: **COMPLETE** — this is the LAUNCHER. It:
  - Checks DOS ≥ 5, 286+ CPU, video mode; detects MSCDEX (INT 2Fh) and scans CD drives for the disc
  - Hooks INT 21h (handler at CS:01E6): redirects relative file opens to the CD drive letter
  - chdirs to `G:\gs`, then DOS EXEC (4B00) of subprograms from table at CS:040E
  - Subprograms + args: `setup.gs2 -t`, `labs.gs2 " nsound.log logo -es"`, `player.gs2 " nsound.gs3 gst"`, `gs.gs2 { -g -m | -g -c -m | -g -l -m | -g -e }`, `gs2.gs2 /r`, `ads.gs2`
  - Chains subprograms by exit code (decision tree at CS:000A)
- **Status**: ANALYZED (tools/disasm16.py used; real addresses = file offset + 0x100)
- **Note**: `PACK2.CD` (2,738 bytes) is a near-identical sibling (CD variant, NOT byte-identical); `SETUP.EXE`/`SETUP.CD` (2,558 bytes) are unrelated small COM-style programs

### Real Executables (FOUND — the .GS2 files themselves)

#### GS.GS2 — Mission Builder / campaign shell
- **Size**: 280,350 bytes | **MZ image**: ~116,736 (resident) + trailing overlay data
- **Header**: 2017 relocs, header=8192 bytes, cs:ip=17d1:82f, ss:sp=3962:800, load module 0x1A788
- **Compiler**: Microsoft C + RTLink/Plus overlays ("MS Run-Time Library - Copyright (c) 1990")
- **Strings**: "GUNSHIP 2000: Mission Builder", mission debrief text, overlay manager errors
- **Status**: MAPPED — mzmap found 54 routines/3 segments (resident only; overlay jumps stop scan)

#### GS2.GS2 — flight game
- **Size**: 413,971 bytes | **MZ image**: 38,735 bytes [1536, 40271) = 2421 paras + **9 RTLink overlays**
- **Header**: 300 relocs, header=1536 bytes, cs:ip=851:6f8 (entry file 37,384), ss:sp=45fe:800
  (SS = inside overlay id10's BSS tail), min-alloc 15,658 paras (image 2421 + 15658 = 18079 ≥
  arena end 0x467E = 18046 — sized to fit ALL arenas exactly)
- **Overlay directory**: count=9 @file 38,523 (`cs:[0xb6b]`), records @38,529, ids **2..10**
  (same 9-word record format as GS.GS2; name ptr → "GS2.GS2" @38,789); arenas tightly packed:
  image `[0,0x975)` | arena1 `[0x975,0x1975)` 64KB (ids 2,3,6,7 transient swap) | arena2
  `[0x1975,0x1D47)` (ids 4,5) | arena3 `[0x1D47,0x272D)` (ids 8,9) | id10 `[0x272D,0x467E)`
  startup data (string pool + state + BSS + stack); startup loads = **id2 (flag 0x05) + id10 (flag 0x01)**
- **Thunks**: 10 @file 38,917–39,016 (stride 10): `call 0851:0529` (file 36,921 reload stub) +
  `ljmp w0:off` + `dw record-index` (0..7 = ids 2..9; verified: trailer idx's record w0 = ljmp seg)
- **Startup chain**: `0851:06F8` (saves PSP @cs:0x9de) → bootstrap file 37,452 (`lcall 0926:0143`,
  alloc via count `[0xb6b]`/`[0xb6d]`/`[0xb6f]`=96) → stack switch `[0xb61]` → dir-walk file
  37,549 (min/max arena → `[0xb4b]/[0xb4d]`, flags&1 → `call 08d2c` loader) → `ljmp 02A2:0016` CRT
- **Strings**: id10 data @file 296944 (↔ runtime 0x272D = DS): settings menu, joystick wizard,
  "GUNSHIP 2000: DEMO MODE", Copyright 1991 MicroProse, wingman callouts
- **Strings**: aircraft DB ("AH-64A Apache Gunship"), cockpit UI ("[N] Next [F] Fly to..")
- **Status**: STRUCTURE DECODED — same RTLink scheme as GS.GS2 (see Overlay System); mzmap: 25 routines (resident only)

#### SETUP.GS2 — setup program
- **Size**: 21,687 bytes | **MZ image**: 21,687 (exact — no overlays)
- **Header**: 261 relocs, header=1536 bytes, cs:ip=11d:1e, ss:sp=61b:800, overlay_number=1
- **Strings**: "GUNSHIP 2OOO + ISLANDS & ICE SETUP Version 469.085", "Copyright (c) 1992 by MicroProse Software, Inc."
- **Status**: MAPPED — mzmap found 103 routines/8 segments (full scan)

#### Resource catalogs (NOT executables — decoded format, certainty: confirmed)
- `GS2000.CAT` (1,253,543) — catalog of 105 PIC graphic files
- `GS2000.DAT` (423,292) — catalog of 85 SCN screen files (BASE.SCN, BRIEFING.SCN, ...)
- `MBUILDER.CAT` (153,770) — mission-builder catalog (EURO6MIS.PIC entries)
- **Format**: `[u16 count]` + `count × 24-byte records {name[12], ?[4], length u32, offset u32}`;
  directory = first `2 + 24*count` bytes, data follows; offsets chain from dir end
  (verified: CAT dir end 2522 = 2+105×24; entry offsets = running sum of lengths)
- Same read pattern as overlay loader `FUN_1f61_060e` in GS.GS2 (fread count, then count×24)

## Mission/Terrain Files

### ANTC Series (Antarctica missions?)
- ANTC1 (43,902 bytes), ANTC1BMP.GS2 (27,648), ANTC1MAP.GS2 (15,545), ANTC1SMP.GS2 (5,789)
- ANTC2 (31,953 bytes), ANTC2BMP.GS2 (27,648), ANTC2MAP.GS2 (16,369), ANTC2SMP.GS2 (5,789)
- ANTC3 (44,502 bytes), ANTC3BMP.GS2 (27,648), ANTC3MAP.GS2 (15,135), ANTC3SMP.GS2 (5,789)
- ANTCFORM.DAT (3,744), ANTCWEAP.DAT (432)
- Palettes: ANTCDARK.PAL, ANTCDAY.PAL, ANTCGREY.PAL (768 bytes each)

### EURO Series (European missions)
- EURO6 (49,949), EURO6BMP.GS2 (27,648), EURO6MAP.GS2 (7,825), EURO6SMP.GS2 (5,789)
- EURO7 (52,097), EURO7BMP.GS2 (27,648), EURO7MAP.GS2 (8,182), EURO7SMP.GS2 (5,789)
- EURO8 (51,706), EURO8BMP.GS2 (27,648), EURO8MAP.GS2 (8,800), EURO8SMP.GS2 (5,789)
- EURO9 (64,444), EURO9BMP.GS2 (27,648), EURO9MAP.GS2 (12,041), EURO9SMP.GS2 (5,789)
- EUROFORM.DAT (4,108), EUROWEAP.DAT (432)
- Palettes: EURODARK.PAL, EURODAY.PAL, EUROGREY.PAL

### GULF Series (Gulf missions)
- GULF2 (44,733), GULF2BMP.GS2 (27,648), GULF2MAP.GS2 (11,973), GULF2SMP.GS2 (5,789)
- GULF3 (37,062), GULF3BMP.GS2 (27,648), GULF3MAP.GS2 (8,651), GULF3SMP.GS2 (5,789)
- GULF4 (46,177), GULF4BMP.GS2 (27,648), GULF4MAP.GS2 (7,506), GULF4SMP.GS2 (5,789)
- GULF5 (40,930), GULF5BMP.GS2 (27,648), GULF5MAP.GS2 (7,367), GULF5SMP.GS2 (5,789)
- GULFFORM.DAT (3,744), GULFWEAP.DAT (432)
- Palettes: GULFDARK.PAL, GULFDAY.PAL, GULFGREY.PAL

### PHIL Series (Philippines missions)
- PHIL1 (45,088), PHIL1BMP.GS2 (27,648), PHIL1MAP.GS2 (9,218), PHIL1SMP.GS2 (5,789)
- PHIL2 (42,500), PHIL2BMP.GS2 (27,648), PHIL2MAP.GS2 (10,790), PHIL2SMP.GS2 (5,789)
- PHIL3 (58,549), PHIL3BMP.GS2 (27,648), PHIL3MAP.GS2 (12,581), PHIL3SMP.GS2 (5,789)
- PHILFORM.DAT (2,834), PHILWEAP.DAT (432)
- Palettes: PHILDARK.PAL, PHILDAY.PAL, PHILGREY.PAL

## Asset Files

### Graphics
- **GST.PAN** (682,208 bytes) - Panorama/graphics file
- **MBUILDER.CAT** (153,770 bytes) - Mission builder catalog (starts `10 00 45 55 52 4F...` = indexed catalog with EURO6MIS.PIC entries)
- **MGRAPHIC.GS2** (7,158 bytes) - Menu graphics
- **MISC.GS2** (980 bytes)
- **FONTS.GS2** (6,110 bytes)
- **LABSLOGO.SS** (12,348 bytes) - Logo
- **REPLAY.PIC** (2,873 bytes)
- Note: GS.GS2 / GS2.GS2 are NOT graphics — they are executables (see Executable Files)

### Cockpit Graphics
- APA_CPIT.PIC (15,517), APA_CPIT.DAT (156), APA_STAT.DAT (80)
- BLK_CPIT.PIC (11,617), BLK_CPIT.DAT (156), BLK_STAT.DAT (80)
- COB_CPIT.PIC (12,758), COB_CPIT.DAT (156), COB_STAT.DAT (80)
- COM_CPIT.PIC (11,115), COM_CPIT.DAT (156), COM_STAT.DAT (80)
- DEF_CPIT.PIC (8,701), DEF_CPIT.DAT (156), DEF_STAT.DAT (80)
- KIA_CPIT.PIC (11,241), KIA_CPIT.DAT (156), KIA_STAT.DAT (80)

### Sound
- ASOUND.GS2 (13,314), ASOUND.GS3 (12,660), ASOUND.GS4 (18,998), ASOUND.LOG (6,120)
- DSOUND.GS2 (13,873)
- ISOUND.GS2 (5,774), ISOUND.GS3 (6,856), ISOUND.GS4 (17,454), ISOUND.LOG (9,536)
- NSOUND.GS2 (864), NSOUND.GS3 (688), NSOUND.GS4 (864)
- RSOUND.GS2 (13,163), RSOUND.GS3 (17,019), RSOUND.GS4 (21,865), RSOUND.LOG (5,481)
- XSOUND.GS4 (140)

## Data Files
- ENEMY.DAT (128 bytes)
- OBJECT.DAT (2,560 bytes)
- OBJDBASE.GS2 (19,658 bytes)
- OBJFILE (226,173 bytes)
- OBJTYPES.DAT (6,210 bytes)
- SHIP.DAT (150 bytes)
- TARGET.BIN (65,493 bytes), TARGET.DAT (310 bytes)
- WEAPON.DAT (480 bytes)
- PATH.DAT (18 bytes)
- SCORE.DAT (70 bytes)
- SWITCHES.DAT (20 bytes)
- WRAPPER.DAT (130 bytes)

## Simulation Files
- APOCOLYP.SIM (3,136)
- BACKALLE.SIM (3,237)
- BATTLEOF.SIM (4,758)
- FROZENGR.SIM (3,136)
- LINEINTH.SIM (3,235)
- RAINOFTE.SIM (3,156)
- SCUDINYO.SIM (3,174)

## Other Files
- ADS.GS2 (9,787)
- PLAYER.GS2 (10,962)
- LABS.GS2 (10,097)
- LASTMISS.RPL (4,268)
- READ.ME (11,776)
- REPLAY (21 bytes)
- SETUP.CD (2,558), SETUP.DAT (38), SETUP.EXE (2,558), SETUP.GS2 (21,687)
- PACK2.CD (2,738)
- GS2KHINT.TXT (22,784)

## Decompilation Status
| File | Status | Notes |
|------|--------|-------|
| GS2000.COM | ANALYZED | Launcher: CD checks, INT21 hook, EXEC of .GS2 subprograms |
| GS.GS2 | ANALYZED | Real exe (mission builder); mzmap: 54 routines; Ghidra: 765 fns → registry/GS_GS2.yaml |
| GS2.GS2 | ANALYZED | Real exe (flight game); mzmap: 25 routines; Ghidra: 165 fns → registry/GS2_GS2.yaml |
| SETUP.GS2 | ANALYZED | Real exe (setup); mzmap: 103 routines; Ghidra: 126 fns → registry/SETUP_GS2.yaml |
| GS2000.DAT | RULED OUT | No MZ headers |
| GS2000.CAT | RULED OUT | MZ byte pairs are garbage |

## Registry (YAML database)
- `registry/<ID>.yaml` per executable: file info (incl. `certainty`), memory blocks,
  entries, functions (addr, name, auto_name, sig, calling convention, status, notes,
  certainty, comment, xrefs), structs, variables, strings
- **`registry/game_knowledge.yaml`** — growing game knowledge base: every claim carries
  `certainty` (confirmed/high/medium/low/hypothesis) + `sources` + `evidence`
- Certainty convention applies to ALL registries (schema documented in
  `scripts/build_registry.py` and game_knowledge.yaml header)
- Built by `scripts/build_registry.py` from Ghidra dumps; re-runs merge
  (human edits preserved: renames, status, notes, certainty, any extra keys)
- Per-function decompiled C: `decompiled/<ID>/<seg_off>.c` (tracked; Phase 3 material)

## Overlay System (reverse-engineered, GS.GS2 — decoded 2026-10-08)

Two distinct directory systems:

### RTLink overlay directory (in-image; file 109,117 = `17D1:0D2D`)
- `u16 count` = **5**, then 5 × **18-byte** records (file 109,123)
- Record = 9 words: `[0]` w0 = load base (LINK paras) | `[1]` w1 = filename ptr
  (all `17D1:0DB8` → file 109,256 = **"GS.EXE"**) | `[2]` w2 = file para of fixup
  table (w2×16 = file offset) | `[3]` **high byte = flags** (rec0-3 = 0x04, rec4 = 0x01
  = "load at startup") | `[4]` w4 = allocated span (paras) | `[5]` w5 = fixup count
  (dwords; table bytes = w5×4) | `[6]` 0xFFFF | `[7]` w7 = id 2..6 | `[8]` w8 = actual
  data size (paras)
- Groups (file): rec0 `[116624,134032)` rec1 `[134032,197088)` rec2 `[197088,221504)`
  rec3 `[221504,238704)` rec4 `[238704,280350)`; fixup counts 536/1312/740/543/279
  (group size = table + pad + w4×16 — arithmetically exact for all 5)
- Loader `FUN_27d1_025c`: opens host file via `FUN_27d1_04e4` (name from w1),
  seeks to w2+ceil(w5/4) paras, reads w8 data paras to **L+w0** (L = PSP+0x10),
  reads w5 fixups, applies `word_at(seg:off) += L` (rec4 fixup targets all seg `0x2896`)
- Memory plan (all link-space, runtime = L+link): image `[0,0x1A79)` = file 8,192–116,616;
  transient arena `[0x1A79,0x2896)` = rec0-3 (share base, loaded on demand via
  `jmp 0:0` call-through thunks); rec4 `[0x2896,0x327B)` = resident-at-startup
- **MZ header relocations**: 2,017 entries @file off 30, entry = **(offset, segment)**
  order, linear = seg×16+off — verified (reloc[0] target word = `00BF` = operand of
  image-start `call 00bf:02c0`); covers lcall segwords (reloc[919] → `0f61:60e` site)
  and the CRT `mov di,0x2b38` immediate (reloc[85]) → **runtime = link + L everywhere,
  no absolute segments** (earlier "absolute" scare = swapped word-order artifact)

### DGROUP initializer = rec4 (file 250608–280350) — SOLVES DGROUP init mystery
- DGROUP link = **0x2B38** (CRT `mov di,0x2b38`, imm relocated); MZ image only spans
  link `[0,0x1A79)` → DGROUP init is NOT at its link file position (185,216 = garbage,
  falls inside rec1 content) — it ships as **overlay rec4**
- rec4 data = file `[239824,280350)`: 10,784-byte gap `[0x2896,0x2B38)` (RTLink far
  ptrs, fixup seg = 0x2896) + **DGROUP `[0x0000,0x742E)` at file 250608 → ends
  EXACTLY at EOF (250608+29742 = 280350)**; rec4 end link `0x2896+0x9E5 = 0x327B`
  = DGROUP:0x742E (byte-exact = where CRT's BSS zero loop begins)
- CRT zeroes only BSS `[0x742E,0xE2A0)`; everything below = rec4 image (confirmed)
- Verified strings (byte-exact): DGROUP `0x0008` "MS Run-Time Library - Copyright (c)
  1990, Microsoft Corp." | `0x07FB` **"GS2000.CAT"** (105-chain, arg to `1741:06ca`) |
  `0x0806` **"GS2000.DAT"** (85 catalog — the `push 0x806; lcall 0f61:060e` arg,
  single call site file 65,521) | `0x0811` **"MISC.GS2"** (`034c` EXEC AX=4B03) |
  `0x6848` **"_C_FILE_INFO="** (13-byte CRT env key) | mission strings OBJECT.DAT/
  TARGET.DAT/DROP OFF/COLLECT/DESTROY/RECON/SCORE.DAT/MISC.GS2/"End of sequence"
- Startup chain (raw disasm verified): entry `17D1:082F` (saves PSP ES/DS @cs:0xb98/9a)
  → `17D1:0878` (bootstrap: `lcall 18D4:1510/1535`, dir count → `17D1:038B`) →
  stack switch via `[17D1:0D23]` → `17D1:08E9` (arena min/max → `0xD05/0xD07`,
  loads rec4) → `ljmp 00BF:0018` (CRT: DOS≥2, DGROUP/SS setup, SETBLOCK, BSS zero,
  `049a` envp / `0308` argv / `0110` → `lcall 0DEA:0006` = main(argc@0x6887,
  argv@0x6889, envp@0x688B))

### Catalog reader (`FUN_1f61_060e` — separate from RTLink)
- Reads file named at DS:0x806 = **"GS2000.DAT"**; format `u16 count` + count×24
  (name[12], ?[4], len u32 @+0x10, off u32 @+0x14) — same as GS2000.CAT (105) /
  MBUILDER.CAT (16); runtime count state at DS:0x8644-0x86C6
- 10-byte thunks at `17D1:0E42..` (51 total, file 109,384–109,884): `call 17D1:05F8`
  (reload-stack push) + `ljmp seg:off` + **`dw rec_id` (0..3, 0xFFFF = resident)** —
  overlay id verified by fixup-seg correlation (e.g. thunk→0x1C07 has id 0 = rec0's
  dominant fixup seg). All 51 ljmp segwords ARE MZ-relocated (+L). Full table with
  target file offsets: **`analysis/overlay_thunks.tsv`** (per-rec entries: 8/16/11/15)
- **rec0-3 classified** via `push offset` → DGROUP string refs (file 250608+off):

  | rec | data file | size B | entries | module (evidence) |
  |-----|-----------|--------|---------|-------------------|
  | rec0 | 118,768 | 15,264 | 8 | campaign/mission-select + replay & duty roster ("You have a campaign %s…", SCENE_%02d.THR, LASTMISS.RPL, "No theaters found") |
  | rec1 | 139,280 | 57,808 | 16 | **mission editor** ("EDITOR.PIC", "Excellent! you may now save this mission", "DELETE DEFENDERS", %sMIS.PIC) |
  | rec2 | 200,048 | 21,456 | 11 | briefing ("BRIEFING", "Enemy air activity is expected…", "CHANGE HELICOPTER", "CALLSIGN:") |
  | rec3 | 223,680 | 15,024 | 15 | debrief + awards/promotions ("AWARD %c%s%c TO %s", "CONGRATULATIONS!…", posthumously, Purple Heart) |

  (entry prologue = MS C: `push bp; mov bp,sp; mov ax,N; lcall 00BF:02C0` = chkstk)

### GS2.GS2 — same scheme, 9 overlays (decoded 2026-10-08)
- Directory @file 38,523 (`cs:[0xb6b]` of entry seg 0x0851): `u16 count`=**9**, words
  `[9][0][96]`, records @38,529 stride 18; **ids 2..10** (GS.GS2 = ids 2..6 — per-file
  numbering from 2); w1 → file 38,789 = **"GS2.GS2"**; 3rd header word 96 = hdr paras
  (GS.GS2's = 36, meaning unknown — low certainty)
- Records (id: w2 file, w4 span, w5 fixups, flags): 2: 40272/724/244/**0x05** | 3: 52832/4096/659/04
  | 4: 121008/978/234/04 (w6=1) | 5: 137600/583/131/04 (w6=1) | 6: 147456/2897/163/04 |
  7: 194464/1246/11/04 | 8: 214448/2534/37/04 | 9: 255152/2529/38/04 |
  10: 295776/8017/289/**0x01** (w8=7315, data < span = BSS tail)
- File layout = `[fixups w5×4, para-padded][data w8×16]` chained record-to-record from image
  end (40,272) to EOF — arithmetic exact for all 8 gaps (last ends 413,984 vs 413,971 actual =
  13-B pad rounding at EOF, same artifact as GS.GS2 rec4)
- Flags: 0x04 = transient, 0x01 = load-at-startup (08e9/dir-walk `flags&1` → loader call),
  **0x05 = both** (id2 — GS.GS2 has no 0x05); loader analog = `call 08d2c` (GS.GS2 = `025c`)
- Arenas = w0 groups, tightly packed with no gaps: `{2,3,6,7}@0x975` (id3's 4096-paras span
  fills whole arena — exclusive), `{4,5}@0x1975`, `{8,9}@0x1D47`, `10@0x272D`
- 10 thunks @38,917–39,016: `call 0851:0529` (file 36,921; saves regs, DS=0851, reads
  trailer via `[bp+2]+5`) + `ljmp w0:off` + `dw idx` (0..7); **idx↔record verified** =
  trailer idx's record w0 == ljmp seg for all 10; per-idx counts 2/2/1/1/1/1/1/1;
  id10 (startup data) has no thunks
- String pool = id10 data @296,944 ↔ runtime 0x272D (DS) — `push`/`mov reg,imm` refs from
  ids 2–9 resolve byte-exact ("THE UPPER-LEFT", "[C] CRT FULL 3D ON", "Permission to fire!")
- id content (preliminary, medium/low): id2 = startup init (CRT `lcall 02A2:0D5E`),
  id3 = 64KB main module (far-calls arena1 internals + resident 0x037F code),
  id4 = settings/options, id5 = input/joystick, id6 = 46KB gameplay UI,
  id8/id9 = combat/comms (shared entry `1D47:AA`), id7 = unknown
- SETUP.GS2 = classic exe (no RTLink strings, image = file exactly) — NOT part of this system
- Open Qs: 3rd header word semantics; w6=1 vs 0xFFFF meaning (id4/id5 only); full id content
  classification; Ghidra `thunk_EXT_FUN_0000_0000` @037F:191a+ (image, distinct from the 10)
- Open Qs (GS.GS2): host filename at runtime ("GS.EXE" string vs actual GS.GS2 on disk),
  `04e4` ".exe"-suffix branch semantics, DS:0x9BF magic

## Tools
- mzretools built at `C:\tools\mzretools\build\Release\` (mzhdr, mzmap, mzdiff, mzsig, mzdup, mzptr, addrtool, psptool, runtest — 42/42 tests pass)
- Maps generated in `analysis/`: GS.map, GS2.map, SETUP.map
- Copies for tools (mzretools exe-spec parser rejects `C:` colons → relative paths used): analysis/GS.exe, GS2.exe, SETUP.exe

## Next Actions
1. Map fixup targets → function data locations for both executables' overlays; seed
   mzretools scans with overlay entry points (`analysis/overlay_thunks.tsv` for GS.GS2;
   GS2.GS2 thunk map above); find call-through thunk patcher
2. Resolve open Qs (GS.GS2 host filename, 04e4 branch, DS:0x9BF; GS2.GS2 3rd header word,
   w6 semantics, id content classification)
3. Grow `registry/game_knowledge.yaml`: add certainty-tagged entries for today's decoded
   structures (MZ reloc order, RTLink record/directory/thunk formats, DGROUP init=rec4,
   string pack, GS2.GS2 scheme); verify user claims against GS2.GS2 flight/UI code; read GS2KHINT.TXT
4. Identify/rename functions in per-executable registries (start SETUP.GS2), Phase 3 cleanup
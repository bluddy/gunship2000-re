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
- **Size**: 413,971 bytes | **MZ image**: ~40,448 (resident) + trailing overlay data
- **Header**: 300 relocs, header=1536 bytes, cs:ip=851:6f8, ss:sp=45fe:800
- **Strings**: aircraft DB ("AH-64A Apache Gunship"), cockpit UI ("[N] Next [F] Fly to.."), "Quit to DOS (Y/N)", sound controls
- **Status**: MAPPED — mzmap found 25 routines/2 segments (resident only)

#### SETUP.GS2 — setup program
- **Size**: 21,687 bytes | **MZ image**: 21,687 (exact — no overlays)
- **Header**: 261 relocs, header=1536 bytes, cs:ip=11d:1e, ss:sp=61b:800, overlay_number=1
- **Strings**: "GUNSHIP 2OOO + ISLANDS & ICE SETUP Version 469.085", "Copyright (c) 1992 by MicroProse Software, Inc."
- **Status**: MAPPED — mzmap found 103 routines/8 segments (full scan)

#### Data containers ruled out
- `GS2000.DAT` (423,292): 0 MZ headers — not an executable container
- `GS2000.CAT` (1,253,543): 28 `MZ` byte pairs, ALL invalid as headers (garbage fields)

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
| GS.GS2 | MAPPED | Real exe (mission builder); mzmap: 54 routines resident |
| GS2.GS2 | MAPPED | Real exe (flight game); mzmap: 25 routines resident |
| SETUP.GS2 | MAPPED | Real exe (setup); mzmap: 103 routines, full scan |
| GS2000.DAT | RULED OUT | No MZ headers |
| GS2000.CAT | RULED OUT | MZ byte pairs are garbage |

## Tools
- mzretools built at `C:\tools\mzretools\build\Release\` (mzhdr, mzmap, mzdiff, mzsig, mzdup, mzptr, addrtool, psptool, runtest — 42/42 tests pass)
- Maps generated in `analysis/`: GS.map, GS2.map, SETUP.map
- Copies for tools (mzretools exe-spec parser rejects `C:` colons → relative paths used): analysis/GS.exe, GS2.exe, SETUP.exe

## Next Actions
1. Load GS.GS2 / GS2.GS2 in Ghidra as 16-bit MZ (Phase 2 static analysis)
2. Improve mzretools coverage: extract overlay far-pointer tables as seed entry points
3. Begin Ghidra → C decompilation (Phase 3), starting with SETUP.GS2 (fully scanned, small)
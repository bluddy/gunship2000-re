# Gunship 2000 File Registry

## Executable Files

### GS2000.COM
- **Size**: 2,738 bytes
- **Format**: DOS COM (16-bit real mode, loads at CS:0100h)
- **Entry Point**: Offset 0x0000 (`mov sp, 0x0804` - stack setup)
- **First Bytes**: `BC 04 08 E8 75 07 CD 21 33 C0 E8 3D 03 ...`
- **Analysis**: **This is a STUB/LOADER, not the real game executable.** Only 2738 bytes - far too small for a full game. It:
  - Sets up stack and DOS environment
  - Checks hardware requirements (286+ CPU, DOS 5+, MSCDEX 2.1+)
  - Performs copy protection checks
  - Loads real game code from GS2000.DAT, GS2000.CAT, or CD-ROM
- **Status**: ANALYZING - need to fully disassemble to find where real code is loaded
- **Priority**: CRITICAL - must understand stub to find real executable
- **Strings Found**: System error messages, CD-ROM paths (`G:\gs\pack2.cd`), file references (`setup.gs2`, `labs.gs2`, `player.gs2`, `ads.gs2`, `gs.gs2`, `gs2.gs2`)

### Real Executable (NOT YET FOUND)
- **Expected format**: 16-bit DOS MZ EXE
- **Expected characteristics**: 16-bit with stack calling + some assembly (per user's assessment)
- **Search locations**: GS2000.DAT, GS2000.CAT, CD-ROM image
- **Action**: Search for `MZ` magic bytes in GS2000.DAT and GS2000.CAT

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
- **GS.GS2** (280,350 bytes) - Main graphics?
- **GS2.GS2** (413,971 bytes) - Main graphics v2?
- **GST.PAN** (682,208 bytes) - Large palette/animation file?
- **MBUILDER.CAT** (153,770 bytes) - Mission builder catalog?
- **MGRAPHIC.GS2** (7,158 bytes) - Menu graphics?
- **MISC.GS2** (980 bytes)
- **FONTS.GS2** (6,110 bytes)
- **LABSLOGO.SS** (12,348 bytes) - Logo?
- **REPLAY.PIC** (2,873 bytes)

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
| GS2000.COM | STUB | 2738-byte DOS loader; real exe not found |
| GS2000.DAT | SEARCH FOR MZ | Search for embedded executable |
| GS2000.CAT | SEARCH FOR MZ | Search for embedded executable |

## Next Actions
1. Fully disassemble GS2000.COM stub to find loading mechanism
2. Search GS2000.DAT and GS2000.CAT for MZ headers
3. Extract real executable
4. Install Ghidra and mzretools
5. Begin Ghidra decompilation of real executable
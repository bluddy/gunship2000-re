# Gunship 2000 Reverse Engineering — Complete Pipeline Documentation

## Overview

Two independent tracks:

| Track | Goal | Method | Status |
|-------|------|--------|--------|
| **Track 1** | Byte-identical rebuilds of original MZ/COM executables | IDA listing → `gen_lst2asm_conf.py` → `lst2asm.py` → UASM → MSC 6.0 LINK.EXE (kvikdos) → `normalize_mz.py` | ✅ GS.exe, GS2.exe, SETUP.exe, ASOUND2 done; remaining sound drivers FROZEN |
| **Track 2** | Per-routine C ports of GS.exe/GS2.exe/SETUP.exe using original MSC 6.0 compiler | C → DOSBox-X MSC 6.0 (`/c /Gs /Fc`) → `.cod` → `extract_routines.py` → `replace_routines.py` → UASM → DOSBox-X LINK.EXE → `mzdiff` (WSL) | ✅ 76 routines ported across 11 segments |

---

## Repository Structure (Key Paths)

```
C:\Users\yotam\projects\gunship_2000\
├── analysis/                    # Original binaries + IDA outputs
│   ├── GS.exe                   # Original GS.exe (116,616 B load module)
│   ├── GS2.exe                  # Original GS2.exe (40,271 B load module)
│   ├── SETUP.exe                # Original SETUP.exe (21,687 B)
│   ├── GS.tgt                   # mzmap segment map for GS.GS2
│   ├── GS2.tgt                  # mzmap segment map for GS2.GS2
│   ├── SETUP.tgt                # mzmap segment map for SETUP.GS2
│   ├── ida/                     # IDA .i64.lst listings (exported from IDA DBs)
│   │   ├── GS.i64.lst
│   │   ├── GS2.i64.lst
│   │   ├── SETUP.i64.lst
│   │   ├── ASOUND2.i64.lst
│   │   └── ...
│   └── ghidra/                  # Ghidra decompiled C (regenerable)
├── decompiled/                  # Ghidra per-function C output
│   ├── GS_GS2/                  # 765 functions from GS.GS2
│   ├── GS2_GS2/                 # Functions from GS2.GS2
│   └── SETUP_GS2/               # Functions from SETUP.GS2
├── src/
│   ├── gs_gs2/
│   │   ├── port/                # Hand-ported C routines (8.3 names)
│   │   │   ├── f10006f2.c
│   │   │   ├── f10bf4dec.c
│   │   │   └── ...
│   │   ├── GS.i64.h             # lst2ch-generated prototypes (276)
│   │   └── GS.i64.c             # lst2ch-generated skeleton
│   ├── gs2_gs2/
│   │   ├── port/
│   │   ├── GS2.i64.h
│   │   └── GS2.i64.c
│   └── setup/
│       ├── port/
│       ├── SETUP.i64.h
│       └── SETUP.i64.c
├── scripts/
│   ├── build_verify.py          # Track 1 driver (GS/GS2/SETUP/ASOUND2)
│   ├── build_track2.py          # Track 2 driver (GS/GS2/SETUP)
│   ├── portcheck_gs.py          # Single-routine Track 2 verify
│   ├── ghidra_dump_to_lst_final.py  # Ghidra → .lst converter
│   ├── gen_lst2asm_conf.py      # Track 1: .lst → asm config
│   ├── lst2asm.py               # Track 1: config → UASM asm
│   ├── normalize_mz.py          # Track 1: bss-tail truncation + fixup
│   ├── replace_routines.py      # Track 2: replace IDA routines with C versions
│   └── extract_routines.py      # Track 2: .cod → asm routines + EXTRN
├── tools/
│   ├── msc6.0/C600/             # MSC 6.0 compiler (mounted as C:\ in DOSBox)
│   │   ├── BIN/CL.EXE, C1.EXE, C2.EXE, C3.EXE
│   │   ├── BINB/LINK.EXE, LIB.EXE
│   │   ├── INCLUDE/ (uppercase .H)
│   │   └── LIB/
│   ├── f19re/mzretools/         # mzmap, mzdiff, mzdup, etc. (build in WSL)
│   └── kvikdos/                 # KVM DOS emulator (LINK.EXE only)
├── game/                        # Original game files
│   ├── manual.txt               # Extracted from manual.pdf
│   └── *.GS2, *.GS3, *.GS4, *.COM, *.EXE
├── gs_gs2.obj                   # UASM output (Track 2)
├── gs_gs2.exe                   # Linked output (Track 2)
└── gunship_build/               # DOSBox-X link output directory
    └── gs_gs2.exe
```

---

## Track 1: Byte-Identical Skeleton Rebuild

### Prerequisites
- IDA Pro with exported `.i64.lst` listings (in `analysis/ida/`)
- UASM (`uasm` in PATH, Linux/WSL)
- kvikdos emulator (`tools/kvikdos/kvikdos`) for LINK.EXE
- MSC 6.0 LINK.EXE at `tools/msc6.0/C600/BINB/LINK.EXE`
- Python venv with dependencies

### Commands

```bash
# Full rebuild of GS.exe (from repo root)
venv\Scripts\python scripts\build_verify.py GS

# Full rebuild of GS2.exe
venv\Scripts\python scripts\build_verify.py GS2

# Full rebuild of SETUP.exe
venv\Scripts\python scripts\build_verify.py SETUP

# Full rebuild of ASOUND2.GS2
venv\Scripts\python scripts\build_verify.py ASOUND2
```

### Pipeline Steps (internal to `build_verify.py`)

1. **IDA Listing → Config**: `gen_lst2asm_conf.py` reads `.i64.lst`, emits `segXXXX.conf`
2. **Config → UASM ASM**: `lst2asm.py` reads config, emits `segXXXX.uasm.asm`
3. **Assemble**: `uasm -0 -q segXXXX.uasm.asm` → `segXXXX.obj`
4. **Link**: kvikdos runs `LINK.EXE @rsp` with `.rsp` response file → `EXE.raw`
5. **Normalize**: `normalize_mz.py` truncates BSS tail, fixes relocation table → `EXE.normalized`
6. **Verify**: Compare `EXE.normalized` vs `analysis/GS.exe` (byte-identical)

### Key Fixes (Documented in state.md)
- **Collapsed functions**: IDA merges identical tails → `gen_lst2asm_conf.py` exports all as separate
- **BSS straddling image end**: BSS extends past load module → `normalize_mz.py` truncates bss tail
- **Relocation table**: Original has 2017 entries; rebuild must match exactly

### Track 1 Expansion (FROZEN)
Remaining sound drivers (ASOUND3/4/L, RSOUND2/3/4/L, MGRAPHIC, LABS, PLAYER, GS2000.COM) hit systematic **IDA DS=FF0 bug**:
- IDA sets DS=0xFF0 for seg000
- Symbolic `ds:word_XXXX` refs assemble with label's seg000 offset (off by 0x100)
- Fix: byte-driven rewrite in `gen_lst2asm_conf.py` to raw-displacement form — **not implemented**
- Findings frozen in `docs/track1_expansion_sound_drivers.md`

---

## Track 2: Per-Routine C Ports (MSC 6.0)

### Prerequisites
- DOSBox-X at `C:\DOSBox-X\dosbox-x.exe`
- MSC 6.0 installed at `tools/msc6.0/C600/` (mounted as `C:\` in DOSBox)
- UASM on Windows (`uasm.exe` in PATH)
- WSL Ubuntu with `mzdiff` built from `tools/f19re/mzretools/`
- Python venv

### DOSBox-X Config (Compilation) — `dosbox_compile.conf`

```ini
[sdl]
fullscreen=false
[dosbox]
machine=svga_s3
memsize=16
[cpu]
core=normal
cputype=386
cycles=max
[mixer]
nosound=true
[autoexec]
mount c tools/msc6.0/C600
c:
path c:\bin;c:\binb
set INCLUDE=c:\include
set LIB=c:\lib
```

### DOSBox-X Config (Linking) — `link_gs_gs2.conf`

```ini
[sdl]
fullscreen=false
[dosbox]
machine=svga_s3
memsize=16
[cpu]
core=normal
cputype=386
cycles=max
[mixer]
nosound=true
[autoexec]
mount c tools/msc6.0/C600
mount d C:/Users/yotam/gunship_build
d:
C:\BINB\LINK.EXE @D:\gs_gs2.rsp
exit
```

### MSC 6.0 Compile Command (Generated by `build_track2.py`)

```bat
bin\cl /c /Gs /Fc<name> /Ic:\include <file.c>
```
- `/c` = compile only (no link)
- `/Gs` = no stack probes
- `/Fc` = generate `.cod` listing
- Output: `.obj` + `.cod` (8.3 names)

### Full Track 2 Command

```bash
# From repo root (PowerShell)
venv\Scripts\python scripts\build_track2.py gs_gs2 --c-dir src\gs_gs2\port --routines f10006f2 f10b02ba f10bf4dec f10bf4df1 ...
```

### Pipeline Steps (internal to `build_track2.py`)

1. **Write batch file** (`compile.bat`) with all `.c` files (8.3 names)
2. **DOSBox-X compile**: Runs MSC 6.0 CL.EXE → `.obj` + `.cod` files in `tools/msc6.0/C600/`
3. **Extract routines**: `extract_routines.py` parses `.cod` → per-routine `.asm` files + auto-generates `EXTRN` for `FAR PTR` calls
4. **Replace routines**: `replace_routines.py` reads IDA `.asm` (from `analysis/ida/*.uasm.lst`), replaces target routines with C versions → `gs_gs2_hybrid.asm`
5. **Assemble**: `uasm -0 -q gs_gs2_hybrid.asm` → `gs_gs2.obj`
6. **Link**: DOSBox-X runs `LINK.EXE @gs_gs2.rsp` → `gunship_build/gs_gs2.exe`
7. **Verify**: `mzdiff` in WSL compares `analysis/GS.exe` vs `gunship_build/gs_gs2.exe`

### mzdiff Path Conversion (WSL)

```python
ref_path_wsl = ref_path.replace('C:', '/mnt/c').replace('\\', '/')
out_path_wsl = out_path.replace('C:', '/mnt/c').replace('\\', '/')
subprocess.run(['mzdiff', ref_path_wsl, out_path_wsl], cwd='/mnt/c/Users/yotam/projects/gunship_2000')
```

### MSC 6.0 C Syntax Rules (CRITICAL)

| Forbidden | Use Instead |
|-----------|-------------|
| `byte` | `unsigned char` |
| `uint` / `dword` | `unsigned int` / `unsigned long` |
| `EXTRN name:FAR` in C | `extern void _far name(void);` |
| `_FLAG_CF` | `_getflags() & 1` (intrinsic) |
| `in(port)` | `_inportb(port)` from `<dos.h>` |

### 8.3 Naming Convention

All C source files in `src/gs_gs2/port/` **MUST** use unique 8.3 prefixes:

| Original | 8.3 Source File |
|----------|-----------------|
| `FUN_1000_06f2` | `f10006f2.c` |
| `FUN_10bf_02ba` | `f10b02ba.c` |
| `FUN_10bf_4dec` | `f10bf4dec.c` |
| `FUN_165c_1582` | `f165c1582.c` |
| `FUN_20bc_000a` | `f20bc000a.c` |
| `FUN_1d02_02d0` | `f1d0202d0.c` |
| `FUN_1dea_0e86` | `f1dea0e86.c` |

**Collision avoidance**: Prefix = first 4 hex of segment + first 4 hex of offset (e.g., `10bf` + `4dec` → `f10bf4dec`)

### Common External Symbols (Declare as `extern void _far`)

```c
extern void _far FUN_10bf_02c0(void);           // Common init
extern void _far FUN_10bf_05c8(void);           // Error handler
extern void _far FUN_10bf_1ad2(int, unsigned short);
extern void _far FUN_10bf_2c3a(unsigned short, unsigned short, unsigned short);
extern void _far FUN_10bf_2c0e(unsigned short, unsigned short, unsigned short);
extern void _far FUN_10bf_2e03(unsigned short, unsigned short, unsigned short, unsigned short *);
extern void _far FUN_10bf_32d7(void);
extern void _far FUN_10bf_34d3(void);
extern void _far FUN_10bf_3508(void);
extern void _far FUN_10bf_42a0(void);
extern void _far FUN_10bf_4bb8(void);
extern void _far FUN_10bf_4f50(void);
extern void _far FUN_10bf_5035(void);
extern void _far FUN_10bf_5726(unsigned short, unsigned short, unsigned short);
extern void _far FUN_1c87_0578(unsigned short, unsigned short);
extern void _far FUN_1d02_0d46(unsigned short, unsigned short, unsigned short, unsigned short);
extern void _far FUN_2092_0024(unsigned short *);
extern void _far FUN_20bc_0036(unsigned short, unsigned short);
extern void _far FUN_21d6(unsigned short, unsigned short);
extern void _far FUN_2351_00d2(void);
extern void _far FUN_24e6_088a(unsigned short, unsigned short, unsigned short);
extern void _far FUN_2741_0670(unsigned short);
extern void _far thunk_EXT_FUN_0000_0000(unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short, unsigned short);
extern unsigned char byte_6A97[];               // Table at 0x6A97
extern unsigned char byte_709E[];               // Flags at 0x709E
extern unsigned char byte_7146[];               // Flag at 0x7146
extern int *word_6EA8[];                        // Pointer at 0x6EA8
```

### Memory Access Patterns

```c
// Direct memory access (far pointers)
*(unsigned short *)0x6ba0 = param_1;
*(unsigned short *)0x6ba2 = 0;
return (int)*(char *)(param_1 - 0x4a30);

// Segment:offset not needed in C — flat 20-bit addressing via far pointers
```

### Verifying a Single Routine

```bash
venv\Scripts\python scripts\portcheck_gs.py f10bf4dec
```

---

## Key Scripts Reference

| Script | Purpose | Track |
|--------|---------|-------|
| `build_verify.py` | Full Track 1 rebuild (GS/GS2/SETUP/ASOUND2) | 1 |
| `build_track2.py` | Full Track 2 pipeline (compile→extract→replace→assemble→link→mzdiff) | 2 |
| `portcheck_gs.py` | Single-routine Track 2 verify | 2 |
| `gen_lst2asm_conf.py` | IDA .lst → asm config (segment, routines, externs) | 1 |
| `lst2asm.py` | Config → UASM .asm | 1 |
| `normalize_mz.py` | BSS truncation, relocation fixup | 1 |
| `extract_routines.py` | MSC `.cod` → per-routine .asm + EXTRN | 2 |
| `replace_routines.py` | Hybrid asm: IDA + C replacements | 2 |
| `ghidra_dump_to_lst_final.py` | Ghidra dump → mzretools .lst | Both |
| `mzdiff` (WSL) | Instruction-stream diff with data-layout mapping | 2 |

---

## Environment Variables / Paths

| Variable | Value |
|----------|-------|
| Repo root | `C:\Users\yotam\projects\gunship_2000` |
| MSC 6.0 root | `C:\Users\yotam\projects\gunship_2000\tools\msc6.0\C600` |
| DOSBox-X exe | `C:\DOSBox-X\dosbox-x.exe` |
| UASM | `uasm` (WSL) / `uasm.exe` (Windows PATH) |
| kvikdos | `tools/kvikdos/kvikdos` (WSL) |
| mzdiff | `/mnt/c/Users/yotam/projects/gunship_2000/tools/f19re/mzretools/build/mzdiff` (WSL) |
| Build output | `C:\Users\yotam\gunship_build\` (mounted as `D:\` in DOSBox link) |
| Python venv | `C:\Users\yotam\projects\gunship_2000\venv\Scripts\python` |

---

## Troubleshooting

| Error | Fix |
|-------|-----|
| `_FLAG_CF` undefined | Use `_getflags() & 1` |
| `in(port)` undefined | Include `<dos.h>`, use `_inportb(port)` |
| `EXTRN` syntax error | Use `extern void _far name(void);` in C |
| `byte`/`uint` unknown | Use `unsigned char`/`unsigned int` |
| DOSBox CL.EXE fails "BC1.EXE" | Use DOSBox-X for compile; kvikdos only for LINK.EXE |
| 8.3 collision (same prefix) | Add unique segment+offset prefix (e.g., `f10bf4dec`) |
| mzdiff "segment 0x0000 not found" | Expected — far calls to segment 0 not in map; ignore |
| Link fails "unresolved external" | Add `extern` declaration for the missing far function |
| UASM "symbol already defined" | Check `replace_routines.py` didn't duplicate routine |

---

## Next Steps for Future Agents

1. **Track 2**: Continue porting leaf functions from `decompiled/GS_GS2/` (prioritize <300 bytes, no loops, few calls)
2. **External resolution**: When `mzdiff` shows far-call target mismatches, add missing `extern` declarations
3. **Segment layout**: Full binary match requires matching segment layout (advanced — postpone)
4. **Track 1**: If resuming sound drivers, fix IDA DS=FF0 bug in `gen_lst2asm_conf.py` (byte-driven raw displacement)

---

## Version / Date

- Document created: 2026-10-11
- Pipeline status: Track 1 (4/8 done, 4 FROZEN), Track 2 (76 routines, pipeline WORKING)
- Last verified commit: `ff26032`
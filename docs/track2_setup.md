# Track 2 Setup — MSC 6.0 Compilation under DOSBox-X (2026-10-10)

## Critical Gotchas (READ FIRST)

### 8.3 Filename Limitation
**All source files, batch files, and object files MUST use 8.3 DOS naming convention (≤8 chars name + ≤3 chars ext).**
- `compile_test.bat` → `COMPIL~1.BAT` (broken)
- `test_compile.c` → `TEST_C~1.C` (broken)
- **Use**: `c.bat`, `t.c`, `t.obj`, `t.exe`
- This affects every file passed to CL.EXE, LINK.EXE, and batch scripts

### Source File Encoding
**MSC 6.0 only accepts ASCII (no UTF-8 BOM, no UTF-16).**
- PowerShell `>` and `Set-Content` default to UTF-16 LE (starts with `0xFF 0xFE`)
- Use: `Set-Content -Encoding ASCII` or write files via DOSBox editor

### DOSBox-X Config (Working)
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
mount c tools\msc6.0\C600
c:
path c:\bin;c:\binb
set INCLUDE=c:\include
set LIB=c:\lib
```

### MSC 6.0 Layout (tools/msc6.0/C600/)
```
C:\
  BIN\      CL.EXE, C1.EXE, C2.EXE, C3.EXE
  BINB\     LINK.EXE, LIB.EXE, ILINK.EXE
  INCLUDE\  STDIO.H, etc. (uppercase .H)
  LIB\      SLIBC.LIB, etc.
```

### Compile Command (Working)
```bat
@echo off
path c:\bin;c:\binb
set INCLUDE=c:\include
set LIB=c:\lib
bin\cl /c /Ic:\include t.c > compile.log
echo EXIT_CODE=%ERRORLEVEL%
```
- `/c` = compile only (no link), produces `t.obj`
- Without `/c`, CL tries to link and prompts interactively for linker inputs
- Redirect output with `> compile.log` (8.3 name)

### Verification
```bash
# From repo root:
& "C:\DOSBox-X\dosbox-x.exe" -exit -conf dosbox_test_batch.conf
# Check tools/msc6.0/C600/compile.log for results
# Check tools/msc6.0/C600/t.obj exists (298 bytes for minimal test)
```

## Next Steps for Track 2

1. **lst2ch.py** — Convert IDA listing to C skeleton:
   ```bash
   python tools/f19re/mzretools/tools/lst2ch.py analysis/ida/GS.i64.lst src/gs_gs2 tools/f19re/conf/gs_gs2.json
   # Produces src/gs_gs2/GS.c + GS.h
   ```

2. **Port routines** — Edit `src/gs_gs2/GS.c`, keep 8.3 names for source files

3. **Portcheck loop** — Build `scripts/portcheck_gs.py` to:
   - Compile C with DOSBox-X (using 8.3 source names)
   - Extract routine asm from `/Fc` listing
   - Replace in IDA listing via `replace_routines.py`
   - Assemble + link → mzdiff vs original

4. **First routine candidate** — Pick small leaf function from `analysis/GS.map` / `registry/GS_GS2.yaml`
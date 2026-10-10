#!/bin/bash
# Link GS.obj with the original MSC 6.0 LINK.EXE under kvikdos.
set -e
KVIKDOS="$HOME/projects/gunship2000-re/tools/f19re/mzretools/tools/emulators/kvikdos/kvikdos"
MSC="$HOME/projects/gunship2000-re/tools/msc6.0/C600"
BUILD="$HOME/gunship_build"
SRC="/mnt/c/Users/yotam/projects/gunship_2000"

uasm -q -e1000 -Fo "$BUILD/GS.obj" "$SRC/analysis/ida/GS.asm"
echo "uasm exit: $?"

cat > "$BUILD/GS.rsp" << 'EOF'
D:\GS.obj
D:\GS.exe
D:\GS.map
;
EOF

"$KVIKDOS" \
    --hlt-ok \
    "--mount=C:$MSC/" \
    "--mount=D:$BUILD/" \
    --drive=d \
    --cwd-dos='D:\\' \
    "--path-dos=C:\\BINB;C:\\BIN" \
    "--env=PATH=C:\\BINB;C:\\BIN" \
    "--env=LIB=C:\\LIB" \
    "--env=INCLUDE=C:\\INCLUDE" \
    "--env=TMP=D:\\" \
    "C:\\BINB\\LINK.EXE" "@D:\\GS.rsp"
echo "kvikdos exit: $?"
ls -la "$BUILD"

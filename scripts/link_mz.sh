#!/bin/bash
# Assemble + link a reconstruction: UASM + original MSC 6.0 LINK.EXE (kvikdos).
# Usage: link_mz.sh NAME
#   Expects $SRC/analysis/ida/NAME.asm (produced by lst2asm) and writes
#   $HOME/gunship_build/NAME.{obj,exe,map,rsp}.
set -e
NAME="${1:-GS}"
SRC="$(cd "$(dirname "$0")/.." && pwd)"
KVIKDOS="$HOME/projects/gunship2000-re/tools/f19re/mzretools/tools/emulators/kvikdos/kvikdos"
MSC="$HOME/projects/gunship2000-re/tools/msc6.0/C600"
BUILD="$HOME/gunship_build"
mkdir -p "$BUILD"

uasm -q -e1000 -Fo "$BUILD/$NAME.obj" "$SRC/analysis/ida/$NAME.asm"
echo "uasm exit: $?"

cat > "$BUILD/$NAME.rsp" << EOF
D:\\$NAME.obj
D:\\$NAME.exe
D:\\$NAME.map
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
    "C:\\BINB\\LINK.EXE" "@D:\\$NAME.rsp"
echo "kvikdos exit: $?"
ls -la "$BUILD/$NAME".*

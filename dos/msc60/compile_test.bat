@echo off
cl test.c > compile.log 2>&1
echo COMPILE_EXIT_CODE=%ERRORLEVEL% >> compile.log
dir test.* >> compile.log

@echo off
cl hello.c > compile.log 2>&1
echo COMPILE_EXIT=%ERRORLEVEL% >> compile.log
if exist hello.exe (
    hello.exe >> run.log 2>&1
    echo RUN_EXIT=%ERRORLEVEL% >> run.log
) else (
    echo NO_EXE >> run.log
)

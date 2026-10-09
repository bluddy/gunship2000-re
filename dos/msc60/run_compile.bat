@echo off
echo Starting compilation...
cl test.c 2>&1
echo EXIT_CODE=%ERRORLEVEL%
dir test.*

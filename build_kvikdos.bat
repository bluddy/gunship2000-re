@echo off
call "C:\Program Files\Microsoft Visual Studio\2022\Community\VC\Auxiliary\Build\vcvarsall.bat" x86
cd /d C:\Users\yotam\projects\gunship_2000\tools\f19re\mzretools\tools\emulators\kvikdos
cl /O2 kvikdos.c
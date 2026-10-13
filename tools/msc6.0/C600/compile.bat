@echo off
echo BATCH_START
dir bin\cl.exe
ver
bin\cl /c /Gs /FcF12A2001 /Ic:\include F12A2001.C F12A200E.C F12A2010.C
echo CL_RAN
dir *.COD
dir *.OBJ
echo BATCH_END

echo off
echo Microsoft (R) C Optimizing Compiler--Supplemental Tools SETUP
echo Copyright (c) Microsoft Corporation 1991.  All rights reserved.
ECHO 

REM check for empty command line
IF "%1"=="" GOTO USAGE

REM Send note on amount of disk space required
ECHO Installation requires 1.7Mb hard disk space.   
ECHO Press CTRL+C to exit SETUP and check.  To continue, 
PAUSE
ECHO 

REM validate compiler path and decompress
COPY readme.doc %1\readme.doc
IF EXIST %1\readme.doc GOTO COMPCHK
ECHO WARNING:  %1 does not exist. Press CTRL+C to exit SETUP, 
ECHO If you want SETUP to create the directory,
PAUSE 
mkdir %1
copy readme.doc %1\readme.doc
ECHO 

REM Check to see if there is already a compiler there...
:COMPCHK
IF NOT EXIST %1\CL.EXE GOTO COMPINST
ECHO WARNING: There is already a compiler installed in %1 
ECHO Press CTRL+C to exit SETUP.  Continuing will overwrite the 
ECHO compiler files in %1.  
PAUSE
ECHO Are you sure?
PAUSE
del %1\cl.exe
del %1\c1l.exe
del %1\c2l.exe
del %1\c3l.exe

:COMPINST
decomp cl.ex$ %1\cl.exe
IF ERRORLEVEL 3 GOTO DISKERR 
decomp c1L.ex$ %1\c1l.exe 
IF ERRORLEVEL 3 GOTO DISKERR 
decomp c2l.ex$ %1\c2l.exe 
IF ERRORLEVEL 3 GOTO DISKERR 
decomp c3l.ex$ %1\c3l.exe 
IF ERRORLEVEL 3 GOTO DISKERR 
ECHO  
ECHO Microsoft C Optimizing Compiler, Version 6.00AX is now 
ECHO installed in: %1 
ECHO Please see README.DOC for additional details.  
ECHO  

REM Check to see if they want CVW305 installed- else goto THEEND 
IF "%2"=="" GOTO THEEND 

rem validate CVW path and decompress 
COPY readme.doc %2\readme.doc 
IF EXIST %2\readme.doc GOTO CVWCHK 
ECHO WARNING:  %2 does not exist. Press CTRL+C to exit SETUP, 
ECHO If you want SETUP to create the directory, 
PAUSE 
mkdir %2 
copy readme.doc %2\readme.doc 
ECHO 

REM Check to see if there is already a CVW there...
:CVWCHK
IF NOT EXIST %2\CVW.EXE GOTO CVWINST
ECHO WARNING: There is already a CodeView installed in %2 
ECHO Press CTRL+C to exit SETUP.  Continuing will overwrite the 
ECHO CodeView files in %2.  
PAUSE
ECHO Are you sure?
PAUSE
del %2\cvw.exe
del %2\CV.HLP
del %2\VCV.386

:CVWINST
decomp cvw.ex$ %2\cvw.exe
IF ERRORLEVEL 3 GOTO DISKERR 
decomp cv.hl$ %2\cv.hlp
IF ERRORLEVEL 3 GOTO DISKERR 
decomp vcv.38$ %2\vcv.386
IF ERRORLEVEL 3 GOTO DISKERR 
ECHO 
ECHO Microsoft CodeView for Windows, version 3.05 is now
ECHO installed in: %2
ECHO Please see README.DOC for additional details.
GOTO THEEND

:DISKERR
ECHO Error: Could not create output file.  Please check to make sure
ECHO        you are using a valid directory name.
ECHO 


:USAGE
ECHO usage:
Echo       setup compiler-directory [CVW-directory]
ECHO       Where:
ECHO         compiler-directory: the path where you want the DOS-extended
ECHO                             compiler to be placed
ECHO         CVW-directory: the path where you want the single-monitor
ECHO                            version of Microsoft CodeView for Windows
ECHO                            to be placed.
ECHO       Example:  SETUP c:\msc\c600ax c:\msc\cvw305
ECHO              Will install the compiler in C:\MSC\C600AX directory
ECHO              and CodeView for Windows in C:\MSC\CV305 directory
ECHO 
ECHO       Note: Individual files can be installed by using the decompression
ECHO             Utility-- DECOMP.EXE (See README.DOC for details)

:THEEND

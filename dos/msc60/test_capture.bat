@echo off
echo Hello from test > test_output.txt 2>&1
ver >> test_output.txt 2>&1
dir c:\bin >> test_output.txt 2>&1
cl /? >> test_output.txt 2>&1
echo DONE >> test_output.txt

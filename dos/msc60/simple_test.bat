@echo off
echo Hello from MSC 6.0 > output.txt
ver >> output.txt
cl /? >> output.txt 2>&1
echo DONE >> output.txt

@echo off
ver > ver_output.txt
dir c:\bin >> ver_output.txt
cl /? >> cl_help.txt 2>&1

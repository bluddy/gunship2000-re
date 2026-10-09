# Batch process all overlay slices
$overlays = @(
    @{id="GS_OVL0"; src="GS.GS2"; base=0x2A790},
    @{id="GS_OVL1"; src="GS.GS2"; base=0x2A790},
    @{id="GS_OVL2"; src="GS.GS2"; base=0x2A790},
    @{id="GS_OVL3"; src="GS.GS2"; base=0x2A790},
    @{id="GS2_ID2"; src="GS2.GS2"; base=0x19750},
    @{id="GS2_ID3"; src="GS2.GS2"; base=0x19750},
    @{id="GS2_ID4"; src="GS2.GS2"; base=0x29750},
    @{id="GS2_ID5"; src="GS2.GS2"; base=0x29750},
    @{id="GS2_ID6"; src="GS2.GS2"; base=0x19750},
    @{id="GS2_ID7"; src="GS2.GS2"; base=0x19750},
    @{id="GS2_ID8"; src="GS2.GS2"; base=0x2D470},
    @{id="GS2_ID9"; src="GS2.GS2"; base=0x2D470}
}

$ghidra = "C:\tools\ghidra\ghidra_12.0_DEV\support\analyzeHeadless.bat"
$projDir = "ghidra_proj"
$projName = "Gunship"
$scriptPath = "scripts_clean"
$postScript = "DumpProgram.java"

foreach ($ov in $overlays) {
    $id = $ov.id
    $src = $ov.src
    $base = $ov.base
    $bin = "analysis\overlays\$id.bin"
    $dump = "analysis\ghidra\$id.txt"
    
    Write-Host "=== Processing $id ($src) at base 0x$([Convert]::ToString($base, 16)) ==="
    
    # Import + analyze
    & "C:\tools\ghidra\ghidra_12.0_DEV\support\analyzeHeadless.bat" $projDir $projName -import "analysis\overlays\$id.bin" -overwrite -loader BinaryLoader -loader-baseAddr "0x$([Convert]::ToString($base, 16))" -processor "x86:LE:16:Real Mode" -cspec default 2>&1 | Select-String 'Import|Analy|Report|Saved|error' | Select-Object -Last 5 | ForEach-Object { $_.Line }
    
    # Dump functions
    & "C:\tools\ghidra\ghidra_12.0_DEV\support\analyzeHeadless.bat" $projDir $projName -process "$id.bin" -scriptPath scripts_clean -postScript DumpProgram.java "analysis\ghidra\$id.txt" 2>&1 | Select-String 'Dumped|SCRIPT ERROR|error:' | ForEach-Object { $_.Line }
    
    # Build registry
    & ".\venv\Scripts\python.exe" scripts\build_registry.py "analysis\ghidra\$id.txt" --source $src --id $id
    
    Write-Host "Done $id`n"
}
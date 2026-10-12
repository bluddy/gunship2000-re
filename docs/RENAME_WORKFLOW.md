# Rename Workflow — Function, Struct, Variable, Global

## Overview

The codebase uses auto-generated names (`FUN_10bf_02c0`, `0x6a97`, `undefined1`) from Ghidra. As we identify domain logic, we rename them to meaningful names (`common_init`, `byte_6A97[]`). This is done via **mapping-driven search-and-replace** across all target files.

## Files Involved

| File | Purpose |
|------|---------|
| `registry/GS_GS2.yaml` | Master registry: 765 functions, structs, variables, strings |
| `src/gs_gs2/name_map.yaml` | Generated: addr -> name mapping (765 entries) |
| `src/gs_gs2/port/*.c` | Hand-ported C files (88 files) |
| `decompiled/GS_GS2/*.c` | Ghidra decompiled C (765 files) |
| `src/gs_gs2/GS.i64.h/.c` | lst2ch-generated skeleton |
| `scripts/gen_name_map.py` | Reads registry -> name_map.yaml |
| `scripts/rename_all.py` | Applies name_map.yaml to all targets |

## Workflow

### 1. Identify a function
Edit `registry/GS_GS2.yaml`:
```yaml
- addr: "10bf:02c0"
  name: "common_init"
  status: "identified"
  certainty: "confirmed"
  description: "Common initialization entry point"
  sources: [ghidra, binary]
```

### 2. Add struct/variable/global
```yaml
structs:
- name: "MissionState"
  fields:
    - { name: "score", offset: 0, type: "int" }
    - { name: "targets", offset: 4, type: "int" }
variables:
- name: "byte_6A97"
  addr: "6a97"
  type: "byte[64]"
  description: "Terrain type lookup table"
globals:
- name: "word_6EA8"
  addr: "6ea8"
  type: "int*"
  description: "Active entity pointer"
```

### 3. Regenerate mapping
```
python scripts/gen_name_map.py
```

### 4. Apply renames
```
python scripts/rename_all.py --apply
```

### 5. Verify
```
venv\Scripts\python scripts\build_track2.py gs_gs2 --c-dir src\gs_gs2\port --routines ...
```

## Naming Conventions

| Type | Pattern | Example |
|------|---------|---------|
| Function | `verb_noun` | `common_init`, `render_loop`, `project_coords` |
| Struct | `PascalCase` | `MissionState`, `EntitySlot` |
| Variable | `snake_case` | `byte_6A97`, `word_6EA8` |
| Global | `snake_case` | `byte_6A97`, `word_6EA8` |

## Certainty Levels

| Level | Meaning |
|-------|---------|
| `confirmed` | Proven by binary/behavioral evidence |
| `high` | Strongly supported, not directly verified |
| `medium` | Likely; partial evidence |
| `low` | Weak indication / guess |
| `hypothesis` | Untested assumption |

## Sources

| Source | Meaning |
|--------|---------|
| `binary` | Direct binary analysis |
| `ghidra` | Ghidra decompilation |
| `mzretools` | mzmap/mzdiff analysis |
| `hints` | GS2KHINT.TXT or manual |
| `launcher` | GS2000.COM launcher analysis |
| `docs` | Documentation / README |

## Status

- 12 functions identified (high certainty)
- 47 functions renamed across port, decompiled, registry
- Structs: 0 (pending)
- Variables: 0 (pending)
- Globals: 0 (pending)
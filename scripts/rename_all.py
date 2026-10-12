#!/usr/bin/env python3
"""Apply name mapping across all target files via search-and-replace.

Reads src/gs_gs2/name_map.yaml and renames:
  - Function names in src/gs_gs2/port/*.c
  - Function names in src/gs_gs2/GS.i64.h/.c
  - Function names in decompiled/GS_GS2/*.c
  - Registry entries in registry/GS_GS2.yaml

Usage:
    python scripts/rename_all.py [--dry-run]
    python scripts/rename_all.py --apply
"""

import yaml
import os
import sys
import re
import glob

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
NAME_MAP = os.path.join(REPO, 'src', 'gs_gs2', 'name_map.yaml')
REGISTRY = os.path.join(REPO, 'registry', 'GS_GS2.yaml')
PORT_DIR = os.path.join(REPO, 'src', 'gs_gs2', 'port')
SKELETON_DIR = os.path.join(REPO, 'src', 'gs_gs2')
DECOMPILED_DIR = os.path.join(REPO, 'decompiled', 'GS_GS2')

def addr_to_fun_name(addr):
    """Convert '10bf:02c0' -> 'FUN_10bf_02c0' (lowercase, as used in C source)."""
    seg, off = addr.split(':')
    return f'FUN_{seg}_{off}'

def load_mapping():
    """Return list of (old_name, new_name) pairs, longest old_name first."""
    with open(NAME_MAP) as f:
        data = yaml.safe_load(f)
    funcs = data.get('functions', {})
    pairs = []
    for addr, info in funcs.items():
        old = addr_to_fun_name(addr)
        new = info.get('name', old)
        if old != new:
            pairs.append((old, new))
    # Sort by length desc to avoid partial matches (e.g. FUN_10bf_02c0 before FUN_10bf_02c)
    return sorted(pairs, key=lambda x: len(x[0]), reverse=True)

def rename_in_text(text, mapping):
    for old, new in mapping:
        text = re.sub(r'\b' + re.escape(old) + r'\b', new, text)
    return text

def rename_in_file(path, mapping, dry_run=True):
    with open(path) as f:
        original = f.read()
    new = rename_in_text(original, mapping)
    if new != original:
        if not dry_run:
            with open(path, 'w') as f:
                f.write(new)
        return True
    return False

def main():
    dry_run = '--apply' not in sys.argv
    if dry_run:
        print('DRY RUN (use --apply to write changes)')

    mapping = load_mapping()
    print(f'Loaded {len(mapping)} name mappings')

    # 1. Rename in port C files
    port_files = sorted(glob.glob(os.path.join(PORT_DIR, '*.c')))
    changed = 0
    for pf in port_files:
        if rename_in_file(pf, mapping, dry_run):
            changed += 1
            print(f'  Would rename: {os.path.basename(pf)}')
    print(f'Port files: {changed}/{len(port_files)} would change')

    # 2. Rename in skeleton files (GS.i64.h, GS.i64.c)
    skeleton_files = sorted(glob.glob(os.path.join(SKELETON_DIR, 'GS.i64.*')))
    changed = 0
    for sf in skeleton_files:
        if rename_in_file(sf, mapping, dry_run):
            changed += 1
            print(f'  Would rename: {os.path.basename(sf)}')
    print(f'Skeleton files: {changed}/{len(skeleton_files)} would change')

    # 3. Rename in decompiled C files
    decomp_files = sorted(glob.glob(os.path.join(DECOMPILED_DIR, '*.c')))
    changed = 0
    for df in decomp_files:
        if rename_in_file(df, mapping, dry_run):
            changed += 1
            print(f'  Would rename: {os.path.basename(df)}')
    print(f'Decompiled files: {changed}/{len(decomp_files)} would change')

    # 4. Rename in registry
    changed = 0
    if rename_in_file(REGISTRY, mapping, dry_run):
        changed += 1
        print(f'  Would rename: registry/GS_GS2.yaml')
    print(f'Registry: {changed}/1 would change')

    return 0

if __name__ == '__main__':
    sys.exit(main())
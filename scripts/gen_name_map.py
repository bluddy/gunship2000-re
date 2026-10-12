#!/usr/bin/env python3
"""Generate function/global name mapping from registry + analysis.

Reads registry/GS_GS2.yaml, extracts identified functions with their
meaningful names, and emits a mapping file (addr -> name) for use
with rename_all.py.

Usage:
    python scripts/gen_name_map.py
    # Produces: src/gs_gs2/name_map.yaml
"""

import yaml
import os
import sys

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REGISTRY = os.path.join(REPO, 'registry', 'GS_GS2.yaml')
OUTPUT = os.path.join(REPO, 'src', 'gs_gs2', 'name_map.yaml')

def main():
    with open(REGISTRY) as f:
        data = yaml.safe_load(f)

    funcs = data.get('functions', [])
    identified = [f for f in funcs if f.get('status') == 'identified']

    if not identified:
        print('No identified functions found in registry')
        return 1

    # Build mapping: addr -> name
    mapping = {}
    for f in identified:
        addr = f['addr']
        name = f['name']
        mapping[addr] = {
            'name': name,
            'description': f.get('description', ''),
            'certainty': f.get('certainty', 'high'),
        }

    # Also include the auto-generated FUN_XXXX names for all functions
    # so we can map them too (for the skeleton files)
    for f in funcs:
        addr = f['addr']
        if addr not in mapping:
            mapping[addr] = {
                'name': f['name'],  # Keep FUN_XXXX for unrenamed
                'description': '',
                'certainty': f.get('certainty', 'unidentified'),
            }

    out = {
        '_comment': 'Auto-generated name mapping for GS.GS2 functions. addr -> name.',
        'functions': mapping,
    }

    with open(OUTPUT, 'w') as f:
        yaml.dump(out, f, default_flow_style=False, sort_keys=True)

    print(f'Wrote {OUTPUT}: {len(mapping)} functions mapped ({len(identified)} identified)')
    return 0

if __name__ == '__main__':
    sys.exit(main())
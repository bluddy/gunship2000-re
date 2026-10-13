#!/usr/bin/env python3
"""Generate name mapping for GS2.GS2 from registry."""

import yaml
import os
import sys

REPO = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
REGISTRY = os.path.join(REPO, 'registry', 'GS2_GS2.yaml')
OUTPUT = os.path.join(REPO, 'src', 'gs2_gs2', 'name_map.yaml')

def addr_to_fun_name(addr):
    seg, off = addr.split(':')
    return f'FUN_{seg}_{off}'

def main():
    with open(REGISTRY) as f:
        data = yaml.safe_load(f)

    funcs = data.get('functions', [])
    identified = [f for f in funcs if f.get('status') == 'identified']

    # Build mapping: addr -> name
    mapping = {}
    for f in funcs:
        addr = f['addr']
        name = f['name']
        mapping[addr] = {
            'name': name,
            'description': f.get('description', ''),
            'certainty': f.get('certainty', 'unidentified'),
        }

    out = {
        '_comment': 'Auto-generated name mapping for GS2.GS2 functions. addr -> name.',
        'functions': mapping,
    }

    with open(OUTPUT, 'w') as f:
        yaml.dump(out, f, default_flow_style=False, sort_keys=True)

    print(f'Wrote {OUTPUT}: {len(mapping)} functions mapped ({len(identified)} identified)')
    return 0

if __name__ == '__main__':
    sys.exit(main())
#!/usr/bin/env python3
"""One-command rebuild + verification of a GS2000 binary from its IDA listing.

    venv\\Scripts\\python scripts\\build_verify.py GS [--skip-link] [--skip-gen]

Pipeline (all steps parameterized per target):
  1. gen_lst2asm_conf.py  - byte-driven lst2asm config (encoding fixes)
  2. lst2asm.py           - IDA listing -> UASM .asm
  3. link_mz.sh (WSL)     - UASM assemble + MSC 6.0 LINK.EXE under kvikdos
  4. copy build outputs back to analysis/ida/<NAME>_rebuilt.{exe,map}
  5. diff_bytes.py        - load-module byte comparison (exit 1 while WIP)
  6. normalize_mz.py      - only when the module is clean: align csum/filler/
                            reloc table with the original and re-verify

base / file-base / image-size are derived from the original binary header
and the IDA segment dump - no manual parameters needed.
"""
import argparse
import re
import struct
import subprocess
import sys
from pathlib import Path

REPO = Path(__file__).resolve().parent.parent
PY = sys.executable

TARGETS = {
    'GS': dict(
        orig=r'analysis\GS.exe',
        lst=r'analysis\ida\GS.i64.lst',
        segs=r'analysis\ida\GS.segs2.log',
        conf=r'tools\f19re\conf\gs_gs2.json',
        inc=r'lst\gs_gs2.inc',
    ),
    'GS2': dict(
        orig=r'analysis\GS2.exe',
        lst=r'analysis\ida\GS2.i64.lst',
        segs=r'analysis\ida\GS2.segs.log',
        conf=r'tools\f19re\conf\gs2_gs2.json',
        inc=r'lst\gs2_gs2.inc',
    ),
    'SETUP': dict(
        orig=r'analysis\SETUP.exe',
        lst=r'analysis\ida\SETUP.i64.lst',
        segs=r'analysis\ida\SETUP.segs.log',
        conf=r'tools\f19re\conf\setup.json',
        inc=r'lst\setup.inc',
    ),
}


def run(cmd, **kw):
    print(f'+ {" ".join(str(c) for c in cmd)}')
    r = subprocess.run(cmd, cwd=REPO, **kw)
    if r.returncode:
        sys.exit(f'command failed with exit code {r.returncode}')
    return r


def derive(orig, segs):
    """(base, file_base, image_size) from the original header + seg dump."""
    d = open(REPO / orig, 'rb').read(0x400)
    hdrparas, = struct.unpack_from('<H', d, 8)
    file_base = hdrparas * 16
    lastpg, pages = struct.unpack_from('<HH', d, 2)
    content = (pages - 1) * 512 + lastpg if lastpg else pages * 512
    image_size = content - file_base
    with open(REPO / segs, encoding='utf-8', errors='replace') as f:
        for line in f:
            m = re.match(r'^SEG seg000 start=([0-9A-F]+)', line.strip())
            if m:
                base = int(m.group(1), 16)
                break
        else:
            sys.exit(f'seg000 not found in {segs}')
    return base, file_base, image_size, content


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument('target', choices=sorted(TARGETS))
    ap.add_argument('--skip-gen', action='store_true',
                    help='keep existing conf/asm (asm edited by hand)')
    ap.add_argument('--skip-link', action='store_true',
                    help='regenerate asm but do not assemble/link')
    args = ap.parse_args()

    t = TARGETS[args.target]
    name = args.target
    for key in ('orig', 'lst', 'segs'):
        if not (REPO / t[key]).exists():
            sys.exit(f'missing input: {t[key]}')

    base, file_base, image_size, content = derive(t['orig'], t['segs'])
    rebuilt = REPO / f'analysis\\ida\\{name}_rebuilt.exe'
    mnt = '/mnt/' + str(REPO.drive).rstrip(':').lower() + str(REPO)[2:].replace('\\', '/')

    print(f'== {name}: base={base:#x} file_base={file_base:#x} '
          f'image_size={image_size:#x} content={content:#x}')

    if not args.skip_gen:
        run([PY, r'scripts\gen_lst2asm_conf.py',
             '--segs', t['segs'], '--lst', t['lst'], '--bin', t['orig'],
             '--image-size', f'{image_size:#x}', '--base', f'{base:#x}',
             '--file-base', f'{file_base:#x}', '--id', f'{name}_EXE',
             '--out-conf', t['conf'], '--out-inc', t['inc']])
        run([PY, r'tools\f19re\mzretools\tools\lst2asm.py',
             t['lst'], f'analysis\\ida\\{name}.asm', t['conf']])

    if args.skip_link:
        print('skipping assemble/link (--skip-link)')
        return

    run(['wsl', 'bash', '-lc',
         f'bash {mnt}/scripts/link_mz.sh {name} && '
         f'cp ~/gunship_build/{name}.EXE {mnt}/analysis/ida/{name}_rebuilt.exe && '
         f'cp ~/gunship_build/{name}.MAP {mnt}/analysis/ida/{name}_rebuilt.map'])

    print('== load-module comparison ==')
    r = subprocess.run([PY, r'scripts\diff_bytes.py',
                        '--orig', t['orig'], '--new', str(rebuilt)],
                       cwd=REPO)
    if r.returncode:
        sys.exit('load module NOT identical yet (diff tally above); '
                 'fix gen/lst2asm and re-run')

    print('== load module clean: normalizing header ==')
    run([PY, r'scripts\normalize_mz.py', '--orig', t['orig'],
         '--new', str(rebuilt)])
    run([PY, r'scripts\hdrdump.py', '--orig', t['orig'],
         '--new', str(rebuilt)])
    print(f'== {name}: BYTE-IDENTICAL (load file 0..{content:#x}) ==')


if __name__ == '__main__':
    main()

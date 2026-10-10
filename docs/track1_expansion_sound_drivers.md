# Track 1 Expansion — Sound Drivers / Aux EXEs (FROZEN 2026-10-10)

Frozen mid-investigation per user direction: ASOUND3 is niche; Track 2 (C ports of
GS/GS2/SETUP) takes priority. Resume from § Resume plan.

## Snapshot

- **Done**: `game/ASOUND.GS2` (`analysis/ASOUND2.exe`) rebuilt byte-identical
  (commit `31e41e0`). One command: `venv\Scripts\python scripts\build_verify.py ASOUND2`.
- **IDA DBs + listings exported, targets registered, NOT built**: ASOUND3/4/L,
  RSOUND2/3/4/L, MGRAPHIC, LABS, PLAYER (all in `scripts/build_verify.py` TARGETS).
- **GS2000.COM**: deliberately excluded from build_verify — needs a COM path
  (UASM `org 100h`, no LINK, no MZ header).
- Naming convention: `analysis/ASOUND2.exe` ← `game/ASOUND.GS2`; ASOUND3/4/L ←
  .GS3/.GS4/.LOG; same scheme for RSOUND; MGRAPHIC.exe / LABS.exe / PLAYER.exe /
  GS2000.com.
- Sound drivers: 3 segments (seg000 code, seg001 data, seg002 16-byte tail), entry
  `0000:0010`, hdr 512, `db 10h dup(0)` stub, DS set by the caller at runtime.

## ASOUND2 (reference success)

- 0x3402 content bytes, 12 relocs, CS:IP 0000:0010, SS:SP 0348:0010, minalloc 0029,
  hdr 512. Byte-identical on the first build.
- IDA's DS is the same bogus 0xFF0 here, but no symbolic labels landed at the
  resolved EAs, so the listing shows raw `word ptr ds:XXXXh` forms (47×) which
  assemble correctly. This accident saved ASOUND2 — the ASOUND3 failure below is
  latent in every one of these drivers.

## ASOUND3 failure — root cause (diagnosed, fix designed not implemented)

Build result: `load module NOT identical yet`, 157 differing bytes in 157 ranges.
Categories (load-module offsets; module starts after the 0x200 header):

| count | orig → new | first offsets |
|---|---|---|
| 57 | 15 → 14 | 0x76, 0xEC, 0x118, 0x12A, 0x162, 0x19B |
| 57 | 17 → 16 | 0x271, 0x274, 0x277, 0x27A, 0x2F1, 0x2F4 |
| 35 | 16 → 15 | 0x236, 0x27D, 0x280, 0x283, 0x286, 0x29B |
| 6  | 13 → 12 | 0x51F, 0x522, 0x8A6, 0x8AC, 0x900, 0x906 |
| 2  | 01 → 11 | 0xBD8, 0xBEC — **not yet investigated** |

### Mechanism (the 155 single-byte diffs)

1. IDA's default DS at these code EAs = `0xFF0` (linear 0xFF00) — bogus, below the
   image base 0x10000. The MZ loader could not find the `' - Copyright'` marker in
   ASOUND3 (string absent) so IDA never set a proper "Default DS register".
   ASOUND2 has the same DS=FF0.
2. Original instruction `mov word ptr [15F0h],0` = bytes `C7 06 F0 15 00 00` —
   **no segment prefix** (DS is the 8086 default for `[disp16]`).
3. IDA resolves disp 0x15F0 under DS base 0xFF00 → EA 0x114F0, inside seg000
   (0x10000–0x131F0), and names it `word_114F0`.
4. Listing renders `mov ds:word_114F0, 0`.
5. UASM assembles the symbolic ref to the label's **seg000 offset** 0x14F0 as the
   displacement.
6. Off-by-0x100 = IDA DS base (0xFF00) vs seg000 base (0x10000). Hence 15→14,
   17→16, 16→15, 13→12 (high byte of the displacements).

ASOUND3 listing: 72 symbolic `ds:word_` refs, 12 raw. ASOUND2: 0 symbolic, 47 raw.

### Verified facts that make the fix safe

- UASM emits **no redundant DS prefix** for `ds:` on direct `[disp16]`: ASOUND2
  `mov word ptr ds:0C96h, 0` rebuilt byte-identical against orig
  `C7 06 96 0C 00 00` (no 3E).
- `cs:`-override refs (`mov cs:word_1006A, 0`) are fine — cs labels are
  same-segment, offsets match.
- `dw seg seg001` / `mov ax, seg seg001` assemble to unrelocated paras matching
  orig (ASOUND2 proof).

### Fix plan — `scripts/gen_lst2asm_conf.py`, new byte-driven pass

- For each listing instruction whose operand text contains a segment-override
  symbolic data ref `(ds|es|ss|fs|gs):(word_|byte_|dword_)\w+`:
- Read the ORIGINAL bytes at (seg, off) via capstone; extract the true disp16.
- Compare with the label's offset inside its own segment (labels table from the
  listing).
- On mismatch, rewrite the operand to the raw form `word ptr ds:XXXXh` using the
  original displacement (keep the correct override letter).
- Caveats: `ds:` on `[disp16]` emits no prefix (safe); if the orig bytes carry an
  explicit prefix (3E/26/36/64/65) or the base reg is BP-based (SS default), keep
  or derive the override from capstone; worst case `db` the whole instruction.

### The 2× `01→11` at 0xBD8 / 0xBEC — UNRESOLVED

Suspicions (unverified, check listing around seg000:0BD8/0xBEC; confirm listing
offset == load-module offset via segs.log):

- A relocated para word where orig stores a non-canonical segment value the
  linker accepted, vs our `dw seg segXXX` emitting a different para.
- A data byte adjacent to a label that the same DS=FF0 resolution also corrupted
  (`byte_` form).

## Resume plan

1. Implement the raw-displacement rewrite in gen (above).
2. `venv\Scripts\python scripts\build_verify.py ASOUND3` → expect byte-identical;
   else inspect residual (esp. 0xBD8/0xBEC).
3. Regression check: `build_verify.py GS GS2 SETUP ASOUND2` still byte-identical.
4. Build ASOUND4, ASOUNDL, RSOUND2/3/4/L, MGRAPHIC, LABS, PLAYER (confs
   `tools/f19re/conf/<name>.json` + `lst/<name>.inc` are auto-created by gen).
5. GS2000.COM: separate COM build path; register as a special target in
   build_verify or a sibling script.
6. Commit + update state.md Registry rows.

## Infra notes (frozen)

- IDA batch: `& "C:\Program Files\IDA Professional 9.1\idat.exe" -A "-S<abs
  script>" "-L<log>" <input>`. New-DB runs write outputs **next to the input** as
  `<name>.exe.i64{,.lst,.segs.log}` → move to `analysis/ida/<name>.i64`,
  `<name>.i64.lst`, `<name>.segs.log`. Re-exports on an existing
  `analysis/ida/<name>.i64` write to the idb path directly (`<idb>.lst`,
  `<idb minus .i64>.segs.log`).
- Canonical export: `scripts/ida_export_all.py` — unhide funcs + chunks
  (`ida_funcs.set_visible_func`), write segs log + listing via
  `idc.gen_file(idc.OFILE_LST, ...)`, MUST end `ida_pro.qexit(0)`. IDC
  `get_fchunk_attr(FUNCATTR_FLAGS)` silently fails — do not use.
- IDA Python API: `idc.gen_file` (not generate_file), `idc.get_operand_value`,
  `idc.GetDisasm`, `idc.get_sreg(ea, "DS")`, `idc.get_idb_path()`.
- WSL hard-down after ~2 retries: `wsl --shutdown; Start-Sleep 3`, then retry.
- IDA MCP (ports 13337/13338) is a separate interactive session; batch idat loads
  the plugin ("server managed externally") then qexits. MCP accesses one file at
  a time — verify `input file` before trusting dumps. Identity checks used:
  md5 `game/ASOUND.GS3` == `analysis/ASOUND3.exe` ==
  `9f9bfe46be2e154f75ecad8c4ba5db77`.
- .gitignore: `*.exe`, `analysis/ida/*.i64`, `*.asm`, `*_rebuilt.*` ignored
  (analysis originals are untracked copies of game/); listings `.i64.lst` /
  `.segs.log` / `.log` ARE tracked. `analysis/*.com` added 2026-10-10.
- MZ header reads in this project: reloc **count @0x06 (crlc)**, reloc table
  @0x18, IP@0x14, CS@0x16 (naive @0x1A is the overlay number!).
- Listing offsets are paragraph-relative; `listing_base[seg] = SEGATTR_START -
  first_listing_offset`; segment end = `first_off + size - 1`.

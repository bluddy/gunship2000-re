"""Build/merge the per-file YAML registry from a Ghidra DumpProgram.txt output.

Usage:
    python scripts/build_registry.py <dump.txt> --source <original_file> [--id NAME]

Outputs:
    registry/<id>.yaml            - metadata DB (human edits preserved on re-run)
    decompiled/<id>/<seg>_<off>.c - per-function decompiled C (generated, overwritten)

Human-editable fields preserved across merges: function name (kept once renamed),
status, notes, certainty, comment, xrefs (any key not auto-generated is kept);
top-level structs/variables/strings/notes plus any extra top-level keys (e.g. certainty).

Certainty convention (applies to ALL registries, incl. registry/game_knowledge.yaml):
    confirmed   - proven by binary/behavioral evidence
    high        - strongly supported, not directly verified
    medium      - likely, partial evidence (incl. confident recollections)
    low         - weak indication / guess
    hypothesis  - untested assumption
Auto-generated structural facts (addresses, signatures) are confirmed by nature;
human claims (name, role, notes, structs) should carry certainty when added.
"""

import argparse
import re
import sys
from pathlib import Path

import yaml

STATUS_ORDER = {"identified": 0, "unidentified": 1}


def parse_dump(path: Path):
    prog = {}
    blocks = []
    entries = []
    functions = []
    cur = None
    in_c = False
    c_lines = []
    section = None

    for line in path.read_text(encoding="utf-8").splitlines():
        if line.startswith("=== ") and line.endswith(" ==="):
            name = line[4:-4].strip()
            if name == "PROGRAM":
                section = "program"
            elif name == "BLOCKS":
                section = "blocks"
            elif name == "ENTRY POINTS":
                section = "entries"
            elif name == "FUNCTIONS":
                section = "functions"
            elif name == "FUNCTION":
                if cur and "addr" in cur:
                    functions.append(cur)
                cur = {}
                section = "function"
            else:
                section = None
            in_c = False
            continue
        if section == "program":
            if "=" in line:
                k, v = line.split("=", 1)
                prog[k] = v
        elif section == "blocks":
            if line.startswith("block="):
                parts = line[6:].split("|")
                blocks.append({
                    "name": parts[0],
                    "range": f"{parts[1]}-{parts[2]}",
                    "perm": parts[3],
                    "type": parts[4],
                })
        elif section == "entries":
            if line.startswith("entry="):
                addr, _, nm = line[6:].partition("|")
                entries.append({"addr": addr, "name": nm or "entry"})
        elif section == "function":
            if line == "--- C ---":
                in_c = True
                c_lines = []
            elif line == "--- END C ---":
                in_c = False
                cur["c"] = "\n".join(c_lines).strip() + "\n"
            elif in_c:
                c_lines.append(line)
            elif "=" in line and cur is not None:
                k, v = line.split("=", 1)
                if k != "functionCount":
                    cur[k] = v
        if line.startswith("functionCount="):
            prog["functionCount"] = line.split("=", 1)[1]
    if cur and "addr" in cur:
        functions.append(cur)
    return prog, blocks, entries, functions


def parse_functions(raw_functions):
    # split parse_dump's flat function list (functionCount lands in cur) is handled upstream
    return [f for f in raw_functions if "addr" in f and "name" in f]


def auto_name(addr, ghidra_name):
    return ghidra_name if ghidra_name.startswith("FUN_") or ghidra_name.startswith("thunk_") else None


def sanitize(addr):
    return addr.replace(":", "_").replace(" ", "_")


def merge(prog, blocks, entries, functions, existing, source, cid, cdir_rel, root):
    file_info = {
        "name": source,
        "ghidra_name": prog.get("name", cid),
        "format": prog.get("exeFormat", ""),
        "language": prog.get("language", ""),
        "image_base": prog.get("imageBase", ""),
        "entry": entries[0]["addr"] if entries else "",
        "function_count": int(prog.get("functionCount", "0")),
    }
    if existing:
        # keep human-provided descriptive fields if present
        for k in ("compiler", "size", "overlays", "role", "notes", "certainty"):
            if k in existing.get("file", {}):
                file_info[k] = existing["file"][k]

    old_funcs = {f["addr"]: f for f in existing.get("functions", []) if "addr" in f}
    merged_funcs = []
    for fn in functions:
        addr = fn["addr"]
        old = old_funcs.get(addr, {})
        auto = fn["name"]
        human_name = old.get("name")
        is_renamed = bool(human_name) and human_name != auto and not str(human_name).startswith("FUN_")
        entry = {
            "addr": addr,
            "name": human_name if human_name else auto,
            "auto_name": auto,
            "sig": fn.get("signature", ""),
            "return_type": fn.get("returnType", ""),
            "calling_convention": fn.get("callingConvention", ""),
            "is_thunk": fn.get("isThunk", "false") == "true",
            "decompiled": fn.get("decompiled", "false") == "true",
            "status": old.get("status") or ("identified" if is_renamed else "unidentified"),
            "c": f"{cdir_rel}/{sanitize(addr)}.c",
        }
        # preserve any human-added keys (certainty, notes, comment, xrefs, ...)
        for k, v in old.items():
            if k not in entry:
                entry[k] = v
        merged_funcs.append(entry)
        old_funcs.pop(addr, None)

    # stale functions (in old registry but no longer in dump) - keep if human-curated
    for addr, old in old_funcs.items():
        old = dict(old)
        old["status"] = old.get("status", "unidentified")
        old["stale"] = True
        merged_funcs.append(old)

    merged_funcs.sort(key=lambda f: int(f["addr"].split(":")[0], 16) * 65536 + int(f["addr"].split(":")[1], 16))

    registry = {
        "file": file_info,
        "blocks": blocks,
        "entries": entries,
        "functions": merged_funcs,
    }
    for k in ("structs", "variables", "strings", "notes"):
        if k in existing:
            registry[k] = existing[k]
        elif k in ("structs", "variables", "strings"):
            registry[k] = []
    # preserve any other human-added top-level keys
    for k, v in existing.items():
        if k not in registry:
            registry[k] = v
    return registry


class Quoted(str):
    pass


def quoted_presenter(dumper, data):
    return dumper.represent_scalar("tag:yaml.org,2002:str", data, style='"')


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("dump")
    ap.add_argument("--source", required=True, help="original game file name, e.g. SETUP.GS2")
    ap.add_argument("--id", help="registry id (default: dump program name minus extension)")
    ap.add_argument("--root", default=str(Path(__file__).resolve().parent.parent))
    args = ap.parse_args()

    root = Path(args.root)
    dump_path = Path(args.dump)
    prog, blocks, entries, raw_fns = parse_dump(dump_path)
    functions = parse_functions(raw_fns)
    cid = args.id or prog.get("name", dump_path.stem).rsplit(".", 1)[0]
    reg_path = root / "registry" / f"{cid}.yaml"
    existing = {}
    if reg_path.exists():
        existing = yaml.safe_load(reg_path.read_text(encoding="utf-8")) or {}

    cdir_rel = f"decompiled/{cid}"
    registry = merge(prog, blocks, entries, functions, existing, args.source, cid, cdir_rel, root)

    # per-function C files
    cdir = root / cdir_rel
    cdir.mkdir(parents=True, exist_ok=True)
    (root / "registry").mkdir(parents=True, exist_ok=True)
    n_c = 0
    for fn in functions:
        if "c" in fn:
            out = root / cdir_rel / (sanitize(fn["addr"]) + ".c")
            header = f"/* {args.source} {fn['addr']} {fn.get('signature','')} */\n"
            out.write_text(header + fn["c"], encoding="utf-8")
            n_c += 1

    yaml.add_representer(Quoted, quoted_presenter)
    text = yaml.dump(registry, sort_keys=False, allow_unicode=True, default_flow_style=False, width=120)
    reg_path.write_text(text, encoding="utf-8")
    print(f"registry: {reg_path.relative_to(root)} ({len(registry['functions'])} functions)")
    print(f"decompiled C: {cdir_rel}/ ({n_c} files)")


if __name__ == "__main__":
    main()

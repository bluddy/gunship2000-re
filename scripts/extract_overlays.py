"""Extract RTLink overlay data slices for Ghidra import.

Usage: python scripts/extract_overlays.py
Writes analysis/overlays/<ID>.bin + <ID>.json (real seg:off base + thunk entry points).
"""
import json
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
OUT = ROOT / "analysis" / "overlays"

# id: (source_file, data_start, w8_paras, real_w0)
RECS = {
    # GS.GS2 (hdr 8192): data_start = w2*16 + ceil(w5/4)*16
    "GS_OVL0": ("GS.GS2", 118768, 954, 0x1A79),
    "GS_OVL1": ("GS.GS2", 139280, 3613, 0x1A79),
    "GS_OVL2": ("GS.GS2", 200048, 1341, 0x1A79),
    "GS_OVL3": ("GS.GS2", 223680, 939, 0x1A79),
    # GS2.GS2 (hdr 1536): ids 2..9 (id10 = startup data, skipped)
    "GS2_ID2": ("GS2.GS2", 41248, 724, 0x0975),
    "GS2_ID3": ("GS2.GS2", 55472, 4096, 0x0975),
    "GS2_ID4": ("GS2.GS2", 121952, 978, 0x1975),
    "GS2_ID5": ("GS2.GS2", 138128, 583, 0x1975),
    "GS2_ID6": ("GS2.GS2", 148112, 2897, 0x0975),
    "GS2_ID7": ("GS2.GS2", 194512, 1246, 0x0975),
    "GS2_ID8": ("GS2.GS2", 214608, 2534, 0x1D47),
    "GS2_ID9": ("GS2.GS2", 255312, 2529, 0x1D47),
}

# thunk-derived entry points (real seg:off) per overlay id
ENTRIES = {
    "GS_OVL0": [(0x1DF9, 0x0196), (0x1C07, 0x002A), (0x1A79, 0x0000), (0x1C07, 0x1B4C),
                (0x1C07, 0x0006), (0x1C07, 0x170A), (0x1A79, 0x0DBA), (0x1B72, 0x0022)],
    "GS_OVL1": [(0x20F4, 0x52CA), (0x1ABF, 0x00DA), (0x1ABF, 0x02CA), (0x1ABF, 0x02F2),
                (0x1ABF, 0x0328), (0x1ABF, 0x014A), (0x1ABF, 0x0368), (0x1ABF, 0x01C6),
                (0x1ABF, 0x01DE), (0x1ABF, 0x0212), (0x1ABF, 0x0062), (0x1ABF, 0x022A),
                (0x1ABF, 0x006A), (0x1ABF, 0x0242), (0x1ABF, 0x028A), (0x20F4, 0x540A)],
    "GS_OVL2": [(0x1A79, 0x17D4), (0x1C89, 0x000C), (0x1F13, 0x096A), (0x1C89, 0x0032),
                (0x1C89, 0x0B74), (0x1C89, 0x0A12), (0x1BFF, 0x000A), (0x1D50, 0x0000),
                (0x1C89, 0x0BAC), (0x1C89, 0x0176), (0x1C89, 0x0A82)],
    "GS_OVL3": [(0x1DBD, 0x0002), (0x1BF6, 0x0006), (0x1CF5, 0x0004), (0x1A79, 0x01E6),
                (0x1AB5, 0x000A), (0x1C4B, 0x0002), (0x1A79, 0x0000), (0x1BB6, 0x0000),
                (0x1D6B, 0x0002), (0x1AB5, 0x0C18), (0x1D6B, 0x034C), (0x1C4B, 0x06C4),
                (0x1BF6, 0x006A), (0x1C4B, 0x06FC), (0x1C4B, 0x059E)],
    "GS2_ID2": [(0x0975, 0x0000), (0x0975, 0x045A)],
    "GS2_ID3": [(0x0975, 0x0000), (0x0975, 0x005C)],
    "GS2_ID4": [(0x1975, 0x0000)],
    "GS2_ID5": [(0x1975, 0x0000)],
    "GS2_ID6": [(0x0975, 0x0000)],
    "GS2_ID7": [(0x0975, 0x458D)],
    "GS2_ID8": [(0x1D47, 0x00AA)],
    "GS2_ID9": [(0x1D47, 0x00AA)],
}


def main():
    OUT.mkdir(parents=True, exist_ok=True)
    for rid, (src, dstart, w8, w0) in RECS.items():
        data = (ROOT / "game" / src).read_bytes()[dstart:dstart + w8 * 16]
        assert len(data) == w8 * 16, f"{rid}: short slice"
        (OUT / f"{rid}.bin").write_bytes(data)
        meta = {
            "id": rid, "source": src, "data_start": dstart, "size": len(data),
            "real_base_seg": w0, "ghidra_seg": w0 + 0x1000,
            "entries": [f"{s:04X}:{o:04X}" for s, o in ENTRIES[rid]],
        }
        (OUT / f"{rid}.json").write_text(json.dumps(meta, indent=2), encoding="utf-8")
        print(f"{rid}: {len(data)} bytes @ file {dstart}, base {w0:04X}, {len(ENTRIES[rid])} entries")


if __name__ == "__main__":
    main()

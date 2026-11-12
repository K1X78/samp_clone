#!/usr/bin/env python3
"""Read a complete official function by address, assembly name, or native alias."""
from __future__ import annotations

import argparse
import hashlib
import json
from pathlib import Path
import re
import sys
from reference_binary import ReferenceImage, disassemble

ROOT = Path(__file__).resolve().parents[1]
BINARIES = {"server": "samp-server.exe", "client": "samp.dll"}


def find_functions(index: dict, query: str) -> list[dict]:
    normalized = query.lower()
    if re.fullmatch(r"(?:0x)?[0-9a-fA-F]{6,8}", query):
        normalized = f"0x{int(query, 16):08x}"
        return [row for row in index["functions"] if row["address"] == normalized]
    exact = []
    partial = []
    for row in index["functions"]:
        names = [row["name"], row.get("assembly_name", ""), *row.get("aliases", [])]
        if any(normalized == name.lower() or normalized == name.lower().split(":")[-1] for name in names):
            exact.append(row)
        elif any(normalized in name.lower() for name in names):
            partial.append(row)
    return exact or partial


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("binary", choices=BINARIES)
    parser.add_argument("query", help="e.g. 0x405120, FUN_00405120, fopen, or file:fopen")
    parser.add_argument("--asm", action="store_true", help="Disassemble the official body ranges directly from the PE; write no files.")
    parser.add_argument("--list", action="store_true", help="List matches without reading their bodies.")
    parser.add_argument("--root", type=Path, default=ROOT / "docs/asm/pseudocode")
    args = parser.parse_args()
    binary = BINARIES[args.binary]
    directory = args.root / binary
    path = directory / "index.json"
    if not path.is_file():
        parser.error(f"No generated index at {path}; run tools/build_reference_pseudocode.py first.")
    index = json.loads(path.read_text(encoding="utf-8"))
    matches = find_functions(index, args.query)
    if not matches:
        parser.exit(1, f"No exact entry/name matches {args.query!r}. Try rg in {directory / 'index.tsv'}.\n")
    if args.list or len(matches) != 1:
        for row in matches:
            print(f"{row['address']}  {row['status']:18} {row['name']}  {','.join(row.get('aliases', []))}  {directory / row['file']}")
        if len(matches) != 1 and not args.list:
            parser.exit(2, "Multiple matches; select an exact address.\n")
        return
    row = matches[0]
    print(f"{binary} | SHA-256 {index['sha256']} | Ghidra {index['ghidra_version']}")
    print(f"Aliases (catalog hints): {', '.join(row.get('aliases', [])) or '(none)'}")
    print(f"Body ranges: {', '.join(row.get('body_ranges', []))}")
    if row.get("forwarder_target"):
        print(f"FORWARDER: single JMP to {row['forwarder_target']}; Ghidra C may show the target body.")
    if row.get("other_seed_entries_in_body"):
        print("BOUNDARY WARNING: body also contains seeded entries " +
              ", ".join(row["other_seed_entries_in_body"]))
    region = row.get("assembly_region")
    if region:
        print(f"Reference region: {region['address']} + {region['assembly_size']:#x} "
              f"({region['assembly_name']}; may include padding/other functions)")
    print("Callees: " + ", ".join(f"{item['address']} {item['name']}" for item in row.get("callees", [])))
    print("References to entry (static; indirect calls may be missing):")
    for reference in row.get("references_to_entry", []):
        owner = reference.get("function", {})
        print(f"  {reference['from']} {reference['type']} {owner.get('address', '')} {owner.get('name', '')}")
    code = (directory / row["file"]).read_text(encoding="utf-8")
    if hashlib.sha256((directory / row["file"]).read_bytes()).hexdigest() != row["pseudocode_sha256"]:
        parser.error("Pseudocode hash mismatch; regenerate the index before relying on this artifact.")
    print("\n" + code, end="")
    if args.asm:
        image = ReferenceImage(binary, ROOT, index["sha256"])
        if region and hashlib.sha1(image.read(int(region["address"], 16), region["assembly_size"])).hexdigest() != region["assembly_sha1"]:
            parser.error("Reference region bytes differ from the recorded official binary.")
        ranges = row.get("body_ranges", [])
        if not ranges:
            parser.exit(2, "No body boundaries are known; inspect the official binary directly.\n")
        print("\n/* OFFICIAL BINARY DISASSEMBLY: no assembly file is created */")
        for body_range in ranges:
            start, end = (int(value, 16) for value in body_range.split(".."))
            print(f"/* BODY RANGE 0x{start:08x}..0x{end:08x} */")
            print("\n".join(disassemble(image, start, end - start + 1)))
        print(f"/* END DISASSEMBLY {row['address']} */")
    if row["status"] != "ok":
        parser.exit(3, f"Pseudocode unavailable: {row['status']}; use assembly and index diagnostics.\n")


if __name__ == "__main__":
    if hasattr(sys.stdout, "reconfigure"):
        sys.stdout.reconfigure(encoding="utf-8")
    main()

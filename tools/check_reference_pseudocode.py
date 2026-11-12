#!/usr/bin/env python3
"""Validate complete generated artifacts against indexes and official PE bytes."""
from __future__ import annotations

import argparse
from collections import Counter
import hashlib
import json
from pathlib import Path
import struct

from build_reference_pseudocode import BINARIES, ROOT, assembly_entries
from read_reference_function import find_functions


def check_assembly_bytes(binary: str, entries: list[dict]) -> str:
    data = (ROOT / "GTA Sa samp_clone" / f"{binary}.official").read_bytes()
    pe = struct.unpack_from("<I", data, 0x3C)[0]
    if data[:2] != b"MZ" or data[pe:pe + 4] != b"PE\0\0":
        raise ValueError(f"Not a PE: {binary}")
    optional = pe + 24
    if struct.unpack_from("<H", data, optional)[0] != 0x10B:
        raise ValueError(f"Expected PE32: {binary}")
    base = struct.unpack_from("<I", data, optional + 28)[0]
    count = struct.unpack_from("<H", data, pe + 6)[0]
    section_table = optional + struct.unpack_from("<H", data, pe + 20)[0]
    sections = []
    for number in range(count):
        offset = section_table + number * 40
        virtual_size, rva, raw_size, raw_offset = struct.unpack_from("<IIII", data, offset + 8)
        size = max(virtual_size, raw_size)
        body = data[raw_offset:raw_offset + raw_size].ljust(size, b"\0")
        sections.append((base + rva, size, body))
    for row in entries:
        address, size = int(row["address"], 16), row["assembly_size"]
        matches = [(start, body) for start, length, body in sections
                   if start <= address and address + size <= start + length]
        if len(matches) != 1:
            raise ValueError(f"Assembly region outside a unique PE section: {row['address']}")
        start, body = matches[0]
        actual = hashlib.sha1(body[address - start:address - start + size]).hexdigest()
        if actual != row["assembly_sha1"]:
            raise ValueError(f"Assembly bytes mismatch official PE: {row['address']}")
    return hashlib.sha256(data).hexdigest()


def check(binary: str, root: Path) -> None:
    entries = assembly_entries(binary)
    digest = check_assembly_bytes(binary, entries)
    directory = root / binary
    index = json.loads((directory / "index.json").read_text(encoding="utf-8"))
    assert digest == index["sha256"].lower(), "Binary SHA-256 mismatch"
    assert index["reference_metadata_sha256"] == hashlib.sha256((ROOT / "docs/asm/pseudocode" / binary / "reference.json").read_bytes()).hexdigest(), "Stale reference metadata"
    records = index["functions"]
    addresses = {row["address"] for row in records}
    assert len(addresses) == len(records), "Duplicate function address"
    assert {row["address"] for row in entries} == {row["address"] for row in records if row["assembly_entry"]}, "Missing or extra assembly entries"
    expected_files = set()
    for row in records:
        path = directory / row["file"]
        expected_files.add(path.resolve())
        raw = path.read_bytes()
        code = raw.decode("utf-8")
        assert code.endswith(f"/* END FUNCTION {row['address']} */\n"), f"Truncated function {path}"
        assert hashlib.sha256(raw).hexdigest() == row["pseudocode_sha256"], f"Modified output {path}"
        assert row["file"] == f"functions/{row['address'][2:]}.c", f"Wrong address filename: {path}"
    assert expected_files == {path.resolve() for path in (directory / "functions").glob("*.c")}, "Stale unindexed .c files"
    statuses = dict(Counter(row["status"] for row in records))
    assert statuses == index["status_counts"], "Status totals mismatch"
    if binary == BINARIES["server"]:
        for name in ("fopen", "fclose", "fread", "fwrite", "fputchar", "fgetchar",
                     "fblockwrite", "fblockread", "ftemp", "fseek", "fexist", "fremove", "flength"):
            matches = find_functions(index, f"file:{name}")
            assert len(matches) == 1 and matches[0]["status"] == "ok", f"File native unavailable: {name}"
            assert matches[0] in find_functions(index, matches[0]["name"]), f"Name lookup failed: {name}"
    overlaps = sum(bool(row.get("other_seed_entries_in_body")) for row in records)
    print(f"{binary}: {len(records)} complete indexed files; {len(entries)} assembly regions match official PE bytes; statuses={statuses}; boundary warnings={overlaps}")


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--binary", choices=["both", *BINARIES], default="both")
    parser.add_argument("--root", type=Path, default=ROOT / "docs/asm/pseudocode")
    args = parser.parse_args()
    for kind, binary in BINARIES.items():
        if args.binary in ("both", kind):
            check(binary, args.root)


if __name__ == "__main__":
    main()

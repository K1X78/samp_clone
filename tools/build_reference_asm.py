#!/usr/bin/env python3
"""Legacy entry point for a single function's on-demand binary disassembly.

Usage: python tools/build_reference_asm.py server 0x405120
Full text assembly files are retired; this command writes only to stdout.
"""
from __future__ import annotations

import hashlib
from pathlib import Path
import re

import capstone
import pefile
from reference_binary import load_reference

ROOT = Path(__file__).resolve().parents[1]
INSTALL = ROOT / "GTA Sa samp_clone"
ASM = ROOT / "asm"
BINARIES = ("samp.dll", "samp-server.exe")
# Official COM vtables contain adjacent callable entries that Ghidra grouped
# into the surrounding glyph scanner's function range. These entrypoints were
# read directly from the shipped samp.dll image (ID3DXFont wrapper at
# 0x1011c438, ID3DXSprite wrapper at 0x1011c76c).
ADDITIONAL_FUNCTION_STARTS = {
    "samp.dll": {
        # 1000d5e0 is the independent PUSH0/CALL1000c4e0/RET pointer-array
        # cleanup thunk, bounded by INT3 on each side. The old asset-manager
        # destructor/release pointers actually belonged to geometry cleanup.
        0x1000d5e0: "FUN_1000d5e0",
        # Directly called model-info table initializer: independent prologue,
        # 65535-slot clear, biased stock copy, patch-loop calls and RET.
        0x100a75f0: "FUN_100a75f0",
        # Distinct model-info FREE/clear helper at7720, preceded/followed by
        # INT3 and ending RET4 after its own parameter load and table access.
        0x100a7720: "FUN_100a7720",
        **{0x10073770 + index * 0x10: f"FUN_{0x10073770 + index * 0x10:08x}"
           for index in range(14)},
        0x10073680: "FUN_10073680",
        0x10073850: "FUN_10073850",
        0x10073860: "FUN_10073860",
        0x10073870: "FUN_10073870",
        **{0x10073880 + index * 0x10: f"FUN_{0x10073880 + index * 0x10:08x}"
           for index in range(13)},
        0x10073660: "FUN_10073660",
        0x10073960: "FUN_10073960",
        0x1008a6e0: "FUN_1008a6e0",
        # D3D9 device-vtable Reset slot 16 in the official table at 0x1011fa10.
        # Its wrapper releases device resources, calls IDirect3DDevice9::Reset,
        # then restores the resources when Reset succeeds.
        0x10074060: "FUN_10074060",
        # The socket-owner destructor is an adjacent entrypoint Ghidra grouped
        # with the path-construction routine; its single closesocket call and
        # standalone RET were verified in the shipped image.
        0x10002470: "FUN_10002470",
    },
    "samp-server.exe": {
        # The console command table at 0x4EA848 directly targets this cmdlist
        # callback. Ghidra grouped it inside FUN_0048fd60's address range.
        0x00490200: "FUN_00490200",
        # Command table callback entries from the 0.3.DL table at 0x4EA848;
        # Ghidra grouped these starts with adjacent console callbacks.
        **{address: f"FUN_{address:08x}" for address in (
            0x0048fbc0, 0x0048fea0, 0x0048fed0, 0x0048ff00,
            0x0048ff50, 0x0048ff60, 0x0048ff70, 0x0048fe10,
            0x0048fe60, 0x00490020, 0x00490050, 0x00490080,
            0x004900f0, 0x00490190, 0x004909c0,
        )},
        # The Pawn runtime contains adjacent short API entrypoints that
        # Ghidra grouped with the function before them. Their independent
        # argument handling and return instructions were verified in the
        # shipped image.
        0x00401030: "FUN_00401030",
        0x00401410: "FUN_00401410",
        0x004014e0: "FUN_004014e0",
        0x00401400: "FUN_00401400",
        0x00401540: "FUN_00401540",
        0x004015f0: "FUN_004015f0",
        0x00401860: "FUN_00401860",
        0x00401c30: "FUN_00401c30",
        0x004030d0: "FUN_004030d0",
        0x004030e0: "FUN_004030e0",
        0x004035c0: "FUN_004035c0",
        # RPC table target: FUN_00470c00 stores the requested class spawn info.
        0x004708c0: "FUN_004708c0",
        0x00470c00: "FUN_00470c00",
        # Pawn native callbacks referenced by the shipped server's native table.
        # File table 0x4CA0B0: separate parameter-load/RET bodies and tmpfile
        # JMP, byte-verified 2026-11-08. These are not internal branch labels.
        **{address: f"FUN_{address:08x}" for address in (
            0x004056c0, 0x00405830, 0x00405880,
            0x004059d0, 0x004059e0, 0x00405b80,
        )},
        # Native-table records 0x4CF408/0x4CF410 independently target these
        # entries. Each reads params[1] as a WORD and has its own plain RET.
        0x00472dd0: "FUN_00472dd0",
        0x00472e00: "FUN_00472e00",
        0x00472f50: "FUN_00472f50",
        0x00473050: "FUN_00473050",
        0x00473240: "FUN_00473240",
        0x00473f20: "FUN_00473f20",
        0x0047ae30: "FUN_0047ae30",
        0x0047bb00: "FUN_0047bb00",
        0x0047bcc0: "FUN_0047bcc0",
        0x0047bde0: "FUN_0047bde0",
        0x0047c920: "FUN_0047c920",
        # Float-table callbacks at 0x4B25A8. Each has its own argument loads
        # and RET/tail return in the official bytes; Ghidra merged these
        # starts into the preceding file registrar or angle converter.
        **{address: f"FUN_{address:08x}" for address in (
            0x00405be0, 0x00405bf0, 0x00405c60, 0x00405c80,
            0x00405ca0, 0x00405cc0, 0x00405ce0, 0x00405d10,
            0x00405d70, 0x00405db0, 0x00405de0, 0x00405eb0,
            0x00405ed0, 0x00405ef0, 0x00405f10,
        )},
        # Core native callbacks read from the official table at 0x4B23B0;
        # independent frame/parameter loads and returns verified in 0.3.DL.
        **{address: f"FUN_{address:08x}" for address in (
            0x004045b0, 0x004045d0, 0x00404600, 0x00404650,
            0x00404660, 0x004046f0, 0x00404730, 0x00404740,
            0x00404750, 0x00404770,
            0x00404a70, 0x00404ac0,
        )},
        # String table 0x4B2720: verified independent callback starts with
        # distinct parameter handling and returns in the shipped server.
        0x00406b00: "FUN_00406b00",
        0x00406c60: "FUN_00406c60",
        0x00406f70: "FUN_00406f70",
        # strfind is a distinct native-table callback at 0x4B2720 with
        # its own argument setup, search loop and return sequence.
        0x004065e0: "FUN_004065e0",
        # UU native callbacks from the same table, with independent parameter
        # setup and returns after the two byte-codec helpers.
        0x00406e10: "FUN_00406e10",
        0x00406ea0: "FUN_00406ea0",
        # tickcount is the independent callback in the time table at 0x4B282C;
        # its prologue and return were verified after getdate's RET.
        0x004071f0: "FUN_004071f0",
    },
}
ASM_FUNCTION = re.compile(
    r"(?m)^\.globl ([A-Za-z0-9_]+)\n"
    r"\.type \1, @function\n"
    r"\1:\n"
    r"\s*/\*\s*(0x[0-9A-Fa-f]+)\s+size="
)
EXECUTE = 0x20000000


def symbol(name: str) -> str:
    return re.sub(r"[^A-Za-z0-9_]", "_", name.strip())


def load_sections(binary: str):
    pe = pefile.PE(str(INSTALL / f"{binary}.official"), fast_load=True)
    image_base = pe.OPTIONAL_HEADER.ImageBase
    sections = []
    for section in pe.sections:
        if not section.Characteristics & EXECUTE:
            continue
        name = section.Name.rstrip(b"\0").decode("ascii", errors="replace")
        size = max(section.Misc_VirtualSize, section.SizeOfRawData)
        data = section.get_data()[:size].ljust(size, b"\0")
        sections.append({"name": name, "start": image_base + section.VirtualAddress,
                         "size": size, "data": data})
    return pe, sections


def function_starts(binary: str):
    records = [{"address": int(row["address"], 16), "name": row["assembly_name"], "kind": "function"}
               for row in load_reference(binary, ROOT)["regions"]
               if not row["assembly_name"].startswith("gap_")]
    known_addresses = {record["address"] for record in records}
    records.extend({"address": address, "name": name, "kind": "function"}
                   for address, name in ADDITIONAL_FUNCTION_STARTS.get(binary, {}).items()
                   if address not in known_addresses)
    if not records:
        raise RuntimeError(f"no official function starts found for {binary}")
    return records


def build(binary: str):
    pe, sections = load_sections(binary)
    starts = function_starts(binary)
    by_section = {section["name"]: [] for section in sections}
    for record in starts:
        matches = [section for section in sections
                   if section["start"] <= record["address"] < section["start"] + section["size"]]
        if len(matches) != 1:
            raise RuntimeError(f"{binary}: 0x{record['address']:08x} is outside executable sections")
        by_section[matches[0]["name"]].append(record)

    decoder = capstone.Cs(capstone.CS_ARCH_X86, capstone.CS_MODE_32)
    index = []
    output = ["# Generated from the official 0.3.DL PE and verified entrypoints.",
              f"# Image base: 0x{pe.OPTIONAL_HEADER.ImageBase:08x}",
              ".intel_syntax noprefix", ".code32", ""]
    for section in sections:
        section_start = section["start"]
        section_end = section_start + section["size"]
        records = sorted(by_section[section["name"]], key=lambda row: row["address"])
        addresses = [row["address"] for row in records]
        if len(addresses) != len(set(addresses)):
            raise RuntimeError(f"{binary}:{section['name']}: duplicate FUNC start")
        regions = []
        if not records or records[0]["address"] > section_start:
            regions.append({"address": section_start, "name": f"gap_{section_start:08x}",
                            "kind": "gap"})
        regions.extend(records)
        if records and records[-1]["address"] < section_end:
            regions.append({"address": section_end, "name": "", "kind": "end"})
        elif not records:
            regions.append({"address": section_end, "name": "", "kind": "end"})

        output.extend([f".section {section['name']}", ""])
        for position, record in enumerate(regions[:-1]):
            start = record["address"]
            end = regions[position + 1]["address"]
            if end <= start or end > section_end:
                raise RuntimeError(f"{binary}: invalid region 0x{start:08x}..0x{end:08x}")
            offset = start - section_start
            body = section["data"][offset:offset + end - start]
            digest = hashlib.sha1(body).hexdigest()
            name = symbol(record["name"])
            output.extend([f".globl {name}", f".type {name}, @function", f"{name}:",
                           f"    /* 0x{start:08x} size=0x{len(body):x} sha1={digest} */"])
            consumed = 0
            while consumed < len(body):
                address = start + consumed
                instruction = next(decoder.disasm(body[consumed:], address, count=1), None)
                if instruction is None or instruction.size == 0:
                    byte = body[consumed]
                    output.append(f"    .byte 0x{byte:02x} /* 0x{address:08x} */")
                    consumed += 1
                else:
                    raw = " ".join(f"{byte:02x}" for byte in instruction.bytes)
                    operands = f" {instruction.op_str}" if instruction.op_str else ""
                    output.append(f"    {instruction.mnemonic}{operands} /* 0x{address:08x}: {raw} */")
                    consumed += instruction.size
            output.extend([f".size {name}, .-{name}", ""])
            index.append({"binary": binary, "section": section["name"],
                          "address": f"0x{start:08x}", "size": len(body),
                          "name": name, "kind": record["kind"], "sha1": digest})
    return index, "\n".join(output).rstrip() + "\n"


def main():
    import sys
    from read_reference_function import main as read_one

    if "--asm" not in sys.argv:
        sys.argv.append("--asm")
    read_one()


if __name__ == "__main__":
    main()

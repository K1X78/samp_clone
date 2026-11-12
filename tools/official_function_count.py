#!/usr/bin/env python3
"""Audit official 0.3.DL function mappings and refresh the README progress meter."""
from __future__ import annotations

from collections import defaultdict
import hashlib
import json
from pathlib import Path
import re

from tree_sitter import Language, Parser
import tree_sitter_cpp
from reference_binary import load_reference

ROOT = Path(__file__).resolve().parents[1]
SOURCE_EXTENSIONS = {".cpp", ".hpp", ".h", ".cc", ".c"}
POINTER = re.compile(
    r"Official:\s*(\w+)\s*@\s*(0x[0-9a-fA-F]+)\s*\((samp\.dll|samp-server\.exe)\)"
)
NON_ENTRY_MARKERS = (
    "arctool-only branch; not established in the client",
    "big-endian dependency branch; not present in the x86 client",
    "inline/pure-virtual or legacy helper; standalone native entry not established",
    "inline layout helper; no standalone entry established",
    "inline reference accessor; no standalone native entry established",
    "integration helper extracted from startup",
    "recovery accessor for static sprite object",
    "standard vc7 crt integration adapter; no established standalone native entry",
    "reconstruction-only body helper extracted",
    "source adapter only; no established separate native entry",
    "no standalone native entry",
    "reconstruction-only forwarding constructor; no standalone native entry",
    "inline initialization in cgame rva",
    "native global not established; unused legacy declaration",
)
ASM_LABEL = re.compile(
    r"(?m)^\.globl ([A-Za-z0-9_]+)\n"
    r"\.type \1, @function\n"
    r"\1:\n"
    r"\s*/\*\s*(0x[0-9a-fA-F]+)\s+size="
)
ASM_INSTRUCTION = re.compile(r"(?m)^\s+[^\n]+/\*\s*(0x[0-9a-fA-F]+):")
PUSH_ADDRESS = re.compile(r"(?m)^\s+push\s+(0x[0-9a-fA-F]+)\s*/\*")
STORED_CALLBACK_ADDRESS = re.compile(
    r"(?m)^\s+mov\s+dword ptr \[[^\]\n]+\],\s*(0x[0-9a-fA-F]+)\s*/\*"
)
README_COVERAGE = re.compile(
    r"(?s)(<!-- function-coverage:begin -->\s*).*?"
    r"(\s*<!-- function-coverage:end -->)"
)
BINARIES = ("samp.dll", "samp-server.exe")

# The C++ grammar understands GNU asm but not MSVC's brace-delimited dialect.
# Skip C++ comments/literals while locating assembly; braces inside a string or
# comment must never terminate a block. Keep every byte offset and newline so
# source locations and the original function declarators remain authoritative.
MSVC_ASM_TOKENS = re.compile(
    rb'//[^\n]*|/\*.*?\*/|'
    rb'(?:u8|u|U|L)?R"(?P<delimiter>[^\s\\()]{0,16})\(.*?\)(?P=delimiter)"|'
    rb'"(?:\\.|[^"\\])*"|\'(?:\\.|[^\'\\])*\'|'
    rb'(?P<assembly>\b(?:__asm|_asm)\b)|(?P<brace>[{}])',
    re.DOTALL,
)
MSVC_ASM_GAP = re.compile(rb'(?:\s|//[^\n]*|/\*.*?\*/)*', re.DOTALL)


def mask_msvc_assembly(data: bytes) -> bytes:
    """Blank assembly statements for parsing, never the enclosing C++ body."""
    tokens = list(MSVC_ASM_TOKENS.finditer(data))
    result = bytearray(data)
    index = 0
    while index < len(tokens):
        start = tokens[index]
        if start.group('assembly') is None:
            index += 1
            continue
        opening = index + 1
        while opening < len(tokens) and tokens[opening].group().startswith((b'//', b'/*')):
            opening += 1
        if opening >= len(tokens) or tokens[opening].group('brace') != b'{':
            # Single-line MSVC asm is valid too. Mask it only when it occupies
            # its own source line, preserving the surrounding C++ function.
            line_start = data.rfind(b'\n', 0, start.start()) + 1
            line_end = data.find(b'\n', start.end())
            if line_end < 0:
                line_end = len(data)
            if data[line_start:start.start()].strip() == b'':
                for offset in range(start.start(), line_end):
                    if result[offset] not in (10, 13):
                        result[offset] = 32
                index += 1
                while index < len(tokens) and tokens[index].start() < line_end:
                    index += 1
                continue
            index += 1
            continue
        if MSVC_ASM_GAP.fullmatch(data[start.end():tokens[opening].start()]) is None:
            index += 1
            continue
        depth = 1
        closing = opening + 1
        while closing < len(tokens) and depth:
            brace = tokens[closing].group('brace')
            if brace == b'{':
                depth += 1
            elif brace == b'}':
                depth -= 1
            if depth:
                closing += 1
        if depth:
            index += 1
            continue
        for offset in range(start.start(), tokens[closing].end()):
            if result[offset] not in (10, 13):
                result[offset] = 32
        index = closing + 1
    return bytes(result)


def source_functions() -> tuple[list[dict], list[dict]]:
    """Return production C++ function bodies and parser diagnostics."""
    parser = Parser(Language(tree_sitter_cpp.language()))
    functions: list[dict] = []
    diagnostics: list[dict] = []
    for path in sorted((ROOT / "src").rglob("*")):
        if path.suffix not in SOURCE_EXTENSIONS or "tests" in path.parts:
            continue
        data = path.read_bytes()
        # Calling-convention markers are not C++ syntax nodes; blank them while
        # preserving byte offsets used for source lines and declarations.
        parse_data = re.sub(
            rb"\b(?:__stdcall|__cdecl|__thiscall|__fastcall|__vectorcall|WINAPI|CALLBACK|APIENTRY|STDMETHODCALLTYPE)\b",
            lambda match: b" " * len(match.group()),
            data,
        )
        parse_data = mask_msvc_assembly(parse_data)
        tree = parser.parse(parse_data)
        relative = path.relative_to(ROOT).as_posix()
        stack = [tree.root_node]
        while stack:
            node = stack.pop()
            stack.extend(reversed(node.children))
            if node.type == "ERROR" or node.is_missing:
                diagnostics.append(
                    {
                        "source": relative,
                        "line": node.start_point.row + 1,
                        "text": data[node.start_byte:node.end_byte]
                        .decode("utf-8", errors="replace")[:160],
                    }
                )
            if node.type != "function_definition":
                continue
            body = node.child_by_field_name("body")
            if body is None or body.type != "compound_statement":
                continue
            declarator = node.child_by_field_name("declarator")
            declarator_text = (
                data[declarator.start_byte:declarator.end_byte]
                .decode("utf-8", errors="replace")
                if declarator
                else ""
            )
            # Tree-sitter can misread class/preprocessor syntax and MSVC
            # __try blocks as function definitions with a bare identifier.
            if "(" not in declarator_text:
                continue
            functions.append(
                {
                    "source": relative,
                    "line": node.start_point.row + 1,
                    "declarator": declarator_text,
                }
            )
    return functions, diagnostics


def labels_from_disassembly(text: str) -> tuple[dict[str, set[int]], int]:
    """Preserve the original instruction-boundary rule for inventory imports."""
    by_name: dict[str, set[int]] = defaultdict(set)
    total = 0
    instruction_addresses = {int(address, 16) for address in ASM_INSTRUCTION.findall(text)}
    for name, address in ASM_LABEL.findall(text):
        if not name.startswith("gap_"):
            by_name[name].add(int(address, 16))
            total += 1
    for address in PUSH_ADDRESS.findall(text) + STORED_CALLBACK_ADDRESS.findall(text):
        value = int(address, 16)
        if value in instruction_addresses:
            by_name[f"FUN_{value:08x}"].add(value)
    return dict(by_name), total


def official_labels() -> tuple[dict[str, dict[str, set[int]]], int]:
    labels = {}
    total = 0
    for binary in BINARIES:
        reference = load_reference(binary, ROOT)
        labels[binary] = {name: {int(address, 16) for address in addresses}
                          for name, addresses in reference["mapping_labels"].items()}
        for row in reference["regions"]:
            if row["assembly_name"].startswith("gap_"):
                continue
            if int(row["address"], 16) not in labels[binary].get(row["assembly_name"], set()):
                raise ValueError(f"Official region missing from mapping labels: {binary} {row['address']}")
            total += 1
    return labels, total


def official_function_addresses() -> dict[str, set[int]]:
    """Return byte-checked official region starts for each shipped binary."""
    addresses = {}
    for binary in BINARIES:
        reference = load_reference(binary, ROOT)
        addresses[binary] = {
            int(row["address"], 16)
            for row in reference["regions"]
            if not row["assembly_name"].startswith("gap_")
        }
    return addresses


def preceding_pointer(path: Path, line: int):
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    row = line - 2
    comments = []
    while row >= 0:
        value = lines[row].strip()
        if value.startswith(("//", "/*", "*")):
            comments.append(value)
        elif value:
            break
        row -= 1
    matches = POINTER.findall("\n".join(comments))
    return matches[0] if matches else None


def preceding_non_entry_reason(path: Path, line: int) -> str | None:
    lines = path.read_text(encoding="utf-8", errors="replace").splitlines()
    row = line - 2
    comments = []
    while row >= 0:
        value = lines[row].strip()
        if value.startswith(("//", "/*", "*")):
            comments.append(value)
        elif value:
            break
        row -= 1
    block = " ".join(reversed(comments)).lower()
    return next((reason for reason in NON_ENTRY_MARKERS if reason in block), None)


def audit() -> dict:
    parsed_functions, diagnostics = source_functions()
    non_entry_bodies = []
    functions = []
    for function in parsed_functions:
        reason = preceding_non_entry_reason(
            ROOT / function["source"], function["line"]
        )
        if reason is None:
            functions.append(function)
        else:
            non_entry_bodies.append((function, reason))
    labels, _ = official_labels()
    official_addresses_by_binary = official_function_addresses()
    bytechecked_addresses_by_binary = {
        binary: set(addresses)
        for binary, addresses in official_addresses_by_binary.items()
    }
    valid_claims = []
    missing = []
    invalid = []
    claims = defaultdict(list)
    for function in functions:
        path = ROOT / function["source"]
        pointer = preceding_pointer(path, function["line"])
        key = f"{function['source']}:{function['line']} {function['declarator']}"
        if pointer is None:
            missing.append(key)
            continue
        name, address_text, binary = pointer
        address = int(address_text, 16)
        claims[(binary, address)].append(key)
        if address not in labels.get(binary, {}).get(name, set()):
            invalid.append((key, name, address_text, binary))
        else:
            valid_claims.append((key, binary, address))
    duplicates = [
        (binary, address, rows)
        for (binary, address), rows in claims.items()
        if len(rows) > 1
    ]
    duplicate_keys = {key for _, _, rows in duplicates for key in rows}
    source_entries_by_binary = {binary: set() for binary in BINARIES}
    for key, binary, address in valid_claims:
        if key in duplicate_keys:
            continue
        if address not in bytechecked_addresses_by_binary[binary]:
            source_entries_by_binary[binary].add(address)
            official_addresses_by_binary[binary].add(address)
    official_by_binary = {
        binary: len(addresses)
        for binary, addresses in official_addresses_by_binary.items()
    }
    mapped_by_binary = {binary: 0 for binary in BINARIES}
    source_address_entries_by_binary = {
        binary: len(addresses)
        for binary, addresses in source_entries_by_binary.items()
    }
    mapped_source_bodies = 0
    for key, binary, address in valid_claims:
        if key in duplicate_keys:
            continue
        mapped_source_bodies += 1
        if address in official_addresses_by_binary[binary]:
            mapped_by_binary[binary] += 1
    mapped = sum(mapped_by_binary.values())
    official_total = sum(official_by_binary.values())
    return {
        "source_bodies": len(functions),
        "non_entry_source_bodies": len(non_entry_bodies),
        "official_functions": official_total,
        "official_functions_by_binary": official_by_binary,
        "mapped": mapped,
        "mapped_by_binary": mapped_by_binary,
        "source_address_entries_by_binary": source_address_entries_by_binary,
        "mapped_source_bodies": mapped_source_bodies,
        "unmapped": len(functions) - mapped_source_bodies,
        "missing": missing,
        "invalid": invalid,
        "duplicates": duplicates,
        "parser_diagnostics": diagnostics,
    }


def parser_review_errors(diagnostics: list[dict]) -> list[str]:
    """Require explicit review of syntax the inventory parser cannot interpret."""
    path = ROOT / "tools" / "parser_diagnostics.json"
    reviews = json.loads(path.read_text(encoding="utf-8"))
    expected = [row["diagnostic"] for row in reviews]
    errors = []
    for row in diagnostics:
        if row not in expected:
            errors.append(f"unreviewed parser diagnostic: {row}")
    for row in reviews:
        if not row.get("disposition") or row["diagnostic"] not in diagnostics:
            errors.append(f"stale or incomplete parser review: {row}")
        source = ROOT / row["diagnostic"]["source"]
        if hashlib.sha256(source.read_bytes()).hexdigest() != row.get("source_sha256"):
            errors.append(f"parser review needs renewal after source change: {source}")
    return errors


def update_readme(
    mapped_by_binary: dict[str, int],
    official_by_binary: dict[str, int],
) -> None:
    path = ROOT / "README.md"
    text = path.read_text(encoding="utf-8")
    rows = [
        "| Binary | Mapped official entries | Official entries | Official entries remaining | Coverage |",
        "|---|---:|---:|---:|---:|",
    ]
    for binary in BINARIES:
        mapped = mapped_by_binary[binary]
        total = official_by_binary[binary]
        rows.append(
            f"| `{binary}` | {mapped:,} | {total:,} | {total - mapped:,} | "
            f"{mapped * 100 / total:.2f}% |"
        )
    mapped = sum(mapped_by_binary.values())
    total = sum(official_by_binary.values())
    rows.append(
        f"| **Combined** | **{mapped:,}** | **{total:,}** | "
        f"**{total - mapped:,}** | **{mapped * 100 / total:.2f}%** |"
    )
    block = "\n".join(rows)
    updated, count = README_COVERAGE.subn(
        lambda match: f"{match.group(1)}{block}{match.group(2)}",
        text,
        count=1,
    )
    if count != 1:
        raise RuntimeError(f"expected one function-coverage block in {path}")
    if updated != text:
        path.write_text(updated, encoding="utf-8", newline="\n")


def main() -> int:
    import argparse

    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--missing", action="store_true", help="list unmapped source bodies")
    parser.add_argument(
        "--check",
        action="store_true",
        help="fail unless every body has a unique valid pointer",
    )
    args = parser.parse_args()
    result = audit()
    review_errors = parser_review_errors(result["parser_diagnostics"])
    update_readme(
        result["mapped_by_binary"],
        result["official_functions_by_binary"],
    )
    print("Official function-entry coverage by binary:")
    for binary in BINARIES:
        mapped = result["mapped_by_binary"][binary]
        total = result["official_functions_by_binary"][binary]
        print(f"  {binary}: {mapped:,} / {total:,} ({mapped * 100 / total:.2f}%)")
    mapped = result["mapped"]
    total = result["official_functions"]
    print(f"Reverse engineered: {mapped:,} / {total:,} ({mapped * 100 / total:.2f}%)")
    print(f"Mapped local source bodies (including callbacks): {result['mapped_source_bodies']:,}")
    print("Official entries remaining:")
    for binary in BINARIES:
        remaining = (
            result["official_functions_by_binary"][binary]
            - result["mapped_by_binary"][binary]
        )
        print(f"  {binary}: {remaining:,}")
    print(f"  Combined: {total - mapped:,}")
    print(f"Unmapped local source bodies (C++): {result['unmapped']:,}")
    print(f"Source bodies without a standalone entry annotation: {result['non_entry_source_bodies']:,}")
    if args.missing:
        for key in result["missing"]:
            print(key)
        for key, name, address, binary in result["invalid"]:
            print(f"invalid pointer: {key}: {name} @ {address} ({binary})")
        for binary, address, rows in result["duplicates"]:
            print(f"duplicate pointer: {binary} @ 0x{address:08x}: {', '.join(rows)}")
    if args.check and (
        result["unmapped"]
        or result["invalid"]
        or result["duplicates"]
        or review_errors
    ):
        for error in review_errors:
            print(error)
        return 1
    return 0


if __name__ == "__main__":
    raise SystemExit(main())

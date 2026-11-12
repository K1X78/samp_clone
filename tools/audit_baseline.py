#!/usr/bin/env python3
"""Export evidence and source coverage inventories; never update the README meter.

Statuses describe static source coverage, not semantic or runtime equivalence.
"""
from __future__ import annotations

import argparse
from collections import Counter
import csv
import hashlib
import json
from pathlib import Path
import re
import struct

import official_function_count as counter
from tree_sitter import Language, Parser
import tree_sitter_cpp
from reference_binary import load_reference

ROOT = Path(__file__).resolve().parents[1]


class PeImage:
    """Read only file-backed PE32 virtual addresses; no target execution."""

    def __init__(self, path: Path):
        self.data = path.read_bytes()
        if self.data[:2] != b"MZ":
            raise ValueError(f"not a PE image: {path}")
        pe = struct.unpack_from("<I", self.data, 0x3c)[0]
        if self.data[pe:pe + 4] != b"PE\0\0":
            raise ValueError(f"invalid PE signature: {path}")
        self.machine, count = struct.unpack_from("<HH", self.data, pe + 4)
        optional_size = struct.unpack_from("<H", self.data, pe + 20)[0]
        if struct.unpack_from("<H", self.data, pe + 24)[0] != 0x10b:
            raise ValueError(f"expected PE32: {path}")
        self.base = struct.unpack_from("<I", self.data, pe + 52)[0]
        self.sections = [struct.unpack_from("<8sIIII", self.data,
                         pe + 24 + optional_size + i * 40) for i in range(count)]

    def read(self, address: int, size: int) -> bytes:
        rva = address - self.base
        for _, _, start, raw_size, raw in self.sections:
            if start <= rva and rva + size <= start + raw_size:
                result = self.data[raw + rva - start:raw + rva - start + size]
                if len(result) == size:
                    return result
        raise ValueError(f"address not file-backed: {address:#x} size={size}")

    def u32(self, address: int) -> int:
        return struct.unpack("<I", self.read(address, 4))[0]

    def string(self, address: int) -> str:
        result = bytearray()
        for offset in range(1024):
            value = self.read(address + offset, 1)[0]
            if value == 0:
                return result.decode("ascii")
            result.append(value)
        raise ValueError("unterminated PE string")


def write_csv(directory: Path, name: str, rows: list[dict]) -> None:
    if not rows:
        raise ValueError(f"empty inventory: {name}")
    with (directory / name).open("w", newline="", encoding="utf-8") as stream:
        writer = csv.DictWriter(stream, fieldnames=list(rows[0]), lineterminator="\n")
        writer.writeheader()
        writer.writerows({key: value.replace("\r\n", "\n") if isinstance(value, str) else value
                          for key, value in row.items()} for row in rows)


def native_registrations() -> dict:
    parser = Parser(Language(tree_sitter_cpp.language()))
    result = {}
    for relative in ("src/pawn/natives.cpp", "src/pawn/db_natives.cpp"):
        data = (ROOT / relative).read_bytes()
        tree = parser.parse(data)
        stack = [tree.root_node]
        while stack:
            node = stack.pop()
            stack.extend(reversed(node.children))
            if node.type != "assignment_expression":
                continue
            left = node.child_by_field_name("left")
            right = node.child_by_field_name("right")
            if left is None or right is None:
                continue
            match = re.search(rb'native_functions_\["([^"]+)"\]', data[left.start_byte:left.end_byte])
            if not match:
                continue
            body = right.child_by_field_name("body")
            body_text = data[body.start_byte:body.end_byte].decode() if body else ""
            constant = re.fullmatch(r"\{\s*return\s+(-?\d+);\s*\}", body_text)
            name = match[1].decode()
            result[name] = {
                "source": f"{relative}:{node.start_point.row + 1}",
                "status": "placeholder" if constant else "partial",
                "detail": f"constant return {constant[1]}" if constant else
                          "registered body present; semantic verification pending",
            }
    # Follow the merged table-driven registrar as well as literal closures.
    # Only inspect tables actually referenced by register_server_natives.
    registrar = (ROOT / "src/pawn/natives.cpp").read_text(encoding="utf-8-sig")
    functions, _ = counter.source_functions()
    for family in ("core_natives", "float_natives", "property_natives",
                   "string_natives", "time_natives"):
        if family + "::kNatives" not in registrar:
            continue
        relative = "src/pawn/" + family + ".cpp"
        header = (ROOT / "src/pawn/include/pawn" / (family + ".hpp")).read_text(encoding="utf-8-sig")
        owners = {row["declarator"].split("(", 1)[0].strip(): row
                  for row in functions if row["source"] == relative}
        for name, callback in re.findall(r'\{"([^"\n]+)",\s*(\w+)\}', header):
            owner = owners.get(callback)
            if owner is None:
                raise ValueError(f"registered native body missing from inventory: {family}::{callback}")
            if name in result:
                raise ValueError(f"duplicate literal/table native registration: {name}")
            result[name] = {"source": f"{relative}:{owner['line']}", "status": "partial",
                            "detail": f"table-driven {family}::kNatives -> {callback}; behavioral scope remains per fixture"}
    return result


def official_client_rpcs(image: PeImage) -> list[dict]:
    reference = load_reference("samp.dll", ROOT)
    if hashlib.sha256(image.data).hexdigest() != reference["sha256"]:
        raise ValueError("Client RPC reference belongs to a different official binary")
    result = []
    for row in reference["client_rpc_registrations"]:
        callback, callsite, slot = (int(row[key], 16) for key in ("callback", "registration", "id_storage"))
        second_site = callsite + 5
        # Verify the two PUSH immediate instructions against this exact PE.
        if image.read(callsite, 5) != b"\x68" + struct.pack("<I", callback):
            raise ValueError(f"assembly/PE mismatch at {callsite:#x}")
        if image.read(second_site, 5) != b"\x68" + struct.pack("<I", slot):
            raise ValueError(f"assembly/PE mismatch at {second_site:#x}")
        result.append({"id": image.u32(slot), "callback": f"0x{callback:08x}",
                       "registration": f"0x{callsite:08x}", "id_storage": f"0x{slot:08x}"})
    if not result:
        raise ValueError("no official RPC registration pairs recovered")
    return result


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--output", type=Path, default=ROOT / "docs/baseline")
    args = parser.parse_args()
    out = args.output.resolve()
    out.mkdir(parents=True, exist_ok=True)
    images = {name: PeImage(ROOT / "GTA Sa samp_clone" / f"{name}.official")
              for name in ("samp.dll", "samp-server.exe")}
    identity = {name: {"bytes": len(image.data), "sha256": hashlib.sha256(image.data).hexdigest(),
                      "machine": f"0x{image.machine:04x}"} for name, image in images.items()}
    functions, diagnostics = counter.source_functions()
    mapping = []
    for row in functions:
        pointer = counter.preceding_pointer(ROOT / row["source"], row["line"])
        symbol, address, binary = pointer if pointer else ("", "", "")
        mapping.append({**row, "binary": binary, "symbol": symbol, "address": address,
                        "status": "partial", "next": "verify semantics and real caller effects"})
    write_csv(out, "source-functions.csv", mapping)

    native_header = (ROOT / "src/pawn/include/pawn/natives_table.hpp").read_text()
    catalog = re.findall(r'\{"([^"]+)", (0x[0-9a-fA-F]+)u, "([^"]+)"\}', native_header)
    tables = re.findall(r'\{"([^"]+)", (\d+), (\d+), (0x[0-9a-fA-F]+)u, (0x[0-9a-fA-F]+)u\}', native_header)
    registrations = native_registrations()
    native_rows = []
    for table, first, count, address, registrar in tables:
        for index in range(int(count)):
            name, callback, family = catalog[int(first) + index]
            entry = int(address, 16) + index * 8
            image = images["samp-server.exe"]
            verified = (image.string(image.u32(entry)) == name and
                        image.u32(entry + 4) == int(callback, 16))
            if not verified:
                raise ValueError(f"native table/PE mismatch: {name} {entry:#x}")
            native_rows.append({"name": name, "family": family, "table": table,
                "entry": f"0x{entry:08x}", "callback": callback, "registrar": registrar,
                "table_bytes_verified": True,
                **registrations.get(name, {"source": "", "status": "absent",
                                          "detail": "no literal registration in native host"})})
    write_csv(out, "natives.csv", native_rows)

    rpc_header = (ROOT / "src/protocol/include/samp/proto/rpc_ids.hpp").read_text()
    catalog_rpcs = {int(value): name for name, value in re.findall(r'^\s+(\w+) = (\d+),', rpc_header, re.M)}
    dispatch_source = (ROOT / "src/client/core/server_rpc_camera.cpp").read_text()
    routes = {int(value): handler for value, handler in re.findall(
        r'case\s+(\d+)\s*:\s*return\s+(rpc_\w+)\(context,\s*payload\);', dispatch_source)}
    official_rpcs = official_client_rpcs(images["samp.dll"])
    write_csv(out, "official-client-rpcs.csv", official_rpcs)
    by_id = {}
    for row in official_rpcs:
        by_id.setdefault(row["id"], []).append(row)
    source_owners = {re.sub(r'\(.*', '', row['declarator']).strip(): row for row in mapping}
    network_specials = {68: 'handle_spawn_info', 93: 'client message inline',
                        101: 'chat inline', 128: 'handle_class_response',
                        129: 'spawn response inline', 130: 'connection rejection inline',
                        139: 'handle_player_init', 155: 'handle_score_pings'}
    server_routes = {25: 'handle_player_connect', 50: 'handle_player_command',
                     52: 'handle_player_in_game', 101: 'handle_player_chat',
                     128: 'handle_player_request_class', 129: 'handle_player_request_spawn',
                     26: 'handle_vehicle_enter', 53: 'handle_player_death',
                     118: 'handle_player_interior', 136: 'handle_vehicle_death',
                     154: 'handle_vehicle_exit'}
    rpc_rows = []
    for rpc_id in sorted(set(catalog_rpcs) | set(routes) | set(by_id)):
        handler = routes.get(rpc_id, "")
        owner = source_owners.get(handler, {})
        evidence = by_id.get(rpc_id, [])
        matched = any(x['callback'] == owner.get('address', '').lower() for x in evidence)
        ownership = 'direct' if matched else 'unresolved'
        # RPC 40 registers a MOV ECX,[global]; JMP owner adapter. Verify the
        # actual eleven bytes rather than accepting a nearby source pointer.
        if rpc_id == 40 and owner.get('address'):
            for callback in evidence:
                address = int(callback['callback'], 16)
                code = images['samp.dll'].read(address, 11)
                target = address + 11 + struct.unpack_from('<i', code, 7)[0]
                if code[:2] == b'\x8b\x0d' and code[6] == 0xe9 and target == int(owner['address'], 16):
                    matched = True
                    ownership = 'verified MOV ECX / tail JMP adapter to source owner'
        special = network_specials.get(rpc_id, '')
        server_handler = server_routes.get(rpc_id, '')
        rpc_rows.append({"id": rpc_id, "catalog_name": catalog_rpcs.get(rpc_id, ""),
            "client_handler": handler, "source": owner.get("source", ""),
            "network_client_special": special, "server_handler": server_handler,
            "source_pointer": owner.get("address", ""),
            "official_callbacks": ";".join(x["callback"] for x in evidence),
            "official_registration": ";".join(x["registration"] for x in evidence),
            "pointer_matches_registration": matched,
            "ownership_relation": ownership,
            "status": "partial" if handler or special or server_handler else
                      "absent" if evidence else "unresolved",
            "next": "verify behavior, native/server coverage and GTA application" if handler or special or server_handler else
                    "recover official callback behavior" if evidence else "verify direction and official registration"})
    write_csv(out, "rpcs.csv", rpc_rows)

    packet_header = (ROOT / "src/protocol/include/samp/proto/packet_ids.hpp").read_text()
    packet_rows = []
    network = (ROOT / 'src/client/core/network_client.cpp').read_text()
    packet_handlers = {int(value): handler for value, handler in re.findall(
        r'case (\d+): (handle_\w+_sync)\(packet', network)}
    # Explicit current producer/consumer inventory; a receive route alone does
    # not imply that the matching local send or server relay exists.
    client_sends = {200: 'send_driver_sync', 203: 'send_aim_sync',
                    204: 'send_weapons_sync', 205: 'send_stats_sync',
                    206: 'send_bullet_sync', 207: 'send_foot_sync', 211: 'send_passenger_sync'}
    server_receives = {200: 'handle_driver_packet', 203: 'handle_aim_packet',
                       204: 'handle_weapons_packet', 205: 'handle_stats_packet',
                       206: 'handle_bullet_packet', 207: 'handle_game_packet (on-foot)',
                       211: 'handle_passenger_packet'}
    for name, value in re.findall(r'^\s+(\w+) = (\d+),', packet_header, re.M):
        packet_id = int(value)
        packet_rows.append({"id": packet_id, "catalog_name": name,
            "status": "partial" if packet_id in packet_handlers else 'partial' if packet_id in client_sends else 'unresolved',
            "client_receive": packet_handlers.get(packet_id, 'server-directed only' if packet_id in (204, 205) else 'absent in game dispatcher'),
            "client_send": client_sends.get(packet_id, 'absent in local sync send surface'),
            "server_relay": 'relay_sync' if packet_id in (200, 203, 206, 207, 211) else 'state only' if packet_id in (204, 205) else 'absent in handle_game_packet',
            "client_owner": "src/client/core/network_client.cpp",
            "server_receive": server_receives.get(packet_id, "absent"),
            "server_owner": "src/server/game_layer.cpp; src/server/player_sync.cpp; src/server/vehicle_sync.cpp",
            "next": "verify direction, send/receive/relay branches and layout against 0.3.DL"})
    write_csv(out, "packets.csv", packet_rows)

    provenance = []
    for path in sorted((ROOT / "src").rglob("*")):
        if path.suffix not in counter.SOURCE_EXTENSIONS:
            continue
        for line, text in enumerate(path.read_text(errors="replace").splitlines(), 1):
            if not text.lstrip().startswith("//"):
                continue
            for match in re.finditer(r'(?:docs/re/|reference/|harness[/\\]|tools/gen_id_tables\.py)[\w./\\-]*', text):
                ref = match[0].replace("\\", "/").rstrip(".")
                provenance.append({"source": path.relative_to(ROOT).as_posix(), "line": line,
                    "reference": ref, "available": (ROOT / ref).exists(),
                    "disposition": "historical claim unresolved; use current official binary/assembly and source-functions.csv"})
            if "0.3.7" in text:
                provenance.append({"source": path.relative_to(ROOT).as_posix(), "line": line,
                    "reference": "version mention: " + text.strip(), "available": False,
                    "disposition": "context only; never accepted as 0.3.DL behavior evidence"})
    write_csv(out, "provenance.csv", provenance)
    test_source = '\n'.join(path.read_text(encoding='utf-8-sig')
                            for path in sorted((ROOT / 'tests').glob('*_test.cpp')))
    fixture_ids = {int(value) for value in re.findall(
        r'apply_server_rpc\((?:f\.context|context),\s*(\d+),', test_source)}
    summary = {"reference_identity": identity,
        "source_functions": len(mapping), "reviewed_parser_diagnostics": len(diagnostics),
        "parser_review_errors": counter.parser_review_errors(diagnostics),
        "native_entries": len(native_rows), "native_distinct_names": len({r['name'] for r in native_rows}),
        "native_entry_status": dict(Counter(r['status'] for r in native_rows)),
        "literal_native_registrations": sum(not row["detail"].startswith("table-driven ")
                                            for row in registrations.values()),
        "resolved_native_registrations": len(registrations),
        "native_registrations_outside_catalog": sorted(set(registrations) - {r['name'] for r in native_rows}),
        "rpc_catalog_entries": len(catalog_rpcs), "client_dispatch_routes": len(routes),
        "rpc_inventory_rows": len(rpc_rows),
        "rpc_status": dict(Counter(r['status'] for r in rpc_rows)),
        "official_client_registration_pairs": len(official_rpcs),
        "dispatch_pointer_mismatches": [r['id'] for r in rpc_rows if r['client_handler'] and not r['pointer_matches_registration']],
        "dispatch_routes_without_fixture": sorted(set(routes) - fixture_ids),
        "packet_catalog_entries": len(packet_rows),
        "provenance_rows": len(provenance),
        "scope": "static inventory; partial means source present, not behavioral parity; unresolved stays explicit"}
    (out / "summary.json").write_text(json.dumps(summary, indent=2) + "\n", encoding="utf-8", newline="\n")
    print(json.dumps(summary, indent=2))
    return bool(summary["parser_review_errors"] or summary["dispatch_pointer_mismatches"]
                or summary["dispatch_routes_without_fixture"])


if __name__ == "__main__":
    raise SystemExit(main())

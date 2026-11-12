#!/usr/bin/env python3
"""Generate address-indexed Ghidra C from the shipped 0.3.DL binaries.

Only analysis artifacts are written. No source, assembly labels, function meter,
or reference binary is changed. Java/Ghidra must already be installed.
"""
from __future__ import annotations

import argparse
import bisect
from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import re
import shutil
import subprocess
import time
from reference_binary import ReferenceImage, load_reference

ROOT = Path(__file__).resolve().parents[1]
BINARIES = {"server": "samp-server.exe", "client": "samp.dll"}
NATIVE = re.compile(r'\{"([^"\n]+)",\s*(0x[0-9a-fA-F]+)u,\s*"([^"\n]+)"\}')


def assembly_entries(binary: str, include_gaps: bool = False) -> list[dict]:
    """Read the preserved official boundaries, without a text assembly dump."""
    records = [dict(row) for row in load_reference(binary, ROOT)["regions"]
               if include_gaps or not row["assembly_name"].startswith("gap_")]
    if not records or len({row["address"] for row in records}) != len(records):
        raise ValueError(f"Empty or duplicate assembly entries: {binary}")
    return records


def native_aliases(binary: str) -> dict[str, list[str]]:
    aliases: dict[str, list[str]] = {}
    if binary == BINARIES["server"]:
        table = ROOT / "src/pawn/include/pawn/natives_table.hpp"
        for name, address, library in NATIVE.findall(table.read_text(encoding="utf-8")):
            aliases.setdefault(f"0x{int(address, 16):08x}", []).append(f"{library}:{name}")
    return aliases


def write_manifest(binary: str, entries: list[dict], manifest: Path) -> None:
    seeds = {row["address"]: (row["assembly_name"], "assembly") for row in entries}
    for address in native_aliases(binary):
        seeds.setdefault(address, (f"FUN_{int(address, 16):08x}", "native_catalog"))
    manifest.write_text("".join(f"{address}\t{name}\t{source}\n"
                                for address, (name, source) in sorted(seeds.items())), encoding="utf-8")


def enrich_index(output: Path, binary: str, entries: list[dict], digest: str) -> dict:
    index_path = output / "index.json"
    index = json.loads(index_path.read_text(encoding="utf-8"))
    if index["sha256"].lower() != digest:
        raise ValueError(f"Ghidra input hash mismatch: {binary}")
    by_address = {row["address"]: row for row in entries}
    aliases = native_aliases(binary)
    regions = sorted(assembly_entries(binary, include_gaps=True), key=lambda row: row["address"])
    region_starts = [int(row["address"], 16) for row in regions]
    image = ReferenceImage(binary, ROOT, digest)
    seen = set()
    tsv = ["address\tstatus\tname\taliases\tfile\treference_region"]
    for row in index["functions"]:
        address = row["address"]
        if address in seen:
            raise ValueError(f"Duplicate export: {address}")
        seen.add(address)
        row.update(by_address.get(address, {}))
        row.pop("assembly_file", None)
        row.pop("assembly_line", None)
        row["aliases"] = aliases.get(address, [])
        region_number = bisect.bisect_right(region_starts, int(address, 16)) - 1
        region = regions[region_number] if region_number >= 0 else None
        if region and int(address, 16) < int(region["address"], 16) + region["assembly_size"]:
            row["assembly_region"] = region
        path = output / row["file"]
        raw_code = path.read_bytes()
        ranges = row.get("body_ranges", [])
        if len(ranges) == 1:
            start, end = (int(value, 16) for value in ranges[0].split(".."))
            size = end - start + 1
            instruction = image.read(start, size) if size in (2, 5) else b""
            if start == int(address, 16) and ((size == 5 and instruction[:1] == b"\xe9") or
                                             (size == 2 and instruction[:1] == b"\xeb")):
                target = f"0x{start + size + int.from_bytes(instruction[1:], 'little', signed=True):08x}"
                # Ghidra may emit the resolved callee's C for a thunk. Keep its
                # raw C intact and identify this fact from the exact JMP bytes.
                row["forwarder_target"] = target
                if b" * Single JMP forwarder" not in raw_code:
                    note = (f" * Single JMP forwarder to {target}; Ghidra C may show the target body.\n").encode()
                    raw_code = raw_code.replace(b" * Full provenance", note + b" * Full provenance", 1)
                    path.write_bytes(raw_code)
        code = raw_code.decode("utf-8")
        if not code.endswith(f"/* END FUNCTION {address} */\n"):
            raise ValueError(f"Incomplete export: {address}")
        row["pseudocode_sha256"] = hashlib.sha256(raw_code).hexdigest()
        tsv.append("\t".join([address, row["status"], row["name"],
                               ",".join(row["aliases"]), row["file"],
                               row.get("assembly_region", {}).get("address", "")]))
    missing = set(by_address) - seen
    if missing:
        raise ValueError(f"Assembly entries missing from export: {sorted(missing)}")
    index["reference_binary"] = f"GTA Sa samp_clone/{binary}.official"
    index.pop("assembly_sha256", None)
    index["reference_metadata_sha256"] = hashlib.sha256((ROOT / "docs/asm/pseudocode" / binary / "reference.json").read_bytes()).hexdigest()
    index["status_counts"] = dict(Counter(row["status"] for row in index["functions"]))
    index["assembly_entries"] = len(entries)
    index["alias_source"] = "Native catalog hints only; no types or semantic names forced into Ghidra."
    index["enrichment_script_sha256"] = hashlib.sha256(Path(__file__).read_bytes()).hexdigest()
    index_path.write_text(json.dumps(index, indent=2) + "\n", encoding="utf-8")
    (output / "index.tsv").write_text("\n".join(tsv) + "\n", encoding="utf-8")
    return index


def run_headless(command: list[str], environment: dict, log: Path, timeout: int) -> None:
    with log.open("w", encoding="utf-8") as stream:
        process = subprocess.Popen(command, env=environment, stdout=stream, stderr=subprocess.STDOUT)
        try:
            result = process.wait(timeout=timeout)
        except (subprocess.TimeoutExpired, KeyboardInterrupt):
            if os.name == "nt":
                # Only this owned launch tree, never an existing Ghidra session.
                subprocess.run(["taskkill", "/PID", str(process.pid), "/T", "/F"],
                               timeout=15, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
            else:
                process.kill()
            process.wait(timeout=15)
            raise
        if result:
            raise subprocess.CalledProcessError(result, command)


def main() -> None:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--ghidra-home", type=Path, default=os.environ.get("GHIDRA_HOME"))
    parser.add_argument("--java-home", type=Path, default=os.environ.get("JAVA_HOME"))
    parser.add_argument("--binary", choices=["both", *BINARIES], default="both")
    parser.add_argument("--output", type=Path, default=ROOT / "docs/asm/pseudocode")
    parser.add_argument("--function-timeout", type=int, default=60)
    parser.add_argument("--process-timeout", type=int, default=3600)
    parser.add_argument("--heap", default="768M", help="Ghidra heap limit; binary jobs run sequentially.")
    parser.add_argument("--keep-project", action="store_true", help="Keep the owned analysis project under build/work/ for follow-up inspection.")
    parser.add_argument("--enrich-existing", action="store_true", help="Refresh navigation metadata for an existing export without running Ghidra.")
    args = parser.parse_args()
    if args.enrich_existing:
        for kind, binary in BINARIES.items():
            if args.binary in ("both", kind):
                source = ROOT / "GTA Sa samp_clone" / f"{binary}.official"
                index = enrich_index(args.output.resolve() / binary, binary, assembly_entries(binary),
                                     hashlib.sha256(source.read_bytes()).hexdigest())
                print(f"{binary}: refreshed navigation; {index['status_counts']}", flush=True)
        return
    if not args.ghidra_home:
        parser.error("Pass --ghidra-home or set GHIDRA_HOME to an existing Ghidra installation.")
    if min(args.function_timeout, args.process_timeout) <= 0:
        parser.error("Timeouts must be positive.")
    ghidra = args.ghidra_home.resolve()
    launcher = ghidra / "support" / ("analyzeHeadless.bat" if os.name == "nt" else "analyzeHeadless")
    if not launcher.is_file():
        parser.error(f"Missing launcher: {launcher}")
    environment = os.environ.copy()
    if not re.fullmatch(r"[1-9][0-9]*[mMgG]", args.heap):
        parser.error("--heap must be a positive integer followed by M or G.")
    environment["GHIDRA_HEADLESS_MAXMEM"] = args.heap
    if args.java_home:
        environment["JAVA_HOME"] = str(args.java_home.resolve())
        environment["JAVA_HOME_OVERRIDE"] = str(args.java_home.resolve())
    output_root = args.output.resolve()
    output_root.mkdir(parents=True, exist_ok=True)
    work = ROOT / "build/work/ghidra-pseudocode"
    work.mkdir(parents=True, exist_ok=True)
    for kind, binary in BINARIES.items():
        if args.binary not in ("both", kind):
            continue
        source = ROOT / "GTA Sa samp_clone" / f"{binary}.official"
        digest = hashlib.sha256(source.read_bytes()).hexdigest()
        entries = assembly_entries(binary)
        manifest = work / f"{binary}.entries.tsv"
        write_manifest(binary, entries, manifest)
        destination = output_root / binary
        # Separate owned projects leave existing Ghidra work and user sessions alone.
        project = f"{kind}_{time.time_ns()}"
        staging = work / f"{project}.export"
        log = work / f"{binary}.log"
        command = [str(launcher), str(work), project, "-import", str(source),
                   "-scriptPath", str(ROOT / "tools/ghidra"),
                   "-preScript", "SeedReferenceFunctions.java", str(manifest),
                   "-postScript", "ExportReferencePseudocode.java", str(staging),
                   str(manifest), str(args.function_timeout), "-max-cpu", "4"]
        if not args.keep_project:
            command.append("-deleteProject")
        print(f"Decompiling {binary}: {len(entries)} assembly entries. Log: {log}", flush=True)
        run_headless(command, environment, log, args.process_timeout)
        if "EXPORT COMPLETE:" not in log.read_text(encoding="utf-8", errors="replace"):
            raise RuntimeError(f"Ghidra did not finish the exporter. Inspect {log}")
        index = enrich_index(staging, binary, entries, digest)
        index["generation"] = {
            "manifest_sha256": hashlib.sha256(manifest.read_bytes()).hexdigest(),
            "log_sha256": hashlib.sha256(log.read_bytes()).hexdigest(),
            "script_sha256": {path.name: hashlib.sha256(path.read_bytes()).hexdigest()
                              for path in (ROOT / "tools/ghidra").glob("*.java")},
            "function_timeout_seconds": args.function_timeout,
            "heap": args.heap,
        }
        (staging / "index.json").write_text(json.dumps(index, indent=2) + "\n", encoding="utf-8")
        destination.mkdir(parents=True, exist_ok=True)
        shutil.copytree(staging / "functions", destination / "functions", dirs_exist_ok=True)
        expected = {Path(row["file"]).name for row in index["functions"]}
        for old in (destination / "functions").glob("*.c"):
            if re.fullmatch(r"[0-9a-f]{8}\.c", old.name) and old.name not in expected:
                old.unlink()  # Only obsolete generated files in this binary's output.
        shutil.copy2(staging / "index.tsv", destination / "index.tsv")
        shutil.copy2(staging / "index.json", destination / "index.json")
        print(f"{binary}: {index['status_counts']}; all {len(entries)} assembly entries indexed.", flush=True)
        if args.keep_project:
            print(f"Kept analysis project: {work / project}", flush=True)


if __name__ == "__main__":
    main()

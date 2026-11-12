# Official 0.3.DL pseudocode

Start here when a task supplies an official address. These files are unedited
Ghidra C generated from `samp.dll.official` and `samp-server.exe.official`.
Each function has its own file; reading it does not require loading a giant dump.
The supplied audit's native and helper addresses are linked in
[FILE_NATIVES.md](FILE_NATIVES.md).
Bulk `.s` listings have been removed locally and from the repository. The C
files are the primary reading source. `reference.json` preserves the official
boundary inventory, byte hashes, counter labels and RPC registration metadata.

## Read a complete function

From the repository root:

```powershell
python tools/read_reference_function.py server 0x405120
python tools/read_reference_function.py server fopen --asm
python tools/read_reference_function.py server flength
python tools/read_reference_function.py client 0x10074060 --asm
```

On this machine Python is installed outside PATH. If `python` is unavailable:

```powershell
$python = 'C:\Users\yassi\AppData\Local\Python\pythoncore-3.14-64\python.exe'
& $python tools/read_reference_function.py server 0x405120 --asm
```

The command prints provenance, body ranges, callees, incoming static references,
and the entire pseudocode body without an internal line/character limit.
`--asm` verifies the binary SHA-256 and prints its complete known function body
ranges with addresses and instruction bytes. It disassembles the official PE
directly and creates no assembly file. Terminal/tool output limits still apply; agents should
increase their output budget or read the individual `.c` file in consecutive
chunks through its `END FUNCTION` marker. Do not assume a truncated preview is
the full function.

Names are case insensitive. Addresses can omit `0x` and leading zeroes. Native
aliases such as `fopen` and `file:fopen` come from the repository's native catalog
and are lookup hints; they do not force signatures or names into the decompiler.
Ambiguous name searches list candidates and require selecting an exact address.

## Navigate without Python

- Server: `samp-server.exe/functions/00405120.c` for address `0x405120`.
- Client: `samp.dll/functions/10074060.c` for address `0x10074060`.
- Each binary's `index.tsv` is searchable with `rg` for addresses or native names.
- Each binary's `index.json` records SHA-256 provenance, status, body ranges,
  complete known callees and incoming references, and binary region addresses.
- Follow a `FUN_004xxxxx` or `FUN_100xxxxx` call by opening the matching address
  file or using the reader command again. Imports are external and have no local
  function file. Static cross references do not recover every indirect call.

## Interpretation and coverage

This is decompiler output, not recovered original source or verified clone code.
Types, signedness, parameter counts, calling conventions, stack locals, function
boundaries, and library identifications can be wrong. `unaff_*`, `in_*`, unusual
register parameters, `undefined*`, and warnings are evidence to investigate.
Review the exact assembly owner before changing production behavior.

For a one-instruction JMP forwarder such as `ftemp`, Ghidra can emit the target's
entire C body. Such entries are marked `forwarder_target` in the index and have
a notice in their generated header and reader output. Follow that address to
read the target independently; use `--asm` to see the forwarding instruction.

All non-gap entries from the preserved official boundary inventory and the native catalog's
callback addresses are seeded before Ghidra auto-analysis. Native-catalog-only
starts and additional Ghidra-discovered functions have `assembly_entry: false`;
`seed_source` distinguishes them. They are candidates, not newly verified
entrypoints, and do not change the official function meter. A generated function
can have discontiguous body ranges; the legacy `assembly_region` field describes
a binary region bounded by the next known label and can include padding or
other code. Compare the body ranges. This metadata does not require a `.s` file.

Failures and timeouts have explicit status/diagnostic records and `.c` stubs;
they are never replaced with invented C. An `ok` status only means Ghidra emitted
C. Warnings embedded in that C remain intact. See `status_counts` in each index
for actual export coverage. Generated artifacts are not compiled into the clone.

## Regenerate

An existing Ghidra installation and compatible JDK are required. No MCP setup,
binary execution, client launch, or production build is involved.
For binary-backed inspection, install `tools/requirements-reference.txt` if
Capstone or pefile is missing. Reading C alone needs only Python's standard library.

```powershell
& $python tools/build_reference_pseudocode.py `
  --ghidra-home 'C:\Users\yassi\Downloads\ghidra\ghidra_12.1.2_PUBLIC' `
  --java-home 'C:\Program Files\Eclipse Adoptium\jdk-25.0.4.7-hotspot'
```

Use `--binary server` or `--binary client` to regenerate one binary.
`--function-timeout` defaults to 60 seconds and `--process-timeout` to 3600
seconds per binary. Logs and owned temporary Ghidra projects live under ignored
`build/work/ghidra-pseudocode/`; completed projects are deleted by Ghidra unless
`--keep-project` is passed. The default heap limit is `768M` (`--heap` overrides
it); jobs run sequentially. Validated output is staged before publication. Existing
Ghidra projects and running apps are left alone. The generator does not modify
reference binaries, production source, or the README meter. No `.s` files are generated.

Validate generated coverage, complete-file markers, hashes, name/address lookup,
and every official reference region against the PE bytes:

```powershell
& $python tools/check_reference_pseudocode.py
```

Historical evidence notes may mention deleted `.s` paths. Resolve their addresses
through these indexes and use `--asm` for the corresponding original instructions.

# SA-MP 0.3.DL client audit handoff

Checkpoint from 2026-11-10. The user requested a stop after the current
verified work, a Markdown handoff, and a commit and push. Luna was interrupted
after saving the remote-player checkpoint. No audit worker is active.

**Reverse engineered: 847 / 9,492.** The counter found zero invalid pointers
and zero duplicate claims at this checkpoint. The strict whole-tree
`--check` reports 2,256 unmapped bodies and 222 parser review issues.
This is a partial audit of the 87 imported client `.cpp` files. It leaves the
server outside that audit scope. The shipped 0.3.DL DLL remains the authority.
The inventory has 22 completed files, one in progress and 64 pending.

## Resume here

Start with `AGENTS.md` and [the reference reader guide](asm/pseudocode/README.md).
The next file is `src/client/net/remoteplayer.cpp`. Luna examined 36 of its
57 source bodies. The 34 reachable verified bodies are mapped, including the
corrected UpdateTrain and the transferred Spawn owner. The two behavior
matches with unproven callers are `UpdateOnfootXYSpeedAndPosition`
(`0x10014c00`) and `ApplySurfingMatrix` (`0x100144d0`). They remain uncounted.
The old report records the original source hash and line numbers from before
the parent added mapping comments and fixed UpdateTrain. Use declarators and
exact addresses to identify bodies in the current source.

Luna's unfinished next batch had exact owner reads for `UpdateUnoccupied`
(`0x10015600`) and `UpdateTrailer` (`0x10015950`) in ignored
`build/work/remoteplayer_batch8/`. The `0x10016230` query returned no exact entry.
No final findings for those rows were received. Reproduce the first two reads
with `python tools/read_reference_function.py client 0xVA --asm`. Resume the
comparison there, then continue the remaining imported files. The 21
unclassified remote-player bodies are still pending. [Luna's checkpoint](audit/client-luna-remoteplayer-progress.md)

The per-file reports and inventory record Luna's other completed work.
The integration journal records applied changes, the parent-audited files,
known unreachable bodies and owner transfers. Use both when selecting the
next file. [Audit inventory](audit/client-luna-inventory.json) · [Integration journal](audit/client-integration.md)

## Production fixes in this checkpoint

- Restored the VC7 packed string and vector layout expected by the client.
- Paired gang-zone `malloc` records with `free` in replacement, removal
  and cleanup paths.
- Changed vehicle unoccupied-sync eligibility to the official train-part
  check. Retained the existing trailer and send-timing gates.
- Reproduced the x87 script operand conversion, camera operations and train
  XY threshold comparisons. The train's unordered comparison rejects the
  affected axis. Bullet offsets accept both endpoints and unordered values.
- Replaced the overlapping color-tag `strcpy` with the native forward-copy
  loop. Kept the compressed-bitstream bounds checks inside their owner and
  removed the duplicate claim on the unchecked single-bit reader.
- Indexed the previously missing exception filter (`0x10060470`) and task
  virtual predicate (`0x100b22e0`) from independently established PE entries.
  Each has an assembly-only diagnostic file. Their bytes and the other
  5,994 client regions passed `check_reference_pseudocode.py`.

The `samp.saa` reader, CryptoAPI wrappers and decryption helpers now sit
directly in `src/client`, with their original attribution and upstream
paths preserved. `ArchiveFS.cpp` and `CryptoFns.cpp` are still pending full
audit. CryptoContext, Hasher, KeyPair, Signer and TinyEncrypt are complete.
The build selects the imported normal client runtime by default and retains
the earlier comparison target. The compatible RakNet source, DirectX shim,
DXUT, BASS, Detours, ttmath and libcurl support are included. [Merge provenance](CLIENT_SOURCE_MERGE.md)

## Reproduce the checks

Use Win32 MSVC with the DirectX SDK. The Visual Studio 2026 preset writes to
`build/msvc/p0-win32`; set `Python3_EXECUTABLE` to `C:/Python312/python.exe` if
the counter's Tree-sitter package is installed there.

```powershell
cmake --preset win32-vs2026 -DPython3_EXECUTABLE=C:/Python312/python.exe
cmake --build --preset win32-vs2026
ctest --preset win32-vs2026
python tools/check_reference_pseudocode.py --binary client
python tools/official_function_count.py --check
```

The Win32 build and all 28 tests passed after moving the archive files. The
mapping counter is the only tool authorized to update the README meter.
Review exact owner behavior and live caller paths before adding mappings.
Generated C alone cannot establish function ownership or ABI. Preserve
unresolved and duplicate cases in the audit notes. The commit scope is
source, dependencies, reference metadata, tests and audit documentation.

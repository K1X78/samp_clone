# Repository rules

This repository reimplements the SA-MP 0.3.DL client and server in C++20.
The shipped `GTA Sa samp_clone/samp.dll.official` and
`GTA Sa samp_clone/samp-server.exe.official` are the behavioral authority.
Use the address-indexed C and reference metadata under `docs/asm/pseudocode/` as
the primary reading source. Bulk `.s` files are retired and must not be kept
locally or committed. `--asm` prints selected instructions directly from the
official binary without creating a file. Never use a 0.3.7 address as 0.3.DL evidence.

## Pseudocode reference and fast lookup

- Use `docs/asm/pseudocode/` as the first reading source for official function
  behavior. Read `docs/asm/pseudocode/README.md` for the reader and index format.
  The official binary and its exact assembly owner remain authoritative when
  confirming a production change or resolving a decompiler ambiguity.
- Each function has a complete address-named C file:
  - Server `0x405120`: `docs/asm/pseudocode/samp-server.exe/functions/00405120.c`.
  - Client `0x10074060`: `docs/asm/pseudocode/samp.dll/functions/10074060.c`.
  Select the binary explicitly and use the original virtual address; do not
  mix client/server addresses, file offsets, or addresses from another version.
- Start with the relevant binary's `index.tsv`, using a bounded `rg` search
  for an address or native alias. Use `index.json` for body ranges, provenance,
  `seed_source`, `assembly_entry`, callers, callees, diagnostics and forwarders.
  `reference.json` preserves the byte-checked official boundaries and counter
  labels; it contains metadata, not an assembly listing.
  Use `docs/asm/pseudocode/FILE_NATIVES.md` for the file-library audit's entrypoints.
- Use the reader for C and, when needed, on-demand instruction verification:

  ```powershell
  $python = 'C:\Users\yassi\AppData\Local\Python\pythoncore-3.14-64\python.exe'
  & $python tools/read_reference_function.py server file:fopen
  & $python tools/read_reference_function.py server 0x405120 --asm
  & $python tools/read_reference_function.py client 0x10074060 --asm
  ```

  Use an available Python interpreter if the local fallback path differs.
  `--list` lists name matches; select an exact address when names are ambiguous.
  Read through `END FUNCTION 0xADDRESS`. Increase the tool output budget or
  read consecutive chunks if a preview is truncated; never audit a partial body.

## Accuracy checks and efficient implementation

1. Select a cohesive group of functions in the current source file. Read that
   source file in full, then read each target's complete pseudocode and metadata.
   Use inventories to locate work, not to infer behavior or declare completion.
2. Follow callees by address only as needed to establish the target's contracts.
   Reuse previously verified contracts for the same binary/address. Check real
   callers to establish argument order and observable effects; static references
   can miss virtual calls, RPC dispatch and Pawn native-table calls. Inspect the
   corresponding registration/dispatch and shipped script when needed.
3. Before editing, verify the exact owner and its control flow in the official
   assembly, as required below. Resolve ABI/register arguments, parameter widths,
   signed comparisons, return values, side effects, and failure/cleanup paths.
   Distinguish cell counts from byte counts, packed from unpacked AMX data,
   pointer handles from array addresses, and stack allocation/`__chkstk` from
   heap allocation. A decompiler's name or inferred prototype is not proof.
4. Check boundary and decompiler traps explicitly:
   - `status: ok` means C was emitted; it does not verify the function or types.
     Investigate warnings, `unaff_*`, `in_*`, `undefined*`, and suspicious casts.
   - Compare `body_ranges` with `assembly_region`; a listing region can contain
     padding or adjacent functions. Check `other_seed_entries_in_body` when
     present. An internal branch target is not automatically a function start.
   - For `forwarder_target`, inspect the jump and the target separately. Ghidra
     may emit the target's C under the thunk's name. Do not duplicate that body
     or attribute the target's implementation to the forwarding address.
   - Native aliases and Ghidra-discovered starts are navigation evidence. Verify
     independent entrypoints before changing reference boundaries or the denominator.
   - For failed/missing C, disassemble the exact owner from the binary or use a retained Ghidra
     project. Keep the failure visible; do not fabricate C, guess a signature,
     or drop official-facing behavior to work around a decompiler failure.
5. Implement the verified behavior in its real production path. Reuse existing
   subsystem verification notes to record binary/address, source owner, caller,
   arguments/returns, effects, failure cases, and validation. Keep confirmed facts,
   inferences and unresolved questions distinguishable and concise so the next
   pass can reuse the evidence instead of repeating the investigation.
6. Run the counter after each production function change, then the relevant
   terminal build/tests. Reuse passing checks until a new change or failure
   requires another run. Never infer gameplay completion from generated C alone.

- Reuse existing exports and matching saved analysis projects. Do not regenerate
  either binary merely because clone C++ changed, reinstall a decompiler when
  the required C already exists, or revalidate the whole corpus per function.
- If hashes fail or reference inputs changed, establish which artifact is stale
  before using it. Validate changed reference artifacts with
  `tools/check_reference_pseudocode.py`; regenerate only the affected binary
  when needed. Do not bless edited C by merely refreshing its recorded hashes.
- Keep expensive Ghidra jobs sequential on this machine; the generator defaults
  to a `768M` heap. Preserve useful analysis state under ignored `build/work/` when
  a targeted follow-up is needed, rather than repeatedly importing both binaries.
- Generated C files, diagnostic stubs, thunk expansions and candidate entries
  are analysis coverage, not mapped production bodies or an official function
  total. Use the current indexes for export coverage and only
  `tools/official_function_count.py` for the README function meter.

## Source audit and mapping

- Read the target source file in full before editing it. Review each function
  body in context; use inventories only to find candidates and check totals.
- Before changing a production function, open its exact owner in the 0.3.DL
  assembly and verify the behavior and address. Put the verified
  `Official: SYMBOL @ 0xADDRESS (samp.dll)` or `(samp-server.exe)` pointer
  immediately above that body.
- A matching name, nearby code, a callsite, or an address inferred from a
  different SA-MP version is not verification. Never add a pointer just to
  raise the count.
- Every production C++ function body must map to one unique official function
  start. If a source helper combines several official operations, inline its
  statements into the verified owner and remove the helper body. Keep needed
  behavior and APIs intact. If ownership is unclear, inspect more disassembly;
  do not guess, delete the behavior, or leave a replacement helper behind.
- Never remove or bypass Pawn natives, RPC handlers, network APIs, rendering
  callbacks, or other official-facing behavior merely to reduce the unmapped
  count. Verify that changed code is still used by its real callers.
- Work file by file. Do not run bulk source-rewrite scripts or broad
  find-and-delete operations. If a mechanical transformation is necessary,
  inspect every affected function and callsite before applying it, then review
  the full diff.
- Do not count game assets, vendored code, generated pseudocode or macro bodies,
  diagnostic stubs, lambdas, or tests as mapped source functions. Do not create
  demo or unrelated functions to raise progress.
- After each function change, run `python tools/official_function_count.py`.
  This is the only script allowed to update the README function meter. Run
  `python tools/official_function_count.py --check` before committing. The meter
  is mapped production C++ bodies / official labeled entries preserved in the
  byte-checked reference metadata for both 0.3.DL binaries.

## Reachable gameplay features

- Latest user requirement (2026-11-04): reproduce the shipped 0.3.DL behavior
  and scripts without invented commands, messages, vehicles, objects or demo
  automation. This supersedes the earlier request to add commands for every
  implemented native. Use actual shipped callers; do not invent callers merely
  to claim coverage or completion.
- Keep internal helpers connected to those real entry points. Record the native,
  command/caller, wire path, client/engine effect and verification result together.
- Do not compile temporary test commands into the client DLL or dedicated server.
  Keep diagnostic fixtures under tests. The normal launch must use the selected
  unmodified shipped gamemode and only its configured shipped filterscripts.
  Do not call a custom gamemode "official" merely because it calls official APIs.

## Builds and tests

- Keep the server build 32-bit. Build and run tests only from the terminal:

  ```powershell
  cmake --preset win32-vs2026
  cmake --build --preset win32-vs2026
  ctest --preset win32-vs2026
  ```

  Use the corresponding `win32-vs2022` preset with Visual Studio 2022.

- The clone server may be launched for integration tests. Do not launch GTA
  or the clone client unless the user explicitly asks. Do not disturb any
  pre-existing running game or server process.
- Preserve tests that the user asks to repair or run. Do not delete or weaken a
  test to make a build pass; fix its expectations and implementation together.
- Every shell command must have a timeout. No subagents unless the user asks.

## README, commits, and publishing

- `tools/official_function_count.py` is the single source counter and README
  meter updater. Every invocation refreshes the README meter automatically;
  never rewrite the meter manually. It never commits or pushes.
- Do not add a README publisher or use `publish.py`. No other script may edit
  the README function meter.
- Commit and push only when the user has requested it. Use ordinary Git
  commands and review the staged diff first. Never include local build output,
  caches, scratch files, or temporary artifacts.
- For the current 1,000-function goal, the user has authorized verified
  milestone commits and pushes around 500, 600, 700, 800, 900 and 1,000.
  Exclude the deployed client/server binaries from those commits.
- Report progress only after a substantial amount of verified, integrated
  reverse-engineering work. Do not repeat unchanged counts or send updates
  merely because time has passed. Describe completed behavior and validation
  briefly, using this count format:

  ```text
  Reverse engineered: N / TOTAL
  ```

- The session target is 1,000 reverse-engineered production function bodies.
  A pointer alone is not completed work: preserve verified behavior, connect
  each new body to its real production callers, and keep the existing 457
  verified bodies intact unless official evidence requires a correction.
- The starting reference total is 9,446. Use the counter's current official
  total if verified independent entrypoints require splitting reference ranges;
  explain such a change rather than retaining an inaccurate denominator.


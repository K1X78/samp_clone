# Reading generated reference functions

Follow the repository-root AGENTS.md workflow and read README.md here first.
Use this pseudocode as the first reading source for official behavior, then
verify the exact assembly owner before changing production code.

- Use tools/read_reference_function.py from the repository root to select an
  exact server/client address. Read the full C through its END FUNCTION marker;
  a truncated preview is incomplete evidence. Use --asm to disassemble its body
  directly from the official PE, in memory. Do not create or restore `.s` files.
- Search the selected binary's index.tsv for names/addresses; inspect index.json
  for provenance, status, body ranges, references, seed source and forwarders.
  Follow callees by address and check real registration/dispatch paths for callers
  that static references cannot establish.
- An ok status means decompilation succeeded, not that inferred types, ABI,
  ownership or behavior were verified. Preserve warnings and uncertainty.
- Compare body_ranges with assembly_region. For forwarder_target, inspect the
  jump and target independently; emitted C may be the target's expanded body.
  Do not treat internal branch labels as independent function entrypoints.
- Failed entries are diagnostic stubs. Use binary-backed --asm output or an existing
  analysis project; never replace a failure with invented C.
- All C here is generated analysis output. Do not hand edit or compile it into
  the clone, count it toward production mapping, or equate its file count with
  the official denominator. Reuse existing exports; scope regeneration to stale
  reference artifacts rather than repeating full analysis per implementation.

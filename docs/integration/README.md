# P1 and upstream integration checkpoint

Date: 2026-11-03. P1 implementation commit: `a418882`. Upstream checkpoint:
`30780a8`. Merge commit: `8723721`. Both histories are preserved and pushed to
`origin/main`. The [current roadmap](../PROJECT_PLAN.md) owns package status.

The first push found four newer upstream commits covering native families,
Pawn execution, local quit commands, startup corrections and their tests. The
merge retains those changes together with all seven P1 packages.

## Integration changes and checks

- Both client source lists and both sets of tests remain enabled.
- The native registrar keeps P1 player/vehicle bindings and the incoming
  core/float/property/string/time tables. The audit now follows table-driven
  registrations, instead of misclassifying them as absent literal closures.
- The runtime keeps P1 adapters and the upstream model-info/RW-object check.
  The CreateFileA calling-convention and model-pool startup fixes remain intact.
- The lifecycle callback fixture now supplies a real live AMX header/base,
  code/data offsets and heap/stack fields required by the newer executor.
  Its original callback order, refusal, state and vehicle assertions remain.
- The incoming disconnect API now also clears P1 outgoing/retry/receive state,
  releases its Winsock ownership and queues the remote-entity reset. The client
  socket fixture verifies that cleanup.
- The moved DLL pointer-array expression was re-reviewed. Additional diagnostics
  are MSVC inline assembly/conditional parser recovery in the incoming float,
  string and VM paths. Reviews account for the enclosing bodies and later
  functions; 63 exact diagnostics/source hashes are retained, with no review errors.

## Current validation

The Win32 `RelWithDebInfo` configure/build passed. **13/13 CTest targets** and
**7/7 Python counter regression tests** passed. Function checks, fresh catalog
inventories and staged whitespace checks passed. Production artifacts remain
PE32 machine `0x014c`.

[Build identity](validation/build.json) records commands, timeouts, source-input
fingerprint, compiler and artifact hashes. It was generated while the merge was
being verified, so its Git HEAD is the pre-merge parent and its dirty-tree flag
is true; the source fingerprint identifies the tested combined inputs.
[Static summary](validation/summary.json) and adjacent CSVs record:

- 583 recognized source bodies, zero unmapped bodies.
- 105 dispatcher routes with no pointer mismatch or missing direct fixture.
- 497 native entries / 496 names: 135 partial, 26 placeholders, 336 absent.
- 109 literal plus 52 table-driven registrations, 161 resolved names total.
  These are static coverage classifications, not full semantic certification.

P0 and the original P1 validation directories remain historical snapshots.
The original P1 report's 513-body/9-test figures concern its own pre-merge tree.

## Why the reference total changed

The incoming assembly generator exposes **34 independent server entrypoints**
previously embedded in larger labeled ranges: 15 float, 12 core, six string and
one clock callback. The client reference count is unchanged. The denominator
therefore changes from **9,446 to 9,480**; this is not 34 new binary functions
created by the source implementation.

Every newly labeled region's size and SHA-1 was checked against the original
server PE. [reference-splits.csv](reference-splits.csv) retains those 34 verified
region identities. Full original PE identities remain:

| Original artifact | SHA-256 |
| --- | --- |
| `samp.dll.official` | `bccdb297464bd382625635be25585df07a8fa6668bc0015650708e3eb4ffcd4b` |
| `samp-server.exe.official` | `96e3a6a41c8e84adfd633a5292ca2a8c3fd474ded022d85e79796f86caab6a4a` |

## Runtime and deployment boundary

No GTA, injected client or live server was launched during this integration.
Earlier runtime captures in [RE_FINDINGS.md](../RE_FINDINGS.md) concern the
incoming checkpoint and remain useful historical evidence; they do not validate
the combined P1 runtime matrix. That matrix remains open in the roadmap.

The incoming commits contain previously tracked deployment artifacts. Their
versions are retained by the merge; no locally rebuilt DLL/server was added or
deployed in this work. Verification still uses the no-deploy Win32 preset, and
pre-existing game/server processes were not disturbed.

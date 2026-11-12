# Review of the uncommitted P3 work

Reviewed 2026-11-08 against the current working tree and HEAD. This includes
the P3.16 changes and the additional SetTimerEx and scoreboard edits present
in the same diff. Findings below describe the reviewed version before repairs.

Read guidance: root AGENTS.md, docs/asm/pseudocode/AGENTS.md and README.md,
root README.md, docs/PROJECT_PLAN.md and docs/P3_REPORT.md. The shipped
0.3.DL binaries and address-indexed pseudocode were used as the behavioral
authority. Focused assembly came from tools/read_reference_function.py --asm;
no bulk assembly files, game, server or launcher were started.

The REA skill was consulted. Its MCP tools are not registered in this session;
the installed CLI's read-only doctor reported missing Codex registration.
No configuration repair or installation was attempted. All binary evidence
below comes from the repository's binary-backed reader, not REA output.

## Findings

### F1 - High: SetTimerEx passes addresses instead of scalar values

src/pawn/natives.cpp, SetTimerEx scalar branch (reviewed lines 207-208),
stores the variadic argument cell directly. Pawn's variadic scalar parameters
are addresses. Official helper 00482fd0 calls 0046fca0 and dereferences the
returned data address at 00483256-00483268. This affects integer, float and
other scalar formats. The new test passes literal 42 directly to the closure,
which does not reproduce the compiler ABI.

The compiled Win32 audit probe put 42 at data offset 800 and supplied 800 as
the variadic argument. The timer callback received 800 rather than 42.
Repair needs a compiler-shaped scalar fixture, preferably a compiled Pawn
caller, plus multiple arguments to check callback order.

### F2 - High: SetTimerEx array size comes from array element zero

src/pawn/natives.cpp, SetTimerEx array branch (reviewed lines 194-205),
treats the first array element as the cell count. Official 004830e3-00483116
reads the following variadic argument's referenced scalar as the count, then
copies from the array argument. For format "ai", array {10,20,30} and length
2, the clone allocates/copies ten cells and stores the length address in the
following callback slot. This can copy beyond the requested array and consume
or corrupt AMX storage when array data is large.

The probe observed ten allocated cells for requested length two; the callback
length cell was 900 (its address), rather than 2. Repair needs the real array
plus adjacent length convention and coverage independent of element zero.
Do not weaken existing AMX API parity tests to accommodate this native.

### F3 - Medium: SetTimerEx maximum parameter count is off by one

src/pawn/natives.cpp, reviewed lines 173-174, compares args.size()+1 with 260.
The closure span already excludes the Pawn parameter-byte-count header.
Official 00473c80 accepts byte counts 0x10 through 0x410 inclusive: four
through 260 actual argument cells. The probe supplied 260 cells with an empty
format and received timer ID zero. Add 259/260/261 boundary fixtures.

### F4 - High: new zone/gravity state survives gamemode restart

src/pawn/include/pawn/natives.hpp introduces gang_zones_ and gravity_, but
src/server/gamemode_lifecycle.cpp does not clear/reset them during restart.
Official 00494c30 frees the gang-zone pool at 00494d15-00494d25 and restores
gravity 0.008 at 00494d75. The pool is recreated by 004935f0.

The probe created zone zero, set gravity 1.5, invoked begin_gamemode_restart,
and observed the next zone ID one and GetGravity 1.5. Existing restart fixtures
do not cover either new field. Old zones can accumulate across mode changes
and eventually exhaust the 1024 slots. Repair must also keep initialization
RPC gravity consistent with runtime gravity after restart; it currently reads
the formatted config string rather than the new authoritative float.

### F5 - Medium: console gravity bypasses the new setter

The new runtime gravity field/setter has no connection from
Console::command_gravity (src/server/console.cpp, reviewed lines 291-295).
That method updates config only. Official console owner 00490020 calls
00496310. A console/RCON gravity change therefore leaves GetGravity stale
and sends no RPC 146 to connected players, while later join initialization
reads the updated config. This is a pre-existing console omission exposed by
the newly added setter; it is part of integrating the new gravity path.
Use the existing setter and test config, getter, joined-peer broadcast and
subsequent initialization together. Verify startup/default semantics before
changing how config gravity is interpreted.

### F6 - Medium: tests and documentation overstate zone coverage

docs/P3_REPORT.md says world() tests all ten gang-zone natives. It invokes
only seven distinct names: GangZoneHideForAll, GangZoneFlashForPlayer and
GangZoneStopFlashForAll are absent. The map-icon invalid-set test supplies
only two arguments, so it returns at the argument-count check without testing
the icon-ID boundary. Existing tests do not cover pool exhaustion/reuse,
restart cleanup, correct scalar-reference ABI or array/string timer arguments.

docs/PROJECT_PLAN.md and docs/P3_REPORT.md still report 668 in checkpoint/
session accounting, while the sole counter and README report 670. Remove the
duplicate GetGravity registration and duplicate test provenance comment, stray
W_A debug print, and CRLF-only test churn when repairing this batch. Preserve
all original tests and assertions. The original diff also fails git diff --check
because added CR characters in tests/p2_official_server_test.cpp are treated
as trailing whitespace.

## Observed timer storage issue requiring parity resolution

String/array copies are made on the AMX heap during the SetTimerEx native.
PawnVm::execute restores its entry heap pointer after the script call returns.
The probe scheduled an "s" timer during execute("Tick"). Its saved string
address was 1024, but the returned HEA was also 1024; get_address rejected the
saved address with error 5. The next allocation reused 1024 and changed the
pending timer text from "saved" to "other".

This is a demonstrated clone behavior, but the official timer also uses AMX
heap allocation. The review did not establish the complete official heap
lifetime contract. Before repairing this, compare the exact interpreter/native
return path or an isolated official helper. Do not invent a new ownership model
or broadly modify the VM solely on the assumption that the official retains
these copies. If it is a shipped quirk, retain it and document the limitation.

## P3.16 completion boundary

The added server payloads and RPC 144/146 dispatch corrections are useful.
Static inspection found no production consumer of client icons_, gang_zones,
world_bounds or stream.gravity outside the corresponding RPC state handlers.
For example official map-icon removal 1001a3e0 calls 10008ca0, which invokes
the GTA radar operation; clone removal only erases a C++ map. Official gravity
handler 10018750 invokes the engine script path; clone only stores a float.

These client engine gaps largely predate this diff and are separate from its
server/wire correctness. P3.16 must remain unchecked and describe its delivered
scope as server/wire/client-state support. Missing GTA adapters and the three
already listed stub natives remain open. Building those unrelated subsystems
is outside the bounded repair assignment arising from this review.

The server world-bounds payload preserves the official argument order, but
the new inline coordinate names in code/docs are inaccurate. The shipped Pawn
signature is x_max, x_min, y_max, y_min, serialized in that order. Correct labels
without swapping payload positions based on the misleading current comments.
The existing client WorldBoundsState names likewise need an evidence-led audit
before they are used by any future engine adapter.

The scoreboard color edit agrees with the initializer's red selection/white
text values at client 1008d200. No visual acceptance was performed.

## Verification of the reviewed state

- Fresh Win32 RelWithDebInfo client/server/test build: passed, using Visual
  Studio 2026 and its bundled CMake, existing win32-vs2026 preset. Deployment
  was skipped because the preset's baseline-no-deploy destination is absent.
- All 22 CTest targets passed; nine Python counter regression tests passed.
- python tools/official_function_count.py --check passed:
  Reverse engineered: 670 / 9,490.
- Independent compiled Win32 probe reproduced F1-F4 and the string-storage
  observation. Scratch code, build response and output are under ignored
  build/work/p3-audit/. The probe does not start server/game processes.
- Default build cache is invalid (NMake plus Win32 platform). The VS2022 preset
  cannot find a registered installation. The existing VS2026 build works with
  C:/Program Files/Microsoft Visual Studio/18/Community/Common7/IDE/
  CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe. No existing cache was
  migrated or deleted.

This review did not modify production code. Deployed binaries/logs, untracked
PDBs and build/assets/gta_sa_MRmTInD7LA.jpg were already present and are outside the source
repair/commit scope. Final repair results and validation should be appended
below without rewriting the initial findings as though they never occurred.


## Repair results and expanded scope

The user subsequently requested implementation of the client engine gaps and
remaining P3.16 natives as well as repairs, and authorized commit/push. This
supersedes the earlier bounded assignment. F1-F6 were repaired: referenced
scalar/array arguments, exact 260-cell maximum, natural callback order,
zone/gravity restart cleanup, console-to-setter integration, missing zone tests,
full-shape icon boundaries, duplicate registrations/comments and debug prints.
Server defaults/InitGame now cover draw distance and interior-entry disabling;
EnableZoneNames correctly warns that it was removed and returns success.

The independent official interpreter probe returned HEA256 after a native
changed it to280 (status0, no exception). Thus the observed timer heap lifetime
is also shipped behavior; no VM memory-ownership change was introduced.

The parent integrated real radar icon create/remove script calls, native radar
zone drawing with 500ms flashing and restoration of base colors, bound response,
gravity/weather and entrance disabling. InitGame stores the previously ignored
gravity/entrance flag; reset/disconnect clears stale world effects. Owners and
engine descriptors are listed in P3_REPORT.md. Engine fixtures exercise actual
script encoding, handle replacement, radar rectangles/colors and bounds.

Two accidental PowerShell newline collapses during the subagent repair were
recovered before final validation; the parent stopped that subagent's source
edits, preserved scratch backups and reviewed the restored diffs. No original
uncommitted functionality was discarded. Parser-review renewal covers the same
existing nothrow pointer-array expression in samp_dll.cpp after its new draw
call. Live GTA visual acceptance remains unexecuted and is not claimed here.


Final validation: Win32 RelWithDebInfo build passed; all 22 CTest targets
passed, followed by a passing targeted rerun after adding InitGame draw-distance/
entrance-bit assertions. Nine counter regression tests and git diff --check
passed. Counter: Reverse engineered: 674 / 9,490. Offline implementation is
verified; live rendering/physics acceptance remains an explicit runtime gate.

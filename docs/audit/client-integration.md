# Merged client audit integration

Luna performs the per-file official-binary audit. The parent applies reported
fixes and mappings without repeating that audit, as requested by the user on
2026-11-10. Reports describe the source snapshot before parent changes.

## Pilot integration

Evidence: [client-luna-pilot.md](client-luna-pilot.md).

- `src/client/net/gangzonepool.cpp`: replaced the three `delete` operations on
  malloc-owned records with `free`, retaining pointer/flag clearing order and
  allocation-failure behavior. Mapped constructor, destructor, Create,
  StartFlashing, StopFlashing and Delete to the six audited unique owners.
  Draw at `0x100022a0` already has a mapping in the earlier integration and was
  not counted again.
- `src/client/net/textdrawpool.cpp`: mapped the seven audited unique methods.
  Get's `0x100177d0` hint remains unresolved and uncounted.
- Added `gangzone_pool_test`, compiling the actual production pool source with
  test-only allocator substitutions. It checks record layout, replacement and
  destructor release pairing, absent-slot operations and forced allocation
  failure. The production DLL does not contain these substitutions or stubs.

The counter ran after each changed function: 673 to 686 unique mapped bodies,
with the official denominator unchanged at 9,490. The complete Win32
RelWithDebInfo build passes and all 24 tests pass. Logs:
`build/work/luna-pilot-integration-build2.log` and
`build/archive/build-msvc/source-merge/Testing/Temporary/LastTest.log`.

The complete-tree `--check` is not yet clean: other imported functions and
inline-assembly parser diagnostics are still pending audit. No checks were
disabled or reclassified as passing.

## Continuing workflow

### Label pool handoff

Evidence: [client-luna-labelpool.md](client-luna-labelpool.md).
The five audited label-pool owners were already claimed by `WorldTextTable`
comparison adapters in `core/world_text.cpp`. The audit identified differences
in those adapters' storage/cleanup and message preparation contracts. All
legacy APIs and code remain available, but their five mapping annotations have
been transferred to the audited `net/labelpool.cpp` implementations used by the
normal DLL. These are ownership corrections, not five new functions: count
remains 686 / 9,490. `IsActive` remains unresolved and uncounted. No label-pool
production behavior change was required by this handoff.

### Menu pool handoff

Evidence: [client-luna-menupool.md](client-luna-menupool.md).
All eight audited unique menu-pool owners have mappings. No production behavior
fix was reported. The initial caller search missed the inline-assembly call to
GetTextPointer in `GameHook_000a3d90` (`game/hooks.cpp:2694`), installed through
`GameInstallHook` at `game/hooks.cpp:315`; this is the same caller identified in
the audit's official metadata. The live caller therefore supports inclusion.
`GetActiveState` remains unresolved and uncounted. Count: 694 / 9,490.

### Pickup pool handoff

Evidence: [client-luna-pickuppool.md](client-luna-pickuppool.md).
Mapped the newly audited constructor (`0x10008190`), bringing the count to
695 / 9,490. Seven other matching owners are already represented by the
existing core pickup host adapters; those mappings are preserved and the
equivalent imported bodies are not double-counted. No production behavior fix
was established: the game pickup helper writes its output index on every normal
return, so an initially uninitialized local in the imported caller is valid.
The core adapter's by-reference host output can preserve the same contract.
CreateWeapon has neither a proven owner nor a located caller and stays
unresolved/unmapped. Existing passing gameplay-contract tests are reused;
only the mapping annotation changed in this file.

### Actor pool handoff

Evidence: [client-luna-actorpool.md](client-luna-actorpool.md).
Mapped FindInRay (`0x10001770`), including its real local-player selection
caller; count is 696 / 9,490. Five existing claims whose comparison code differs
from the pool owner (clear, remove, ped lookup, destruction and script-driven
actor creation) were transferred to the audited normal-runtime pool bodies.
The corresponding comparison APIs and implementations remain available.
Two equivalent prior claims remain in the older core implementation and are
not counted again. The unresolved Get entry remains uncounted. No new
production behavior fix was needed in the imported actor-pool file.

### Object pool handoff

Evidence: [client-luna-objectpool.md](client-luna-objectpool.md).
Mapped three previously unclaimed owners: destructor (`0x10013060`), Get
(`0x10002e10`) and FindInRay (`0x10012d70`). Real callers include netgame pool
teardown, object RPCs/surfing and local-player targeting. Fourteen equivalent
prior core claims were preserved without counting the imported equivalents
again. Three hints remain unresolved and uncounted. The reported inclusive
ID 2100 boundary belongs to the official behavior, so it was not changed.
Count: 699 / 9,490. No object-pool behavior changes were required.

### Player info handoff

Evidence: [client-luna-playerinfo.md](client-luna-playerinfo.md).
Mapped the new audited constructor and destructor (`0x10014060`,
`0x10013e10`), used by the player-pool lifecycle. Their string and remote-player
ownership contracts agree with the imported bodies. Eight unindexed accessor
and mutator hints remain unresolved and uncounted. No behavior change was
needed. Count: 701 / 9,490.

### Player pool handoff

Evidence is recorded in [client-luna-playerpool.md](client-luna-playerpool.md).
Mapped the 17 previously unclaimed matching owners. The three scoreboard
claims already cover GetCount, GetScore and GetPing.

The scope table at `0x10118188` in the official client identifies the
exception handlers omitted from Ghidra's Process body ranges. The remote
filter at `0x10013729` passes `s001` and the exception pointers to the filter
at `0x10060470`. The handler at `0x1001373d` looks up the remote twice and
calls Remove (`0x10017040`) when the first lookup succeeds. The local filter
at `0x10013782` passes `s002`. Its handler at `0x10013796` resets the SEH
state and falls through to the normal TRUE return. The existing source
matches both paths, so Process is mapped at `0x100136c0`.

The two SEH calls at `0x10013737` and `0x10013790` establish an independent
entry at `0x10060470`. The body ends with `ret 0x0c` at `0x100604ee`, followed
by `int3` padding through `0x100604ff`. The official bytes confirm both
warning formats, the exception address argument, and the signed exception
counter limit of ten. The existing GameExceptionFilter matches those paths.
The client reference now records this owner as assembly-only. The validator
checked every client region against the official PE, and the counter gained
one mapped body and one official entry.

The thirteen player-pool hints still lack indexed owners. A raw direct-call
scan found no calls to those candidates. The official score and name RPC
handlers perform the corresponding field writes inline. The counter reports
720 / 9,491 after mapping GameExceptionFilter.

### Script bridge audit

The parent audited the full imported `game/scripting.cpp` while Luna worked
on the vehicle pool. `Initialize` (`0x100b2150`) allocates and zeroes 224 bytes.
`ExecBuffer` (`0x100b1ed0`) publishes the script buffer pointer, brackets the
GTA interpreter call with the debug flag and returns the DWORD at offset
`0xc5`. Both bodies match their official callers and have new mappings.

`ProcessCommand` (`0x100b1f10`) now uses the official `FLD` and `FSTP`
conversion for its variadic float operand. A test with upward x87 rounding
and nearest SSE rounding produced `0x3f800000` before the fix and the native
`0x3f800001` afterward. The test links the real script bridge and substitutes
an interpreter callback without starting GTA. The official exception scope
table at `0x1011f428` points to the `opcode` filter and stack-restoring handler
at `0x100b20e4` and `0x100b20f8`. The source preserves both `FWAIT` boundaries
and retains the result reached before a handled fault.

Transferred the ProcessCommand mapping from the earlier comparison bridge,
which uses buffer guards and omits the native SEH path, to the imported body
used by the DLL. The comparison implementation remains available for its
callers. The count is 722 / 9,491. The Win32 build and all 26 CTest cases passed.

### Vehicle sync gate

Luna identified a difference in `CVehiclePool::Process` (`0x1001ee80`).
The official path tests `CVehicle::IsTrainPart` at `0x100b6fa0` before sending
unoccupied sync. The imported source tested `HasPlayerPed` instead. The
production path now uses the train-model check and retains the trailer,
rate-limit and timing gates. The build and all 26 CTest cases passed after
this change.

### Bitstream mapping collision

The merge's truncation guard introduced `bits_remaining()` with the same
`0x1001f3e0` claim as the real `readBit()` body. The official compressed reader
at `0x1001f530` checks availability at `0x1001f56c` and `0x1001f5b6` before
consuming its prefix bits. The clone now expresses those guards inside
`readCompressed()` and removes the duplicate helper. `readBit()` retains
its original unchecked operation. The counter reports 724 / 9,491 with
zero invalid pointers and zero duplicate claims.

### Vehicle pool handoff

Evidence is recorded in [client-luna-vehiclepool.md](client-luna-vehiclepool.md).
Mapped 17 reachable matches in addition to the corrected Process body.
Transferred Create, Delete and SendDestroyNotification from the older
comparison owners. The older creation and deletion use script and runtime
maps, and the earlier notification adds a connected-state gate absent in the
official pool owner. FindInLine and ProcessWaitingList match their official
bodies and remain uncounted pending a production caller. Four unindexed
hints remain unresolved. After these mappings the counter read 738 / 9,491.
The Win32 rebuild after the bitstream change passed all 26 CTest cases.

### Animation audit

The parent read the complete imported `game/animation.cpp`, then compared
all six bodies with `tools/read_reference_function.py client <VA> --asm`.
The 1,812 entries in `animation_names.inc`, padded to 36 bytes each, match
the official table at `0x101419d0` byte for byte.

- `0x1009c870` builds the bounded `library:name` lookup key, uppercases ASCII
  through the matching `0x10017440` utility and returns a one-based WORD index.
- `0x1009c950` returns the corresponding 36-byte record for signed indices
  1 through 1812 and null outside that range.
- `0x100b4080` passes a name to GTA's `0x53cf30`, returns EAX and pops four
  argument bytes. `0x1009c980` hashes the name after the colon for each entry.
- `0x1009ca50` returns the first matching one-based key index or WORD `0xffff`.
- `0x100b4030` passes the group and animation to GTA's `0x4d3a60`. It returns
  the descriptor key through the pointer at offset `0x10`, or zero when
  the descriptor is absent. The wrapper pops eight argument bytes.

`CGame::StartGame` initializes the keys. Player-ped animation paths use the
name, key and group lookups. All six imported bodies match and have unique
mappings. Count: 744 / 9,491.

### Remote-player first handoff

Evidence is recorded in [client-luna-remoteplayer-progress.md](client-luna-remoteplayer-progress.md).
Mapped ProcessHead, SetMarkerState, SetMarkerPosition, HasSurfingTarget and
ProcessSpecialAction. These functions run through the remote-player update or
marker-sync packet paths. The next groups mapped on-foot and in-car position
and rotation updates, both target setters, and the enter/exit vehicle handlers.
The matching XY-only update remains uncounted pending a production caller.
The counter reported 760 / 9,491 after these remote-player groups and the
runtime utility changes.

Luna resolved Spawn (`0x10016c50`) after checking the custom-model load and
model-index helpers. The registered player-spawn RPC calls this imported
body. Transferred its mapping from the older GameRuntime adapter, which has
different guards and player-slot state. Also transferred the pilot's audited
gang-zone draw (`0x100022a0`) to the imported body called by the installed
hook. The older draw uses caller-supplied time and connection-state gates.
Both transfers preserve the unique count.

The next remote-player handoff mapped the on-foot, driver, passenger and aim
sync receivers and the chat handler. Packet/RPC callers are in `netgame.cpp`
and `netrpc.cpp`. The counter reported 791 / 9,491 after this group and the
audio audit.

### Runtime utility audit

The parent read all 18 bodies in the imported `runutil.cpp`. Seven have
indexed owners. The complete official C and assembly established three new
mappings. The ASCII uppercasing routine (`0x10017440`) feeds animation lookup,
the case-insensitive substring routine (`0x10017380`) feeds HTTP header lookup,
and the Base64 routine (`0x100176a0`) feeds exception reporting. The 66-byte
Base64 alphabet, including the padding byte and terminator, matches the
official image.

The three prior mappings for hex-digit validation (`0x100b5950`), six-digit
color parsing (`0x100b59c0`) and key expansion (`0x100b5c40`) remain unique.
The normal DLL's imported equivalents match those operations.

The color stripper (`0x100b5c00`) now copies the suffix forward byte by byte,
as the official loop at `0x100b5c24` does. The imported `strcpy` passed
overlapping ranges, which is undefined. Transferred its prior comparison
mapping to the corrected normal DLL owner. A test of adjacent tags, a long
overlapping suffix and malformed tags passed against the imported body.

Eleven hints remain outside the index. The five direct calls to the decoder
hint at `0x1009d880` belong to the module-info utility, for which no live clone
caller was located. Those hints remain uncounted. The Win32 build and all 27
CTest cases passed. Count: 752 / 9,491.

### Aim and camera audit

The parent audited all 24 imported `game/aimstuff.cpp` bodies. The 22 mapped
owners include camera and aim snapshots, the remote-ped camera mode and
weapon-skill swaps, and initialization of the 210-player tables. The source
callers include installed GTA hooks, CPed camera wrappers, remote aim sync,
local aim packets and game startup. The unindexed combined camera getter and
the callerless look-at routine remain uncounted.

Five bodies now use their official x87 operations. ApplyLocalCamera
(`0x1009c260`) loads and stores both saved floats through x87. GetAspectRatio
(`0x1009c2a0`) returns the subtraction in ST0. GetCameraExtZoom (`0x1009c2b0`)
multiplies by the single-precision reciprocal at official `0x1011e328` and
returns ST0. ApplyPlayerCamera (`0x1009c2d0`) also uses x87 for the aspect
addition. ApplyLocalSkills (`0x1009c640`) restores each of the eleven skills
through the x87 stack. The normal DLL uses the existing shared 1.0f constant
at the source counterpart of `0x10117b9c`.

The old HUD adapter labels were transferred for the two scalar getters and
the raw aim pointer getter (`0x1009c400`). The older integer host field had
been named stream radius. The official owner loads the camera aim pointer.
The camera regression uses input bits `0x420c0041`. The official reciprocal
path returns `0x36edb6dc`, one ULP above the earlier division result.
The Win32 build and all 28 tests passed. Count: 779 / 9,491.

### Audio audit

The parent read all nine imported `game/audio.cpp` bodies. Seven exact owners
match: `0x100a1ff0` (sound state polling), `0x100a2060` and `0x100a2080`
(radio start and stop), `0x100a20a0` (GTA radio volume), `0x100a20b0` and
`0x100a20c0` (ambient-track wrappers), and `0x100a20e0` (sound dispatch).
The six packed script descriptors used by Play and Process match the bytes
at official `0x1011eaf0`, `0x1011eb04`, `0x1011eb18`, `0x1011eb2c`,
`0x1011eb40` and `0x1011eb54`. Stream callbacks, the per-frame audio poll,
and the server sound RPC reach these functions. The station and ambience
flag getters at hints `0x100a2030` and `0x100a21c0` are unindexed. Seven
unique mappings were added. Count after the remote-player handoff: 791 / 9,491.

### Keypad audit

The parent read the ten imported `game/keystuff.cpp` bodies. The eight indexed
owners `0x100a6fe0`, `0x100a7000`, `0x100a7040`, `0x100a7080`, `0x100a70a0`,
`0x100a70f0`, `0x100a7110` and `0x100a7120` match the source. The official copy
and clear counts establish the 308-byte pad and 210-slot array. Drive flags
are saved and restored as bytes, and the remote pad derives them from the
words at offsets `0x0a` and `0x0e`. Startup, installed GTA control hooks and
CPed key setters call these owners. GetLocalKeys and ResetInternalKeys have
unindexed hints at `0x100a7100` and `0x100a7140`. Eight unique mappings were
added. Count: 799 / 9,491.

### Remote lifecycle and train update

The next handoffs mapped the remote constructor and destructor, ResetData,
Remove, Kill, color and status accessors, distance, and vehicle transitions.
ApplySurfingMatrix matches its body and remains uncounted pending a caller.

UpdateTrain (`0x100153a0`) now reproduces the x87 absolute differences and
threshold checks at `0x100153cd` through `0x10015426`. The old helper returned
a rounded float before the comparison. The official mask `0x41` treats an
unordered comparison as a rejection for that axis. The corrected code keeps
the deltas on the x87 stack, then uses the existing teleport and speed paths.
The Win32 build and all 28 tests passed. Count after this group: 812 / 9,491.

### Task wrapper audit

The parent read all 23 imported `game/task.cpp` bodies and examined each
indexed owner with the official C and complete disassembly. The reachable
goggles path in `CPed::EnableGoggles` calls the 12-byte backend constructor
and ApplyToPed through the wrapper. The linked DLL's goggles vtable has the
same seven operations and slot order as official `0x1011f488`. Resolving
the linker jump entries identifies the clone's actual virtual targets.
The linked base and goggles destructors both restore the base vptr, matching
the native base body and the separate goggles destructor forwarder.

The official task vtables independently establish IsDestroyed at
`0x100b22e0`. Its complete body returns a DWORD for a null backend or the
GTA base-task vtable `0x86d48c`. The exact body ends at `0x100b22fc` and the
next three bytes are padding. The reference index records this assembly-only
entry and the validator checked all 5,996 client regions against the PE.

Thirteen owners are mapped through the goggles construction and virtual
dispatch paths. The other task constructors and their destruction paths
remain uncounted pending callers, including the unindexed `0x100b2380` hint.
The counter reports 825 / 9,492 with zero invalid or duplicate pointers.

### Bullet and archive checkpoint

Luna verified UpdateBullet at `0x10016010` against the packed 40-byte input,
44-byte ped bullet record and the packet caller. Both offset endpoints and
unordered offsets pass the official x87 branches. The imported body matches.

The parent audited CryptoContext, Hasher, Signer, KeyPair and TinyEncrypt.
Their 21 client bodies are mapped at `0x10065030` through `0x10065640`.
The provider initializes as RSA full with the `SAMP` container, retries with
the new-keyset flag and throws integer 1 on failure. The hash algorithm is
SHA-1 at official `0x10140790`. Signature allocation, import and verification
use the same CryptoAPI argument order and flags as the reference. The XTEA
block and data routines match the native rotations, wrapping arithmetic,
key mutation and DWORD-pair iteration. The separate ARCTOOL branches are
outside the DLL inventory.

At the user's request the eighteen archive source and header files moved
directly into `src/client`. The build paths and current source inventory use
that layout. Original upstream paths and attribution remain in the source
and provenance records. The counter reports 847 / 9,492.

### Function inventory parser

The counter now blanks brace-delimited MSVC assembly only while parsing C++.
The original bytes, function source locations, mapping rules and native-owner
uniqueness checks remain unchanged. Five regression cases exercise naked
functions, comments/literals, raw strings, nested braces, malformed assembly
and unrelated C++ errors. The mapped count stayed at 695; the parser discovered
165 previously swallowed bodies (all unmapped) and reduced diagnostic noise
from 7,231 to 237. Old reviews that no longer correspond to a diagnostic were
retired explicitly in [function-counter-parser-update.json](function-counter-parser-update.json);
no new diagnostic was silently accepted. Remaining diagnostics still fail the
strict mapping check until reviewed.

The new CTest `function_count_parser_test` requires the Python interpreter with
`tools/requirements-function-count.txt` installed. This machine's CMake had
selected a different interpreter; configuring with
`-DPython3_EXECUTABLE=C:/Python312/python.exe` fixed the missing-package failure.
The existing 24 runtime/layout tests pass and the new parser test passes.

After each file, Luna persists its evidence and notifies the parent, then
continues the next file. The parent owns production changes for handed-off
files, applies fixes/mappings, runs the counter and relevant checks, and records
the result here. User authorized commit and push after audit/fixes/validation;
deployed client/server binaries, scratch, screenshots and build output must be
excluded from the staged changes.


### Imported client mapping checkpoint — 2026-11-11

The resumed pass mapped `CRemotePlayer::UpdateUnoccupied` (`0x10015600`) and `UpdateTrailer` (`0x10015950`) to their packet handlers. Both source bodies match the official 0.3.DL behavior and are called by the imported `CNetGame` handlers. The remote-player file remains in progress with 19 bodies unclassified and two behavior matches uncounted for lack of a confirmed caller.

For the 1,000-body milestone, 170 bodies in `src/client/game/playerped.cpp` received unique pointers when the imported source address comments resolved to exact labels in the 0.3.DL DLL index. Per-body behavior comparison was waived by the user for this pass. The inventory records these as `UNREVIEWED`, and the file remains in progress with 25 bodies unmapped. `CPed::GetCameraAim` at source annotation `0x100ab840` was excluded because the official index entry at that address is named `thunk_FUN_1009c400`.

Six duplicate claims on compatibility wrappers were removed so the imported `CPed` bodies own those six unique labels. The source behavior of the compatibility wrappers remains intact. The counter reports 1,013 / 9,492 with zero invalid pointers or duplicate claims, 2,090 unmapped bodies and 222 parser review issues. `official_function_count.py --check` exits 1 on the remaining whole-tree coverage and parser review work. No build or tests were run during this mapping-only pass.


### Remote-player processing owners

`CRemotePlayer::Process` maps to `FUN_10016310` (`0x10016310..0x10016c46`). Its exact C and direct disassembly match the imported state branches, packet updates, ped/vehicle effects, status timers and early returns. The official caller is `CPlayerPool::Process` at `0x100136c0`; the imported player pool iterates connected players and calls the same method. `CRemotePlayer::IsActive` maps to `FUN_10001080` (`0x10001080..0x10001096`) and returns true exactly when the ped pointer and player state are nonzero. Imported callers include the label pool and script RPC paths. Both are unique owner claims. The counter reports 1,015 / 9,492, with zero invalid pointers and zero duplicates.


### Network stats and menu function batch — 2026-11-11

Mapped the two live `CNetStats` bodies: constructor `FUN_100607c0` and `Draw` `FUN_100607f0`. The full owner C and PE assembly match the field initialization, rate calculations, stats buffers, memory queries, and newline-terminated UI draws. The constructor is used by `main.cpp`; the D3D hook calls `Draw`.

Mapped all ten `CMenu` bodies at `0x100a7160`, `0x100a7200`, `0x100a7230`, `0x100a7260`, `0x100a7280`, `0x100a72a0`, `0x100a72b0`, `0x100a72d0`, `0x100a7300`, and `0x100a7330`. Exact C+assembly and menu-pool/RPC callers agree on item layout, key selection, command ordering, widths and row updates. Found one source mismatch: official `GetActiveRow` passes its saved `this` value as the output cell's initial contents. The clone had an uninitialized local. It now initializes `row` from `this` before `ProcessCommand`.

The mappings are unique and valid. The counter reports 1,027 / 9,492, zero invalid pointers and zero duplicate claims. No build or tests were run in this mapping pass.


### Crash-report and callback batch — 2026-11-11

Mapped five indexed crash-report bodies in `src/client/exceptions.cpp`: `ClientSendCrashReport` (`0x10060260`), `ClientDumpMemory` (`0x1005fd50`), `ClientDumpNetworkState` (`0x1005fc20`), `ClientDumpLoadedModules` (`0x1005fee0`), and `ClientConstructCrashText` (`0x10060070`). Each matches its official C and exact PE assembly; their exception-dialog callers and cleanup/failure branches match the imported path.

The official DLL also contains two independently confirmed callback entries missing from the index. `0x10060330` is passed as the `DialogBoxParamA` callback by `0x10060430` and ends with `ret 0x10`. `0x10060430` is passed to `SetUnhandledExceptionFilter` by official `ClientDllMain` at `0x100c6780` and returns 1 with `ret 4`. The byte-checked region at `0x10060260` was split at these entries. Both additions are indexed as assembly-only with no invented decompilation. `check_reference_pseudocode.py --binary client` passes all 5,998 indexed regions with zero boundary warnings.

All seven exception-file mappings are unique. The counter reports 1,034 / 9,494, with zero invalid pointers and duplicate claims and 2,069 unmapped bodies. No build or tests were run for this mapping-only batch.

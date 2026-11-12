# P3 implementation ledger

Updated 2026-11-08. P3 has 24 packages: three previously completed,
21 open. The user-requested minimal diagnostic gamemode is the final P3
acceptance step, after every other P3 task, and includes scoreboard checks.
Normal launch stays on shipped Bare during development.

## P3.4: file-library batch

Reference: `samp-server.exe.official`, SHA-256
`96e3a6a41c8e84adfd633a5292ca2a8c3fd474ded022d85e79796f86caab6a4a`.
Complete generated C and original instructions were read before implementation.
Source: `src/pawn/file_natives.cpp`; registrations are reached through
`register_server_natives`, replacing the former six fstream bindings. No
diagnostic command or gamemode was installed.

| Owner | Production behavior |
| --- | --- |
| 004055a0 fopen | Numeric masked mode, binary read/write/append, read-write creation fallback, FILE pointer handle, zero failure. |
| 004056c0 fclose | Close the pointer handle; success is 1. |
| 004056e0 fwrite | Unpacked cell strings use the recovered UTF-8 writer and return cell count. Packed branch remains explicitly unresolved below. |
| 00405770 fread | Line read into unpacked UTF-8 cells or packed byte strings; packed capacity scales by four; invalid destination raises error 10. |
| 00405830 fputchar | UTF-8 cell write or raw byte; raw result is the argument-block address, not the putc result. |
| 00405880 fgetchar | Raw/UTF-8 path, EOF -1; the third argument selects decoding in this binary. |
| 004058d0 fblockwrite | Write complete little-endian cells; signed count and completed-cell return. |
| 00405950 fblockread | Read complete cells; incomplete trailing cell does not overwrite destination. |
| 004059d0 ftemp | Forward to CRT temporary-file creation; no duplicate CRT body. |
| 004059e0 fseek | Three origins, CRT status return, unsupported origin is a no-op returning zero. |
| 00405a40 fexist | Resolve filename and test access; missing/empty/rejected names return zero. |
| 00405ae0 fremove | Resolve filename and remove; success is 1. |
| 00405b80 flength | Descriptor length; restore physical offset without flushing/changing FILE buffers. |
| 004053d0 path resolver | AMXFILE/tmp/temp/tmpdir selection; drive/pipe/UNC stripping, dot-separator rejection and 260-byte capacity. |
| 00405120 cell writer | Legacy 1–6-byte UTF-8, signed-byte branch and character count. |
| 00405340 byte reader | Line termination including CR lookahead byte and pushback. |
| 00404ef0 cell reader | UTF-8 validation, whole-read byte fallback, newline/EOF handling. |

### Reference accounting

Six independent native callbacks were previously inside neighboring reference
regions: 004056c0, 00405830, 00405880, 004059d0, 004059e0, 00405b80.
Their table slots at 004ca0bc/d4/dc/f4/fc and 004ca10c contain these exact
addresses. Each has independent argument loads/return, or the tmpfile JMP.
The metadata now splits those regions and retains byte-checked hashes. No
generated C was edited or regenerated. The denominator changes from the incoming
9,484 to 9,490. This is reference accounting, not six extra gameplay features.

### Open issues and acceptance boundaries

- **P3.4 remains open.** Remaining native catalog/SQLite audits are separate.
- Original packed fwrite allocates stack memory at 00405732, passes it directly
  to fputs at 00405742, and never copies the source string into it. Preserve the
  clone's defined packed-string conversion while this undefined reference path
  awaits an evidence-backed policy; do not claim packed fwrite equivalence.
- Original network-game initialization 004946b0 sets AMXFILE to the working
  directory plus `scriptfiles\`. The current clone lacks that initialization;
  the native tests supply AMXFILE explicitly. Startup integration remains open.
- Independent agent acceptance is pending: repository/user instructions prohibit
  subagents in this session. Mapping and tests do not substitute for that review.
- No GTA/client launch or deployed-binary replacement was performed. The user
  subsequently requested a source/docs commit and push at session close.

### Validation

`pawn_files_test` exercises production registrations, literal cell/UTF-8 bytes,
paths/modes, descriptor buffering, EOF and error behavior. Its decoder comparisons
execute only the copied official helper with explicit host-CRT adapters, never
the original PE entrypoint. Test results are recorded after the Win32 run.

VS 2026 is unavailable locally. Use `win32-vs2022`, which builds Win32
RelWithDebInfo into the preset's separate no-deploy directory. Shell build/test
processes use explicit subprocess timeouts.

## Original Bare game-text path

The actual caller is `tests/fixtures/official-gamemodes/bare.pwn:16` (also LVDM's
`OnPlayerConnect`). Recovered server native 0047b970 now sends RPC73 with
style/time/length/text, WORD player IDs and nonempty-string gating. Client owner
10019420 now enforces the original 1..200-byte range and emits an engine command;
truncated text retains the reference's zero-filled-buffer behavior. New adapter
100a0b20 clears GTA text with opcode 00BE and calls GTA 0069f2b0 with the original
text/duration/style, including the signed style comparison. The real runtime
command consumer invokes it. No new gamemode or command was created.

Native-to-wire-to-client fixtures check Bare's exact title, packed/unpacked
inputs, recipient/empty failures and length boundaries. The runtime fixture
checks the actual adapter with its two GTA calls redirected inside the isolated
test process. The fixture follows MSVC incremental-link thunks before patching
the verified call operands; it does not launch or modify GTA.
Visual GTA acceptance remains unexecuted; this session did not authorize launch.

## Incoming lifecycle work preserved

The initial worktree already contained live-occupancy and nickname admission
changes, NativeHost declarations and tests. These were preserved. The full build
exposed a missing fake-host override and an admission fixture that never
authenticated before sending its join RPC. Both fixtures were repaired without
weakening their expected outcomes. The repaired join test passes through the
actual transport authentication and RPC paths, alongside the original-byte
nickname oracle. The incoming authentication provenance correction is retained.

## P3.6 timer argument progress

`SetTimer`/`KillTimer` retain their verified owners 00473190/00473210.
`SetTimerEx` (00473c80) is now registered with the official parameter-count
bounds (4..260 cells), format parsing for `i`/`f`/`s`/`a`, and the same
AMX-heap copies for string and array arguments that 00482fd0 performs before
timer creation. Scalar formats dereference their referenced data cells. The
helper walks formats right-to-left, including heap allocation order and
callback argument order. Tests construct compiler-shaped reference cells for
multiple scalars and `ai` arrays, inspect callback cells and cover 259/260/261
argument boundaries. A compiled Pawn caller is not part of this fixture.

The official interpreter at 00401c90 restores the entry HEA after native return;
our isolated official-interpreter fixture observed HEA 256 before the allocation,
280 inside the callback, then 256 after return. SetTimerEx copied strings and
arrays therefore retain the shipped temporary-heap lifetime quirk. The clone
preserves this behavior; callback use after HEA restoration may reference reused
storage. This does not establish broader string/array lifetime safety.

Remaining P3.6 branches are unchanged: the time-library
`settimer`/`@timer`/`Idle` chain, sleeping-script continuation, and the
shutdown/reload callback-order audit.

## P3.17 scoreboard selection colors

The selected scoreboard row now uses the official red selection bar
(`0xffb92228`) with white text, replacing the inverted clone behavior.
The change is confined to `src/client/win/scoreboard_dialog.cpp`; the Win32
build and all 22 CTest targets pass. Visual GTA acceptance remains
unexecuted because this session did not authorize a client launch.

## P3.16 zones, map icons and world settings

Server natives implemented and mapped (samp-server.exe):
- `SetGravity` 0x004740f0 → `GameLayer::set_gravity` (FUN_00496310 broadcast) stores gravity, writes config `"gravity"` via `sprintf("%f")`, broadcasts **RPC 146** (`DAT_004bff38`) to joined players. Gamemode restart resets the authoritative gravity to 0.008 and clears gang zones; InitGame serializes that same float. Console gravity uses this setter.
- `GetGravity` 0x00474b30 returns the stored gravity cell.
- `SetWorldTime` 0x00472f50 / `SetWeather` 0x00473f20 now return `1` (verified via owner bodies).
- `SetPlayerWorldBounds` 0x0047a230 sends RPC 17 `{f32 x_max, x_min, y_max, y_min}` (`DAT_004be884 == 17`).
- `SetPlayerMapIcon` 0x0047d130 sends RPC 56 `{u8 id, f32 x/y/z, u8 type, u32 colour raw, u8 style}` (`DAT_004be934 == 56`).
- `RemovePlayerMapIcon` 0x0047d2c0 sends RPC 144 `{u8 id}` (`DAT_004be938 == 144`).
- `GangZoneCreate/Destroy`, `GangZoneShow/Hide/Flash/StopFlash` (player and all) — 1024-slot pool, RPCs 108/120/121/85, colour `bswap32`, create returns lowest free slot / -1.

Client: added `rpc_remove_map_icon` (FUN_1001a3e0 @ 0x1001a3e0) and dispatcher case 144; existing gang-zone handlers cover 108/120/121/85; gravity RPC id corrected from 92 to 146 in `rpc_ids.hpp` and dispatcher. `rpc_ids.hpp` verified comments for 144/146.

Tests: `tests/p2_official_server_test.cpp` (world) covers gravity/world bounds/map icons/removal/all ten gang-zone natives (including three previously missing calls), map icon truncation/removal, pool capacity/reuse and restart reset, plus wire payloads; `tests/server_rpc_test.cpp` (`test_56_144`) covers client map-icon placement/removal.

P3.16 follow-up: the three former stubs are resolved. `EnableZoneNames` logs the shipped removed-API warning and returns 1 (00475eb0); `DisableInteriorEnterExits` sets the InitGame flag (004777f0); `SetNameTagDrawDistance` stores/serializes the float (00477800). New-game defaults are false/70.0; normal name-tag drawing already consumes the received distance. Client engine consumers now cover icons, flashing zones, bounds, gravity/weather and entry/exit disabling. Live GTA visual/gameplay acceptance remains open.

## Session accounting

The current counter reports **670 / 9,490** mapped production bodies, zero
unmapped/invalid/duplicate claims. `--check` passes. The counter's nine Python
regressions pass. Server pseudocode/reference validation passes: 3,806 complete
indexed functions and 3,496 byte-matching reference regions, with the existing
one decompilation failure still visible. No generated C was modified.

The file-native target passes, including 150 original-decoder comparisons.
The Win32 client/server build passes. All 22 CTest targets pass, reusing the
unchanged passing targets after repairing the runtime fixture. Commands:
`cmake --preset win32-vs2022`, `cmake --build --preset win32-vs2022`,
`ctest --preset win32-vs2022`, `python tools/official_function_count.py --check`,
`python tools/test_official_function_count.py`, and
`python tools/check_reference_pseudocode.py --binary server`.
All other P3 packages remain open; no package was crossed off this session.
The diagnostic gamemode has intentionally not been created yet.


## Audit repair and engine integration (2026-11-08)

See P3_16_AUDIT.md for the original findings and repair evidence. SetTimerEx
now dereferences variadic scalars and adjacent array lengths, accepts 4..260
argument cells, allocates copies right-to-left and preserves script callback
order. Tests cover a PUSH.C/SYSREQ.C caller, mixed/scalar/array/string values
and count boundaries. The official interpreter also restores its entry HEA;
that shipped copy-lifetime limitation is retained, not replaced by a new VM
ownership policy. Restart clears gang zones and restores gravity; console
commands call the shared setter and InitGame uses the authoritative float.

Client engine owners: map-icon replacement 10009ff0/removal 10008ca0, script
creation helper 100a0bb0 (04ce/02a8/0570/02a7; 0165/0168 for type zero), gang
zone rendering 100022a0 ->100a1260 ->GTA5853d0 with 500ms base/flash alternation,
and bounds response 1009f260. Runtime settings follow weather100a0980,
gravity100a1220/RPC10018750 and entrance disabling100a1380. Icons/zones/bounds
are cleared across reset/disconnect, and icon generations preserve replacement.
Offline engine fixtures capture actual script opcodes/handles, native radar
rectangles/colors and bound velocity/height effects. No game launch occurred.

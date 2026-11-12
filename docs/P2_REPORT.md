# P2 implementation and terminal verification

Date: 2026-11-04. Reference: the shipped SA-MP **0.3.DL-R1** client and server.

**P2.1-P2.8 implementation and terminal integration are complete.** This records
work delivered during the session, including model/texture/entity activation,
runtime corrections, the original Pawn dependencies and original client commands.
The20-target terminal suite passed. The user confirmed the Bare cursor,
mouse-spawn, UI cleanup/movement and reconnect flow.

Broader GTA custom-model and cross-implementation acceptance remains separate;
implementation completion does not certify unperformed visual checks. See the
[roadmap's P2 implementation table and acceptance gates](PROJECT_PLAN.md),
[build manifest](p2/official-implementation.json),
[user confirmation](p2/bare-baseline-acceptance.json) and
[current command/Pawn report](COMMAND_AND_PAWN_REPORT.md).

The normal installation contains only original bare.amx/bare.pwn, with no
filterscripts or artwork. Original LVDM remains a separate regression fixture.
Earlier observations below are historical and retain their build/session limits.

## Historical follow-up on 2026-11-04

The supplied GTA image exposed a sector-pointer relocation error:40914e
addresses a MOV instruction, so its disp32 must be patched at409151 while
preserving8b34c5. Four missing end-of-array operands were also restored. A new
regression compiles the real installer against an isolated PE memory fixture,
checks all88 patch operations against the original operand table and verifies
that the opcode survives. **15/15 CTest targets pass.**

An earlier isolated test-mode session confirmed custom model20001, health100,
driver state50 and vehicle411. That observation does not validate later builds.
The earlier custom [diagnostic Pawn mode](../tests/fixtures/p2_native.pwn)
called real server natives, but its command names, messages and content were
project additions. Calling it normal/official was incorrect. It is excluded
from the current launch. See [native mapping](P2_NATIVE_MAPPING.md).

The user subsequently reported a day-change crash. Timed-object visibility and
model lifetime changes are built but still require live acceptance. The latest
normal-mode session on port7812 was reported stuck at the beach. A read-only
snapshot confirms downloads acknowledged, spawn approved, but no completed
client spawn (playing=false, in_game=false, actor model0). Its captured main
thread sleeps in GTA's background loop while another app has foreground focus.
After GTA returned to the foreground, terminal monitoring observed playing=true,
in_game=true, custom skin20001 and health100 without restarting or modifying the
process. This establishes that this pending spawn completed on resume. The
later sample is on foot, with a vehicle411 pointer retained; it does not certify
that the player remains seated. Visual camera/controls and time-change acceptance
remain pending. Do not present the earlier test-mode result as success for this
session.

The user confirmed that waiting completes the spawn, then reported death on
`/car`. Reference chain1001e540 ->100b8420 ->100b7a20 ejects the driver and seven
passengers with opcode0362 at vehicle position plus2Z before deletion. The clone
omitted this step; `remove_vehicle` now performs it before delete-car. The latest
Win32 build and15 CTest targets pass. The compiled normal gamemode also verifies
that `/car` and `/deletecar` send no removal/recreation/entry RPC while state2/3
is reported. The updated DLL is running without a debugger; live memory confirms
skin20001, health100 and driver state50 in vehicle411. Repeated `/car` and time
changes still require the user's visible outcome; this is not yet a full pass.

## Delivered scope

Latest launch configuration: the user requires only shipped script behavior.
The original packaged `bare.amx` now runs unchanged, with no filterscripts,
custom commands/messages, P2 models, vehicles or objects. It waits in the original
locker room with stock skin265. `/help` and the other custom commands were
removed from launch together with the entire diagnostic script. Terminal state
confirms class-ready selection, no accepted spawn and zero runtime cars/objects.
Automated test files remain separate. See [exact script provenance and current
verification](OFFICIAL_SESSION.md). Earlier custom-mode checks remain historical
diagnostic evidence, not proof of shipped-script or full engine parity.

| Package | Status and implemented behavior |
| --- | --- |
| P2.1 | Complete implementation: character/simple/timed model registration, real file CRC/size lookup, filename lookup, redirects, custom/base skin getters, `SetPlayerSkin` and custom `SetSpawnInfo`. |
| P2.2 | Complete implementation: 39-byte manifests, CRC requests 181/182, direct/HTTP control 183, one-bit completion 184 and readiness acknowledgement 185; class requests wait for readiness; disconnect cancels work. |
| P2.3 | Complete implementation: native LZMA settings and 4,096-byte blocks, application fragmentation, final empty block for exact multiples, HTTP/S redirects and six owned workers, size/CRC/DFF/TXD checks and failure propagation for shared files. |
| P2.4 | Complete implementation: endpoint-specific CRC cache names, local fallback directory, cold/warm/corrupt checks, temporary-file cleanup, interrupted transfer/reset and worker cancellation. Existing archive/startup behavior is retained. |
| P2.5 | Implementation complete: model/texture/collision/entity paths and the recovered runtime corrections are built and terminal checked. Remaining GTA acceptance is tracked separately. |
| P2.6 | End-to-end pipeline integration and terminal verification complete. Manual in-game and cross-implementation acceptance remains a separate gate. |
| P2.7 | Original LVDM native dependencies and host/wire/lifecycle checks implemented; full unmodified script fixture passes. |
| P2.8 | Original 27-name client table, settings and runtime consumers implemented; offline checks pass, GTA review remains pending. |

Essential global object create/destroy/position/rotation/getter behavior was
pulled forward from P3.10 so `AddSimpleModel` has a real Pawn-to-entity path.
Advanced object movement, materials, attachments, player objects and editing
remain in P3.10. The world-hour broadcast/application dependency was also wired
so timed models can respond to server time changes.

## Earlier verification performed

- Fresh **Win32 RelWithDebInfo build passed** using the VS2026 preset. Both
  client/server artifacts are PE32/x86. Deployment was skipped by the existing
  no-deploy configuration.
- **14/14 CTest targets passed**, including the new model pipeline target and
  the existing connection, transport, lifecycle, multiplayer, native, VM and
  command regressions.
- **7/7 Python counter regression tests passed**. There are **621 / 9,482**
  recognized mapped production bodies, zero unmapped/duplicate/invalid claims,
  and 69 explicitly reviewed parser diagnostics. All 106 client dispatcher routes
  have matching official pointers and direct fixtures in the static audit.
- Literal metadata/CRC vectors, tiny-fragment LZMA transfers and end-of-file
  behavior pass. The network-to-cache fixture exercises manifests, requests,
  decompression, validation, completion and acknowledgement through production
  server/client code.
- A real local HTTP fixture covers redirect following, actual DFF/TXD bytes,
  HTTP 404, CRC mismatch, partial content, six occupied worker slots/seventh-slot
  rejection, and disconnect cancellation.
- Bounds/failure fixtures cover malformed files, decompression failure,
  truncated direct transfers, shared-CRC failure completion, signed model-table
  limits, world selection and daytime/overnight/equal-hour visibility rules.
- Local GTA archive members `male01`, `fam1`, and a terrain model/dictionary
  pass the file validators. **Two character pairs and two object pairs** also
  pass real-byte direct transfer and cold/warm/corrupt-cache runs. These tests
  execute the clone code without launching GTA.
- An isolated clone server loaded `bare.amx` with artwork enabled and answered
  a loopback SA-MP information query. Only the child process created for this
  test was terminated. This smoke check is startup/query evidence; it is not a
  live GTA custom-model session.

The fresh evidence is in [p2/build.json](p2/build.json),
[p2/summary.json](p2/summary.json), [real asset results](p2/real-assets.json),
and [server smoke results](p2/server-smoke.json). Historical P0/P1/integration
snapshots were preserved.

## Binary findings and practical limits

The model-info table uses 65,535 slots with a 32,767 bias. It is distinct from the
older streaming pointer-list expansion. Negative custom object IDs must use
that signed table; indexing the original stock table by a negative ID is wrong.

The recovered completion callback's first-time flag guards the **initial object
batch**, not `OnPlayerConnect`. The final implementation keeps connection
callbacks independent of download completion and runs
`OnPlayerFinishedDownloading(playerid, virtualworld)` on completion.

`AddPlayerClass`/`AddPlayerClassEx` store their supplied model unchanged in the
reference. Custom spawn selection uses `SetSpawnInfo`, which resolves the
registered stock base plus custom ID. The optional manual fixture follows
that path.

The denominator grew from 9,480 to 9,482 after verifying and labeling two independent
existing entrypoints: asset-array cleanup thunk 1000d5e0 and custom model-info
release 100a7720. Original reference binaries were not changed. The meter is
source accounting, not a gameplay completion percentage.

The GTA adapters currently target the recovered GTA 1.0 US addresses and existing
startup/version guards. Full custom-skin plugin parity, arbitrary asset-format
compatibility and extended resource-churn behavior are not established by these
offline fixtures. The collision reader and the actual 707 operand patching need
in-game exercise. The active normal gamemode compiles cleanly with the local
Pawn3.10.10 compiler and 0.3.DL includes. The original bundled compiler is not
required for that check; archived optional fixtures are separate artifacts.

Changes are left in the working tree. This P2 request did not request a new
commit/push. The built DLL/server were not copied over the game installation.

## Tests for the user to run

The full steps and expected outcomes are in [p2/MANUAL_TESTS.md](p2/MANUAL_TESTS.md).
An optional [Pawn fixture](p2/p2_smoke.pwn) and a private extracted asset set at
`build/archive/build-msvc/p2-manual/models` are available.

1. Cold join: correct textured custom skin in class preview and after spawn.
2. Live skin switching, movement/animation, and a remote observer if available.
3. World-specific object replacement and day/night timed visibility.
4. Object deletion/recreation without stale entities.
5. Warm reconnect and interrupted-download recovery.
6. Stock/artwork server switching, repeated cleanup and resource stability.
7. Invalid-file fallback and a known custom object with embedded COL3 collision.

Prioritize 1, 2 and 6 if time is limited. Keep P2.6 open until the required in-game
results are recorded; the broader official/clone pairing matrix also remains open.

## Subsequent authorized manual test

The user requested a launch and reported unknown /help in Bare and an
unresponsive Spawn button. The normal configuration now selects the exact
packaged LVDM, which defines the original help command. A failing Win32 input
regression identified premature press cancellation on capture changes; the fix
and original device-cursor setup pass the20-target suite. The corrected DLL was
installed and relaunched without a debugger. See the updated command/Pawn report
for original owners and live-inspection boundaries. User visual acceptance is
still pending.

The subsequent hardware-cursor attempt failed visual review: the cursor was
invisible. The original mouse.png software pointer rendering has been restored,
while preserving the capture-change click correction. The20-target suite passed
and the new DLL was installed/relaunched. User cursor/click acceptance is pending.

## Latest clarified launch configuration

The user clarified the engine/gamemode distinction and requested the minimal
Bare Script only. The normal installation now contains only bare.amx/bare.pwn;
LVDM and clone_classes were removed from it. No filterscripts/plugins/artwork
are selected. The game/server were restarted and a live query confirms Bare
Script. Original LVDM coverage remains solely in the separate regression fixture.

## User-confirmed Bare baseline

The user subsequently confirmed visible cursor, mouse Spawn, selection UI
cleanup/normal movement and reliable repetition after reconnect on the current
Bare build. This is user-observed clone-client/clone-server acceptance, recorded
with the artifact hashes in [the baseline acceptance record](p2/bare-baseline-acceptance.json).
These four checks are closed. Vehicle/custom-model and broader compatibility
checks remain separate; earlier pending notes above describe the earlier state.

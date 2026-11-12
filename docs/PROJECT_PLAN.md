# SA-MP 0.3.DL: complete priority roadmap

Updated: 2026-11-04. Target: the shipped **0.3.DL-R1** client and server.
The official launcher is retained. This roadmap covers baseline through release
and replaces the earlier mixed status/history document.

Completed packages use **[x] and strikethrough**; open packages use **[ ]**.
Completion applies to the implementation/offline scope stated in each row.
P1, P2.1-P2.8 and the completed P3 batches have passed their stated source and
terminal checks. Remaining runtime acceptance gates are listed separately and
are not crossed off by an implementation checkmark.

## Current checkpoint

- P0 baseline: `e902f98`; P1.1-P1.7 implementation: `a418882`.
- Upstream Pawn, local-command and startup work integrated: `8723721`;
  the full roadmap was published in `b330300`. Those commits remain pushed.
- **P2.1-P2.8 implementation is complete in the working tree.** The model/texture
  adapters and runtime corrections, end-to-end terminal pipeline checks, original
  Pawn dependencies and client commands were implemented during this session.
  Broader runtime acceptance is tracked separately from implementation.
  See the [P2 report](P2_REPORT.md) and [manual tests](p2/MANUAL_TESTS.md).
- Source audit (2026-11-08): **670 / 9,490** recognized mapped production bodies (current counter, 2026-11-08), zero
  unmapped/duplicate/invalid claims. This is not a gameplay completion percentage.
- Fresh Win32 build (VS 2022, 2026-11-08), **22/22 CTest targets**, and **9/9 Python counter regression
  tests** passed. All 70 parser diagnostics have source-hash-bound reviews.
  The 106 client dispatcher routes have no pointer mismatch or missing fixture.
- The static audit resolves 194 native registrations: 171 partial catalog
  entries, 23 placeholders and 303 absent entries. Registration is not parity.
- P2 real-file transfer/cache checks and server startup/query passed. The current
  authorized no-debug session uses the exact packaged `bare.amx`, no filterscripts
  or custom commands/content. Live memory confirms stock265 in locker interior14
  with zero vehicles, objects or artwork. See [official session](OFFICIAL_SESSION.md).
  Earlier custom-script day-change crashes and `/car` deaths still require
  verification of the runtime corrections; no full acceptance claim.
- P2.7 now implements all eight original LVDM native dependencies, real timers,
  pickups, score replies and gamemode restart lifecycle. The full unmodified
  LVDM runs in the terminal VM fixture without an isolated resolver.
- P2.8 now registers all 27 original client names with the original debug gate,
  settings and runtime consumers, including RCON, frame/HUD hooks and labels.
  Original Bare is installed for normal launch; reference LVDM stays under tests.
  The clarified normal launch selects original Bare only. LVDM is a test fixture
  outside the normal installation. The user confirmed visible cursor, mouse
  Spawn, UI cleanup/movement and reconnect on the current Bare build. See
  [baseline acceptance](p2/bare-baseline-acceptance.json).
  See the [implementation and verification report](COMMAND_AND_PAWN_REPORT.md).
  GTA visual acceptance remains in P2.5/P2.6; no unattended application launch.

The P1 integration raised the denominator from 9,446 to 9,480 by splitting
verified independent server entrypoints. P2 adds two verified client entries
(asset-array cleanup thunk 1000d5e0 and custom model-info release 100a7720),
raising it to 9,482. Original binary identities are unchanged. See
[current P2 validation](p2/official-implementation.json); historical evidence remains preserved.

**Execution policy:** choose work by severity, dependency and the amount of
real SA-MP behavior it unlocks. Px.x IDs identify existing packages; their numeric
order is not a mandatory implementation sequence. Preserve completed work and
the user-confirmed Bare baseline. Follow the priority queue below.
The P2 changes have not been committed/pushed in this task.

There are **52 planning packages: 24 implementation/offline packages crossed off and 28 open**, plus the explicit
runtime/release gates. Packages differ greatly in size; these checklist totals
are not a completion percentage or an ETA.

## Execution priority: highest to lowest

This queue supersedes the earlier strict P0 -> P1 -> P2 -> P3 -> P4 order.
The complete52-package inventory and its historical completion states remain
below. Reordering does not declare any unfinished package complete, drop
required1:1 behavior, or make the raw function meter a delivery target.

**Selection rules:**

- An active crash, corruption, broken connection/spawn, lost controls or resource
  cleanup regression takes precedence over the queue. The confirmed Bare
  cursor/mouse-spawn/movement/reconnect checks stay accepted unless a later
  change regresses them.
- Implement a complete reachable path: original caller/Pawn native -> server
  state -> wire -> client -> GTA/UI effect -> cleanup. Finish and verify that
  path before adding unrelated functions.
- Prioritize dependencies used by representative unmodified scripts. Within a
  large package such as P3.4, complete the dependencies needed for the current
  milestone instead of requiring its entire catalog before any next feature.
- Keep Bare as the normal launch. Other gamemodes/fixtures stay outside the
  normal installation. A runtime check requiring different script behavior
  needs a separately authorized setup; never silently change the default or
  add demonstration commands/content.
- Run applicable original/clone comparisons as each feature becomes usable.
  P3.24 and P4.2-P4.4 are continuous checks with final closure later, not work
  postponed until every feature has been written.

| Rank | Work to pursue | Existing IDs | Concrete milestone |
| --- | --- | --- | --- |
| 1 | Validate the existing core multiplayer paths and fix demonstrated failures | Remaining P1 runtime gate; targeted P4.2-P4.4 | On-foot/aim/death/respawn, driver/passenger transitions, visibility/world isolation and occupied-vehicle deletion have observed outcomes for the applicable pairing. Keep the already confirmed Bare subset closed. |
| 2 | Common scripting and script-host dependencies | Priority subsets of P3.4, P3.5, P3.6 | Required original natives resolve with actual behavior; script execution, files/timers/callbacks and reload ownership support the next unmodified-script scenario. Existing format/printf/SetTimer/KillTimer/restart work is preserved. |
| 3 | Common user interaction and server-script UI | P3.14; remaining P3.17; basic P3.15 | Original dialogs/menus, response callbacks, required textdraws and chat/command presentation work from the real script caller through the client UI. The original client command table is already present. |
| 4 | Player actions and combat completeness | P3.7, P3.8 | Core animations/spectating/actions, damage and weapon callbacks update the correct player/entity state and survive death/respawn. |
| 5 | Common world/entity APIs | P3.10, P3.11, P3.12, P3.16 | Actual player/global object, pickup, actor, checkpoint/marker and world-setting calls produce and remove their intended entities/effects. Complete missing server entry points as well as client consumers. |
| 6 | Validate the already-implemented0.3.DL custom-model paths | P2 runtime acceptance gates | Custom player/object models render with correct textures/collision, timed visibility and safe cleanup across reconnect/server changes. Promote any active crash here to rank1. |
| 7 | Plugin compatibility | P3.21; needed P3.5 exports | A representative compatible plugin loads, registers natives/callbacks, runs and unloads through the real ABI and lifetime rules. |
| 8 | Extended vehicles and presentation/integration | P3.9, P3.13; remaining P3.15, P3.18, P3.19 | Tuning/damage/trailers/unoccupied/train paths, labels/bubbles, remaining textdraw/camera/audio behavior and device/resource lifecycle reach their respective acceptance gates. Shared rendering/resource blockers move earlier when needed. |
| 9 | Extended server operations, NPCs and script HTTP | Remaining P3.20, P3.22, P3.23 | Remaining administration behavior, NPC join/playback and HTTP callbacks/failure cleanup work through original entry points. Operational blockers for earlier scenarios move earlier. |
| 10 | Close broad compatibility, remaining catalog gaps and release gates | P3.24; remaining P3.4-P3.6 branches; P4.1-P4.7 | Agreed script/pairing scenarios, extended sessions and clean installation pass; every remaining required behavior is accounted for. Any library/runtime/thunk classification is evidence-based. |

**Continuous accounting:** begin the P4.1 distinction between gameplay,
libraries/runtime, forwarding entries and compiler helpers alongside feature
work. Do not spend an unbounded block labeling all9k entries before delivering
another usable feature. Keep the existing mapping audit; report functional
milestones and their acceptance separately from mapped-body counts.

**Immediate next milestone:** validate the existing core multiplayer behavior
beyond the confirmed Bare subset, using its actual original callers and a
separately authorized runtime setup when needed. Then implement the common
script-host/API/UI dependencies that unlock the next unmodified-script scenario.

## P0 - Trustworthy baseline

**6/6 complete.** Evidence: [P0 report](baseline/README.md).

| Status / ID | Package | Completed scope |
| --- | --- | --- |
| [x] **P0.1** | ~~Supported Win32 build/test baseline~~ | Fresh 32-bit client DLL, server and test build; compiler/preset/artifact identities retained. VS 2026 is locally verified; VS 2022 remains an alternate preset. |
| [x] **P0.2** | ~~Counter and parser review~~ | Original 16 diagnostics reviewed; unique official pointers and body exclusions enforced. Renew reviews after later source changes. |
| [x] **P0.3** | ~~Active feature/evidence register~~ | Original PE identities, active source owners, byte evidence and verification boundaries recorded. Extend the register for new work. |
| [x] **P0.4** | ~~Native, RPC and packet reconciliation~~ | Static inventories classify present, partial, placeholder, absent and unresolved surfaces independently of the mapping meter. |
| [x] **P0.5** | ~~Meaningful dispatcher tests~~ | Individual routes have fixtures and observable assertions; existing behavior checks preserved. |
| [x] **P0.6** | ~~Provenance and historical evidence disposition~~ | Missing references and other-version claims explicitly classified; current evidence uses the shipped 0.3.DL artifacts. |

**Exit gate: passed.** Maintain the evidence without overwriting historical P0 results.

## P1 - Reliable connection and core multiplayer

**7/7 implementation/offline packages complete.** Evidence: [P1 report](P1_REPORT.md),
[package owners](p1/evidence.json), [combined validation](integration/validation/build.json).

| Status / ID | Package | Completed scope |
| --- | --- | --- |
| [x] **P1.1** | ~~Transport fragmentation and reliability~~ | Shared codec, split send/reassembly, bit lengths, ACK/retry, duplicate suppression, ordering/sequencing, rollover, ping/timeouts, priorities and congestion scheduling; literal/adverse-network fixtures and isolated original-helper comparisons pass. |
| [x] **P1.2** | ~~Connect, reject, disconnect and reconnect~~ | Cookie/password/auth/accept/join stages, authentication table, version/name/challenge/serial/slot checks, endpoint filtering, open retries, incomplete handshakes and cleanup/reset. |
| [x] **P1.3** | ~~Class selection, spawn, death and respawn~~ | State/callback ordering, refusal/authorization, local/remote lifecycle commands, cause/killer reporting and respawn handling; synthetic AMX and fake-memory fixtures pass. |
| [x] **P1.4** | ~~Core player native-to-client loop~~ | Position/angle/interior/world, health/armour, money, weapons/ammo, keys/axes, velocity and state getters connect through host state, RPCs, client commands and GTA adapters. |
| [x] **P1.5** | ~~On-foot movement, aim and bullets~~ | Local producers, server validation/relay, remote state/control, aim/shot adapters, stat/weapon/interior reports and stale/dead entity handling; independent packet fixtures pass. |
| [x] **P1.6** | ~~Essential vehicle loop~~ | Vehicle pools/natives, create/remove adapters, driver/passenger modes, enter/exit, stream records, health/position/interior commands, death reports and basic idle/death respawn. |
| [x] **P1.7** | ~~Visibility and virtual-world isolation~~ | Strict XY radius, player/vehicle capacities, callbacks, world changes, relay isolation, deletion/reset and passenger distance from its vehicle. Interiors do not add a native visibility boundary. |

**Pending P1 runtime gate - do not cross off:**

- [ ] Official client against clone server.
- [ ] Clone client against official server.
- [ ] Clone client against clone server.
- [ ] For each applicable pairing, verify reject/reconnect, class/spawn/death,
  movement/aim/shots, chat, driver/passenger changes, world/stream transitions
  and vehicle destruction/respawn; retain versions, traces and outcomes.

Earlier incoming startup/class/spawn and `/q` captures are documented in
[RE_FINDINGS.md](RE_FINDINGS.md). They concern that earlier checkpoint and
do not certify the combined P1 build. No GTA or live server was launched during
this integration. GTA/client runs still require an explicit request.

## P2 - Complete the 0.3.DL custom-model pipeline

**8/8 implementation/offline packages complete.** This records work already
delivered in this session; it does not schedule P2 implementation again.
The Bare baseline is user-confirmed. Remaining custom-model and cross-pairing
acceptance gates are preserved separately below. Evidence: [P2 report](P2_REPORT.md),
[build/audit](p2/build.json), [real assets](p2/real-assets.json),
[isolated server smoke](p2/server-smoke.json).

| Status / ID | Package | Completed scope or remaining condition |
| --- | --- | --- |
| [x] **P2.1** | ~~Server model registration and lookup~~ | Character/simple/timed natives, file CRC/size and filename lookup, artconfig, redirects, base/custom skin getters, SetPlayerSkin and custom SetSpawnInfo. |
| [x] **P2.2** | ~~Model negotiation and readiness~~ | 39-byte manifests, CRC requests, direct/HTTP control, completion/ack, callback/initial object ordering, readiness-gated class requests and cancellation. |
| [x] **P2.3** | ~~Actual transfer and validation~~ | Native LZMA blocks/fragments/EOF, six HTTP workers/redirects, size/CRC/DFF/TXD validation; error, malformed, truncation and shared-file failure fixtures. |
| [x] **P2.4** | ~~Cache and archive lifecycle~~ | Endpoint/local cache paths, cold/warm/corrupt and interrupted transfers, reset/server-key isolation, temporary files and HTTP cancellation; existing archive integration preserved. |
| [x] **P2.5** | ~~GTA model/texture activation and runtime corrections~~ | Implemented model table/loading, texture/collision and player/object entity adapters, sector-pointer corrections, timed visibility/lifetime handling and occupant-safe vehicle removal. Source/build and relevant terminal checks pass. Bare input/spawn/reconnect is user-confirmed; broader model/vehicle runtime acceptance is separate below. |
| [x] **P2.6** | ~~End-to-end pipeline integration and terminal verification~~ | Implemented and checked the production native/server/RPC/client transfer/cache/readiness chain with metadata, HTTP/LZMA, real GTA asset bytes, cold/warm/corrupt cache and server startup/query coverage. Runtime acceptance remains an explicit gate below rather than unfinished implementation. |
| [x] **P2.7** | ~~Original gamemode Pawn dependencies~~ | All eight bindings, actual score/message/death/pickup wire paths, timer ownership and script restart lifecycle. Unmodified packaged LVDM initializes with 206 vehicles, five pickups and one timer; exact help RPCs, score timer and rotation to Bare pass without an isolated resolver. GTA acceptance remains separate. |
| [x] **P2.8** | ~~Original client command implementation and offline verification~~ | The 25 missing names join the existing quit aliases in the production startup table. Original normal/debug gate, usages/settings, RCON, file output, rendering/engine consumers and fallback are wired; standalone command/host/wire/render checks pass. Game visual parity is still subject to the separate runtime acceptance gates. |

**Dependencies:** P1 transport/lifecycle. Essential global object creation and
world-clock application were pulled forward from P3 to make model use concrete.
The user also moved the bounded native and command gaps above into P2. Remaining
file/native catalog, broader timer/plugin lifecycle, chat/UI and administration
work stays in P3; P2.7/P2.8 must complete their actual dependencies rather than
register placeholders. The earlier unattended pass prohibited application
launches; later manual launches were explicitly requested. Keep Bare as the
normal configuration and honor the active session's launch instructions.
**Implementation status versus runtime acceptance:** P2.6's implementation and
terminal integration are crossed off above. Its original visual/compatibility
acceptance requirements remain in this separate list; no acceptance requirement
has been removed or silently treated as passed.

**Confirmed runtime subset:**

- [x] Bare visible cursor and mouse Spawn.
- [x] Selection UI cleanup and normal movement.
- [x] Reconnect repeats the baseline flow.

Evidence: [user-confirmed Bare baseline](p2/bare-baseline-acceptance.json).

**Remaining runtime acceptance gates:**

- [ ] Custom character/object texture, animation and collision behavior in GTA.
- [ ] Timed visibility, world changes and object deletion/recreation.
- [ ] Safe occupied-vehicle deletion/recreation under the relevant real caller.
- [ ] Artwork cache/reconnect/server-switch isolation and resource cleanup.
- [ ] Required official-client/clone-server, clone-client/official-server and
  clone/clone feature comparisons beyond the confirmed Bare subset.

Record these in [the manual checklist](p2/MANUAL_TESTS.md). A failure here reopens
its affected implementation for a specific correction; it does not mean the
whole P2 implementation must be repeated. Continue the remaining priority queue
while keeping these acceptance requirements visible.

## P3 - Broad gameplay, scripting and presentation compatibility

**3/24 bounded packages complete; 21 remain.** P3.1-P3.3 record work already delivered on
the incoming branch and preserved by the merge. Wider audits and remaining
branches stay open below.

Current implementation evidence and unresolved branches are tracked in the
[P3 report](P3_REPORT.md). The user-requested minimal diagnostic gamemode belongs
at the very end of P3, after every other P3 implementation task is finished.

| Status / ID | Package | Completion condition or completed scope |
| --- | --- | --- |
| [x] **P3.1** | ~~Recovered core/float/string/property/clock native batch~~ | 52 registered names across five tables, recovered helpers and focused native/string fixtures integrated. File/format/timer/full-catalog work remains open below. |
| [x] **P3.2** | ~~Recovered AMX execution batch~~ | Indexed/main/continued entry, live header/public/data handling, callback/debug/native paths, suspension, guard/error results and division cases implemented with differential fixtures. Wider SDK/loader/host compatibility remains open. |
| [x] **P3.3** | ~~Local quit dispatch and recovered startup corrections~~ | Local table, `/q`/`/quit`, fallback and delayed disconnect/exit wired; script/model lookup, file-open ABI and model-pool fixes retained. Command fixtures pass; earlier manual evidence keeps its checkpoint limits. |
| [ ] **P3.4** | File library and remaining native catalog | Preserve completed format/printf. Complete the official 13 file natives and handle/mode/path/byte/cell semantics, remaining native families and individual audits of 18 SQLite natives. Prioritize real script dependencies; close all 496 distinct catalog names with actual behavior and evidence. |
| [ ] **P3.5** | Remaining AMX loader, SDK and VM compatibility | Complete loader/compact-image/memory/string/error boundaries and SDK exports; wire currently unbuilt runtime APIs through real callers and extend differential fixtures. Preserve completed execution cases. |
| [ ] **P3.6** | Timers, script host and reload lifecycle | Preserve P2.7 SetTimer/KillTimer and gamemode restart work. SetTimerEx now parses `i`/`f`/`s`/`a` formats, copies string/array arguments into AMX heap storage and passes them to callbacks; production fixtures cover referenced scalar/float and `ai` array arguments, reverse callback ordering and the 259/260/261 cell boundary. The official interpreter restores entry HEA after the native; temporary timer copies retain that shipped lifetime quirk. Complete the remaining time-library `settimer`/`@timer`/idle chain, sleeping-script continuation, script shutdown/reload branches and callback return/order rules. |
| [ ] **P3.7** | Remaining player modes and actions | Finish spectating, animations, special/fighting actions, skills, team/colour/name/state changes and native/RPC/GTA cleanup beyond the P1 core. |
| [ ] **P3.8** | Combat, damage and extended death behavior | Finish damage reports/callbacks, weapon-shot branches, attribution and mode transitions; verify engine effects and invalid/stale cases across implementations. |
| [ ] **P3.9** | Advanced vehicles and synchronization | Complete components/paintjobs/tuning, damage, trailers, unoccupied modes, trains/carriages, sirens/landing gear and special vehicle branches, including callbacks and actual GTA effects. |
| [ ] **P3.10** | Global and player objects | P2 includes essential global create/destroy/position/rotation/getters and client entities. Complete movement, attachments, materials, editing, player objects and remaining visibility/lifecycle branches. |
| [ ] **P3.11** | Pickups and actors | Finish pools/natives, spawn/destroy/stream, pickup reports and actor state/animation/damage paths; verify entity/resource cleanup. |
| [ ] **P3.12** | Checkpoints, race checkpoints and markers | Complete native state, enable/disable/update, client rendering, enter/leave reports/callbacks and world/lifecycle transitions. |
| [ ] **P3.13** | Labels, bubbles and name tags | Complete global/player 3D labels, chat bubbles, attachments, distances/visibility, colour and actual rendering/removal behavior. |
| [ ] **P3.14** | Dialogs and menus | Finish definitions/state, UI presentation, input/selection/cancel responses, callbacks and reconnect/reset handling. |
| [ ] **P3.15** | Global/player textdraws and interaction | Replace placeholders with pools, native/RPC behavior, layout/font/material use, selection/click reports and resource lifecycle. |
| [ ] **P3.16** | Zones, map icons and world settings | P2 includes world-hour broadcast/application for timed models. Gang zones/flashing (create/destroy/show/hide/flash/stop-flash per-player and all; RPCs 108/120/121/85, colour bswap), map icons (set/remove; RPCs 56/144), world bounds (RPC 17), gravity/time/weather (RPC 146/94/152) implemented and wire-tested; `GetGravity`/`SetWorldTime`/`SetWeather` returns verified. Client engine adapters now apply/remove radar icons, draw/flash gang zones, enforce bounds, apply gravity/weather and disable interior entrances. Draw-distance initialization feeds existing name-tag rendering. `EnableZoneNames` reproduces the official removed-API warning and success return. Offline implementation is covered; live GTA acceptance remains open. |
| [ ] **P3.17** | Remaining chat, command integration and scoreboard/death UI | Preserve the P2.8 original27-name command table, settings and runtime consumers. Selected-row scoreboard UI now uses the official red selection bar with white text. Complete remaining input/output/presentation branches, script/server integration, score/ping/death UI parity and acceptance; registration alone is insufficient. |
| [ ] **P3.18** | Remaining GTA integration, camera, input and audio | Audit required patches/hooks and calling conventions; close camera/control/input/audio and entity effects beyond P1/startup adapters, including shutdown restoration. |
| [ ] **P3.19** | Rendering and resource lifecycle | Verify fonts/colours/layout/scaling, device loss/reset, creation/destruction, repeated scene changes and reference visual behavior. |
| [ ] **P3.20** | Server administration and operations | Complete config/console, query/RCON, bans/limits/logging and operational error paths with byte/state fixtures and bounded inputs. |
| [ ] **P3.21** | Plugin ABI and loading | Recover and implement exposed ABI, AMX exports/native registration, load/unload/tick callbacks, errors and resource lifetime through real plugin callers. |
| [ ] **P3.22** | NPC compatibility | Complete NPC join/slots, state/sync, script callbacks and relevant playback/control/lifecycle behavior from the separate official paths. |
| [ ] **P3.23** | HTTP and script network extensions | Inventory and implement request/response/callback behavior, failures/cancellation and script/host cleanup. |
| [ ] **P3.24** | Broad gamemode compatibility and final diagnostic gate | Exercise representative agreed gamemodes through real natives, callbacks, entities and UI; resolve dependencies and record supported behavior/failures/gaps. At the very end of P3, after all other P3 work is finished, create the user-requested minimal diagnostic gamemode to check the implemented foundation, including leaderboard/scoreboard and other gameplay/UI paths. Keep expected results and observed outcomes for each scenario, and terminal fixtures for internal functions Pawn cannot call directly. Script load success alone does not pass. |

**Dependencies:** official owner â†’ host/native state â†’ wire â†’ client state â†’
GTA/UI effect â†’ cleanup. **Exit gate:** the agreed gameplay/script surface has
no unexplained gap or placeholder presented as done.

## P4 - Complete reversal accounting and release validation

**0/7 complete.** Parts of these checks happen throughout P0-P3; final
project-wide acceptance remains open.

| Status / ID | Package | Completion condition |
| --- | --- | --- |
| [ ] **P4.1** | Full official-entry inventory | Account for every current entry, separating game behavior, libraries/runtime, thunks/callbacks and unresolved ownership; record verified range splits and denominator changes. |
| [ ] **P4.2** | Project-wide semantic audit | Verify arguments, returns, layout, defaults, branches, callbacks, real callers and cleanup for existing/new bodies. Pointer validity alone never passes. |
| [ ] **P4.3** | Broad differential regression coverage | Retain reference-identified fixtures for packets/RPCs, native returns, VM state, query output and effects; cover malformed/boundary/error paths as well as normal scenarios. |
| [ ] **P4.4** | Cross-implementation runtime matrix | Complete official-client/clone-server, clone-client/official-server and clone/clone scenarios for P1, custom models and supported P3 behavior, after explicit GTA/client authorization. Preserve captures and reproducible scenarios. |
| [ ] **P4.5** | Extended-session reliability and performance | Verify repeated connection/server switches, stream/entity churn, adverse networks, memory/resource growth, stalls and crashes over extended sessions. |
| [ ] **P4.6** | Clean-machine build, installation and deployment | Verify Win32 builds/tests, dependency/LFS retrieval, packaging, retained launcher, installation/update behavior and environment constraints against intended release artifacts. |
| [ ] **P4.7** | Final compatibility ledger and release acceptance | Link every claim to evidence; reconcile remaining inventories, pass required gates and document explicitly accepted limits before a requested release. Keep gaps visible independently of the counter. |

**Final exit gate:** intended scope accounted for, required automated/runtime
evidence passes, clean installation works and remaining limitations are visible
and explicitly accepted.

## Official native and command requirement

The latest user requirement supersedes the earlier instruction to add commands
for every implemented native: reproduce shipped0.3.DL behavior without invented
commands, messages or demo entities. The current session runs the unmodified
packaged Bare Script with no filterscripts. Preserve actual shipped caller
chains and verify their effects; do not invent a command to claim completion.
Diagnostic scripts remain under tests and are excluded from the normal launch.
Calling official APIs does not make a custom script official. Source presence
or a test-only callback is insufficient evidence of runtime parity.

## Completion rules and evidence

Progress through owner verification, implementation, offline verification and
runtime verification where applicable. Keep reference identity, source/callers,
implemented branches, commands/results and next verification step together.
Reopen a crossed-off package when a regression invalidates its stated scope;
fix and reverify it before crossing it off again.

- [P0 evidence](baseline/README.md): historical baseline.
- [P1 report](P1_REPORT.md) and [transport detail](transport/P1_1.md): original
  seven-package implementation/offline results.
- [Integration report](integration/README.md), [build identity](integration/validation/build.json)
  and [static summary](integration/validation/summary.json): current combined
  source, artifacts, tests, parser review and catalogs.
- [P2 report](P2_REPORT.md), [build/audit](p2/build.json), [real assets](p2/real-assets.json)
  and [manual GTA checklist](p2/MANUAL_TESTS.md): current custom-model implementation
  and explicit remaining acceptance checks.
- [Earlier findings](RE_FINDINGS.md): retained native details and dated
  runtime history; this roadmap owns current status.
- [Previous roadmap snapshot](history/PROJECT_PLAN_PRE_REWRITE_2026-11-03.md):
  earlier assessment preserved separately with superseded counts.

Follow `AGENTS.md` for owner verification, Win32 tests, process timeouts,
counter/README ownership and commit/push rules. Only the counter updates the
README meter. Do not launch GTA/client without the required request or disturb
pre-existing game/server processes.

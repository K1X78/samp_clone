# SA-MP 0.3.DL reversal: status and priority plan

Current status: 2026-11-03. P0 base commit: `e902f98`.

**P0 is complete. P1.1-P1.7 are implemented and passed the deterministic offline
gate.** P1 has seven work packages. The full project has five priority divisions,
P0 through P4. Live P1 interoperability is still pending the explicit runtime
request required by the exit gate below. P2-P4 remain the implementation backlog.

| Current measure | Result |
| --- | --- |
| Mapped recognized production bodies | 513 / 9,446 (56 above P0) |
| Unmapped recognized production bodies | 0 |
| Win32 CTest targets | 9/9 passed |
| Python counter regressions | 7/7 passed |
| Client dispatcher routes | 105, with no pointer mismatch or missing direct fixture |
| Native catalog | 497 entries / 496 names: 96 partial, 28 placeholders, 373 absent |

See the [P1 completion report](P1_REPORT.md) for all seven package results,
validation, source/evidence links and runtime limits. P1 changes are uncommitted;
P0's [completion evidence](baseline/README.md) remains the historical baseline.

**Next priorities:** the separately requested P1 runtime matrix; P2.1-P2.6
custom models; P3 broad gameplay/scripting/presentation compatibility; P4 full
inventory and release validation. No live game/server test or deployment has
been performed.

The original assessment below is retained as the **pre-P0/P1 historical starting
snapshot**, reviewed 2026-11-02 at `fb5c554`. Its counts and listed gaps describe
that checkout. The current status and completion reports above supersede those
historical observations. The priority definitions and exit gates remain active.

This plan covers the C++20 client and server reconstruction in this repository. The target is the shipped **0.3.DL-R1** behavior. The official launcher is retained and is outside the reconstruction scope. Existing source, assembly, build configuration and local test artifacts were inspected for this review; no game or live server was launched.

## 1. Current position

The project has a substantial implementation foundation: protocol primitives, connection and spawn flows, a partial server/Pawn host, many client RPC handlers, client world state, rendering components and partial GTA integration. It is still a partial reconstruction. Function mapping is much further along than feature validation.

| Measure | Verified result | Meaning |
| --- | ---: | --- |
| Mapped production C++ bodies | 457 | All bodies recognized by the current counter have unique accepted official pointers. |
| Unmapped existing production bodies | 0 | This is the counter's source-audit result, not the remaining reversal backlog. |
| Official labeled entries | 9,446 | 5,992 client entries and 3,454 server entries in the current reference assembly. |
| README mapping ratio | 457 / 9,446, approximately 4.84% | A mapping measure, not a percentage of gameplay completion or behavioral fidelity. |
| Recognized client bodies | 325 | Includes core, rendering and Windows integration. |
| Recognized server bodies | 59 | Includes server startup, console and transport/game-layer code. |
| Recognized Pawn bodies | 40 | Native lambdas and generated bodies are excluded from this meter. |
| Recognized protocol bodies | 33 | Protocol primitives and synchronization support. |
| Source-declared CTest targets | 1 | `server_rpc_test`, linked to the client library. |
| Existing test executable | 1/1 passed | Run from `build_vs32verify`; no fresh build was performed during this review. |

Do not label the arithmetic difference of 8,989 as an exact count of missing features or missing implementations. The denominator contains library/runtime code, and the counter also accepts certain directly referenced callback entries inside larger assembly regions. A function-by-function inventory is needed before assigning the entire remaining binary surface.

The audit parser reports 16 diagnostics around constructs such as calling-convention declarations, inline assembly and function-pointer types. `--check` does not currently fail on parser diagnostics. Its successful result establishes pointer consistency for the bodies it recognizes; it does not independently prove complete parser coverage or semantic equivalence.

## 2. What is already done

Here, **present** means implementation exists in the checked-in source. **Verified** means a specific check was performed for this review. Neither term implies full runtime parity.

| Area | Work already present | What remains before calling the area complete |
| --- | --- | --- |
| Reference baseline | Official client/server binaries, generated x86 assembly, reference assembly generator and official pointer comments. | Reusable evidence index, complete ownership inventory and reproducible identification of reference artifacts. |
| Function audit | Single counter checks missing, invalid and duplicate pointers and owns the README meter. Current check passes. | Review parser diagnostics and audit actual behavior, including lambdas excluded from the meter. |
| Build and installation | C++20 CMake targets, vendored SQLite/zlib/curl source, deployment script, clone installation and launcher workflow documented in README. | Fresh supported Win32 build and a reproducible build/test path; local caches currently disagree. |
| Wire primitives | Bit streams, RPC/packet identifiers, encoding, authentication/key material, obfuscation, SHA-1 and sync layouts. | Golden byte fixtures, negative cases and verification of every used 0.3.DL layout and identifier. |
| Transport | Client/server UDP paths, handshake, reliability framing and acknowledgments; server retransmission and ordering logic. | Split-packet support, client reliability audit, bounded state and adverse-network verification. |
| Server framework | Startup/configuration, logging, console, query/RCON paths and main loop. | Fresh reference comparisons and edge-case coverage; historical comments alone are insufficient proof. |
| Basic multiplayer server | Connect validation, class selection, spawn, chat/commands, player streaming and synchronization handling. | Broader client-to-server RPC surface, vehicles, worlds/interiors, gameplay state and callbacks. |
| Pawn/AMX | Loader, interpreter, AMX APIs, selected runtime/game natives, filterscripts and SQLite natives. | Full native behavior, VM edge cases, timers/lifecycle and plugin/NPC compatibility inventory. |
| Client RPC/world state | Player, vehicle, world, camera and other inbound handlers, dispatcher, pools and state records. Recent history records batches of 70 and 27 inbound RPC implementations. | Reconcile against the official registration tables and verify each handler's actual GTA effect. Historical batch totals are not a complete coverage proof. |
| Synchronization | On-foot send path and inbound on-foot, vehicle, aim, bullet, marker, unoccupied and trailer paths. Remote motion/control modules exist. | Full local send modes, server relay/validation, vehicle integration, interpolation and state transitions. |
| GTA integration | Startup patches, connection scene, selection/spawn handling, remote ped lifecycle, script/model helpers and control hook. | Complete patch coverage, vehicle integration and reliable application of all supported state changes. |
| UI/rendering | Chat input/hook, selection and scoreboard dialogs, font/color handling, death window, world text and GUI helpers. | Complete presentation/interaction coverage, resource reset handling and reference visual verification. |
| 0.3.DL assets | Asset manager/cache and archive/model-pool components; model request/removal/URL/all-model RPC handling. | Server registration/download pipeline, actual transfer and validation, model activation and lifecycle verification. |
| Tests | RPC behavior assertions, packet-related cases and a dispatcher exercise in `tests/server_rpc_test.cpp`. | Fresh build provenance, meaningful dispatcher assertions and separate transport/server/Pawn/integration coverage. |

Primary code locations: `src/protocol/`, `src/server/`, `src/pawn/`, `src/client/core/`, `src/client/render/`, `src/client/win/` and `tests/`.

## 3. Confirmed gaps and limitations

These are concrete findings from the inspected code and configuration, not a speculative feature wish list.

1. **Fragmented messages are skipped on both sides.** `src/server/raknet_server.cpp` and `src/client/core/network_client.cpp` parse split headers and then skip split frames. Large messages cannot be treated as supported until reassembly and sending behavior are implemented and checked.
2. **Server streaming is only a player slice.** `GameLayer::update_streaming()` explicitly notes that vehicle positions and virtual worlds are not implemented by this host. It currently uses player XY distance and player visibility bookkeeping.
3. **Server gameplay RPC dispatch is narrow.** The inspected `GameLayer::on_user_message()` handles connect, class request, spawn request, in-game, chat and command RPCs. Other official client requests need an explicit inventory and implementation.
4. **Many registered natives do no work.** Examples include `AddStaticVehicleEx`, `SetGravity`, `GivePlayerMoney`, `GivePlayerWeapon`, `TogglePlayerSpectating` and the textdraw family. Several getters also return constants. A native name being registered does not establish behavior.
5. **Native catalog coverage exceeds implementation coverage.** `natives_table.hpp` declares 497 entries and 496 distinct names. A literal-registration scan of `natives.cpp` plus `db_natives.cpp` finds 96 distinct names, including constant-return placeholders. These scan counts are a starting inventory, not a semantic native coverage percentage.
6. **Client state coverage exceeds proven game integration.** `game_runtime.hpp` explicitly says further official game patches and vehicles remain pending. RPC state tests do not demonstrate corresponding entities or effects in GTA.
7. **Dispatcher tests can miss missing behavior.** `test_dispatcher()` invokes listed IDs without asserting the individual results or effects and finishes with `CHECK(true)`. Existing per-handler assertions are useful, but this loop is not evidence of complete dispatch coverage.
8. **Build/test configuration needs consolidation.** `build` has an NMake cache with a Win32 platform value; `build-vs` has a VS 2022 Win32 cache. Both enumerate zero tests. `build_verify` enumerates the test but lacks its executable. `build_vs32verify` enumerates and runs one existing test. None of these observations proves a fresh build of the current checkout.
9. **Some provenance references are stale.** Source comments refer to removed `docs/re/...`, `reference/...`, historical harness files and `tools/gen_id_tables.py`. The inspected `docs` tree was empty before this plan. Some headers still mention 0.3.7. Re-establish evidence from the actual 0.3.DL artifacts before relying on those claims.

## 4. Priority divisions

Work in priority order. A later division may supply a dependency needed earlier, but cosmetic work should not delay transport, server behavior or 0.3.DL asset compatibility. P0 is complete; P1 has passed its implementation/offline gate; P2-P4 remain pending. The P1 live gate remains explicit.

### Division P0 — Establish a trustworthy baseline

**Purpose:** Make subsequent implementation and progress claims reproducible.

| ID | Task | Completion condition |
| --- | --- | --- |
| P0.1 | Establish one supported VS 2022 Win32 build/test directory without changing an existing incompatible cache. | Client DLL, 32-bit server and test target build from the current checkout; CTest discovers and runs the expected tests. Record compiler, configuration and commit. |
| P0.2 | Review all 16 parser diagnostics and the counter's coverage boundary. | Each diagnostic has an explained disposition; any missed production body is accounted for without inflating the meter. |
| P0.3 | Create a feature/evidence register anchored to official 0.3.DL artifacts. | Each active feature has its source owner, official binary/address, status, evidence and next verification step. |
| P0.4 | Reconcile RPC, packet and native catalogs with actual registration/dispatch. | Every catalog entry is classified as implemented, partial, placeholder, absent or unresolved; unknown IDs are kept explicit. |
| P0.5 | Repair test claims and preserve meaningful assertions. | Dispatcher coverage checks routing and observable results; the existing behavior tests remain intact. |
| P0.6 | Restore traceable provenance for active work. | Missing historical references are replaced with retained evidence or clearly marked unavailable; 0.3.7 claims are checked against 0.3.DL. |

**Exit gate:** A fresh Win32 build and test baseline is reproducible, and implementation gaps are visible independently of the mapping meter.

### Division P1 — Reliable connection and core multiplayer

**Purpose:** Make the fundamental client/server loop work correctly before expanding the feature surface.

| ID | Task | Completion condition |
| --- | --- | --- |
| P1.1 | Complete transport fragmentation and reliability. | Reference-backed split reassembly/sending, ACK/retry handling, duplicate suppression, ordering, wraparound, timeouts and cleanup pass deterministic fixtures. |
| P1.2 | Verify connect, reject, disconnect and reconnect state machines. | Version/password/name/challenge cases, incomplete handshakes and reconnect reset agree with the official 0.3.DL behavior. |
| P1.3 | Finish class selection, spawn, death and respawn lifecycle. | Script callbacks, refusal paths, local/remote state and entity creation/destruction remain consistent across transitions. |
| P1.4 | Close the basic player-native-to-client loop. | Position, angle, interior, health/armour, weapons, money, keys and core state getters have real server state, correct RPCs and corresponding client application. |
| P1.5 | Complete on-foot multiplayer behavior. | Local movement/control, remote motion, aim/bullets and stream-in/out work together; invalid/stale sync and player departure are handled correctly. |
| P1.6 | Add the essential vehicle loop. | Server vehicle state, creation/removal, driver/passenger transitions, local send modes, relay and GTA vehicle integration are implemented and verified together. |
| P1.7 | Finish visibility and world isolation. | Players and vehicles obey verified radius, capacity, interior/world and lifecycle rules; switching worlds clears stale visibility. |

**Dependencies:** P0 baseline and evidence register. Native implementations and server state must accompany the client handlers they drive.

**Exit gate:** Deterministic offline tests establish the core flow. Once live testing is explicitly requested, official-client/clone-server, clone-client/official-server and clone/clone scenarios validate connection, spawn, movement, chat, streaming and vehicles. A successful clone/clone run alone is insufficient because both sides could share the same error.

### Division P2 — Complete the distinguishing 0.3.DL model pipeline

**Purpose:** Deliver the model/download behavior that makes this a 0.3.DL reconstruction.

| ID | Task | Completion condition |
| --- | --- | --- |
| P2.1 | Implement server custom-model registration and lookup. | `AddCharModel`, `AddSimpleModel`, `AddSimpleModelTimed`, CRC filename lookups, redirect and custom-skin behavior follow verified native owners. |
| P2.2 | Complete server/client model negotiation. | Required slots, IDs, model/texture metadata and ready/completion state transitions agree across the official paths. |
| P2.3 | Finish file transfer and validation. | URL/redirect and block paths actually acquire bytes; size/checksum/compression failures, missing assets and retry behavior have defined reference-backed outcomes. |
| P2.4 | Complete cache/archive lifecycle. | Cold cache, warm cache, corruption, cancellation, disconnect, reconnect and server switching preserve correct files and release transient state. |
| P2.5 | Connect downloaded data to GTA model use. | Models/textures load and bind to the correct objects/skins, including timed/world-specific cases and fallback behavior. |
| P2.6 | Verify the whole pipeline. | Offline fixtures cover metadata, blocks and cache behavior; explicitly requested live scenarios demonstrate real custom skins/objects with cold and warm caches. |

**Dependencies:** P1 transport and lifecycle. Parsing a model URL or accepting a block is only one stage of this division.

**Exit gate:** A server-registered custom model can be negotiated, downloaded, validated, cached, activated, used and cleaned up correctly through the complete path.

### Division P3 — Complete gameplay, scripting and presentation

**Purpose:** Expand the reliable foundation into broad server and client compatibility.

| Track | Remaining work | Completion condition |
| --- | --- | --- |
| Server entities | Objects/player objects, pickups, actors, checkpoints, race checkpoints, labels, menus, textdraws, zones, attachments and materials. | Authoritative pools, natives, streaming, RPCs, client effects and deletion/reset paths agree. |
| Remaining player/vehicle behavior | Spectating, animations/actions, damage/death, scores/pings, vehicle components, trailers, unoccupied vehicles and special vehicle cases. | Each mode has correct state transitions, packets/callbacks and actual GTA behavior. |
| Pawn runtime | Opcode/error behavior, compact images, memory/string boundaries, sleep/resume, native resolution and public execution. | Focused script fixtures compare return values, errors and observable effects against the reference. |
| Script host | Timers, gamemode/filterscript lifecycle, callback order/return rules and reload/shutdown behavior. | Script-visible ordering and lifecycle match the official server. |
| Native completion | Resolve the full 496-name catalog; replace placeholders and implement missing families. Include core/float/string/file/time/SQLite. | Every native has evidence, real behavior and relevant verification; a constant-return placeholder is never marked complete. |
| Server extensions | Inventory plugin ABI/loading, NPC support and HTTP behavior before implementation. | Official exposed surfaces are classified and supported or explicitly unresolved, with compatibility cases. |
| UI and input | Dialogs and responses, textdraw interaction, menus, chat, scoreboard, death list, labels, settings and connection messages. | Visual appearance, interaction and response RPCs work through the real input/render paths. |
| Rendering/resources | Fonts/colors, layout/scaling, device loss/reset and resource creation/destruction. | Reference comparisons and repeated reset/lifecycle checks show correct recovery and cleanup. |
| Administration | Config/console, query/RCON, bans, limits and operational error paths. | Byte and state fixtures cover normal requests and relevant boundaries without depending on obsolete comments. |

**Dependencies:** Build each feature vertically: official owner → server state/native → wire representation → client state → GTA/UI effect → cleanup. Move a track forward when a higher-priority scenario requires it.

**Exit gate:** The feature register has no unexplained hole in the agreed gameplay surface; supported gamemodes exercise actual behavior rather than merely loading successfully.

### Division P4 — Finish the reversal inventory and release validation

**Purpose:** Account for the complete reference surface and prove the intended compatibility scope.

1. Inventory all official labeled entries and distinguish game behavior, framework/library code, thunks/callbacks and unresolved ownership. Keep denominator changes explicit.
2. Audit existing mapped bodies for semantic fidelity: arguments, return values, state layout, defaults, branch conditions, callbacks and cleanup. Pointer validity is only the starting check.
3. Recover remaining official behavior by subsystem, including error paths and less common transitions. Never add unused helpers or unrelated functions to raise progress.
4. Broaden differential fixtures for RPCs, packets, native results, query output and script execution. Preserve artifacts with reference identity and execution conditions.
5. Once live runs are requested, perform cross-implementation multiplayer sessions, custom-model scenarios, repeated connect/disconnect/server switches and extended sessions. Track memory/resource growth, stalls and crashes.
6. Verify clean-machine build/install/deployment, LFS retrieval and the retained launcher workflow. Record any environment constraints and compatibility limitations.
7. Produce a final compatibility ledger linking every completion claim to evidence. Publish or commit only when requested.

**Exit gate:** The agreed scope is fully accounted for, required build/tests pass, runtime evidence covers the supported scenarios, and remaining limitations are explicitly accepted rather than hidden by the source counter.

## 5. Recommended execution order

| Order | Work package | Deliverable |
| ---: | --- | --- |
| 1 | P0.1 and P0.2 | Fresh Win32 baseline and explained audit/parser results. |
| 2 | P0.3–P0.6 | Source-to-official feature register, native/RPC gap list and stronger dispatcher checks. |
| 3 | P1.1 and P1.2 | Correct transport and connection lifecycle. |
| 4 | P1.3–P1.5 | Reliable spawn, core player state and on-foot multiplayer loop. |
| 5 | P1.6 and P1.7 | Vehicles and correct streaming/world isolation. |
| 6 | P2.1–P2.6 | Complete custom-model/download pipeline. |
| 7 | P3 tracks in feature-dependency order | Broad gameplay, scripting and UI compatibility. |
| 8 | P4, with semantic audits throughout | Complete reversal accounting and release evidence. |

P0's baseline and inventory work is complete. The next implementation target is
**P1.1: transport fragmentation/reliability**, followed by connection lifecycle.
The mapping ratio still cannot support a credible completion date; estimate
individual work packages from the retained gap inventories.

## 6. Rules for marking work complete

A feature can advance through these states:

`unresolved → official owner verified → implementation partial → implementation complete → offline verified → runtime verified where applicable`

For each feature, record:

- Official binary identity, function start/owner and relevant table/callsite evidence.
- Source file and real callers; server/native/packet/client/GTA dependencies.
- Implemented behavior and remaining branches, defaults and failure cases.
- Verification command, result, build/commit identity and retained fixture/artifact.
- The next concrete action and the priority division it belongs to.

Follow `AGENTS.md`: inspect each production function's exact 0.3.DL owner before editing; work file by file; keep unique verified pointers; run the single counter after function changes; keep the server 32-bit; preserve tests and official-facing behavior. Game/server launches require an explicit request. No subagents, commits or pushes unless requested.

The baseline build/test sequence must use a compatible Win32 cache, for example the repository's documented sequence on a clean compatible build directory:

```powershell
cmake -S . -B build -A Win32
cmake --build build --config RelWithDebInfo --parallel
ctest --test-dir build -C RelWithDebInfo --output-on-failure
python tools/official_function_count.py --check
```

The current `build` cache needs disposition first; do not run configure blindly over its NMake generator or convert it to x64. Apply explicit timeouts to build/test commands and keep evidence tied to the binaries actually tested.

## 7. Evidence retained by this review

- `python tools/official_function_count.py --check`: passed; 457 mapped, zero unmapped existing bodies, 9,446 labeled official entries.
- Counter API inventory: client 325, server 59, Pawn 40, protocol 33; 16 parser diagnostics requiring review.
- `ctest --test-dir build_vs32verify -C RelWithDebInfo --output-on-failure --timeout 30`: one existing test passed. The executable was dated 2026-10-28; this was not a fresh compile.
- CTest discovery in `build`, `build-vs`, `build_verify` and `build_vs32verify`: results described in section 3.
- `tests/server_rpc_test.cpp` and `tests/CMakeLists.txt`: source assertions and single-target registration inspected.
- `src/pawn/natives.cpp`, `src/pawn/db_natives.cpp`, `src/pawn/include/pawn/natives_table.hpp`: registration/catalog boundary and placeholder examples inspected.
- `src/server/game_layer.cpp`, `src/server/raknet_server.cpp`, `src/client/core/network_client.cpp`, `src/client/win/game_runtime.hpp`: concrete transport, dispatch, streaming and integration limitations inspected.
- `CMakeLists.txt`, component CMake files, `README.md`, `AGENTS.md`, source/header inventories and recent Git history: used to establish build structure and existing work.

Official reference identities, calculated from the local shipped files:

| Artifact | Bytes | SHA-256 |
| --- | ---: | --- |
| `GTA Sa samp_clone/samp.dll.official` | 1,466,368 | `bccdb297464bd382625635be25585df07a8fa6668bc0015650708e3eb4ffcd4b` |
| `GTA Sa samp_clone/samp-server.exe.official` | 978,944 | `96e3a6a41c8e84adfd633a5292ca2a8c3fd474ded022d85e79796f86caab6a4a` |

This review establishes a source-based project plan and bounded local checks. It does not reverify every mapped function against disassembly, certify every historical behavior claim, or establish live gameplay parity.

# P1 completion report: core multiplayer

Date: 2026-11-03. Base commit: `e902f980b70c4a2434507e314116688fafb0191a`.
P1 implementation was committed as `a418882`; upstream integration was committed
as `8723721`, and both histories are pushed. P0 remains `e902f98`. The original
513-body/9-test snapshot below is retained as historical evidence. The combined
build has 583/9,480 recognized bodies and 13 passing CTest targets; see the
[current integration report](integration/README.md) and [roadmap](PROJECT_PLAN.md).
The retained validation JSON describes the working tree at the time it was tested.

**P1.1 through P1.7 are implemented and have passed the deterministic offline
gate.** They are the seven packages in Division P1. The project has five
priority divisions, P0 through P4; this is not a claim that the entire reversal
or live interoperability is complete.

## Package results

| Package | Delivered behavior | Main source and verification |
| --- | --- | --- |
| P1.1: transport | Shared client/server frame codec, fragmentation/reassembly, exact bit lengths, ACKs, retry scheduling, duplicate suppression, ordered/sequenced channels, sequence rollover, bounded queues, ping/timeout and congestion scheduling. Raw client producers retain large payloads before framing. Full-MTU game datagrams reach the server transport. | `src/protocol/reliability_frame.cpp`, client/server network paths; `transport_test`, `official_transport_test`. |
| P1.2: connections | Staged open/password/auth/accept/join/close flow, all 256 authentication pairs, normal-client RPC 25 validation, rejection cases, endpoint filtering, six open attempts, incomplete-handshake deadline, disconnect cleanup and reconnect reset. | `src/server/connection.cpp`, `game_layer.cpp`, `network_client.cpp`; `connection_test`, `client_connection_test`, lifecycle callback fixtures. |
| P1.3: player lifecycle | Class data installed before callbacks, class/spawn refusal rules, spawn authorization, state transitions, death cause/killer reporting, remote death commands and respawn/reset handling. | Server/client lifecycle files, `src/client/win/player_death.cpp`, runtime/DLL adapters; `player_lifecycle_test`, `game_runtime_test`. |
| P1.4: core player natives | Shared observed player state, position/angle/interior/world, health/armour, money, weapons/ammunition, keys/axes, velocity, connection/state getters and spawn information. RPC handlers emit commands consumed by GTA adapters. | `src/pawn/natives.cpp`, native host records, client player handlers/runtime; `core_natives_test`, lifecycle and multiplayer suites. |
| P1.5: on-foot multiplayer | Movement/control and observed state, aim/bullet send/receive/relay, weapon/stat/interior reporting, remote aim/control application, local shot capture and remote shot replay adapters, stale/dead entity guards. | `player_sync.cpp`, `weapon_sync.cpp`, `weapon_runtime.cpp`, network/DLL adapters; independent packet fixtures in `multiplayer_test`, fake-memory fixtures in `game_runtime_test`. |
| P1.6: essential vehicles | Vehicle natives and pools, stream records, create/remove adapters, driver/passenger modes and seats, enter/exit callbacks, control adapters, health/position/interior commands, death reports and idle/death respawn processing. | Server vehicle files, client vehicle sync/runtime, native bindings; `multiplayer_test`, `player_lifecycle_test`, client lifecycle/transport fixtures. |
| P1.7: visibility/worlds | Verified strict XY radius, player/vehicle capacity bookkeeping, world changes and relay isolation, stream callbacks, deletion/reset cleanup and passenger distance measured from its vehicle. | `GameLayer::update_streaming`, stream owners, shared relay; radius, Z, capacity, passenger, world-switch and deletion fixtures. |

Implementation of a GTA adapter means its real caller, command and engine call
path exist. Offline tests exercise packet/state/command boundaries and selected
fake-memory calculations. They do not execute GTA's entity creation, rendering,
control, weapon firing or death scripts.

## Important corrections

- Normal player join is RPC **25**, owner `0x0049cea0`; RPC 54 belongs to the
  separate NPC join path. Normal names use the verified 3..20-byte boundary,
  case-insensitive duplicate checks and the original serial division rule.
- The RakClient connect/destructor owners are `0x10033bf0` / `0x10033b60`.
  Earlier source comments pointed at unrelated HTTP routines.
- Aim receive is `0x10009930`; `0x10009a20` is passenger receive. Aim and bullet
  payload offsets and the driver record's field order were repaired.
- Driver updates preserve the vehicle model/pool entry. Health nibbles follow
  the original truncation rule. Relays preserve sender IDs above 255.
- Existing on-foot receive branches now finish the tick's ACK/retry pass.
  Connected frames are distinguished from unconnected control packets by their
  complete control layout, rather than an ambiguous prefix alone.
- The server's query-only 576-byte limit previously rejected large game
  fragments before checking the query magic. It now applies inside the query
  branch. Transport fixtures cover MTU-size datagrams; this main-loop fix was
  checked in source and build, without a live server run.
- Core native getters use client-observed state where the original does.
  Setter RPCs no longer manufacture an observed health or weapon report.
  Money arithmetic retains Pawn cell wraparound; ammunition getters retain the
  original signed ushort behavior.
- Callback order is specific to each owner: key/interior changes run the game
  mode before filterscripts; the implemented connect, disconnect, state,
  spawn/death, streaming and vehicle enter/exit paths run filterscripts first.
  Synthetic AMX publics inspect actual state and return/refusal behavior.
- The local remove-from-vehicle command follows RPC 71 through `0x100ac100`
  to script opcode `0x05cd` (actor and vehicle), including its train model
  exclusions. It no longer treats ped structure fields as world coordinates.
- Visibility owner `0x004851d0` filters virtual worlds. **Interior differences
  do not create an additional visibility boundary.** XY distance is strict
  `< 200`, Z is excluded, and the native capacity checks allow 201 players and
  701 vehicles. Passenger visibility follows current vehicle XY.
- Runtime model changes use reconstructed script/GTA calls instead of calling
  addresses inside the original `samp.dll`. The real ped-control hook entry
  `0x100a26d0` replaces the preceding patch-helper address.

## Evidence and audit

Evidence comes from the shipped local **0.3.DL** PE files and generated assembly.
The unavailable REA provider was not used or represented as a successful run.
No 0.3.7 address was accepted as proof.

| Reference | SHA-256 |
| --- | --- |
| `samp.dll.official`, 1,466,368 bytes | `bccdb297464bd382625635be25585df07a8fa6668bc0015650708e3eb4ffcd4b` |
| `samp-server.exe.official`, 978,944 bytes | `96e3a6a41c8e84adfd633a5292ca2a8c3fd474ded022d85e79796f86caab6a4a` |

Retained records:

- [Package/owner evidence](p1/evidence.json): package source paths, exact owner
  addresses and original byte-region fingerprints. Region hashes identify the
  evidence bytes; they are not a semantic-equivalence certificate.
- [Transport detail](transport/P1_1.md) and [transport region evidence](transport/P1_1-evidence.json).
- [Build identity and commands](p1/validation/build.json): Win32 compiler/preset,
  source-input fingerprint, uncommitted-tree flag, binary hashes, executed steps
  and discovered tests.
- [Current static summary](p1/validation/summary.json), with adjacent source,
  native, RPC, packet and provenance CSVs. [P0 records](baseline/README.md) remain
  the historical baseline and were not overwritten.

Current mapping is **513 / 9,446**, with **zero unmapped recognized production
bodies**, compared with P0's 457. The increase is 56 mapped bodies. The 16 parser
diagnostics have reviewed dispositions tied to exact source hashes. The moved
DLL array-allocation expression was re-reviewed in `worker`, and its stale
disposition was corrected. The counter also recognizes a stored callback only
at an actual disassembled instruction boundary; the new regression rejects a
bare register load and an address outside the disassembly. The denominator is
unchanged.

The native inventory still has 497 entries / 496 names: 96 partial source
entries, 28 constant placeholders and 373 absent entries. There are 125 literal
registrations, including the pre-existing `floatsqrt` spelling outside this
catalog. These are static classifications, not a native parity percentage.
There are 105 client dispatcher routes, with no registration-pointer mismatch
and no route missing a direct fixture. The RPC inventory still includes absent
and unresolved behavior. Neither zero unmapped bodies nor passing these checks
means the remainder of the reference binary has been implemented.

## Validation

Win32 `RelWithDebInfo` configure/build passed using `win32-vs2026`, MSVC 19.51,
Windows SDK 26100 and bundled CMake 4.3.1-msvc1. Both production artifacts are
PE32 machine `0x014c`. CTest passed **9/9 targets**; the Python counter regression
suite passed **7/7 tests**. Function checks, fresh inventories and
`git diff --check` passed.

| Test | Meaningful coverage |
| --- | --- |
| `server_rpc_test` | Existing handler assertions and independent meaningful dispatcher fixtures. |
| `transport_test` | Literal frame bytes, malformed/truncated metadata, loss/reorder/duplicate/re-ACK, 70,000-message rollover, receipt-hole expiry, ordered/sequenced channels, 9001-byte split payload with a partial tail, MTU batching, priorities, bounds and real endpoint queue paths. |
| `official_transport_test` | Isolated original-DLL sequence, retry, header, ping and congestion arithmetic compared with the reconstruction, including x87 stored-float boundaries. |
| `connection_test` | Authentication table, staged accept, password/auth/version/mod/name/challenge/serial/slot rejection and cleanup. |
| `client_connection_test` | Scripted ephemeral localhost UDP endpoint, spoof filtering, six strict-deadline open attempts, incomplete handshake and reconnect reset. |
| `core_natives_test` | Pawn native state/RPC/client-command effects, observed versus commanded state, invalid slots/bounds, signed values and money wraparound. |
| `player_lifecycle_test` | Real synthetic AMX callback publics, refusal/authorization, order/state visibility, connect/disconnect/death/respawn, keys/interior, vehicle enter/exit and respawn thresholds. |
| `multiplayer_test` | Independent driver/passenger/foot/aim/bullet packets through server and client, full sender ID, world isolation, native-to-client vehicle commands, truncation/NaN, radius/capacity and passenger visibility. |
| `game_runtime_test` | Fake ped/vehicle memory for death cause/killer and shot records, rotated lag-compensation offsets, unknown targets, sniper miss suppression, finite checks and queue bounds. |

The original-DLL oracle uses `DONT_RESOLVE_DLL_REFERENCES` and isolated helpers;
it does not initialize the official client. The socket test is an in-process
scripted test peer, not a running game server. No GTA, injected clone, official
server or clone server executable was launched. Existing processes were not
disturbed. Existing compiler warnings remain; a passing build is not a
warning-free claim.

Reproduce with explicit process timeouts, from the repository root:

```powershell
python tools/verify_baseline.py --preset win32-vs2026 --cmake "C:/Program Files/Microsoft Visual Studio/18/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --output docs/p1/validation
```

The verification driver supplies per-child timeouts. It configures/builds,
discovers/runs CTest, runs counter regressions/checks, exports inventories and
records artifact identities. The no-deploy sentinel path must remain absent.

## What remains, in priority order

1. **P1 runtime validation gate, when explicitly requested:** official client
   against clone server, clone client against official server, and clone/clone.
   Exercise connect/reject/reconnect, class/spawn/death, movement/aim/shots,
   passenger/driver changes, streaming/world switches and vehicle respawn.
   In-engine timing, calling conventions, hook/resource lifetime and visual
   behavior remain unverified until those runs. Clone/clone alone is insufficient.
2. **P2.1-P2.6: 0.3.DL custom models.** Server model registration, negotiation,
   actual transfer/checksum handling, cache lifecycle and GTA activation, followed
   by end-to-end fixtures and the separately authorized live gate.
3. **P3: broad compatibility.** Remaining natives/entities/UI, script runtime and
   host lifecycle, extensions/administration, advanced vehicles, trailers,
   unoccupied modes, components/damage and complete train-carriage behavior.
4. **P4: full inventory and release validation.** Remaining official owners,
   semantic audits, differential coverage, resource/performance/error behavior
   and release acceptance.

Deliberate host limits remain explicit: 4 MiB buffered transport data, 32 split
groups, 4096 fragments, 1024 ordered messages and 4096 queued/pending frames.
They bound the reconstruction's resource use and are not claimed as the original
allocator policy. Essential vehicle support does not certify every special
vehicle, train, siren, landing-gear, tuning or damage branch.

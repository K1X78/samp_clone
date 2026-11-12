# P0 completion report and evidence register

Completed: 2026-11-02, on source HEAD `fb5c554` plus the uncommitted P0 changes.
All six P0 tasks are complete within their baseline/audit scope. No production
C++ function was changed. P1 gameplay and transport work remains pending.

## P0 results

| Task | Result | Evidence |
| --- | --- | --- |
| P0.1: fresh Win32 baseline | Client DLL, server and RPC test built successfully in a newly configured isolated Win32 tree. All three PE headers identify x86 (`0x014c`); compiler pointer size is four bytes. | [build.json](build.json), local configure/build/CTest logs named there. |
| P0.2: parser audit | All 16 diagnostics reviewed. Each is a macro/type/inline-assembly/declaration parsing limitation, with no additional function body identified at that site. The counter now rejects new diagnostics, obsolete reviews and changes to reviewed source bytes. | [parser review ledger](../../tools/parser_diagnostics.json), six passing counter regression tests. |
| P0.3: evidence register | All 457 recognized production bodies have a source location, official pointer, status and next step. Both reference binary hashes are recorded. Feature register below links active work to those owners. | [source-functions.csv](source-functions.csv), [summary.json](summary.json). |
| P0.4: catalog reconciliation | Every native/RPC/packet catalog entry is inventoried with partial, placeholder, absent or unresolved coverage. Official native table entries and the supported client registration-pair pattern are checked against the shipped PE bytes. | [natives.csv](natives.csv), [rpcs.csv](rpcs.csv), [packets.csv](packets.csv), [official-client-rpcs.csv](official-client-rpcs.csv). |
| P0.5: dispatcher verification | Existing payload/behavior assertions now go through the public dispatcher. Six missing route fixtures were added. All 103 current routes have behavior fixtures; unknown-ID and truncated-position cases assert rejection without changes to the checked state. | [server_rpc_test.cpp](../../tests/server_rpc_test.cpp), fresh CTest pass. |
| P0.6: provenance | 76 historical-reference/version-mention rows classified. Missing files are explicitly unavailable; 0.3.7 mentions are not accepted as DL evidence. Current binary identities and mapping evidence provide a retained starting point. | [provenance.csv](provenance.csv), official table addresses in inventories. |

Only Visual Studio 2026 is installed on the reviewed machine. The PATH CMake
3.30.2 cannot generate projects for it, so validation used the installed Visual
Studio CMake 4.3.1-msvc1 and MSVC 19.51.36256.0, targeting Win32 with Windows SDK
10.0.26100.0. This is the available-toolchain substitute for the plan's VS 2022
baseline. A separate VS 2022 preset is provided; it was not tested here.

The original baseline cache and outputs were moved to
`build/archive/build-msvc/p0-win32`. New preset builds go under `build/msvc/`;
generated binaries and logs stay ignored. The validation presets point
deployment at an intentionally absent directory, so the playable installation
is not updated. No GTA, injected client or live server was run.

## Repeat the baseline

Install the Python packages in `tools/requirements-function-count.txt` if they
are not already available. On this machine:

```powershell
python tools/verify_baseline.py --preset win32-vs2026 --cmake "C:/Program Files/Microsoft Visual Studio/18/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe"
```

On a VS 2022 machine with a compatible CMake on PATH:

```powershell
python tools/verify_baseline.py --preset win32-vs2022
```

The runner configures and builds the preset, requires nonempty CTest discovery,
runs CTest with a 30-second per-test timeout, runs the six Python counter tests,
runs the official function check, refreshes the static inventories, checks x86
PE architecture and writes `build.json`. Every child command has a timeout.
Configure/build timeouts are 180/900 seconds. Failures return a nonzero exit and
retain step logs in the ignored build tree. Do not create
`build/msvc/baseline-no-deploy`: the runner requires it to remain absent.

To refresh only the evidence inventories:

```powershell
python tools/audit_baseline.py
```

This exporter does not write the README meter. The single counter remains its
only owner. Neither tool commits or pushes.

## What the inventory now establishes

| Inventory | Result | Interpretation |
| --- | ---: | --- |
| Mapped production bodies | 457 / 9,446 | Pointer coverage; zero unmapped existing bodies. |
| Official native table entries | 497 | All name/function pairs match bytes in the current server PE. There are 496 distinct names. |
| Native entries with a registered nonconstant body | 58 | Classified partial; semantic parity is unverified. |
| Native entries with a constant-return placeholder | 37 | Registered names with no meaningful stateful implementation in the inspected assignment. |
| Native entries without a literal host registration | 402 | Absent in the current native host scan. This is an entry count, not a distinct-name count. |
| Literal native names outside the official catalog | 1 | `floatsqrt`; investigate the intended spelling/alias behavior before expanding natives. |
| Official client registration pairs recovered | 145 | Pattern-bound extraction of adjacent PUSH callback/PUSH ID-storage and vtable `+0x58` registration calls; not a claim that every possible registration shape is covered. |
| Current central client dispatcher routes | 103 | All source owner pointers reconcile to extracted registration callbacks, including the verified RPC 40 adapter. |
| RPC inventory union | 156 | 138 catalog IDs plus IDs found in source/registration evidence. 114 partial, 34 absent client handlers and 8 unresolved entries. |
| Packet catalog | 13 | Per-direction receive/send/relay disposition retained; server relay currently handles on-foot only. Passenger receive reads/discards data. |

RPC 40 is an important ownership exception: the official registered callback
at `0x1000e4e0` loads ECX from the global at `0x102aca24`, then jumps to
`0x1000a230`, the mapped source owner. The exporter checks those eleven bytes
and the relative target before accepting this relationship. It does not infer
ownership from proximity.

The RPC catalog contains historical labels such as `SA_MP_ConnResp_Info` for
ID 32, while source and registration ownership identify the player stream-in
path. Catalog labels are retained for traceability and are not promoted to
verified semantics. The eight unresolved entries and every absent handler
remain visible rather than being counted as implemented.

## Active feature register

Each row is currently **partial**. The source-function inventory supplies
individual owner addresses; the catalog inventories supply specific wire/native
entries. Passing the baseline does not advance these features to runtime parity.

| Feature | Current source owners | Evidence anchor | Next work |
| --- | --- | --- | --- |
| Transport and connection | `src/protocol/`, `src/server/raknet_server.cpp`, `src/client/core/network_client.cpp`, `connection_flow.cpp` | Source pointer ledger; shipped binaries/assembly | P1.1 split packets, reliability and bounded peer state, then P1.2 lifecycle. |
| Spawn and player lifecycle | `src/server/game_layer.cpp`, client `selection_ui.cpp`, `server_rpc_player.cpp`, `server_rpc_packet.cpp`, `win/game_runtime.cpp` | RPC/native ledgers; dispatcher regression fixtures | P1.3 callback ordering, refusal, death/respawn and entity cleanup. |
| On-foot/remote synchronization | `src/protocol/remote_sync.cpp`, `game_layer.cpp`, `network_client.cpp`, `remote_motion.cpp`, `remote_control.cpp` | Packet dispositions; source pointer ledger | P1.4–P1.5 authoritative player state, full relay and real control effects. |
| Vehicles/world visibility | `game_layer.cpp`, `server_rpc_vehicle.cpp`, `server_rpc_world.cpp`, `game_runtime.cpp` | Vehicle/native gaps and packet dispositions | P1.6–P1.7 authoritative vehicle pools, sends/relay and world isolation. |
| DL model/download pipeline | `asset_manager.cpp`, `dl_archive.cpp`, `game_model_pools.cpp`, `server_rpc_packet.cpp`, Pawn catalog | Model RPC registration owners; asset source pointers | P2 server registration, negotiation, actual transfers/cache and activation. |
| Objects/pickups/actors | `object_pool.cpp`, `pickup_pool.cpp`, `actor_slots.cpp`, world/packet RPC files | Source-function ledger; native placeholders/absence | P3 server pools/natives through client state to GTA effects. |
| Pawn/AMX | `src/pawn/` | Official native table bytes; AMX source pointers | P3 opcode/errors, native resolution, memory/string boundaries and host lifecycle. |
| Native host/callbacks | `natives.cpp`, `db_natives.cpp`, `game_layer.cpp` | Full 497-entry native inventory | Core player natives in P1; remaining placeholders/missing families in P3. |
| UI/world text/input | `src/client/render/`, `world_text.cpp`, `chat_input.cpp`, `key_bindings.cpp`, `src/client/win/` | Source ledger and existing RPC state assertions | P3 UI response paths, device reset, layout and visual evidence. |
| Server administration | `main.cpp`, `console.cpp`, config/query headers | Source ledger and provenance gap list | P3 query/config/RCON fixtures and edge cases. |
| Plugins/NPC/HTTP | Server/Pawn host and official native catalog | Catalog presence; existing provenance explicitly bounded | P3 inventory ABI and lifecycle before making compatibility claims. |

## Boundaries and follow-up

The 16 reviewed parser diagnostics remain visible; they were not suppressed or
converted into extra mapped functions. Reviews are pinned to source hashes.
Changing a reviewed source requires reinspection and an updated disposition.

The native exporter reads explicit assignment nodes in `natives.cpp` and
`db_natives.cpp`. Its current absent/placeholder distinctions are source
coverage, not reference-equivalence proofs. The packet ledger records the
inspected current branches; official layouts/directions remain P1/P3 work.
Client special RPC paths and the six server RPC routes are classified separately
from the 103 central dispatcher routes.

The 76 provenance rows are an explicit disposition of unavailable historical
claims. The removed reports were not recreated from guesses. Their historical
runtime conclusions remain unresolved until new evidence is collected.

The fresh build retains existing compiler warnings. The P0 checks cover the
offline RPC regression suite and audit tooling; they do not establish robust
networking, full Pawn/native behavior or live gameplay. **The next phase is
P1.1: transport fragmentation and reliability.**

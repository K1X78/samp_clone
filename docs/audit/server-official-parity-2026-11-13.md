# Verified server parity corrections

Authority: local shipped SA-MP **0.3.DL** `samp-server.exe.official`, SHA-256
`96e3a6a41c8e84adfd633a5292ca2a8c3fd474ded022d85e79796f86caab6a4a`.
Baseline: `6975817`. This note records the specific binary comparisons and
corrections in this commit; it is not a whole-project equivalence certificate.

The reverse-engineer-anything skill was used for evidence selection, caller
tracing and reconstruction validation. Its read-only connection diagnostic
found no connected REA registration for Codex. Evidence below comes from the
existing address-indexed Ghidra exports and the repository reader's direct
PE disassembly, not from a new REA analysis or regenerated reference corpus.
Complete target source files were read before editing. Every changed owner
and its required callees were checked against exact 0.3.DL instructions.

## RPC receive and payload storage

The relevant official RPC decoder is **0x00451fd0**, reached from Receive
**0x00458370**. The game-packet dispatcher **0x00496890** is not that decoder.
The earlier check against 0x496890 did not establish the RPC parsing contract.

The exact Receive owner recognizes ordinary RPC marker 20 and timestamp
marker 40 with an inner RPC marker at byte 5. It passes a **byte** packet
length to the RPC decoder. The decoder skips 8 bits, or 48 bits for the
timestamp form, reads the numeric identifier and compressed payload bit count,
and invokes its registered callback. A zero-bit payload needs no buffer.

At **0x004520b1..0x004520e8**, the allocation extent is
`ceil((packet_bytes * 8 - read_offset) / 8)`, not the peer's claimed size.
The native selects stack storage below 1 MiB and heap storage at/above 1 MiB;
`__chkstk` is a stack probe, not a second heap allocation. Its subsequent
**0x0044da70** ReadBits call checks the requested signed bit count and
available input before copying. The complete ReadBits owner was inspected,
including its failure return and output/cursor behavior.

Corrections in `game_layer.cpp`:

- Separate the RPC decoder into its verified `0x451fd0` source owner, called
  by the actual receive-dispatch path, with the existing gameplay cases intact.
- Recognize timestamp-wrapped RPCs and skip the timestamp before reading fields.
- Use native byte-rounded input availability, including trailing partial-byte
  padding. The earlier exact-bit guard incorrectly rejected native-accepted
  padding cases.
- Size owned receive storage from unread packet bytes and then call ReadBits.
  This replaces the previous advertised-length allocation and the ad hoc
  `INT_MAX / 8` policy. The clone continues to use its existing owned C++
  buffer representation rather than emulating a native heap leak on failure.

`rpc_length_bounds_test` exercises real reliability decoding, authenticated
server transport, RPC parsing and the spawn callback. It compares acceptance
for timestamp/plain inputs, partial bytes and signed-count boundaries with the
complete original **0x44da70..0x44db28** function bytes. That self-contained
oracle has no external calls or absolute data dependencies. It is copied into
owned executable test memory; neither the official server entrypoint nor GTA
runs. The allocation guard checks that tiny forged messages never attempt a
large advertised allocation. This oracle covers ReadBits acceptance, not the
entire native RakNet object or every RPC callback.

## Live world updates

`SetWeather` native **0x00473f20** calls **0x00496240**. The latter stores the
low weather byte, broadcasts it through **0x00493960**, then updates the
`weather` query variable. The RPC identifier was read directly from official
data **0x004be93c**: **152**. The clone previously updated its variable without
sending the live weather RPC. It now sends the same one-byte payload.

Gravity owner **0x00496310** also uses **0x493960**, which selects occupied
player slots with a player object; it does not require the clone's later
`joined` flag. The clone's additional gate dropped gravity updates during
initialization. It now sends to the occupied slots, just like weather/time.
The four-byte gravity payload and query formatting are preserved.

The tests invoke the registered SetWeather native and real server queues,
checking occupied initializing/joined slots, empty slots, null transports,
low-byte weather conversion and the exact RPC 152/146 payloads.

## Player and camera commands

Verified complete native owners and assembly:

| Official owner | Production path corrected |
| --- | --- |
| `0x0047ae30` SetPlayerPos | WORD player slot; command does not modify reported XYZ |
| `0x0047c920` SetPlayerFacingAngle | WORD player slot; command does not modify reported angle |
| `0x0047bb00` SetPlayerInterior | WORD player slot and byte interior |
| `0x0047bcc0` SetPlayerCameraPos | WORD player slot and XYZ payload |
| `0x0047bde0` SetPlayerCameraLookAt | WORD player slot; narrow mode to BYTE, then normalize outside 1..2 to 2 |
| `0x00473050` TogglePlayerClock, callee `0x00485d00` | WORD player slot; retain raw BYTE clock state/payload |

These natives truncate the player cell to 16 bits before checking the fixed
1000-slot domain and occupancy. Their Pawn wrappers now return zero for an
unoccupied/out-of-domain slot and one for a valid slot. The real host methods
apply the same slot rule, including calls outside the Pawn wrapper.

SetPlayerPos and SetPlayerFacingAngle only serialize commands in the official
owners; they do not write the last client-reported coordinates or heading.
The clone's eager writes have been removed. The existing synchronization
receive paths continue to update observed state.

Clock conversion previously collapsed every nonzero Pawn cell to boolean true.
The original stores and transmits the low byte verbatim, even values 2 or 255.
The host parameter and stored field now retain that byte; all implementations
of the internal interface were updated together.

Tests go through the real registered natives and transport queue. They cover
16-bit alias IDs, negative cells whose low WORD is zero, empty slots, the
999/1000 boundary, unchanged reported state, exact RPC payloads, default/invalid
camera modes and clock values crossing the byte boundary.

## Callback live arguments

The native `GetPlayerPoolSize` at **0x00471460** returns the highest occupied
slot, not configured capacity. Verified updater **0x00465c50** and constructor
**0x00465cb0** establish zero for an empty allocated pool, and only slots
0..999 contribute. The clone previously returned GetMaxPlayers. The recovered
updater now scans that occupied-slot domain after real join/quit callbacks.
The native reads its cached result, preserving callback-time visibility.
Tests cover holes, slot999, an ignored slot1000, reads before cache refresh,
real disconnect refresh and the native empty-pool sentinel.

State-change owner **0x00483630** invokes filterscripts first, then reloads
the current player state at **0x00483671** before invoking the game mode.
The clone cached the original state argument for both calls. It now reloads
the state after the filterscript callback group.

Key-change owner **0x00484080** invokes the game mode first, then reloads
the current keys at **0x004840c0** before invoking filterscripts. The clone
now performs that reload too. Both changes retain the previous value argument
and the official callback order.

`player_lifecycle_test` runs the actual Pawn executor and public callback
fixtures, changes live state during the first callback, then checks the
arguments in the later callback's AMX stack frame. Normal lifecycle,
state-change and key-change ordering tests are retained.

## Validation

Validation uses the Win32 VS2022 preset, with deployment disabled by its
nonexistent build-only destination. Production `samp.dll`, `samp-server.exe`
and the normal test suite are built from the terminal. The function counter
runs after every production-body change and checks unique mappings before
commit; it alone updates the README meter for the recovered RPC owner.
No game/client process is launched, and no deployment binaries, build output,
older local audit notes or scratch artifacts are included in the commit.

Result: the complete normal Win32 build succeeds and **29/29 CTest cases
pass**. After adding the final join-cache assertion, both affected RPC/join
test targets were rebuilt and their tests passed again. The strict function
counter check and staged whitespace check pass. Two newly separated production
owners (RPC receive and pool-bound maintenance) are connected to real callers;
the README meter is updated by the counter to 2,645 / 10,172 mapped bodies.

# Reverse-engineering findings and TODO

Current roadmap: [docs/PROJECT_PLAN.md](docs/PROJECT_PLAN.md). The dated
checkpoint and runtime captures below are historical. P1 multiplayer work and
the newer Pawn/startup branch are now integrated and pushed as `8723721`; see
[combined validation](docs/integration/README.md). The roadmap owns current
priority/status, including the still-pending combined runtime matrix.

Last verified checkpoint: 2026-10-29, **527 / 9,480** production functions.
Run `tools/official_function_count.py` for the current count; that script owns
the README meter. This file records findings, not a second counter.

## Historical priorities at the 527-function checkpoint

1. Finish the Pawn framework before moving on to unrelated subsystems.
2. Continue toward 1,000 verified, integrated production functions.
3. Next regular push checkpoints remain approximately 600..1,000. The user
   additionally requested publishing this 527-function checkpoint now.

## Verified and implemented

- [x] Core natives: 16, including the four property natives. Property storage
  follows the official shared linked list; random uses the official generator.
- [x] Float natives: all 16, plus the angle conversion helper. Win32 trigonometry
  preserves the original x87 instructions and intermediate precision.
- [x] String natives: all 15, with seven packing, character and codec helpers.
  They are registered through the real script native table.
- [x] Clock natives: `gettime`, `settime`, `getdate`, `setdate`, `tickcount`.
  Their implementations are in `src/pawn/time_natives.cpp` and are registered.
- [x] Corrected major gaps in `PawnVm::execute`, owner
  `FUN_00401c90 @ 0x00401C90 (samp-server.exe)`: indexed/main/continued entry,
  callback and initialization checks, live public tables, separate DATA and
  image buffers, debugger callbacks, native calls, suspended registers,
  guard exits, error-result handling and signed-division intermediates.
- [x] Compared interpreter results, saved state, DATA writes, native quickening
  and x86 exceptions with the shipped interpreter in **6,349 execution cases**.
  The test copies only that function into its own process; it does not start
  the official server.
- [x] Win32 build and all five current CTest suites pass.
- [x] Launched the clone server from an isolated directory under `build/`.
  A filterscript initializer, gamemode initializer, `main()`, date/time reads
  and `tickcount` ran successfully. The server exited with code zero.
- [x] Reached 500 functions and pushed milestone commit `dc494e9`.

These checks establish the listed behavior; they do not establish that the
whole Pawn framework or the entire client/server clone is complete.

## Behaviors the clone must preserve

- `strmid` edits START/END in the actual native argument block. Its packed,
  unaligned slices have unusual count/copy behavior. Native arguments must
  continue to alias the script stack rather than a temporary argument vector.
- Packed `strcat` can copy a complete source word beyond the requested partial
  character count. `strcmp` returns zero on its zero-common-length branch,
  including when only one string is empty.
- `strins` ignores MAXLENGTH in the reference. Overlapping input/output effects
  must be preserved. `strunpack` uses backward expansion for packed input and
  forward copies for unpacked input.
- `valstr(INT_MIN)` produces `"-("` in the shipped code. Some large values can
  enter the original wrapped decimal-power loop indefinitely.
- `uudecode` writes raw bytes without NUL, caps copied bytes by MAXLENGTH cells,
  and returns the complete decoded byte count even when truncated.
- The native `uuencode` passes untouched scratch input to its helper and has
  an inverted success branch: ordinary accepted sizes return zero and clear
  the first output cell when capacity is positive. Its oversized path consumes
  untouched scratch output; it has no deterministic string result to invent.
- Signed VM division uses three IDIV stages with wrapping ADD/SUB between them.
  Ordinary mathematical floor division changes large-divisor behavior.
- The direct-native SYSREQ.D sleep exit returns an earlier dispatch scratch
  value in the original, while saving suspended state. This differs from the
  ordinary callback path and is covered with a deliberately seeded scratch slot.

## Pawn work remaining

- [ ] Replace the incomplete file library with the official 13 natives and
  their actual FILE handles, modes, byte/cell rules and text handling.
- [ ] Complete `printf` and `format`; current bindings are placeholders.
- [ ] Complete time-library `settimer`, `@timer` lookup and idle callback chain.
- [ ] Complete server timers and scheduling, including actual continuation of
  sleeping scripts from the server loop.
- [ ] Audit the 18 SQLite natives against their individual official owners;
  the existing closures are not proof of complete compatibility.
- [ ] Complete AMX SDK exports and plugin integration. In particular,
  `src/pawn/amx_runtime_api.cpp` contains seven existing bodies but is excluded
  from the Pawn CMake target and has no production callers. Wire these through
  their real APIs; do not add artificial callers merely to justify a count.
- [ ] Finish loader/host lifecycle and gamemode/filterscript integration audits.
- [ ] Implement remaining official-facing gameplay natives with their real
  server state and RPC behavior; registering a placeholder is not completion.

### File-library evidence already inspected

- Official native table: `0x004CA0B0 (samp-server.exe)`.
- Native starts: fopen `0x4055A0`, fclose `0x4056C0`, fwrite `0x4056E0`,
  fread `0x405770`, fputchar `0x405830`, fgetchar `0x405880`,
  fblockwrite `0x4058D0`, fblockread `0x405950`, ftemp `0x4059D0`,
  fseek `0x4059E0`, fexist `0x405A40`, flength `0x405B80`, fremove `0x405AE0`.
- Helpers: cell text reader `0x404EF0`, cell text writer `0x405120`,
  byte line reader `0x405340`, environment lookup `0x4053A0`, path builder
  `0x4053D0`. These are evidence/candidates, not implemented progress.
- Paths consult `AMXFILE`, then `tmp`, `temp`, `tmpdir` using
  GetEnvironmentVariableA. The path builder normalizes slash separators and
  rejects dot-followed-by-separator patterns.
- Open mode is masked by `0x7FFF`: `rb`, `wb`, `r+b` with `w+b` fallback, `ab`.
- `flength` works on the FILE's descriptor with `_lseek`, preserving its prior
  descriptor offset. `fseek` returns the CRT seek status.
- The Win32 alignment helper at `0x401020` returns its pointer unchanged;
  block IO must not introduce an endian swap.
- Reopen each exact owner before implementing it; a table entry alone is not
  behavioral verification. Some of these starts still share assembly ranges.

## Commands and `/q`

### Skin-change crash correction (2026-10-29)

- `GameRuntime::set_ped_model` incorrectly dereferenced/called original-DLL
  addresses (`0x102ACA3C`, `0x100A07B0`, `0x100B41A0`, `0x100A0780`,
  `0x100A07A0`) inside the clone. Replaced these with the existing script
  bridge and GTA model-info lookup. Verified owner `0x1009ED90`, wrappers
  `0x100A0780/7A0/7B0`, and `0x100B41A0 -> 0x100A7630` in official assembly;
  verified script descriptor bytes at `0x1011E664/678/6A0` in the official DLL.
- The reported startup crash was separately reproduced under a native
  debugger: EIP `0x00C92268` contained the user-folder path, with file-open
  arguments left on the stack. `worker` installed a cdecl lambda into GTA's
  WINAPI `CreateFileA` import. Giving that lambda the `OpenFile` function
  pointer type selects the required stdcall conversion and fixes stack cleanup.
- The next loading crash was captured at `0x004C663B` (AddAtomicModel).
  `install_atomic_pool` initialized storage but omitted all fourteen operand
  writes from official `0x100AA630`. Added the exact operand table decoded
  from official DLL `0x101546F8..0x10154730`.
- After both fixes, the debugger observed phase 9, the connection scene,
  connection states 5 and 6, and successful player-0 connection. No access
  violation or process exit occurred during the 40-second capture. The game
  was left running after detaching the debugger.
- Replaced the disabled test-mode configuration with unchanged official
  `gamemodes/bare.amx` and `bare.pwn` from the 0.3.DL-R1 Windows package.
  Archive source: https://files.sampmobile.com/files/samp03DL_svr_R1_win32.zip
  (MD5 `525900b315d813539a4d54611bdc5080`). Its server executable matches
  the repository's `samp-server.exe.official` byte-for-byte. The stock Bare
  script supplies one class and the interior-14 selection room; no invented
  gamemode or hardcoded replacement camera was added to the clone.
- Restored the package's hostname `SA-MP 0.3 Server`. Corrected the client's
  connection notice to official `Connected to {B9C9BF}%.64s`, referenced at
  `0x10010956` with format bytes at `0x101180EC` in `samp.dll`.
- Runtime verification: game reached interior 14 at
  `(258.4893, -41.4008, 1002.0234)` with skin 265. The next capture logged
  `applying spawn`, player reset, restart coordinates, and `spawn applied`
  at `(1958.38, 1343.16, 15.37)`. The user confirmed the room, Spawn and `/q`
  now work. Build and all five existing CTest suites pass.
- A prior session also recorded a GTA shutdown crash at `0x004C6202`.
  The latest observed `/q` run exited without that access violation; the
  other shutdown paths have not all been verified.

- Gameplay commands are routed by the server to Pawn's `OnPlayerCommandText`.
  Their specific behavior comes from the loaded gamemode/filterscript.
- Built-in client commands are a separate client responsibility. Console/RCON
  commands are implemented by the server host.
- **Original `/q` cause, now fixed in source:** every slash-prefixed line was
  forwarded through `NetworkClient::send_command`, with no local command table.
  Chat input was also unavailable before spawning. Local dispatch now consumes
  registered commands before the server fallback, and local input is available
  once the game world is ready as well as after spawning.
- In the official client, registrations at `0x10068B66` and `0x10068B7B` bind
  `quit` and `q` to `0x10068420`, a tail jump to `0x100C5550`.
- Input submission owner: `0x10069410`; local lookup: `0x10069150`;
  registration: `0x100691B0`. The table accepts 144 entries and names shorter
  than 32 bytes. Its comparison callee `0x100F9E53` is `_stricmp`.
- [x] Implemented registration, lookup and local dispatch; `/q` and `/quit`
  are wired to the same shutdown handler. Unknown commands retain server
  forwarding. The focused command test covers aliases, casing, parameters,
  fallback and table limits.
- [x] Implemented the quit request owner `0x100C5550`: connected transport
  shutdown with a 500 ms allowance, then the exit flag and GetTickCount stamp.
  The worker applies the original strict `elapsed > 1000` gate observed at
  `0x100C670F..0x100C674B`, then calls ExitProcess(0).
- [x] Added the transport shutdown owner `0x100400E0`. The actual virtual path
  was traced through factory `0x10037370`, constructor `0x10034660`, vtable
  `0x10119658`, slot `0x10034500` and `0x10033CB0`. Its close helper
  `0x1003E3B0` emits reliable notification byte `0x20`.
- [x] Actual `/q` exit verified in GTA by the user and a captured process exit.
  `/quit` uses the same registered callback; only `/q` was manually exercised.
- [ ] Continue the remaining built-in client commands from official evidence.
- [ ] Keep script command dispatch and its native/RPC dependencies functional.

## Colors and empty vehicles

- Color-tag parsing (`{RRGGBB}`), glyph color handling and font proxies exist in
  the client. Their existence does not prove every colored response renders
  correctly; full in-game visual verification has not been performed here.
- [ ] Verify colored command responses through the complete client render path.
- [x] The earlier `AddStaticVehicleEx` placeholder and essential server vehicle
  creation/streaming gap were closed by P1.6's implementation/offline gate.
  See [P1 results](docs/P1_REPORT.md). Vehicle population still depends on the
  gamemode; advanced modes and combined GTA validation remain open in the roadmap.

## Working rules for continuation

- Follow `AGENTS.md`; use 0.3.DL owners and a short behavior comment immediately
  above each implementation. Do not generate pseudocode `.c` files or JSON logs.
- Favor implementation and actual caller integration. Keep existing tests;
  expand them only for a specific unresolved behavior or regression.
- Read an edited source file in full and inspect each changed owner's assembly.
- Run the official counter after every production-function change and `--check`
  before commits. The absolute Python executable available on this machine is
  `C:\Users\yassi\AppData\Local\Python\pythoncore-3.14-64\python.exe`.
- Build Win32 and run CTest from the terminal. Every shell command needs a
  timeout. No subagents.
- The clone server may run for integration tests. Do not launch GTA/the client
  without a request or disturb pre-existing processes.
- Next authorized push checkpoints: roughly 600, 700, 800, 900, 1,000. Exclude
  deployed binaries, build output, scratch fixtures and caches from commits.

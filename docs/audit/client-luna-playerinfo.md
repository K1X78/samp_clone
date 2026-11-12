# Client source audit — `src/client/net/playerinfo.cpp`

Audit time: 2026-11-10 UTC. Source SHA-256: `0ea0550bdfe9e3f65cf6accfd0902879652826bba2b46de6085a9f5bff836c9d`.

Read the complete `playerinfo.cpp` and `playerinfo.h`. Authority is 0.3.DL `samp.dll.official` (SHA-256 `bccdb297464bd382625635be25585df07a8fa6668bc0015650708e3eb4ffcd4b`). Only two of ten comment-derived candidate VAs have exact indexed independent starts; both complete owners were read with metadata and direct `--asm`. The other eight remain unresolved; no 0.3.7 address was used. No existing `Official:` mapping for these addresses was found in `src/`.

## Tally

| Behavior | Count | Prior same-start claim |
|---|---:|---:|
| MATCH | 2 | 0 |
| MISMATCH | 0 | 0 |
| UNRESOLVED | 8 | 0 |
| EXCLUDED | 0 | — |

## Body findings

| Source line / declarator | Status and owner | Evidence / effects / real path |
|---|---|---|
| 4 `int CPlayerInfo::GetScore()` | UNRESOLVED, hint 0x1006e270; no exact index entry | Returns `score`. No official exact C/body/asm owner, so no ABI/effect match asserted. Scoreboard calls the enclosing `CPlayerPool::GetScore` (`scoreboard.cpp:132`); no direct caller of this `CPlayerInfo` method found. |
| 9 `DWORD CPlayerInfo::GetPing()` | UNRESOLVED, hint 0x1006e280; no exact entry | Returns `ping`. Scoreboard uses `CPlayerPool::GetPing` (`scoreboard.cpp:124`); no direct CPlayerInfo caller found. |
| 14 `DWORD CPlayerInfo::GetNameLength()` | UNRESOLVED, hint 0x1006e300; no exact entry | Returns `name.size()`; compatibility layout places VC7 string length at info+0x24. Header assertion confirms the 28-byte Vc7String and CPlayerInfo extent/offsets. No exact independent official owner found; layout agreement does not verify this body. |
| 19 `const char* CPlayerInfo::GetName()` | UNRESOLVED, hint 0x100170c0; no exact entry | Returns `name.c_str()`. No exact owner. Caller not located by direct method-name search in this file scope. |
| 24 `void CPlayerInfo::SetName(const char*)` | UNRESOLVED, hint 0x1001da20; no exact entry | Assigns `strlen(text)` bytes to name. `CPlayerPool::SetName` forwards to this method (`playerpool.cpp:30–34`); official owner is unproven. |
| 31 `CPlayerInfo::CPlayerInfo(const char*,DWORD)` | **MATCH — `FUN_10014060 @ 0x10014060`; body ranges `0x10014060..0x100140ac`, `0x100140b0..0x100140ff`.** | `__thiscall`: this in ECX, text pointer and DWORD NPC flag on stack; callee pops 8, returns this in EAX. Initializes score/npc/ping and VC7 string capacity/length/inline terminator; computes source string length and assigns it; allocates/constructs `CRemotePlayer` (official size 0x1fd) and stores pointer or null on the explicit failure branch. Exact assembly confirms field offsets and calls. Operator-new failure contract was checked previously at `0x100f81b2` (throws on exhausted allocation), so source `new` is consistent. Full owner pseudocode also calls string assignment helper `FUN_1000b490`; its complete C+asm was read to confirm length/assignment behavior. Full C+asm for `CRemotePlayer` constructor `0x10016250` was read; source constructor initializes the matching fields and ResetData path. Official incoming ref 0x10014140. Clone creation path is `CPlayerPool::Create` (`playerpool.cpp:166–171`), reached through player-info RPC handlers. No existing same-start claim found. |
| 40 `CPlayerInfo::~CPlayerInfo()` | **MATCH — `FUN_10013e10 @ 0x10013e10`; body `0x10013e10..0x10013e7f`.** | Argumentless member dtor: this in ECX, no stack args, void. Destroys/frees nonnull remote pointer and clears it; frees VC7 string storage when capacity>=16, then resets length/capacity/inline terminator. Source deletes and nulls `remote`; `Vc7String` member teardown releases long storage. Official incoming refs 0x10013f20 and 0x10013f40; clone player-pool deletion/destruction uses `delete CPlayerInfo` (`playerpool.cpp` cleanup paths). No existing same-start claim found. |
| 50 `DWORD CPlayerInfo::GetNpcFlag()` | UNRESOLVED, hint 0x1000e2d0; no exact entry | Returns raw `npc` DWORD. Source calls not located directly. No owner/body/assembly evidence; do not infer mapping. |
| 55 `void CPlayerInfo::SetScore(int)` | UNRESOLVED, hint 0x1000e2e0; no exact entry | Assigns `score`. Enclosing `CPlayerPool::SetScore` calls through the current source path (`playerpool.cpp:438–450`); exact official owner not indexed. |
| 60 `void CPlayerInfo::SetPing(DWORD)` | UNRESOLVED, hint 0x1000e2f0; no exact entry | Assigns `ping`. Enclosing `CPlayerPool::SetPing` calls through the current source path (`playerpool.cpp:452–464`); exact official owner not indexed. |

For the two MATCH bodies, complete index metadata, pseudocode through END FUNCTION, and official disassembly were read directly using `python tools/read_reference_function.py client 0x10014060 --asm` and `... 0x10013e10 --asm`. The native member offsets agree with the packed header: score 0, npc 4, remote 8, ping 0x0c, string 0x10; object extent 0x2c. This layout evidence does not upgrade any of the eight unindexed accessor/mutator hints.

## Duplicate and reachability summary

No same-start `Official:` source claims were found for any candidate VA. The only verified unique starts in this file are `0x10014060` and `0x10013e10`. The other eight source bodies remain unresolved and cannot be counted from comments. Constructor/destructor are used through CPlayerPool lifetime; name/score/ping methods have current clone callers through CPlayerPool, but the direct official starts are not present in `index.tsv`. No helpers, templates, lambdas, macro bodies, or vendored code appear in this file.

**Reproducibility:** query every candidate in `docs/asm/pseudocode/samp.dll/index.tsv` with `rg -n 0xVA`; only 0x10014060 and 0x10013e10 are exact entries. For those two, run `python tools/read_reference_function.py client 0xVA --asm`. Complete callee-contract reads used: `0x1000b490`, `0x10016250`, `0x100162c0`.

# P2 native mapping: official APIs and separate diagnostic callers

The C++ server is reconstructed from the shipped0.3.DL executable. The normal
Pawn gamemode is readable source and is compiled to AMX with the Pawn compiler.
The executable implements the native; OnPlayerCommandText or a standard game
callback invokes it. Command names belong to the gamemode, not the DLL.

Current launch: the unmodified packaged `bare.amx`, with its exact
[bare.pwn source](../tests/fixtures/official-gamemodes/bare.pwn), no filterscripts and no added
messages, commands, custom models, cars or objects. See
[official session provenance](OFFICIAL_SESSION.md). The earlier custom mode was
incorrectly presented as normal/official. It is now a separate
[diagnostic fixture](../tests/fixtures/p2_native.pwn), excluded from launch.
Its `/help`, `/car`, `/day`, `/objects` and other commands are custom fixture
commands, not evidence that these commands shipped in `bare.pwn` or the server.
The table below retains native ownership and diagnostic coverage only.

| Official native | 0.3.DL server callback | Production binding | Diagnostic fixture caller (not active) |
| --- | --- | --- | --- |
| `AddCharModel` | `0x00479bf0` | [natives.cpp:659](../src/pawn/natives.cpp#L659) | OnGameModeInit registers character20001; /skin uses it |
| `AddSimpleModel` | `0x00479cf0` | [natives.cpp:666](../src/pawn/natives.cpp#L666) | OnGameModeInit registers world0/1 object; /objects and /world0,/world1 use it |
| `AddSimpleModelTimed` | `0x00479df0` | [natives.cpp:673](../src/pawn/natives.cpp#L673) | OnGameModeInit registers night object; /day,/night drive visibility |
| `FindModelFileNameFromCRC` | `0x00479f10` | [natives.cpp:698](../src/pawn/natives.cpp#L698) | OnPlayerRequestDownload resolves model CRC; /models shows last file |
| `FindTextureFileNameFromCRC` | `0x00479f70` | [natives.cpp:699](../src/pawn/natives.cpp#L699) | OnPlayerRequestDownload resolves texture CRC; /models shows last file |
| `RedirectDownload` | `0x00479fe0` | [natives.cpp:701](../src/pawn/natives.cpp#L701) | /redirect URL configures it; OnPlayerRequestDownload sends the URL |
| `GetPlayerCustomSkin` | `0x0047a0c0` | [natives.cpp:705](../src/pawn/natives.cpp#L705) | /models queries current custom skin |
| `GetPlayerSkin` | `0x00470ea0` | [natives.cpp:733](../src/pawn/natives.cpp#L733) | /models queries stock/base skin |
| `SetPlayerSkin` | `0x0047a6b0` | [natives.cpp:711](../src/pawn/natives.cpp#L711) | /skin and /base |
| `SetSpawnInfo` | `0x00470c00` | [natives.cpp:628](../src/pawn/natives.cpp#L628) | OnPlayerRequestClass selects custom20001 or stock265 |
| `SpawnPlayer` | `0x0047a380` | [natives.cpp:649](../src/pawn/natives.cpp#L649) | Explicit /respawn only; no automatic join spawn |
| `CreateVehicle` | `0x004717e0` | [natives.cpp:506](../src/pawn/natives.cpp#L506) | OnGameModeInit and /car create one Infernus |
| `DestroyVehicle` | `0x004718b0` | [natives.cpp:510](../src/pawn/natives.cpp#L510) | /deletecar and safe on-foot /car replacement |
| `PutPlayerInVehicle` | `0x0047b180` | [natives.cpp:564](../src/pawn/natives.cpp#L564) | /car only; initial spawn stays on foot |
| `RemovePlayerFromVehicle` | `0x00471210` | [natives.cpp:574](../src/pawn/natives.cpp#L574) | /exitcar |
| `SetWorldTime` | `0x00472f50` | [natives.cpp:262](../src/pawn/natives.cpp#L262) | /day and /night |
| `CreateObject` | `0x00474b40` | [natives.cpp:743](../src/pawn/natives.cpp#L743) | OnGameModeInit and /objects |
| `DestroyObject` | `0x0047dd60` | [natives.cpp:755](../src/pawn/natives.cpp#L755) | /deleteobjects and /objects replacement |
| `SendClientMessage` | `0x00471b70` | [natives.cpp:428](../src/pawn/natives.cpp#L428) | All normal command acknowledgements; successful native returns1 |
| `SetPlayerVirtualWorld` | `0x00470ee0` | [natives.cpp:585](../src/pawn/natives.cpp#L585) | /world0 and /world1 |

## Command-to-engine paths

- `/car` ? CreateVehicle ? authoritative vehicle slot ? RPC164 ? real GTA car;
  PutPlayerInVehicle ? RPC70 ? local driver seat.
- `/skin` ? SetPlayerSkin ? base/custom fields ? RPC153 and68 ? downloaded
  custom model-info/clump ? actual player skin.
- `/day`, `/night` ? SetWorldTime ? RPC94 ? GTA clock ? timed object visibility.
- `/objects`, `/deleteobjects` ? CreateObject/DestroyObject ? RPC44/47 ? actual
  GTA object creation/destruction and resource lifetime.
- `/world0`, `/world1` ? SetPlayerVirtualWorld ? RPC48 ? relevant artwork
  readiness ? correct world-specific mesh under the same custom ID.
- `/redirect URL`, `/direct` configure later requests; the real download
  callback uses filename lookup and RedirectDownload. An HTTP file endpoint
  must exist when redirect mode is enabled.

The supplied0.3.DL archive also includes readable bare.pwn, grandlarc.pwn,
lvdm.pwn and filterscripts. Its packaged test_cmds.pwn includes `/vehicle`,
`/dvehicle`, `/me2v` and `/setskin`, demonstrating the same native-call pattern.
The project mode is a focused adaptation, not a claim that `/car` or `/day` are
universal SA-MP executable built-ins. No unofficial C++ source is substituted
for the shipped0.3.DL binary evidence.

## Verification boundary

Native/RPC assertions, compiled-Pawn execution and fixed-address patch
regressions are retained. Earlier visual sessions exposed real integration
crashes. The sector relocation fix is regression checked; timed-object
visibility/lifetime corrections require the current no-debug runtime run.
KeepP2.5/P2.6 acceptance open until the relevant visible effects and cleanup are
confirmed. A native body or an unused command does not complete a feature.

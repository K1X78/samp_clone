# Official script session - 2026-11-04

The last observed private game session, before the unattended no-launch pass, loaded the original `bare.amx` supplied in the
local SA-MP 0.3.DL-R1 server archive. It is copied byte for byte, not rebuilt or
edited. Its exact source is retained at
[tests/fixtures/official-gamemodes/bare.pwn](../tests/fixtures/official-gamemodes/bare.pwn).

| Artifact | SHA-256 |
| --- | --- |
| `samp03DLsvr_R1.tar.gz` | `59db9845b0c28688ff4da35970b36da12d962021ffb372e14ee3559d59ce3ece` |
| `samp03/gamemodes/bare.pwn` | `2182403af7b838ad8605c6589bc9c25a209a93855b5705171e11baa5592306c1` |
| `samp03/gamemodes/bare.amx` | `b1f37bd4ebef013d53789c7d82e81ddd1afd3ffeeaef2ea2194278ac9832d651` |

These hashes identify the supplied local package and members; no independent
publisher-signature verification is claimed.

The packaged server.cfg defaults to Grand Larceny and several filterscripts.
This session selects the packaged **Bare Script** because the requested baseline
is its locker-room selection without extra cars or objects. Only `bare.amx` is
loaded, with no filterscripts. Private connection settings use loopback and
port7812. Artwork is disabled; the bare script registers no custom models.

The original script provides one class, stock skin265, and sets the class camera
in interior14 at the locker-room coordinates. It has no CreateVehicle,
CreateObject, forced SpawnPlayer, or PutPlayerInVehicle calls. It does not define
the custom `/help`, `/car`, `/day`, `/objects`, or `/respawn` commands that were
previously added. Its `/yadayada` example remains exactly as packaged. Its own
"Bare Script" text is official script content, not a new project message.

The custom P2 script was moved to
[tests/fixtures/p2_native.pwn](../tests/fixtures/p2_native.pwn). Its compiled
copies and the older diagnostic AMX are outside the private server's gamemodes
directory and are absent from server.cfg. Automated tests are preserved.

Verification performed:

- Running `bare.amx` is byte-identical to the archive member.
- A real server information query reports `Bare Script` and the packaged
  hostname `SA-MP 0.3 Server`.
- Read-only live client memory reports one class, skin265, interior14,
  class-ready=true, selecting=true, spawn-accepted=false, playing=false.
- Actor coordinates are approximately (258.4893, -41.4008, 1002.0234).
- Runtime vehicle count, runtime object count and artwork count are all zero.
- GTA and the clone server run without debuggers; no Computer Use was used.

REA skill workflow: the installed REA6.7.0 doctor reported stale MCP registration
and no configured native analysis engine. Its `inspect-artifact` command rejected
the supplied tar.gz as unsupported. Exact archive-member reads and SHA-256
comparison therefore used Python tarfile/hashlib. These observations are shell
evidence, not REA decompilation Evidence. No tool configuration was changed.
Private raw audit results are under `build/archive/build-msvc/official-session-audit`.

This establishes exact script identity and the observed session state. It does
not establish complete 1:1 parity of the reconstructed C++ client/server. P2
runtime failures and the wider compatibility gates remain open.

## Subsequent unattended build

The command/Pawn gaps were implemented as P2.7/P2.8 after this session snapshot.
The new DLL/server pair was built and checked without launching applications.
The normal installation retains original Bare as its selected mode and also
contains the exact packaged LVDM AMX/source. Its `/help` remains gamemode-owned.
See [the current implementation report](COMMAND_AND_PAWN_REPORT.md); the memory
observations above are historical and do not validate the new game hooks.

## Authorized manual follow-up

The normal server at127.0.0.1:7802 now selects the exact original LVDM to expose
its real /help. The corrected mouse-input DLL was installed and relaunched
without a debugger after the20-target suite passed. The earlier private Bare
session described above is historical. CDB -pvr was used for non-invasive live
inspection; it neither set breakpoints nor suspended the process.

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

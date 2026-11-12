# P2 official command and Pawn implementation report

Date: 2026-11-04. Reference: the supplied SA-MP 0.3.DL-R1 binaries and server archive.

The eight original LVDM dependencies and the 25 missing original client command
names are now implemented in production source. They are included in **P2.7**
and **P2.8**. The DLL registers the recovered command table during startup;
normal gameplay does not load a diagnostic Pawn script.

This is an implementation/offline checkpoint. P2.5/P2.6 remain open for the GTA
runtime acceptance described at the end. It does not certify the whole project
as a finished 1:1 replica.

## P2.7: original Pawn dependencies

| Native | Original server entry | Implemented path |
| --- | --- | --- |
| GetPlayerName | 00471370 | Connected slot, bounded unpacked AMX destination and written count. |
| SetPlayerScore / GetPlayerScore | 00472AD0 / 00472B10 | Signed authoritative score; RPC155 scoreboard replies include real scores and ping averages. |
| SendDeathMessage | 0047B650 | Killer/victim/reason through RPC55 and the client's death window. |
| GameModeExit | 0046FEB0 | Actual configured script selection, restart notification, callbacks, timer/world cleanup and next-AMX initialization. |
| AddStaticPickup | 004707E0 | Real pickup slots, world/distance streaming, RPC95/63, GTA entities, collection hook/polling and RPC131 Pawn callbacks. Its return is success, not a slot ID. |
| SetTimer | 00473190 | Owning VM, signed countdown, repeat/one-shot execution, KillTimer and script-unload cleanup. |
| SendClientMessageToAll | 00471C40 | RPC93 messages to connected players. |

The original `format` and `printf` implementations are retained. `format`
writes AMX memory and returns 1; variadic inputs reference Pawn cells. The
formatter preserves the recovered conversions, padding, escaping and bounds.

Additional dependencies now include ShowNameTags, ShowPlayerMarkers,
EnableStuntBonusForAll, IsPlayerAdmin, EnablePlayerCameraTarget and its four
getters, restart handling, in-game RCON login/console forwarding and score queries.
The score packet's trailing word counts distinct connected IP addresses.
Zero-millisecond ping samples remain valid average inputs.

The unmodified packaged LVDM now initializes through the real production native
bindings: **206 active scripted vehicles, five pickups and one repeating timer**.
Its original `/help` callback sends all four exact messages through format,
SendClientMessage and RPC93. Its score timer executes, and GameModeExit rotates
to the exact original Bare Script. No isolated resolver is used for this check.

## P2.8: original client commands

The recovered registration owner is **10068B50**. There are **27 names**:
21 available in normal mode and six additional names registered only in `-d`
debug mode. The previous two quit aliases are preserved.

| Command names | Original callback | Production behavior |
| --- | --- | --- |
| /q, /quit | 10068420 | Disconnect and delayed exit. |
| /save | 10068440 | Original AddPlayerClass/AddStaticVehicle output in savedpositions.txt. |
| /rs | 100685C0 | Original raw position files and formatting; vehicle file uses the game working directory. |
| /rcon | 10068A70 | Direct packet201, password login, admin state, Pawn callbacks, console execution and chat replies. |
| /mem | 100682F0 | GTA memory counter with original output. |
| /fpslimit | 10068310 | Original 20-90 validation, saved setting and recovered frame-pacing hook. |
| /pagesize | 10068060 | Original 10-20 validation, saved setting and chat line count. |
| /fontsize | 100680E0 | Original -3..5 setting and live font resource recreation. |
| /nametagstatus | 10068190 | Saved inverse setting, exact message and status-glyph visibility. |
| /timestamp | 100681A0 | Saved setting and original clock format on chat lines. |
| /headmove | 100683A0 | Saved inverse setting and local/remote head IK updates. |
| /hudscalefix | 100682E0 | Recovered widescreen HUD hook, including scale restoration after drawing. |
| /testdw | 10067F70 | The original shipped manual death-window diagnostic entries. Never invoked automatically. |
| /vsel | 100688F0 | Debug-only original vehicle preview, navigation and confirmation flow. |
| /v, /vehicle | 100687B0 | Debug-only vehicle creation beside the actor; this command does not automatically enter the car. |
| /player_skin | 10068740 | Debug-only actor model change. |
| /set_weather | 10068910 | Debug-only GTA weather update. |
| /set_time | 10068960 | Debug-only time update, including the original parsing behavior. |
| /interior | 10068A10 | Engine interior query and original output. |
| /togobjlight | 10068A40 | Recovered data-flag toggle. No further flag consumer exists in the supplied image. |
| /cmpstat | 10068430 | Original callback is exactly RET; its behavior is preserved. |
| /dl | 10068A60 | Vehicle ID/model/subtype/health/preload/distance/seats/position labels. |
| /ctd | 10068050 | Camera-target labels; server camera-target enablement is independent of this display switch. |
| /audiomsg | 10068200 | Saved inverse setting and audio-stream announcement visibility. |
| /logurls | 10068270 | Saved setting and model-download URL notices. |

The command settings load/save through sa-mp.cfg in the SAMP user directory.
Unknown client names still pass to the server/Pawn command callback. RCON gmx
and changemode now schedule real mode changes; console names are compared
without case sensitivity, and exit changes the real server shutdown state.

Camera-target dependencies include engine-backed streamed actors, model/health/
invulnerability updates, object/vehicle/player/actor selection and server target
reports. Broader actor animation/damage and remaining native/catalog work stay
in their existing P3 packages.

## Production scripts and installation

Exact packaged sources are retained at `tests/fixtures/official-gamemodes/bare.pwn` and
`tests/fixtures/official-gamemodes/lvdm.pwn`. Bare's original AMX is installed in the normal game's gamemodes directory. LVDM's
AMX/source are retained only as a regression fixture outside that installation.

- Bare source SHA-256: `2182403af7b838ad8605c6589bc9c25a209a93855b5705171e11baa5592306c1`.
- Bare AMX: `b1f37bd4ebef013d53789c7d82e81ddd1afd3ffeeaef2ea2194278ac9832d651`.
- LVDM source: `ae34226a46084fcdbe63341a1eee62dded59d8e782b41799d6d0022dd7ae324c`.
- LVDM AMX: `1936c56f0ae6978259e7020026530d66620c4a67241b25bef9d1008a6b25774d`.

The user's clarified preference is the minimal original Bare Script only.
The normal installation now contains bare.amx/bare.pwn, with no filterscripts,
plugins or artwork. LVDM and the old clone_classes sample were removed from its
gamemodes directory. LVDM regression coverage remains under tests/fixtures and
is not loaded by normal launch. **Bare does not define /help.** Bare is itself a
minimal Pawn sample; the dedicated server is the engine that hosts it.

The final verified Win32 DLL/server pair is installed for the existing launcher.
No GTA or dedicated-server application was launched during the earlier unattended pass. The user subsequently requested a manual launch.
Original `.official` reference binaries are preserved. No commit/push is made.

## Verification

- Final artifacts, hashes, phase status and check results are recorded in
  [the current build manifest](p2/official-implementation.json).
- Win32 RelWithDebInfo client/server build and 20 standalone CTest targets.
- 127 comparisons against copied original formatter/helper machine code, plus
  four format-native destination capacities comparing return values and AMX memory.
- Full unmodified LVDM initialization, exact help messages, repeating score timer
  and rotation to the original Bare Script through production bindings.
- Normal/debug command availability, usage text, aliases, server fallback,
  position-file output, settings persistence and read-only settings.
- RCON login/callback order, rejection, real admin dispatch, malformed packets;
  pickup streaming/collection callback order, score/ping/IP-count replies,
  camera-target reports, timers and console restart scheduling.
- Label depth/LOS gates, name positioning and status toggle at the rendering host
  boundary; frame-limiter branches and the zero-delay sleep boundary.

Raw build/test/audit records are retained under
`build/archive/build-msvc/official-session-audit/`. These are terminal unit/integration checks,
not visual acceptance. Original formatter tests do not execute a PE entrypoint.

## Manual checks still requiring GTA

Use [the current manual checklist](p2/MANUAL_TESTS.md). Check locker camera and
mouse Spawn, movement/cursor restoration, live chat/font/HUD settings, debug
vehicle selection, normal vehicle entry/deletion with occupants, actual pickup
collection, timed custom-model day/night transitions and reconnect/server-switch
cleanup. These runtime gates remain open because the user requested no launch.

## Manual follow-up: Spawn mouse input

The user reported no button response and successful spawning with Shift. Live
inspection used CDB non-invasive running-process mode (-pvr), with no breakpoints
or target suspension. It confirmed the active Win32 hook and selected script.
The clone's Win32 adapter incorrectly cleared a pressed button on
WM_CAPTURECHANGED. Original dialog89900 ignores215 and original button84930
retains its press until WM_LBUTTONUP. A standalone test of the actual Win32
handler reproduced the lost activation before the fix and passes afterward.

The original c5880/a0530 device-cursor path was tried, but the user reported
that it made the cursor invisible. The current build restores drawing the
original mouse.png texture in Present at the GUI's client coordinates, with the
hardware cursor hidden to avoid a duplicate pointer. The capture-change click
fix is retained. All20 CTest targets pass; the restored-cursor DLL is installed
and the game was relaunched without a debugger against the original LVDM.
Physical cursor/click acceptance remains pending; terminal checks do not claim
that the user has confirmed the visual result.

## Clarified minimal launch preference

After clarifying engine versus gamemode ownership, the user requested Bare only.
The normal game/server were restarted with gamemode0 bare1, no filterscripts and
useartwork0. A live server query confirms Bare Script. Client engine/native work
and the mouse-input correction remain; no gamemode commands were added.

## User-confirmed Bare baseline

The user subsequently confirmed visible cursor, mouse Spawn, selection UI
cleanup/normal movement and reliable repetition after reconnect on the current
Bare build. This is user-observed clone-client/clone-server acceptance, recorded
with the artifact hashes in [the baseline acceptance record](p2/bare-baseline-acceptance.json).
These four checks are closed. Vehicle/custom-model and broader compatibility
checks remain separate; earlier pending notes above describe the earlier state.

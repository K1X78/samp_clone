# P2 manual GTA acceptance checklist

The production client/server build and standalone terminal checks are recorded
in [the current implementation report](../COMMAND_AND_PAWN_REPORT.md). The user
requested no game or dedicated-server launch during this unattended work.
The Bare baseline subset below is user-confirmed. The remaining checks are
open; automated success alone does not establish visual parity.

The normal launcher selects only the exact packaged **Bare Script**, with no
filterscripts or artwork. Its normal gamemodes directory contains only bare.amx
and bare.pwn. LVDM/reference and diagnostic fixtures remain outside the game
installation. Bare is a minimal Pawn script, not a built-in server game mode.
No script creates a demonstration scene or automatically enters a vehicle.

## Confirmed Bare baseline

The user confirmed all four baseline checks on the current clone-client /
clone-server build. Evidence and artifact hashes are recorded in
[baseline acceptance](bare-baseline-acceptance.json).

- [x] Visible cursor.
- [x] Mouse Spawn works.
- [x] Selection UI disappears and movement works.
- [x] Reconnect repeats that flow reliably.

This closes the basic Bare input/spawn/reconnect review. Vehicle/custom-model
and other implementation pairings below still require their own acceptance.

## Original script and spawn

1. Launch normally when ready. Bare uses its original interior14 locker
   selection with skin265. There should be no project-added car/object or /p2
   command list. Verify both mouse Spawn and Shift, then movement and camera.
   The selection UI/cursor must disappear on successful spawn.
2. Try /pagesize 20, /fontsize 1 and /timestamp. Verify the visible change and
   persistence after a later launch. Check /hudscalefix and /headmove visually.
   /save and /rs should write the original Pawn/raw formats to their documented
   files. /interior and /mem should print the recovered original messages.
3. Bare has no /help. LVDM checks below belong to an explicitly
   prepared separate regression setup; LVDM is no longer installed for normal launch. The original restart delay is over12 seconds.
   Confirm LVDM's four original /help messages, locker selection, spawn, score
   updates and its own scripted vehicles/pickups. Do not substitute a custom
   /help or /car command; these are gamemode features, not universal commands.

## Vehicles, pickups and rendering

4. In LVDM, enter and leave one of its scripted cars normally, drive, and check
   /dl label content and proximity visibility. Observe from a second client if
   available. Confirm pickup collection and its Pawn callback effects.
5. In the original client debug mode only, check /v, /vehicle, /vsel,
   /player_skin, /set_weather and /set_time. The normal network mode must not
   register these six names. /v creates beside the actor; the original selector
   enters the chosen car only after confirmation.
6. With another player, check /nametagstatus and head movement. For /ctd, use a
   compatible gamemode that actually enables camera targeting. The display
   switch does not enable the server's targeting feature. Check object,
   vehicle, player and actor targets where that gamemode supplies them.
7. Check /audiomsg with a real gamemode audio-stream request and /logurls during
   a real model HTTP download. /cmpstat is a RET in the original binary;
   /togobjlight changes an original flag with no discovered read consumer.
   Neither should produce invented output. The original manual /testdw command
   should show the original death-window entries only when explicitly entered.

## Custom-model runtime gates

Use an actual compatible custom-model gamemode and its existing controls/events.
The selected Bare Script registers no custom models and cannot exercise these
features. No custom test commands are compiled into the production DLL/server.

8. Cold join: verify downloads, textured custom player preview, normal spawn,
   animation and collision. Change skins through the gamemode's real controls
   and observe locally and remotely.
9. Change world/time through that gamemode's real server calls. Verify timed
   models at day/night boundaries and object removal/recreation, with no stale
   mesh, duplicate entity or crash. Repeat several times.
10. Delete/recreate vehicles through a gamemode that supports these real native
    calls, both while empty and while occupied. Occupants must be removed safely;
    deletion must not kill a player or leave a stale vehicle pointer.
11. Reconnect with a warm cache, interrupt a cold download, and switch between
    stock-only/custom-model endpoints, including different models using the same
    ID. Verify correct textures, cache isolation and resource cleanup.
12. Check known embedded-COL3 collision assets. The prepared stock asset bytes
    used by terminal checks cannot prove every in-game collision branch.

Prioritize **1, 3, 4, 9 and 10**. Record client/server build hashes, pass/fail and
any crash/log details. The wider pairing matrix still needs official client /
clone server, clone client / official server and clone / clone outcomes.

| Check | Pairing/build | Pass/fail | Notes or log |
| --- | --- | --- | --- |
| Locker camera / mouse Spawn / Shift | clone / clone, current Bare | Mouse Spawn user-confirmed | Camera aspects not separately certified by this four-check report. |
| UI and cursor after spawning | clone / clone, current Bare | User-confirmed pass | See baseline acceptance record. |
| LVDM help / score timer / RCON mode change | | | |
| Normal vehicles / pickups / remote sync | | | |
| Commands / settings / HUD / labels | | | |
| Debug-only command availability and selector | | | |
| Timed models / skin / object recreation | | | |
| Occupied vehicle deletion / recreation | | | |
| Cache / reconnect / server switching | | | |
| Embedded collision | | | |

#include <a_samp>

// Optional manual fixture. Compile with the 0.3.DL Pawn compiler/includes.
// No game/client is launched by the terminal verification suite.
new gObject = INVALID_OBJECT_ID, gTimed = INVALID_OBJECT_ID;

main() {}

CreateSmokeObjects()
{
    if (!IsValidObject(gObject))
        gObject = CreateObject(-1000, 1962.0, 1343.0, 15.0, 0.0, 0.0, 0.0, 250.0);
    if (!IsValidObject(gTimed))
        gTimed = CreateObject(-1001, 1972.0, 1343.0, 15.0, 0.0, 0.0, 0.0, 250.0);
}

public OnGameModeInit()
{
    SetGameModeText("P2 custom models");
    AddCharModel(7, 20001, "fam1.dff", "fam1.txd");
    AddSimpleModel(0, 19379, -1000, "sign.dff", "sign.txd");
    AddSimpleModel(1, 19379, -1000, "bridge.dff", "bridge.txd");
    AddSimpleModelTimed(-1, 19379, -1001, "bridge.dff", "bridge.txd", 20, 6);
    AddPlayerClass(7, 1958.3783, 1343.1572, 15.3746, 270.0, 0, 0, 0, 0, 0, 0);
    SetWorldTime(12);
    CreateSmokeObjects();
    return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
    SetSpawnInfo(playerid, NO_TEAM, 20001, 1958.3783, 1343.1572, 15.3746, 270.0, 0, 0, 0, 0, 0, 0);
    SetPlayerPos(playerid, 1958.3783, 1343.1572, 15.3746);
    SetPlayerCameraPos(playerid, 1954.0, 1343.0, 17.0);
    SetPlayerCameraLookAt(playerid, 1958.3783, 1343.1572, 16.0);
    return 1;
}

public OnPlayerSpawn(playerid)
{
    SetPlayerInterior(playerid, 0);
    TogglePlayerClock(playerid, 0);
    SendClientMessage(playerid, -1, "P2: /p2base /p2skin /p2world0 /p2world1 /p2day /p2night /p2delete /p2create");
    return 1;
}

public OnPlayerFinishedDownloading(playerid, virtualworld)
{
    SendClientMessage(playerid, -1, "P2: downloads finished; proceeding to model use.");
    return 1;
}

public OnPlayerCommandText(playerid, cmdtext[])
{
    if (!strcmp(cmdtext, "/p2base", true)) { SetPlayerSkin(playerid, 7); return 1; }
    if (!strcmp(cmdtext, "/p2skin", true)) { SetPlayerSkin(playerid, 20001); return 1; }
    if (!strcmp(cmdtext, "/p2world0", true)) { SetPlayerVirtualWorld(playerid, 0); return 1; }
    if (!strcmp(cmdtext, "/p2world1", true)) { SetPlayerVirtualWorld(playerid, 1); return 1; }
    if (!strcmp(cmdtext, "/p2day", true)) { SetWorldTime(12); return 1; }
    if (!strcmp(cmdtext, "/p2night", true)) { SetWorldTime(22); return 1; }
    if (!strcmp(cmdtext, "/p2delete", true))
    {
        DestroyObject(gObject); DestroyObject(gTimed);
        gObject = gTimed = INVALID_OBJECT_ID;
        return 1;
    }
    if (!strcmp(cmdtext, "/p2create", true)) { CreateSmokeObjects(); return 1; }
    return 0;
}

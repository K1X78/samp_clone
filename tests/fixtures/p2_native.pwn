// Diagnostic fixture only. Never load this script in the normal game session.
// Project gamemode using the official 0.3.DL Pawn API.
// Class-camera setup follows the bundled bare.pwn example. Commands are
// gamemode callbacks, not DLL/server built-ins or injected test actions.
#include <a_samp>

new gCar = INVALID_VEHICLE_ID;
new gObject = INVALID_OBJECT_ID, gTimedObject = INVALID_OBJECT_ID;
new gCharacterDff[] = "fam1.dff", gCharacterTxd[] = "fam1.txd";
new gSignDff[] = "sign.dff", gSignTxd[] = "sign.txd";
new gBridgeDff[] = "bridge.dff", gBridgeTxd[] = "bridge.txd";
new gLastDownloadName[64], gRedirectURL[128];

main() {}

CreateWorldObjects()
{
    if (gObject != INVALID_OBJECT_ID) DestroyObject(gObject);
    if (gTimedObject != INVALID_OBJECT_ID) DestroyObject(gTimedObject);
    gObject = CreateObject(-1000, 1962.0, 1343.0, 15.0, 0.0, 0.0, 0.0, 250.0);
    gTimedObject = CreateObject(-1001, 1972.0, 1343.0, 15.0, 0.0, 0.0, 0.0, 250.0);
}

CreateCar()
{
    if (gCar != INVALID_VEHICLE_ID) DestroyVehicle(gCar);
    gCar = CreateVehicle(411, 1959.0, 1348.0, 15.5, 90.0, 3, 3, -1);
}

public OnGameModeInit()
{
    SetGameModeText("SA-MP 0.3.DL");
    AddCharModel(7, 20001, gCharacterDff, gCharacterTxd);
    AddSimpleModel(0, 19379, -1000, gSignDff, gSignTxd);
    AddSimpleModel(1, 19379, -1000, gBridgeDff, gBridgeTxd);
    AddSimpleModelTimed(-1, 19379, -1001, gBridgeDff, gBridgeTxd, 20, 6);
    AddPlayerClass(7, 1958.3783, 1343.1572, 15.3746, 270.0, 0, 0, 0, 0, 0, 0);
    AddPlayerClass(265, 1958.3783, 1343.1572, 15.3746, 270.0, 0, 0, 0, 0, 0, 0);
    SetWorldTime(12);
    CreateWorldObjects();
    CreateCar();
    return 1;
}

public OnPlayerFinishedDownloading(playerid, virtualworld)
{
    SendClientMessage(playerid, -1, "Downloads complete. Choose a character, then select Spawn.");
    return 1;
}

public OnPlayerRequestDownload(playerid, type, crc)
{
    gLastDownloadName[0] = '\0';
    if (type == 1) FindModelFileNameFromCRC(crc, gLastDownloadName, sizeof(gLastDownloadName));
    else if (type == 2) FindTextureFileNameFromCRC(crc, gLastDownloadName, sizeof(gLastDownloadName));
    if (strlen(gRedirectURL) && strlen(gLastDownloadName))
    {
        new url[192];
        strcat(url, gRedirectURL, sizeof(url));
        strcat(url, gLastDownloadName, sizeof(url));
        RedirectDownload(playerid, url);
        return 0;
    }
    return 1;
}

public OnPlayerRequestClass(playerid, classid)
{
    new skin = classid == 0 ? 20001 : 265;
    SetSpawnInfo(playerid, NO_TEAM, skin, 1958.3783, 1343.1572, 15.3746, 270.0, 0, 0, 0, 0, 0, 0);
    SetPlayerInterior(playerid, 14);
    SetPlayerPos(playerid, 258.4893, -41.4008, 1002.0234);
    SetPlayerFacingAngle(playerid, 270.0);
    SetPlayerCameraPos(playerid, 256.0815, -43.0475, 1004.0234);
    SetPlayerCameraLookAt(playerid, 258.4893, -41.4008, 1002.0234);
    return 1;
}

public OnPlayerSpawn(playerid)
{
    SetPlayerInterior(playerid, 0);
    TogglePlayerClock(playerid, 0);
    SendClientMessage(playerid, -1, "Welcome. Use /help for available commands.");
    return 1;
}

public OnPlayerCommandText(playerid, cmdtext[])
{
    if (!strcmp(cmdtext, "/help", true))
    {
        SendClientMessage(playerid, -1, "Vehicles: /car - create and enter an Infernus; /exitcar - leave; /deletecar - remove it while on foot.");
        SendClientMessage(playerid, -1, "Character: /skin - custom skin; /base - stock skin; /respawn - spawn again; /models - model information.");
        SendClientMessage(playerid, -1, "World: /day /night; /world0 /world1; /objects - recreate objects; /deleteobjects - remove objects.");
        SendClientMessage(playerid, -1, "Downloads: /redirect URL - configure a file URL ending in /; /direct - use direct transfers. /q - quit.");
        return 1;
    }
    if (!strcmp(cmdtext, "/respawn", true)) return SpawnPlayer(playerid);
    if (!strcmp(cmdtext, "/models", true))
    {
        if (GetPlayerCustomSkin(playerid) == 20001 && GetPlayerSkin(playerid) == 7)
            SendClientMessage(playerid, -1, "Official getters: custom skin 20001, base skin 7.");
        else SendClientMessage(playerid, -1, "Official getters: a stock/base skin is active.");
        if (strlen(gLastDownloadName)) SendClientMessage(playerid, -1, gLastDownloadName);
        return 1;
    }
    if (!strcmp(cmdtext, "/redirect ", true, 10))
    {
        strmid(gRedirectURL, cmdtext, 10, strlen(cmdtext), sizeof(gRedirectURL));
        return SendClientMessage(playerid, -1, "RedirectDownload enabled for later requests; URL must end with /.");
    }
    if (!strcmp(cmdtext, "/direct", true))
    {
        gRedirectURL[0] = '\0';
        return SendClientMessage(playerid, -1, "Direct model transfer enabled for later requests.");
    }
    if (!strcmp(cmdtext, "/day", true)) { SetWorldTime(12); return SendClientMessage(playerid, -1, "SetWorldTime: 12:00"); }
    if (!strcmp(cmdtext, "/night", true)) { SetWorldTime(22); return SendClientMessage(playerid, -1, "SetWorldTime: 22:00"); }
    if (!strcmp(cmdtext, "/skin", true)) { SetPlayerSkin(playerid, 20001); return SendClientMessage(playerid, -1, "SetPlayerSkin: custom 20001"); }
    if (!strcmp(cmdtext, "/base", true)) { SetPlayerSkin(playerid, 7); return SendClientMessage(playerid, -1, "SetPlayerSkin: base 7"); }
    if (!strcmp(cmdtext, "/world0", true)) { SetPlayerVirtualWorld(playerid, 0); return SendClientMessage(playerid, -1, "SetPlayerVirtualWorld: 0"); }
    if (!strcmp(cmdtext, "/world1", true)) { SetPlayerVirtualWorld(playerid, 1); return SendClientMessage(playerid, -1, "SetPlayerVirtualWorld: 1"); }
    if (!strcmp(cmdtext, "/objects", true)) { CreateWorldObjects(); return SendClientMessage(playerid, -1, "CreateObject: world objects recreated"); }
    if (!strcmp(cmdtext, "/deleteobjects", true))
    {
        DestroyObject(gObject); DestroyObject(gTimedObject);
        gObject = gTimedObject = INVALID_OBJECT_ID;
        return SendClientMessage(playerid, -1, "DestroyObject: world objects removed");
    }
    if (!strcmp(cmdtext, "/exitcar", true)) { RemovePlayerFromVehicle(playerid); return 1; }
    if (!strcmp(cmdtext, "/car", true) || !strcmp(cmdtext, "/deletecar", true))
    {
        new player_state = GetPlayerState(playerid);
        if (player_state == PLAYER_STATE_DRIVER || player_state == PLAYER_STATE_PASSENGER)
            return SendClientMessage(playerid, -1, "Exit the vehicle before deleting or recreating it.");
        if (!strcmp(cmdtext, "/deletecar", true))
        {
            DestroyVehicle(gCar); gCar = INVALID_VEHICLE_ID;
            return SendClientMessage(playerid, -1, "DestroyVehicle: car removed");
        }
        CreateCar();
        PutPlayerInVehicle(playerid, gCar, 0);
        return SendClientMessage(playerid, -1, "CreateVehicle and PutPlayerInVehicle: Infernus driver");
    }
    return 0;
}

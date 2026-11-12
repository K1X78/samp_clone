// GENERATED FILE - do not edit by hand.
// Regenerate with:  python tools/gen_id_tables.py
//
// Source evidence:
//   id sets  : docs/re/lane-a-rpc-table.json  (recovered from the official
//              samp.dll / samp-server.exe binaries)
//   names    : openmultiplayer/open.mp Shared/NetCode  (vocabulary only)

#pragma once

#include <array>
#include <cstdint>
#include <string_view>

namespace samp::proto {

// SA-MP remote procedure call identifiers.
// Ids are wire values.  The enumerator is the RPC name when the
// official binaries prove it; names taken from open.mp are marked
// 'unverified' and must not be treated as 0.3.7 semantics.
enum class RpcId : std::uint16_t {
    SetPlayerName = 11,
    SetPlayerPosition = 12,
    SetPlayerPositionFindZ = 13,  // unverified: open.mp name
    SetPlayerHealth = 14,
    TogglePlayerControllable = 15,  // unverified: open.mp name
    PlayerPlaySound = 16,
    SetWorldBounds = 17,  // unverified: open.mp name
    GivePlayerMoney = 18,  // unverified: open.mp name
    SetPlayerFacingAngle = 19,  // unverified: open.mp name
    ResetPlayerMoney = 20,  // unverified: open.mp name
    ResetPlayerWeapons = 21,  // unverified: open.mp name
    GivePlayerWeapon = 22,
    SetVehicleParams = 24,  // unverified: open.mp name
    PlayerConnect = 25,
    EnterVehicle = 26,  // unverified: open.mp name
    SA_MP_ConnResp_ServerNoResponse = 29,
    SA_MP_ConnResp_ServerFull = 31,
    SA_MP_ConnResp_Info = 32,
    SA_MP_ConnResp_PlayerId = 33,
    SA_MP_ConnResp_Rules = 34,
    SA_MP_ConnResp_EncryptInitFailed = 35,
    SA_MP_ConnResp_Banned = 36,
    SA_MP_ConnResp_BadPassword = 37,
    SetRaceCheckpoint = 38,  // unverified: open.mp name
    DisableRaceCheckpoint = 39,  // unverified: open.mp name
    PlayerClose = 40,
    PlayAudioStreamForPlayer = 41,  // unverified: open.mp name
    StopAudioStreamForPlayer = 42,  // unverified: open.mp name
    RemoveBuildingForPlayer = 43,  // unverified: open.mp name
    CreateObject = 44,  // unverified: open.mp name
    SetObjectPosition = 45,  // unverified: open.mp name
    SetObjectRotation = 46,  // unverified: open.mp name
    DestroyObject = 47,  // unverified: open.mp name
    SetPlayerVirtualWorld = 48,
    Unknown_049 = 49,
    PlayerRequestCommandMessage = 50,
    Unknown_051 = 51,
    PlayerSpawn = 52,  // unverified: open.mp name
    OnPlayerDeath = 53,
    NPCConnect = 54,
    SendDeathMessage = 55,  // unverified: open.mp name
    SetPlayerMapIcon = 56,
    RemoveVehicleComponent = 57,  // unverified: open.mp name
    PlayerHideTextLabel = 58,  // unverified: open.mp name
    SetPlayerChatBubble = 59,  // unverified: open.mp name
    SendGameTimeUpdate = 60,  // unverified: open.mp name
    ShowDialog = 61,  // unverified: open.mp name
    OnPlayerDialogResponse = 62,  // unverified: open.mp name
    PlayerDestroyPickup = 63,  // unverified: open.mp name
    Unknown_064 = 64,
    LinkVehicleToInterior = 65,  // unverified: open.mp name
    SetPlayerArmour = 66,
    SetPlayerArmedWeapon = 67,  // unverified: open.mp name
    SetSpawnInfo = 68,  // unverified: open.mp name
    SetPlayerTeam = 69,  // unverified: open.mp name
    PutPlayerInVehicle = 70,  // unverified: open.mp name
    RemovePlayerFromVehicle = 71,  // unverified: open.mp name
    SetPlayerColor = 72,  // unverified: open.mp name
    SendGameText = 73,
    ForcePlayerClassSelection = 74,
    AttachObjectToPlayer = 75,  // unverified: open.mp name
    PlayerInitMenu = 76,  // unverified: open.mp name
    PlayerShowMenu = 77,  // unverified: open.mp name
    PlayerHideMenu = 78,  // unverified: open.mp name
    CreateExplosion = 79,  // unverified: open.mp name
    ShowPlayerNameTagForPlayer = 80,  // unverified: open.mp name
    AttachCameraToObject = 81,  // unverified: open.mp name
    InterpolateCamera = 82,  // unverified: open.mp name
    OnPlayerSelectTextDraw = 83,  // unverified: open.mp name
    SetPlayerObjectMaterial = 84,  // unverified: open.mp name
    StopFlashGangZone = 85,  // unverified: open.mp name
    ApplyPlayerAnimation = 86,
    ClearPlayerTasks = 87,  // unverified: open.mp name
    SetPlayerSpecialAction = 88,  // unverified: open.mp name
    SetPlayerFightingStyle = 89,  // unverified: open.mp name
    SetPlayerVelocity = 90,  // unverified: open.mp name
    SetVehicleVelocity = 91,  // unverified: open.mp name
    Unknown_092 = 92,
    SendClientMessage = 93,
    SetPlayerWorldTime = 94,
    PlayerCreatePickup = 95,  // unverified: open.mp name
    Unknown_098 = 98,
    MoveObject = 99,  // unverified: open.mp name
    PlayerRequestChatMessage = 101,
    Unknown_102 = 102,
    EnableStuntBonusForPlayer = 104,  // unverified: open.mp name
    PlayerTextDrawSetString = 105,  // unverified: open.mp name
    SetVehicleDamageStatus = 106,  // unverified: open.mp name
    SetCheckpoint = 107,  // unverified: open.mp name
    ShowGangZone = 108,  // unverified: open.mp name
    ToggleWidescreen = 111,
    PlayCrimeReport = 112,  // unverified: open.mp name
    SetPlayerAttachedObject = 113,  // unverified: open.mp name
    OnPlayerGiveTakeDamage = 115,  // unverified: open.mp name
    OnPlayerInteriorChange = 118,  // unverified: open.mp name
    HideGangZone = 120,  // unverified: open.mp name
    FlashGangZone = 121,  // unverified: open.mp name
    StopObject = 122,  // unverified: open.mp name
    SetVehiclePlate = 123,  // unverified: open.mp name
    TogglePlayerSpectating = 124,  // unverified: open.mp name
    Unknown_125 = 125,
    PlayerSpectatePlayer = 126,  // unverified: open.mp name
    PlayerSpectateVehicle = 127,  // unverified: open.mp name
    PlayerRequestClass = 128,  // unverified: open.mp name
    Unknown_130 = 130,
    SetPlayerWantedLevel = 133,  // unverified: open.mp name
    PlayerShowTextDraw = 134,  // unverified: open.mp name
    PlayerHideTextDraw = 135,  // unverified: open.mp name
    PlayerJoin = 137,
    PlayerQuit = 138,
    PlayerInit = 139,
    RemovePlayerMapIcon = 144,  // verified: samp-server.exe 0x4be938
    SetPlayerAmmo = 145,  // unverified: open.mp name
    SetPlayerGravity = 146,  // verified: samp-server.exe 0x4bff38
    SetVehicleHealth = 147,  // unverified: open.mp name
    AttachTrailer = 148,  // unverified: open.mp name
    DetachTrailer = 149,  // unverified: open.mp name
    Unknown_150 = 150,
    SetPlayerSkin = 153,
    ExitVehicle = 154,  // unverified: open.mp name
    SetPlayerInterior = 156,
    SetPlayerCameraPosition = 157,  // unverified: open.mp name
    SetPlayerCameraLookAt = 158,  // unverified: open.mp name
    SetVehiclePosition = 159,  // unverified: open.mp name
    SetVehicleZAngle = 160,  // unverified: open.mp name
    Unknown_161 = 161,
    SetPlayerCameraBehindPlayer = 162,  // unverified: open.mp name
    PlayerStreamOut = 163,  // unverified: open.mp name
    StreamInVehicle = 164,  // unverified: open.mp name
    StreamOutVehicle = 165,  // unverified: open.mp name
    PlayerDeath = 166,  // unverified: open.mp name
    DisableRemoteVehicleCollisions = 167,
    Unknown_169 = 169,
    ApplyActorAnimationForPlayer = 173,  // unverified: open.mp name
    ClearActorAnimationsForPlayer = 174,  // unverified: open.mp name
    SetActorFacingAngleForPlayer = 175,  // unverified: open.mp name
    SetActorPosForPlayer = 176,  // unverified: open.mp name
    SetActorHealthForPlayer = 178,  // unverified: open.mp name
};

struct RpcInfo {
    RpcId id;
    std::string_view name;      // empty when the name is unknown
    std::string_view openmp;     // open.mp spelling, may differ
    bool name_from_binary;        // true => name proven by the binaries
};

inline constexpr std::array<RpcInfo, 138> kRpcTable{{
    {RpcId::SetPlayerName, "SetPlayerName", "SetPlayerName", true},
    {RpcId::SetPlayerPosition, "SetPlayerPosition", "SetPlayerPosition", true},
    {RpcId::SetPlayerPositionFindZ, "", "SetPlayerPositionFindZ", false},
    {RpcId::SetPlayerHealth, "SetPlayerHealth", "SetPlayerHealth", true},
    {RpcId::TogglePlayerControllable, "", "TogglePlayerControllable", false},
    {RpcId::PlayerPlaySound, "PlayerPlaySound", "PlayerPlaySound", true},
    {RpcId::SetWorldBounds, "", "SetWorldBounds", false},
    {RpcId::GivePlayerMoney, "", "GivePlayerMoney", false},
    {RpcId::SetPlayerFacingAngle, "", "SetPlayerFacingAngle", false},
    {RpcId::ResetPlayerMoney, "", "ResetPlayerMoney", false},
    {RpcId::ResetPlayerWeapons, "", "ResetPlayerWeapons", false},
    {RpcId::GivePlayerWeapon, "GivePlayerWeapon", "GivePlayerWeapon", true},
    {RpcId::SetVehicleParams, "", "SetVehicleParams", false},
    {RpcId::PlayerConnect, "PlayerConnect", "PlayerConnect", true},
    {RpcId::EnterVehicle, "", "EnterVehicle", false},
    {RpcId::SA_MP_ConnResp_ServerNoResponse, "SA-MP_ConnResp_ServerNoResponse", "SetPlayerTime", true},
    {RpcId::SA_MP_ConnResp_ServerFull, "SA-MP_ConnResp_ServerFull", "", true},
    {RpcId::SA_MP_ConnResp_Info, "SA-MP_ConnResp_Info", "PlayerStreamIn", true},
    {RpcId::SA_MP_ConnResp_PlayerId, "SA-MP_ConnResp_PlayerId", "SetPlayerShopName", true},
    {RpcId::SA_MP_ConnResp_Rules, "SA-MP_ConnResp_Rules", "SetPlayerSkillLevel", true},
    {RpcId::SA_MP_ConnResp_EncryptInitFailed, "SA-MP_ConnResp_EncryptInitFailed", "SetPlayerDrunkLevel", true},
    {RpcId::SA_MP_ConnResp_Banned, "SA-MP_ConnResp_Banned", "PlayerShowTextLabel", true},
    {RpcId::SA_MP_ConnResp_BadPassword, "SA-MP_ConnResp_BadPassword", "DisableCheckpoint", true},
    {RpcId::SetRaceCheckpoint, "", "SetRaceCheckpoint", false},
    {RpcId::DisableRaceCheckpoint, "", "DisableRaceCheckpoint", false},
    {RpcId::PlayerClose, "PlayerClose", "PlayerClose", true},
    {RpcId::PlayAudioStreamForPlayer, "", "PlayAudioStreamForPlayer", false},
    {RpcId::StopAudioStreamForPlayer, "", "StopAudioStreamForPlayer", false},
    {RpcId::RemoveBuildingForPlayer, "", "RemoveBuildingForPlayer", false},
    {RpcId::CreateObject, "", "CreateObject", false},
    {RpcId::SetObjectPosition, "", "SetObjectPosition", false},
    {RpcId::SetObjectRotation, "", "SetObjectRotation", false},
    {RpcId::DestroyObject, "", "DestroyObject", false},
    {RpcId::SetPlayerVirtualWorld, "SetPlayerVirtualWorld", "SetPlayerVirtualWorld", true},
    {RpcId::Unknown_049, "", "", false},
    {RpcId::PlayerRequestCommandMessage, "PlayerRequestCommandMessage", "PlayerCommandMessage", true},
    {RpcId::Unknown_051, "", "", false},
    {RpcId::PlayerSpawn, "", "PlayerSpawn", false},
    {RpcId::OnPlayerDeath, "OnPlayerDeath", "OnPlayerDeath", true},
    {RpcId::NPCConnect, "NPCConnect", "NPCConnect", true},
    {RpcId::SendDeathMessage, "", "SendDeathMessage", false},
    {RpcId::SetPlayerMapIcon, "SetPlayerMapIcon", "SetPlayerMapIcon", true},
    {RpcId::RemoveVehicleComponent, "", "RemoveVehicleComponent", false},
    {RpcId::PlayerHideTextLabel, "", "PlayerHideTextLabel", false},
    {RpcId::SetPlayerChatBubble, "", "SetPlayerChatBubble", false},
    {RpcId::SendGameTimeUpdate, "", "SendGameTimeUpdate", false},
    {RpcId::ShowDialog, "", "ShowDialog", false},
    {RpcId::OnPlayerDialogResponse, "", "OnPlayerDialogResponse", false},
    {RpcId::PlayerDestroyPickup, "", "PlayerDestroyPickup", false},
    {RpcId::Unknown_064, "", "", false},
    {RpcId::LinkVehicleToInterior, "", "LinkVehicleToInterior", false},
    {RpcId::SetPlayerArmour, "SetPlayerArmour", "SetPlayerArmour", true},
    {RpcId::SetPlayerArmedWeapon, "", "SetPlayerArmedWeapon", false},
    {RpcId::SetSpawnInfo, "", "SetSpawnInfo", false},
    {RpcId::SetPlayerTeam, "", "SetPlayerTeam", false},
    {RpcId::PutPlayerInVehicle, "", "PutPlayerInVehicle", false},
    {RpcId::RemovePlayerFromVehicle, "", "RemovePlayerFromVehicle", false},
    {RpcId::SetPlayerColor, "", "SetPlayerColor", false},
    {RpcId::SendGameText, "SendGameText", "SendGameText", true},
    {RpcId::ForcePlayerClassSelection, "ForcePlayerClassSelection", "ForcePlayerClassSelection", true},
    {RpcId::AttachObjectToPlayer, "", "AttachObjectToPlayer", false},
    {RpcId::PlayerInitMenu, "", "PlayerInitMenu", false},
    {RpcId::PlayerShowMenu, "", "PlayerShowMenu", false},
    {RpcId::PlayerHideMenu, "", "PlayerHideMenu", false},
    {RpcId::CreateExplosion, "", "CreateExplosion", false},
    {RpcId::ShowPlayerNameTagForPlayer, "", "ShowPlayerNameTagForPlayer", false},
    {RpcId::AttachCameraToObject, "", "AttachCameraToObject", false},
    {RpcId::InterpolateCamera, "", "InterpolateCamera", false},
    {RpcId::OnPlayerSelectTextDraw, "", "OnPlayerSelectTextDraw", false},
    {RpcId::SetPlayerObjectMaterial, "", "SetPlayerObjectMaterial", false},
    {RpcId::StopFlashGangZone, "", "StopFlashGangZone", false},
    {RpcId::ApplyPlayerAnimation, "ApplyPlayerAnimation", "ApplyPlayerAnimation", true},
    {RpcId::ClearPlayerTasks, "", "ClearPlayerTasks", false},
    {RpcId::SetPlayerSpecialAction, "", "SetPlayerSpecialAction", false},
    {RpcId::SetPlayerFightingStyle, "", "SetPlayerFightingStyle", false},
    {RpcId::SetPlayerVelocity, "", "SetPlayerVelocity", false},
    {RpcId::SetVehicleVelocity, "", "SetVehicleVelocity", false},
    {RpcId::Unknown_092, "", "", false},
    {RpcId::SendClientMessage, "SendClientMessage", "SendClientMessage", true},
    {RpcId::SetPlayerWorldTime, "SetPlayerWorldTime", "SetPlayerWorldTime", true},
    {RpcId::PlayerCreatePickup, "", "PlayerCreatePickup", false},
    {RpcId::Unknown_098, "", "", false},
    {RpcId::MoveObject, "", "MoveObject", false},
    {RpcId::PlayerRequestChatMessage, "PlayerRequestChatMessage", "PlayerChatMessage", true},
    {RpcId::Unknown_102, "", "", false},
    {RpcId::EnableStuntBonusForPlayer, "", "EnableStuntBonusForPlayer", false},
    {RpcId::PlayerTextDrawSetString, "", "PlayerTextDrawSetString", false},
    {RpcId::SetVehicleDamageStatus, "", "SetVehicleDamageStatus", false},
    {RpcId::SetCheckpoint, "", "SetCheckpoint", false},
    {RpcId::ShowGangZone, "", "ShowGangZone", false},
    {RpcId::ToggleWidescreen, "ToggleWidescreen", "ToggleWidescreen", true},
    {RpcId::PlayCrimeReport, "", "PlayCrimeReport", false},
    {RpcId::SetPlayerAttachedObject, "", "SetPlayerAttachedObject", false},
    {RpcId::OnPlayerGiveTakeDamage, "", "OnPlayerGiveTakeDamage", false},
    {RpcId::OnPlayerInteriorChange, "", "OnPlayerInteriorChange", false},
    {RpcId::HideGangZone, "", "HideGangZone", false},
    {RpcId::FlashGangZone, "", "FlashGangZone", false},
    {RpcId::StopObject, "", "StopObject", false},
    {RpcId::SetVehiclePlate, "", "SetVehiclePlate", false},
    {RpcId::TogglePlayerSpectating, "", "TogglePlayerSpectating", false},
    {RpcId::Unknown_125, "", "", false},
    {RpcId::PlayerSpectatePlayer, "", "PlayerSpectatePlayer", false},
    {RpcId::PlayerSpectateVehicle, "", "PlayerSpectateVehicle", false},
    {RpcId::PlayerRequestClass, "", "PlayerRequestClass", false},
    {RpcId::Unknown_130, "", "", false},
    {RpcId::SetPlayerWantedLevel, "", "SetPlayerWantedLevel", false},
    {RpcId::PlayerShowTextDraw, "", "PlayerShowTextDraw", false},
    {RpcId::PlayerHideTextDraw, "", "PlayerHideTextDraw", false},
    {RpcId::PlayerJoin, "PlayerJoin", "PlayerJoin", true},
    {RpcId::PlayerQuit, "PlayerQuit", "PlayerQuit", true},
    {RpcId::PlayerInit, "PlayerInit", "PlayerInit", true},
    {RpcId::RemovePlayerMapIcon, "", "RemovePlayerMapIcon", false},
    {RpcId::SetPlayerAmmo, "", "SetPlayerAmmo", false},
    {RpcId::SetPlayerGravity, "", "SetPlayerGravity", false},
    {RpcId::SetVehicleHealth, "", "SetVehicleHealth", false},
    {RpcId::AttachTrailer, "", "AttachTrailer", false},
    {RpcId::DetachTrailer, "", "DetachTrailer", false},
    {RpcId::Unknown_150, "", "", false},
    {RpcId::SetPlayerSkin, "SetPlayerSkin", "SetPlayerSkin", true},
    {RpcId::ExitVehicle, "", "ExitVehicle", false},
    {RpcId::SetPlayerInterior, "SetPlayerInterior", "SetPlayerInterior", true},
    {RpcId::SetPlayerCameraPosition, "", "SetPlayerCameraPosition", false},
    {RpcId::SetPlayerCameraLookAt, "", "SetPlayerCameraLookAt", false},
    {RpcId::SetVehiclePosition, "", "SetVehiclePosition", false},
    {RpcId::SetVehicleZAngle, "", "SetVehicleZAngle", false},
    {RpcId::Unknown_161, "", "", false},
    {RpcId::SetPlayerCameraBehindPlayer, "", "SetPlayerCameraBehindPlayer", false},
    {RpcId::PlayerStreamOut, "", "PlayerStreamOut", false},
    {RpcId::StreamInVehicle, "", "StreamInVehicle", false},
    {RpcId::StreamOutVehicle, "", "StreamOutVehicle", false},
    {RpcId::PlayerDeath, "", "PlayerDeath", false},
    {RpcId::DisableRemoteVehicleCollisions, "DisableRemoteVehicleCollisions", "DisableRemoteVehicleCollisions", true},
    {RpcId::Unknown_169, "", "", false},
    {RpcId::ApplyActorAnimationForPlayer, "", "ApplyActorAnimationForPlayer", false},
    {RpcId::ClearActorAnimationsForPlayer, "", "ClearActorAnimationsForPlayer", false},
    {RpcId::SetActorFacingAngleForPlayer, "", "SetActorFacingAngleForPlayer", false},
    {RpcId::SetActorPosForPlayer, "", "SetActorPosForPlayer", false},
    {RpcId::SetActorHealthForPlayer, "", "SetActorHealthForPlayer", false},
}};

inline constexpr std::size_t kRpcCount = kRpcTable.size();
inline constexpr std::size_t kNamedRpcCount = 34;
inline constexpr std::size_t kUnnamedRpcCount = 104;

}  // namespace samp::proto

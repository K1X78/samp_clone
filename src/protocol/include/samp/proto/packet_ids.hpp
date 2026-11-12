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

// SA-MP in-game synchronisation packet identifiers.
// These ride the RakNet 'sync packet' ordering channel.
enum class PacketId : std::uint16_t {
    ID_VEHICLE_SYNC = 200,
    ID_RCON_COMMAND = 201,
    ID_RCON_RESPONCE = 202,
    ID_AIM_SYNC = 203,
    ID_WEAPONS_UPDATE = 204,
    ID_STATS_UPDATE = 205,
    PlayerBulletSync = 206,
    ID_PLAYER_SYNC = 207,
    PlayerMarkersSync = 208,
    ID_UNOCCUPIED_SYNC = 209,
    ID_TRAILER_SYNC = 210,
    ID_PASSENGER_SYNC = 211,
    ID_SPECTATOR_SYNC = 212,
};

struct PacketInfo {
    PacketId id;
    std::string_view name;
    std::string_view openmp;
};

inline constexpr std::array<PacketInfo, 13> kPacketTable{{
    {PacketId::ID_VEHICLE_SYNC, "ID_VEHICLE_SYNC", "PlayerVehicleSync"},
    {PacketId::ID_RCON_COMMAND, "ID_RCON_COMMAND", "PlayerRconCommand"},
    {PacketId::ID_RCON_RESPONCE, "ID_RCON_RESPONCE", ""},
    {PacketId::ID_AIM_SYNC, "ID_AIM_SYNC", "PlayerAimSync"},
    {PacketId::ID_WEAPONS_UPDATE, "ID_WEAPONS_UPDATE", "PlayerWeaponsUpdate"},
    {PacketId::ID_STATS_UPDATE, "ID_STATS_UPDATE", "PlayerStatsSync"},
    {PacketId::PlayerBulletSync, "PlayerBulletSync", "PlayerBulletSync"},
    {PacketId::ID_PLAYER_SYNC, "ID_PLAYER_SYNC", "PlayerFootSync"},
    {PacketId::PlayerMarkersSync, "PlayerMarkersSync", "PlayerMarkersSync"},
    {PacketId::ID_UNOCCUPIED_SYNC, "ID_UNOCCUPIED_SYNC", "PlayerUnoccupiedSync"},
    {PacketId::ID_TRAILER_SYNC, "ID_TRAILER_SYNC", "PlayerTrailerSync"},
    {PacketId::ID_PASSENGER_SYNC, "ID_PASSENGER_SYNC", "PlayerPassengerSync"},
    {PacketId::ID_SPECTATOR_SYNC, "ID_SPECTATOR_SYNC", "PlayerSpectatorSync"},
}};

inline constexpr std::size_t kPacketCount = kPacketTable.size();

}  // namespace samp::proto

#pragma once
#include "samp/client/camera_rpc.hpp"
#include <variant>
#include <string>

namespace samp::client {
struct PlayerPosition { std::array<std::uint32_t,3> coordinates; bool find_ground_z=false; };
struct PlayerHeading { std::uint32_t angle; };
struct PlayerAttribute {
    enum class Kind { Health, Armour, GiveMoney, ResetMoney, GiveWeapon, ResetWeapons, ArmedWeapon, Velocity };
    Kind kind;
    std::uint32_t value = 0, amount = 0;
    std::array<float,3> velocity{};
};
struct PlayerSkin { int player_id=-1; std::uint32_t base=0,custom=0; };
struct PlayerInterior { std::uint8_t interior; };
struct GameTextCommand { std::uint32_t style=0,time=0; std::string text; };
// samp.dll 0x100109d0: the server streamed a player in with the RPC 32 and
// the client creates its ped in a free player slot (samp.dll 0x1009ff50
// scans the slots 2..0xd1, the wrapper constructor is 0x100b08e0).
struct RemotePlayerStream {
    int player_id = -1;
    std::uint32_t model = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    float angle = 0.0f;
    std::uint32_t custom_model = 0;
};
// samp.dll 0x1000a420: the packet 207 of a player whose ped exists; the
// position of the sync block is applied to the ped.
struct RemotePlayerUpdate {
    int player_id = -1;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    float angle = 0.0f;
    float health = 100.0f, armour = 0.0f;
    float velocity_x = 0.0f, velocity_y = 0.0f, velocity_z = 0.0f;
    float qw = 1.0f, qx = 0.0f, qy = 0.0f, qz = 0.0f;
    std::uint16_t keys = 0, left_right = 0, up_down = 0;
    std::uint8_t weapon = 0;
};
// samp.dll 0x10010ce0 (RPC 163 stream out) and 0x1000fd40 (quit):
// the ped of the player is destroyed; the pool entry follows the quit.
struct RemotePlayerDeath { int player_id=-1; };
struct RemotePlayerDespawn { int player_id = -1; };
struct VehicleSpawnCommand {
    std::uint16_t id=0;
    std::uint32_t model=0;
    float x=0,y=0,z=0,angle=0,health=1000;
    std::uint8_t colour1=255,colour2=255,interior=0;
    bool siren=false;
};
struct VehicleAttributeCommand {
    enum class Kind { Position, Health, Interior };
    Kind kind;
    std::uint16_t id=0;
    std::array<float,3> position{};
    float health=1000;
    std::uint8_t interior=0;
};
struct VehicleRemoveCommand { std::uint16_t id=0; };
struct VehicleTransformCommand {
    std::uint16_t id=0;
    int player_id=-1;
    std::uint8_t seat=0;
    std::uint16_t keys=0,left_right=0,up_down=0;
    std::uint8_t weapon=0;
    float player_health=100,player_armour=0;
    std::array<float,3> position{},velocity{};
    std::array<float,4> rotation{1,0,0,0};
    float health=1000;
};
struct PlayerVehicleCommand { std::uint16_t id=0; std::uint8_t seat=0; bool remove=false; };
struct RemoteAimCommand { int player_id=-1; std::array<std::uint8_t,31> data{}; };
struct RemoteBulletCommand { int player_id=-1; std::array<std::uint8_t,40> data{}; };
struct RemotePlayersReset {};
using GameCommand=std::variant<CameraCommand,PlayerPosition,PlayerHeading,PlayerInterior,PlayerAttribute,
                               RemotePlayerStream,RemotePlayerUpdate,RemotePlayerDespawn,RemotePlayersReset,
                               VehicleSpawnCommand,VehicleRemoveCommand,VehicleTransformCommand,PlayerVehicleCommand,
                               RemoteAimCommand,RemoteBulletCommand,VehicleAttributeCommand,RemotePlayerDeath,PlayerSkin,GameTextCommand>;
}

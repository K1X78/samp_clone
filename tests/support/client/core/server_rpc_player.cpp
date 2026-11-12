// The player state RPCs of the SA-MP 0.3.DL client.
//
// Every payload order and every "only when the pool entry exists" guard comes
// from the official handler named in the comment and its instructions in
// docs/asm/pseudocode/samp.dll and on-demand PE disassembly. The handlers
// never create a player or a vehicle the server has not announced: the official
// code looks the pool entry up and returns when it is absent.
#include "samp/client/server_rpc.hpp"
#include "samp/proto/encoders.hpp"

#include <bit>
#include <cstring>

namespace samp::client {
namespace {


}  // namespace

// 0x1001da90: playerid (16), name length (8), name, success (8).  The official
// handler stops before the name when the length reaches 0x19.  A successful
// rename of a streamed player is applied, and the local player is renamed even
// when the server refused the change of another player.
// Official: FUN_1001da90 @ 0x1001da90 (samp.dll)
bool rpc_set_player_name(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t length = 0;
    if (!in.read(&(id),2) || !in.read(&(length),1)) {
        return false;
    }
    if (length >= 0x19) {
        return true;
    }
    std::string name(length, '\0');
    if (length > 0 && !in.read(name.data(), length)) {
        return false;
    }
    std::uint8_t success = 0;
    if (!in.read(&(success),1)) {
        return false;
    }
    // The official handler null terminates the buffer and then measures it, so
    // an embedded zero ends the name.
    const std::size_t terminator = name.find('\0');
    if (terminator != std::string::npos) {
        name.resize(terminator);
    }
    if (success == 1 && id < 0x3ed) {
        WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr);
        if (player != nullptr) {
            player->name = name;
        }
    }
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        context.world.stream.local.id = id;
        context.world.stream.local.name = name;
        if (context.local_player_name != nullptr) {
            *context.local_player_name = name;
        }
    }
    return true;
}

// RPC153 carries player16, stock/base32 and custom32. The real GTA adapter
// resolves the downloaded clump and keeps the base skin on loading failure.
// Official: FUN_10018c80 @ 0x10018c80 (samp.dll)
bool rpc_set_player_skin(ServerRpcContext& context,samp::proto::BitStream& in) {
    std::uint16_t id=0;std::uint32_t base=0,custom=0;
    if(!in.read(&id,2) || !in.read(&base,4) || !in.read(&custom,4)) return false;
    if(id==context.local_player_id) {
        if(context.commands) context.commands->emplace_back(PlayerSkin{id,base,custom});
    } else if(id<1004) {
        const auto found=context.world.players_.find(id);
        if(found!=context.world.players_.end() && found->second.streamed_in) {
            found->second.skin=base;found->second.custom_model=custom;
            if(context.commands) context.commands->emplace_back(PlayerSkin{id,base,custom});
        }
    }
    return true;
}

// 0x10018e50: x, y, z.  The official handler resets the collision flags and the
// velocity of the local ped before it teleports it.
// Official: FUN_10018e50 @ 0x10018e50 (samp.dll)
bool rpc_set_player_position(ServerRpcContext& context, samp::proto::BitStream& in) {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    local.x = x;
    local.y = y;
    local.z = z;
    local.find_ground_z = false;
    local.velocity_x = 0.0f;
    local.velocity_y = 0.0f;
    local.velocity_z = 0.0f;
    if (context.commands != nullptr) {
        context.commands->emplace_back(PlayerPosition{{std::bit_cast<std::uint32_t>(x),
            std::bit_cast<std::uint32_t>(y),std::bit_cast<std::uint32_t>(z)}});
    }
    return true;
}

// 0x1001a0d0: SetPlayerFacingAngle, one 32-bit float.
// Official: FUN_1001a0d0 @ 0x1001a0d0 (samp.dll)
bool rpc_set_player_facing_angle(ServerRpcContext& context, samp::proto::BitStream& in) {
    float angle=0.0f;
    if(!in.read(&(angle),4)) return false;
    if(context.commands!=nullptr)
        context.commands->emplace_back(PlayerHeading{std::bit_cast<std::uint32_t>(angle)});
    return true;
}

// 0x10018f70: the same three floats, but the server did not know the ground
// height.  The official handler asks CWorld::FindGroundZFor3DCoord for the
// height and adds 1.5.  The game layer resolves that from the flag; the core
// keeps the position of the payload.
// Official: FUN_10018f70 @ 0x10018f70 (samp.dll)
bool rpc_set_player_position_find_z(ServerRpcContext& context, samp::proto::BitStream& in) {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    local.x = x;
    local.y = y;
    local.z = z;
    local.find_ground_z = true;
    local.velocity_x = 0.0f;
    local.velocity_y = 0.0f;
    local.velocity_z = 0.0f;
    if (context.commands != nullptr) {
        context.commands->emplace_back(PlayerPosition{{std::bit_cast<std::uint32_t>(x),
            std::bit_cast<std::uint32_t>(y),std::bit_cast<std::uint32_t>(z)},true});
    }
    return true;
}

// 0x10019080: SetPlayerHealth, one float.
// Official: FUN_10019080 @ 0x10019080 (samp.dll)
bool rpc_set_player_health(ServerRpcContext& context, samp::proto::BitStream& in) {
    float health = 0.0f;
    if (!in.read(&(health),4)) {
        return false;
    }
    context.world.stream.local.health = health;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::Health, std::bit_cast<std::uint32_t>(health)});
    return true;
}

// 0x10019dc0: TogglePlayerControllable, one byte.
// Official: FUN_10019dc0 @ 0x10019dc0 (samp.dll)
bool rpc_toggle_player_controllable(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t controllable = 0;
    if (!in.read(&(controllable),1)) {
        return false;
    }
    context.world.stream.local.controllable = controllable != 0;
    return true;
}

// 0x10019e60: PlaySound, sound id (32) then the position (three floats).
// Official: FUN_10019e60 @ 0x10019e60 (samp.dll)
bool rpc_player_play_sound(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t sound = 0;
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(sound),4) || !in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    local.last_sound_id = sound;
    local.sound_x = x;
    local.sound_y = y;
    local.sound_z = z;
    return true;
}

// 0x10019f40: SetWorldBounds, four floats written straight into the game.
// Official: FUN_10019f40 @ 0x10019f40 (samp.dll)
bool rpc_set_world_bounds(ServerRpcContext& context, samp::proto::BitStream& in) {
    WorldBoundsState bounds;
    if (!in.read(&(bounds.min_x),4) || !in.read(&(bounds.min_y),4) ||
        !in.read(&(bounds.max_x),4) || !in.read(&(bounds.max_y),4)) {
        return false;
    }
    bounds.set = true;
    context.world.stream.world_bounds = bounds;
    return true;
}

// 0x1001a030: GivePlayerMoney, a signed amount added to the current money.
// Official: FUN_1001a030 @ 0x1001a030 (samp.dll)
bool rpc_give_player_money(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::int32_t amount = 0;
    std::uint32_t raw_amount = 0;
    if (!in.read(&(raw_amount),4)) {
        return false;
    }
    amount = static_cast<std::int32_t>(raw_amount);
    context.world.stream.local.money = static_cast<std::int32_t>(static_cast<std::uint32_t>(context.world.stream.local.money) + raw_amount);
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::GiveMoney, raw_amount});
    return true;
}

// ResetPlayerMoney carries no payload.
// Official: FUN_10017ba0 @ 0x10017ba0 (samp.dll)
bool rpc_reset_player_money(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    context.world.stream.local.money = 0;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::ResetMoney});
    return true;
}

// ResetPlayerWeapons carries no payload.
// Official: FUN_10017bb0 @ 0x10017bb0 (samp.dll)
bool rpc_reset_player_weapons(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    auto& local = context.world.stream.local;
    local.weapon = 0;
    local.ammo = 0;
    local.armed_weapon = 0;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::ResetWeapons});
    return true;
}

// 0x1001a170: GivePlayerWeapon, weapon (32) and ammunition (32).
// Official: FUN_1001a170 @ 0x1001a170 (samp.dll)
bool rpc_give_player_weapon(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t weapon = 0, ammo = 0;
    if (!in.read(&(weapon),4) || !in.read(&(ammo),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    local.weapon = weapon;
    local.ammo = ammo;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::GiveWeapon, weapon, ammo});
    return true;
}

// 0x1001d780: SetPlayerVirtualWorld (32).  The official handler writes the
// world only when it differs, and then clears the two collision flags the game
// keeps next to it.
// Official: FUN_1001d780 @ 0x1001d780 (samp.dll)
bool rpc_set_player_virtual_world(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t world = 0;
    if (!in.read(&(world),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    if (local.virtual_world != world) {
        local.virtual_world = world;
        local.virtual_world_flags = 0;
    }
    return true;
}

// 0x1001a690: SetPlayerArmour, one float.
// Official: FUN_1001a690 @ 0x1001a690 (samp.dll)
bool rpc_set_player_armour(ServerRpcContext& context, samp::proto::BitStream& in) {
    float armour = 0.0f;
    if (!in.read(&(armour),4)) {
        return false;
    }
    context.world.stream.local.armour = armour;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::Armour, std::bit_cast<std::uint32_t>(armour)});
    return true;
}

// 0x10018950: SetPlayerArmedWeapon (32), applied only for 0..0x2e.
// Official: FUN_10018950 @ 0x10018950 (samp.dll)
bool rpc_set_player_armed_weapon(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t weapon = 0;
    if (!in.read(&(weapon),4)) {
        return false;
    }
    if (weapon < 0x2f) {
        context.world.stream.local.armed_weapon = weapon;
        if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::ArmedWeapon, weapon});
    }
    return true;
}

// 0x10019240: SetPlayerTeam, playerid (16) and team (8).
// Official: FUN_10019240 @ 0x10019240 (samp.dll)
bool rpc_set_player_team(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t team = 0;
    if (!in.read(&(id),2) || !in.read(&(team),1)) {
        return false;
    }
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        context.world.stream.local.team = team;
    } else if (WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr)) {
        player->team = team;
    }
    return true;
}

// 0x10019330: SetPlayerColor, playerid (16) and colour (32).
// Official: FUN_10019330 @ 0x10019330 (samp.dll)
bool rpc_set_player_colour(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint32_t colour = 0;
    if (!in.read(&(id),2) || !in.read(&(colour),4)) {
        return false;
    }
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        context.world.stream.local.colour = colour;
        if (context.local_player_colour != nullptr) {
            *context.local_player_colour = colour;
        }
    } else if (WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr)) {
        player->colour = colour;
    }
    return true;
}

// ForceClassSelection carries no payload.
// Official: FUN_10017be0 @ 0x10017be0 (samp.dll)
bool rpc_force_class_selection(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    context.world.selected_class_ = -1;
    context.world.stream.force_class_selection = true;
    return true;
}

// 0x100181a0: SetPlayerSpecialAction, the action byte, only while the player
// pool exists.
// Official: FUN_100181a0 @ 0x100181a0 (samp.dll)
bool rpc_set_player_special_action(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t action = 0;
    if (!in.read(&(action),1)) {
        return false;
    }
    context.world.stream.local.special_action = action;
    return true;
}

// 0x10018250: SetPlayerFightingStyle, playerid (16) and style (8).
// Official: FUN_10018250 @ 0x10018250 (samp.dll)
bool rpc_set_player_fighting_style(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t style = 0;
    if (!in.read(&(id),2) || !in.read(&(style),1)) {
        return false;
    }
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        context.world.stream.local.fighting_style = style;
    } else if (WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr)) {
        player->fighting_style = style;
    }
    return true;
}

// 0x10018350: SetPlayerVelocity, three floats.  The official handler clears the
// collision flags of the local ped and then writes the velocity.
// Official: FUN_10018350 @ 0x10018350 (samp.dll)
bool rpc_set_player_velocity(ServerRpcContext& context, samp::proto::BitStream& in) {
    float x = 0.0f, y = 0.0f, z = 0.0f;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4)) {
        return false;
    }
    auto& local = context.world.stream.local;
    local.velocity_x = x;
    local.velocity_y = y;
    local.velocity_z = z;
    if (context.commands) context.commands->emplace_back(PlayerAttribute{PlayerAttribute::Kind::Velocity, 0, 0, {x,y,z}});
    return true;
}

// 0x10019530: SetPlayerInterior, one byte.
// Official: FUN_10019530 @ 0x10019530 (samp.dll)
bool rpc_set_player_interior(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t interior = 0;
    if (!in.read(&(interior),1)) {
        return false;
    }
    context.world.stream.local.interior = interior;
    if(context.commands!=nullptr) context.commands->emplace_back(PlayerInterior{interior});
    return true;
}

// 0x1001a480: ApplyAnimation, playerid (16), library (8 bit length),
// name (8 bit length), delta (32), four one bit flags, time (32).
// Official: FUN_1001a480 @ 0x1001a480 (samp.dll)
bool rpc_apply_animation(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::string library, name;
    std::uint32_t delta = 0, time = 0;
    bool loop = false, lock_x = false, lock_y = false, freeze = false;
    std::uint8_t library_length=0;
    if (!in.read(&(id),2) || !in.read(&library_length,sizeof(library_length)) ||
        static_cast<std::size_t>(library_length)>
            ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        return false;
    }
    library.assign(library_length,'\0');
    if(library_length!=0 && !in.read(library.data(),library_length)) return false;
    std::uint8_t name_length=0;
    if(!in.read(&name_length,sizeof(name_length)) ||
       static_cast<std::size_t>(name_length)>
           ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) return false;
    name.assign(name_length,'\0');
    if(name_length!=0 && !in.read(name.data(),name_length)) return false;
    if(!in.read(&(delta),4)) return false;
    loop = in.readBit();
    lock_x = in.readBit();
    lock_y = in.readBit();
    freeze = in.readBit();
    if (!in.read(&(time),4)) {
        return false;
    }
    (void)delta;
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        auto& local = context.world.stream.local;
        local.animation_library = library;
        local.animation_name = name;
        local.animation_loop = loop;
        local.animation_lock_x = lock_x;
        local.animation_lock_y = lock_y;
        local.animation_freeze = freeze;
        local.animation_time = time;
        return true;
    }
    WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr);
    if (player == nullptr) {
        return true;
    }
    player->animation_library = library;
    player->animation_name = name;
    player->animation_loop = loop;
    player->animation_lock_x = lock_x;
    player->animation_lock_y = lock_y;
    player->animation_freeze = freeze;
    player->animation_time = time;
    player->animation_applied = true;
    return true;
}

// 0x10018090: ClearAnimations, playerid (16).
// Official: FUN_10018090 @ 0x10018090 (samp.dll)
bool rpc_clear_animations(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    if ((context.local_player_id >= 0 && id == static_cast<std::uint16_t>(context.local_player_id))) {
        auto& local = context.world.stream.local;
        local.animation_library.clear();
        local.animation_name.clear();
        local.animation_loop = false;
        local.animation_lock_x = false;
        local.animation_lock_y = false;
        local.animation_freeze = false;
        return true;
    }
    WorldPlayer* player = ((id < 0x3ed && context.world.players_.contains(static_cast<int>(id))) ? &context.world.players_.at(static_cast<int>(id)) : nullptr);
    if (player != nullptr) {
        player->animation_library.clear();
        player->animation_name.clear();
        player->animation_applied = false;
    }
    return true;
}

// 0x100185c0: TogglePlayerWidescreen, one byte.
// Official: FUN_100185c0 @ 0x100185c0 (samp.dll)
bool rpc_toggle_widescreen(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t wide = 0;
    if (!in.read(&(wide),1)) {
        return false;
    }
    context.world.stream.widescreen = wide != 0;
    context.world.stream.local.widescreen = wide != 0;
    return true;
}

// 0x1000fe00: SetWorldTime, the minute of the day (32).
// Official: FUN_1000fe00 @ 0x1000fe00 (samp.dll)
bool rpc_set_world_time(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t minutes = 0;
    if (!in.read(&(minutes),4)) {
        return false;
    }
    context.world.stream.world_time_minutes = minutes;
    return true;
}

// 0x1000f240: SetWeather, the weather id (8).
// Official: FUN_1000f240 @ 0x1000f240 (samp.dll)
bool rpc_set_weather(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t weather = 0;
    if (!in.read(&(weather),1)) {
        return false;
    }
    context.world.stream.weather = weather;
    return true;
}

}  // namespace samp::client

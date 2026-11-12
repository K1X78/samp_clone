// The remote player and world effect RPCs of the SA-MP 0.3.DL client.
//
// The players and the gang zones are only touched when the pool entry the
// official handler looks up exists; nothing here creates an entity the server
// did not announce.
#include <array>
#include <cstring>

#include "samp/proto/encoders.hpp"

#include "samp/client/server_rpc.hpp"

namespace samp::client {
namespace {


}  // namespace

// Official: FUN_1001cff0 @ 0x1001cff0 (samp.dll)
bool rpc_remove_building(ServerRpcContext& context, samp::proto::BitStream& in) {
    RemovedBuilding building;
    if (!in.read(&(building.model),4) || !in.read(&(building.x),4) ||
        !in.read(&(building.y),4) || !in.read(&(building.z),4) ||
        !in.read(&(building.radius),4)) {
        return false;
    }
    context.world.removed_buildings_.push_back(building);
    return true;
}

// Official: FUN_1001ae70 @ 0x1001ae70 (samp.dll)
bool rpc_create_map_object(ServerRpcContext& context,samp::proto::BitStream& in) {
    MapObject object;std::uint8_t dynamic=0;
    if(!in.read(&object.id,2) || !in.read(&object.model,4) ||
       !in.read(&object.x,4) || !in.read(&object.y,4) || !in.read(&object.z,4) ||
       !in.read(&object.rotation_x,4) || !in.read(&object.rotation_y,4) || !in.read(&object.rotation_z,4) ||
       !in.read(&object.radius,4) || !in.read(&dynamic,1) ||
       !in.read(&object.sync_time,2) || !in.read(&object.sync_counter,2)) return false;
    object.dynamic=dynamic!=0;
    // The two16-bit fields are attachment IDs. Their transform is conditional
    // in1001b01e..1001b0a5, before the material count byte.
    if(object.sync_time!=0xffff || object.sync_counter!=0xffff) {
        std::array<std::uint8_t,25> attachment{};
        if(!in.read(attachment.data(),attachment.size())) return false;
    }
    if(!in.read(&object.material,1)) return false;
    if(object.id>=2100) return true;
    context.world.objects_[object.id]=object;
    return true;
}

// Official: FUN_1001a2c0 @ 0x1001a2c0 (samp.dll)
bool rpc_set_map_icon(ServerRpcContext& context,samp::proto::BitStream& in) {
    MapIcon icon;
    in.read(&(icon.id),1);
    in.read(&(icon.x),4);in.read(&(icon.y),4);in.read(&(icon.z),4);
    in.read(&(icon.type),1);in.read(&(icon.colour),4);in.read(&(icon.style),1);
    if(icon.id>=100) return true;
    icon.revision=++context.world.map_icon_revision_;
    context.world.icons_[icon.id]=icon;
    return true;
}

// Official: FUN_1001a3e0 @ 0x1001a3e0 (samp.dll)
bool rpc_remove_map_icon(ServerRpcContext& context,samp::proto::BitStream& in) {
    std::uint8_t id = 0;
    if (!in.read(&(id),1)) {
        return false;
    }
    context.world.icons_.erase(id);
    return true;
}

// Official: FUN_10019420 @ 0x10019420 (samp.dll)
bool rpc_show_game_text(ServerRpcContext& context,samp::proto::BitStream& in) {
    GameText text;
    std::int32_t length=0;
    if (!in.read(&text.style,4) || !in.read(&text.time,4) || !in.read(&length,4)) return false;
    if (length < 1 || length > 200) return true;
    std::array<char,256> buffer{};
    // The original ignores Read's status and calls the engine with its
    // zero-filled buffer when the declared text is truncated.
    static_cast<void>(in.read(buffer.data(),static_cast<std::size_t>(length)));
    text.text=buffer.data();
    context.world.texts_.push_back(text);
    if (context.commands) context.commands->emplace_back(GameTextCommand{text.style,text.time,text.text});
    return true;
}

// 0x100114a0: a remote player enters a vehicle: player (16), vehicle (16),
// seat (8).  The official handler only applies it when the player pool, the
// ped and the vehicle exist, and when the player is within 200 units.
// Official: FUN_100114a0 @ 0x100114a0 (samp.dll)
bool rpc_player_enter_vehicle(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0, vehicle_id = 0;
    std::uint8_t seat = 0;
    if (!in.read(&(player_id),2) || !in.read(&(vehicle_id),2) || !in.read(&(seat),1)) {
        return false;
    }
    WorldPlayer* player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
    WorldVehicle* vehicle = ((vehicle_id < 2000 && context.world.vehicles_.contains(vehicle_id)) ? &context.world.vehicles_.at(vehicle_id) : nullptr);
    if (player == nullptr || vehicle == nullptr) {
        return true;
    }
    player->in_vehicle = true;
    player->vehicle_id = vehicle_id;
    if (seat == 0) {
        vehicle->driver = player_id;
    }
    return true;
}

// 0x10019130: PutPlayerInVehicle for the local player: vehicle (16), seat (8).
// Official: FUN_10019130 @ 0x10019130 (samp.dll)
bool rpc_put_player_in_vehicle(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t vehicle_id = 0;
    std::uint8_t seat = 0;
    if (!in.read(&(vehicle_id),2) || !in.read(&(seat),1)) {
        return false;
    }
    WorldVehicle* vehicle = ((vehicle_id < 2000 && context.world.vehicles_.contains(vehicle_id)) ? &context.world.vehicles_.at(vehicle_id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    auto& local = context.world.stream.local;
    local.in_vehicle = true;
    local.vehicle_id = vehicle_id;
    local.vehicle_seat = seat;
    if(context.commands) context.commands->emplace_back(PlayerVehicleCommand{vehicle_id,seat,false});
    if (seat == 0) {
        vehicle->driver = context.local_player_id;
    }
    return true;
}

// 0x10017b00: the local player leaves the vehicle, no payload.
// Official: FUN_10017b00 @ 0x10017b00 (samp.dll)
bool rpc_remove_player_from_vehicle(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    auto& local = context.world.stream.local;
    WorldVehicle* vehicle = ((local.vehicle_id < 2000 && context.world.vehicles_.contains(local.vehicle_id)) ? &context.world.vehicles_.at(local.vehicle_id) : nullptr);
    if (vehicle != nullptr && vehicle->driver == context.local_player_id) {
        vehicle->driver = -1;
    }
    if(context.commands) context.commands->emplace_back(PlayerVehicleCommand{local.vehicle_id,local.vehicle_seat,true});
    local.in_vehicle = false;
    local.vehicle_id = 0;
    local.vehicle_seat = 0;
    return true;
}

// 0x1001d830: SendDeathMessage, killer (16), victim (16), reason (8).  The
// victim 0xFFFF means the server sent no message and ends the handler early.
// Official: FUN_1001d830 @ 0x1001d830 (samp.dll)
bool rpc_send_death_message(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t killer = 0, victim = 0;
    std::uint8_t reason = 0;
    if (!in.read(&(killer),2) || !in.read(&(victim),2) || !in.read(&(reason),1)) {
        return false;
    }
    if (victim == 0xFFFF) {
        return true;
    }
    DeathMessageState message;
    message.killer = killer;
    message.victim = victim;
    message.reason = reason;
    context.world.stream.death_messages.push_back(message);
    return true;
}

// 0x1000f850: SetPlayerChatBubble, player (16), colour (32), distance (32),
// expire time (32), text length (8), text.  The official handler applies it
// only for a player under 0x3ec whose pool entry exists.
// Official: FUN_1000f850 @ 0x1000f850 (samp.dll)
bool rpc_set_player_chat_bubble(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint32_t colour = 0, expire = 0;
    float distance = 0.0f;
    std::string text;
    std::uint8_t text_length=0;
    if (!in.read(&(player_id),2) || !in.read(&(colour),4) || !in.read(&(distance),4) ||
        !in.read(&(expire),4) || !in.read(&text_length,sizeof(text_length)) ||
        static_cast<std::size_t>(text_length)>
            ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        return false;
    }
    text.assign(text_length,'\0');
    if(text_length!=0 && !in.read(text.data(),text_length)) return false;
    if (player_id >= 0x3ec || ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr) == nullptr) {
        return true;
    }
    ChatBubbleState bubble;
    bubble.player_id = player_id;
    bubble.colour = colour;
    bubble.distance = distance;
    bubble.expire_time = expire;
    bubble.text = text;
    context.world.stream.chat_bubbles[player_id] = bubble;
    return true;
}

// 0x1001b950: ShowPlayerNameTagForPlayer, player (16), visible (8).
// Official: FUN_1001b950 @ 0x1001b950 (samp.dll)
bool rpc_show_player_name_tag(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint8_t visible = 0;
    if (!in.read(&(player_id),2) || !in.read(&(visible),1)) {
        return false;
    }
    if (player_id >= 0x3ec || ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr) == nullptr) {
        return true;
    }
    context.world.stream.name_tags[player_id] = visible != 0;
    return true;
}

// 0x1000f790: the server hides the 3D text label of a player (16).  The
// official handler only knows labels under 0x800 that the label pool holds.
// Official: FUN_1000f790 @ 0x1000f790 (samp.dll)
bool rpc_hide_player_text_label(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    if (!in.read(&(player_id),2)) {
        return false;
    }
    if (player_id >= 0x800) {
        return true;
    }
    // 0x100012e0: the official removes the label from its pool, it does not
    // merely hide it.
    context.world.stream.text_labels.erase(static_cast<int>(player_id));
    return true;
}

// 0x1000fbb0: a player joins: player (16), colour (32), npc flag (8), name
// length (8), name.  The name must be shorter than 0x19 bytes and a zero
// colour leaves the colour of the player untouched.
// Official: FUN_1000fbb0 @ 0x1000fbb0 (samp.dll)
bool rpc_player_join(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint32_t colour = 0;
    std::uint8_t npc = 0;
    std::string name;
    std::uint8_t name_length=0;
    if (!in.read(&(player_id),2) || !in.read(&(colour),4) || !in.read(&(npc),1) ||
        !in.read(&name_length,sizeof(name_length)) ||
        static_cast<std::size_t>(name_length)>
            ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        return false;
    }
    name.assign(name_length,'\0');
    if(name_length!=0 && !in.read(name.data(),name_length)) return false;
    if (name.size() >= 0x19) {
        return true;
    }
    const std::size_t terminator = name.find('\0');
    if (terminator != std::string::npos) {
        name.resize(terminator);
    }
    WorldPlayer player;
    player.id = player_id;
    player.npc = npc != 0;
    player.name = name;
    player.present = true;
    player.streamed_in = false;
    auto& known = context.world.players_[player.id];
    known = player;
    known.present = true;
    if (colour != 0) {
        WorldPlayer* joined_player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
        if (joined_player != nullptr && player_id < 0x3ec) {
            joined_player->colour = colour;
        }
    }
    if (context.local_player_id >= 0 && player_id == static_cast<std::uint16_t>(context.local_player_id)) {
        if (context.local_player_name != nullptr) *context.local_player_name = name;
        if (colour != 0 && context.local_player_colour != nullptr) *context.local_player_colour = colour;
    }
    return true;
}

// 0x1000fd40: a player quits: player (16), reason (8).
// Official: FUN_1000fd40 @ 0x1000fd40 (samp.dll)
bool rpc_player_quit(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint8_t reason = 0;
    if (!in.read(&(player_id),2) || !in.read(&(reason),1)) {
        return false;
    }
    (void)reason;
    if (context.commands != nullptr)
        context.commands->emplace_back(RemotePlayerDespawn{static_cast<int>(player_id)});
    context.world.players_.erase(player_id);
    return true;
}

// 0x10010ce0: a player streams out: player (16).  The ped is destroyed but
// the slot stays until the quit; the official handler requires the pool entry
// and the ped.
// Official: FUN_10010ce0 @ 0x10010ce0 (samp.dll)
bool rpc_player_stream_out(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    if (!in.read(&(player_id),2)) {
        return false;
    }
    if (player_id >= 0x3ed) {
        return true;
    }
    WorldPlayer* player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
    if (player != nullptr) {
        player->streamed_in = false;
        if (player_id != context.local_player_id && context.commands != nullptr)
            context.commands->emplace_back(RemotePlayerDespawn{static_cast<int>(player_id)});
    }
    return true;
}

// 0x10010150: SetPlayerRaceCheckpoint, type (8), the checkpoint position
// (three floats), the next position (three floats) and the radius.
// Official: FUN_10010150 @ 0x10010150 (samp.dll)
bool rpc_set_race_checkpoint(ServerRpcContext& context, samp::proto::BitStream& in) {
    RaceCheckpointState checkpoint;
    if (!in.read(&(checkpoint.type),1) || !in.read(&(checkpoint.x),4) ||
        !in.read(&(checkpoint.y),4) || !in.read(&(checkpoint.z),4) ||
        !in.read(&(checkpoint.next_x),4) || !in.read(&(checkpoint.next_y),4) ||
        !in.read(&(checkpoint.next_z),4) || !in.read(&(checkpoint.radius),4)) {
        return false;
    }
    checkpoint.active = true;
    context.world.stream.race_checkpoint = checkpoint;
    return true;
}

// DisablePlayerRaceCheckpoint carries no payload.
// Official: FUN_1000e440 @ 0x1000e440 (samp.dll)
bool rpc_disable_race_checkpoint(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    context.world.stream.race_checkpoint.active = false;
    return true;
}

// 0x1001ce80: PlayAudioStreamForPlayer, url length (8), url, position
// (three floats), radius (float), use position (8).
// Official: FUN_1001ce80 @ 0x1001ce80 (samp.dll)
bool rpc_play_audio_stream(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::string url;
    float x = 0.0f, y = 0.0f, z = 0.0f, radius = 0.0f;
    std::uint8_t use_position = 0;
    std::uint8_t url_length=0;
    if (!in.read(&url_length,sizeof(url_length)) ||
        static_cast<std::size_t>(url_length)>
            ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        return false;
    }
    url.assign(url_length,'\0');
    if(url_length!=0 && !in.read(url.data(),url_length)) return false;
    if (!in.read(&(x),4) || !in.read(&(y),4) || !in.read(&(z),4) ||
        !in.read(&(radius),4) || !in.read(&(use_position),1)) {
        return false;
    }
    AudioStreamState& audio = context.world.stream.audio_stream;
    audio.active = true;
    ++audio.revision;
    audio.url = url;
    audio.x = x;
    audio.y = y;
    audio.z = z;
    audio.radius = radius;
    audio.use_pos = use_position != 0;
    return true;
}

// StopAudioStreamForPlayer carries no payload.
// Official: FUN_10017c00 @ 0x10017c00 (samp.dll)
bool rpc_stop_audio_stream(ServerRpcContext& context, samp::proto::BitStream& /*in*/) {
    AudioStreamState& audio = context.world.stream.audio_stream;
    audio.active = false;
    audio.url.clear();
    return true;
}

// CreatePickup: id32, model32, type32 and three float32 positions. The
// 20-byte payload is a PickupDescription, not a custom model name.
// Official: FUN_1000ef50 @ 0x1000ef50 (samp.dll)
bool rpc_create_pickup(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t id = 0;
    PickupState pickup;
    if (!in.read(&(id),4) || !in.read(&pickup.model,4) || !in.read(&pickup.type,4) ||
        !in.read(&pickup.x,4) || !in.read(&pickup.y,4) || !in.read(&pickup.z,4)) {
        return false;
    }
    pickup.id = id;
    if(id>=4096) return true;
    context.world.stream.pickups[id] = pickup;
    return true;
}

// 0x1000f010: DestroyPickup, the pickup id (32).
// Official: FUN_1000f010 @ 0x1000f010 (samp.dll)
bool rpc_destroy_pickup(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t id = 0;
    if (!in.read(&(id),4)) {
        return false;
    }
    context.world.stream.pickups.erase(id);
    return true;
}

// 0x1001b840: CreateExplosion, x, y, z, type (32), radius (float).
// Official: FUN_1001b840 @ 0x1001b840 (samp.dll)
bool rpc_create_explosion(ServerRpcContext& context, samp::proto::BitStream& in) {
    ExplosionState explosion;
    if (!in.read(&(explosion.x),4) || !in.read(&(explosion.y),4) ||
        !in.read(&(explosion.z),4) || !in.read(&(explosion.type),4) ||
        !in.read(&(explosion.radius),4)) {
        return false;
    }
    context.world.stream.explosions.push_back(explosion);
    return true;
}

// 0x10010040: SetPlayerCheckpoint, x, y, z and radius (four floats).
// Official: FUN_10010040 @ 0x10010040 (samp.dll)
bool rpc_set_checkpoint(ServerRpcContext& context, samp::proto::BitStream& in) {
    CheckpointState checkpoint;
    if (!in.read(&(checkpoint.x),4) || !in.read(&(checkpoint.y),4) ||
        !in.read(&(checkpoint.z),4) || !in.read(&(checkpoint.radius),4)) {
        return false;
    }
    checkpoint.active = true;
    context.world.stream.checkpoint = checkpoint;
    return true;
}

// 0x1001cb40: GangZoneShowForPlayer, zone (16), min x/y, max x/y, colour (32).
// Official: FUN_1001cb40 @ 0x1001cb40 (samp.dll)
bool rpc_show_gang_zone(ServerRpcContext& context, samp::proto::BitStream& in) {
    GangZoneState zone;
    if (!in.read(&(zone.id),2) || !in.read(&(zone.min_x),4) || !in.read(&(zone.min_y),4) ||
        !in.read(&(zone.max_x),4) || !in.read(&(zone.max_y),4) || !in.read(&(zone.colour),4)) {
        return false;
    }
    if(zone.id>=1024) return true;
    zone.base_colour=zone.colour;
    zone.shown = true;
    context.world.stream.gang_zones[zone.id] = zone;
    return true;
}

// 0x1001cc60: GangZoneHideForPlayer, zone (16).  FUN_10002270 only knows a
// zone that exists.
// Official: FUN_1001cc60 @ 0x1001cc60 (samp.dll)
bool rpc_hide_gang_zone(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    const auto entry = context.world.stream.gang_zones.find(id);
    if (entry != context.world.stream.gang_zones.end()) {
        entry->second.shown = false;
    }
    return true;
}

// 0x1001cd10: GangZoneFlashForPlayer, zone (16) and colour (32).
// Official: FUN_1001cd10 @ 0x1001cd10 (samp.dll)
bool rpc_flash_gang_zone(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint32_t colour = 0;
    if (!in.read(&(id),2) || !in.read(&(colour),4)) {
        return false;
    }
    const auto entry = context.world.stream.gang_zones.find(id);
    if (entry == context.world.stream.gang_zones.end()) {
        return true;
    }
    entry->second.flashing = true;
    entry->second.colour = colour;
    return true;
}

// 0x1001cdd0: GangZoneStopFlashForPlayer, zone (16).
// Official: FUN_1001cdd0 @ 0x1001cdd0 (samp.dll)
bool rpc_stop_flash_gang_zone(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    const auto entry = context.world.stream.gang_zones.find(id);
    if (entry != context.world.stream.gang_zones.end()) {
        entry->second.flashing = false;
        entry->second.colour = entry->second.base_colour;
    }
    return true;
}

// 0x10018b40: PlayCrimeReportForPlayer.  The official handler reads the
// suspect (16) and seven 32 bit words, then calls
// FUN_100a15b0(word4, word5, word1, word2, word3): the crime, the x, the
// "in vehicle" flag, the vehicle model and the vehicle colour.  Words 6 and 7
// are the y and z the server sent with them.
// Official: FUN_10018b40 @ 0x10018b40 (samp.dll)
bool rpc_play_crime_report(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t suspect = 0;
    std::uint32_t words[7] = {};
    if (!in.read(&(suspect),2)) {
        return false;
    }
    for (std::uint32_t& word : words) {
        if (!in.read(&(word),4)) {
            return false;
        }
    }
    CrimeReportState report;
    report.suspect = suspect;
    report.in_vehicle = words[0] != 0;
    report.vehicle_model = words[1];
    report.vehicle_colour = words[2];
    report.crime = words[3];
    std::memcpy(&report.x, &words[4], sizeof(float));
    std::memcpy(&report.y, &words[5], sizeof(float));
    std::memcpy(&report.z, &words[6], sizeof(float));
    context.world.stream.crime_reports.push_back(report);
    return true;
}

// 0x10018750: SetGravity, one float.
// Official: FUN_10018750 @ 0x10018750 (samp.dll)
bool rpc_set_gravity(ServerRpcContext& context, samp::proto::BitStream& in) {
    float gravity = 0.0f;
    if (!in.read(&(gravity),4)) {
        return false;
    }
    context.world.stream.gravity = gravity;
    return true;
}

// 0x10017860: EnableStuntBonusForPlayer, a single bit.
// Official: FUN_10017860 @ 0x10017860 (samp.dll)
bool rpc_enable_stunt_bonus(ServerRpcContext& context, samp::proto::BitStream& in) {
    const bool enabled = in.readBit();
    context.world.stream.stunt_bonus = enabled;
    context.world.stream.local.stunt_bonus = enabled;
    return true;
}

}  // namespace samp::client

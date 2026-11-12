// The remaining handlers of the server to client RPC table.
//
// Payload handlers and their verified 0.3.DL addresses are listed below.
#include <array>
#include <cmath>
#include <cstdint>
#include <cstring>
#include <memory>
#include <string>

#include "samp/proto/encoders.hpp"

#include "samp/client/asset_element.hpp"
#include "samp/client/asset_manager.hpp"
#include "samp/client/compressed_string_table.hpp"
#include "samp/client/server_rpc.hpp"
#include "server_rpc_handlers.hpp"

namespace samp::client {

namespace {


// The Huffman traversal of samp.dll 0x10026230, reached by the compressed
// string reader at 0x10053d90.
// Official: FUN_10026230 @ 0x10026230 (samp.dll)
unsigned decode_compressed_string_bits(samp::proto::BitStream& in, std::uint16_t bit_count,
                                       std::size_t max_chars, std::string& output) {
    unsigned code = 0;
    unsigned length = 0;
    unsigned decoded = 0;
    for (std::uint16_t i = 0; i < bit_count; ++i) {
        const bool bit = in.readBit();
        code = (code << 1) | (bit ? 1u : 0u);
        ++length;

        const HuffmanCode* entry = nullptr;
        if (length >= 3 && length <= 16) {
            unsigned low = kHuffmanBucketStart[length];
            unsigned high = kHuffmanBucketStart[length + 1];
            while (low < high) {
                const unsigned middle = (low + high) / 2;
                if (kHuffmanCodes[middle].code == code) {
                    entry = &kHuffmanCodes[middle];
                    break;
                }
                if (kHuffmanCodes[middle].code < code) {
                    low = middle + 1;
                } else {
                    high = middle;
                }
            }
        }
        if (entry == nullptr) {
            continue;
        }
        if (decoded < max_chars) {
            output.push_back(static_cast<char>(entry->symbol));
        }
        ++decoded;
        code = 0;
        length = 0;
    }
    return decoded;
}

// The bounded string wrapper used by the compressed RPC fields.
// Official: FUN_10053d90 @ 0x10053d90 (samp.dll)
bool read_compressed_string(samp::proto::BitStream& in, std::string& text,
                            std::size_t max_chars) {
    std::uint16_t bit_count = 0;
    if (!in.read(&(bit_count),2) ||
        (in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0) < bit_count) {
        return false;
    }
    std::string decoded;
    const unsigned length = decode_compressed_string_bits(in, bit_count, max_chars, decoded);
    if (max_chars != 0 && length >= max_chars) {
        decoded.resize(max_chars - 1);
    }
    text = std::move(decoded);
    return true;
}

}  // namespace

// 0x1000e740: the server asks the client to start picking an object.
// Official: FUN_1000e740 @ 0x1000e740 (samp.dll)
bool rpc_begin_object_edit(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    ObjectEditState& edit = context.world.stream.object_edit;
    edit.selecting = true;
    edit.cancelled = false;
    return true;
}

// 0x1000e800: the server cancels the object selection.
// Official: FUN_1000e800 @ 0x1000e800 (samp.dll)
bool rpc_cancel_object_edit(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    ObjectEditState& edit = context.world.stream.object_edit;
    edit.selecting = false;
    edit.cancelled = true;
    return true;
}

// 0x1000f2f0: SetPlayerTime, hour (8) and minute (8).
// Official: FUN_1000f2f0 @ 0x1000f2f0 (samp.dll)
bool rpc_set_clock(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t hour = 0;
    std::uint8_t minute = 0;
    if (!in.read(&(hour),1) || !in.read(&(minute),1)) {
        return false;
    }
    context.world.stream.clock_hour = hour;
    context.world.stream.clock_minute = minute;
    return true;
}

// 0x1000f3d0: TogglePlayerClock.  A zero enables the clock and applies the
// hour and the minute the client kept, anything else hides it.
// Official: FUN_1000f3d0 @ 0x1000f3d0 (samp.dll)
bool rpc_toggle_clock(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t toggle = 0;
    if (!in.read(&(toggle),1)) {
        return false;
    }
    context.world.stream.clock_enabled = toggle == 0;
    return true;
}

// 0x1000f4b0: SetPlayerSkillLevel, player (16), skill (32), level (16).
// Official: FUN_1000f4b0 @ 0x1000f4b0 (samp.dll)
bool rpc_set_player_skill(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint32_t skill = 0;
    std::uint16_t level = 0;
    if (!in.read(&(player_id),2) || !in.read(&(skill),4) || !in.read(&(level),2)) {
        return false;
    }
    if (context.local_player_id >= 0 &&
        player_id == static_cast<std::uint16_t>(context.local_player_id)) {
        if (skill < context.world.stream.local.weapon_skills.size()) {
            context.world.stream.local.weapon_skills[skill] = level;
        }
        return true;
    }
    WorldPlayer* player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
    if (player == nullptr || !player->streamed_in) {
        return true;
    }
    if (skill < player->weapon_skills.size()) {
        player->weapon_skills[skill] = level;
    }
    return true;
}

// 0x1000f5e0: CreatePlayerTextLabel / Create3DTextLabel, label id (16), colour
// (32), position (three floats), draw distance (float), line of sight (8),
// attached player (16), attached vehicle (16) and the compressed text.  The
// official handler reads the whole payload and only creates the label when the
// id is below 0x800: the ids above it are the per-player labels.
// Official: FUN_1000f5e0 @ 0x1000f5e0 (samp.dll)
bool rpc_show_text_label(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint32_t colour = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float draw_distance = 0.0f;
    std::uint8_t line_of_sight = 0;
    std::uint16_t attached_player = 0;
    std::uint16_t attached_vehicle = 0;
    std::string text;
    if (!in.read(&(id),2) || !in.read(&(colour),4) || !in.read(&(x),4) || !in.read(&(y),4) ||
        !in.read(&(z),4) || !in.read(&(draw_distance),4) || !in.read(&(line_of_sight),1) ||
        !in.read(&(attached_player),2) || !in.read(&(attached_vehicle),2) ||
        !read_compressed_string(in, text, 0x800)) {
        return false;
    }
    if (id >= 0x800) {
        return true;
    }
    TextLabelState label;
    label.id = id;
    label.colour = colour;
    label.x = x;
    label.y = y;
    label.z = z;
    label.draw_distance = draw_distance;
    label.line_of_sight = line_of_sight != 0;
    label.attached_player = attached_player;
    label.attached_vehicle = attached_vehicle;
    label.text = std::move(text);
    context.world.stream.text_labels[static_cast<int>(id)] = std::move(label);
    return true;
}

// Clear the client flag carried by this RPC.
// Official: FUN_1000e430 @ 0x1000e430 (samp.dll)
bool rpc_clear_client_flag(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    context.world.stream.client_flag_4d = 0;
    return true;
}

// 0x1000a230: the reset the server sends when the client joins or respawns.
// It drops every streamed player ped, sets the connection state to 0xb and
// restores the settings the client starts with.
// Official: FUN_1000a230 @ 0x1000a230 (samp.dll)
bool rpc_reset_player_state(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    for (int id = 0; id < 0x3ec; ++id) {
        const auto entry = context.world.players_.find(id);
        WorldPlayer* player = entry == context.world.players_.end() ? nullptr : &entry->second;
        if (player == nullptr) {
            continue;
        }
        player->streamed_in = false;
        player->in_vehicle = false;
        player->vehicle_id = 0;
        player->dead = false;
    }
    ServerStreamState& stream = context.world.stream;
    stream.connection_state = 0xb;
    stream.local.health = 100.0f;
    stream.name_tag_distance = 60.0f;
    stream.clock_hour = 12;
    stream.clock_minute = 0;
    stream.clock_enabled = true;
    stream.weather = 1;
    stream.gravity=0.008f;stream.world_bounds={};stream.gang_zones.clear();
    context.world.icons_.clear();
    stream.client_flag_4d = 0;
    stream.race_checkpoint = {};
    return true;
}

// 0x1000f9c0: ShowPlayerDialog, dialog id (16), style (8), title, button one
// and button two as the length-prefixed strings and the body as the compressed
// string.  The dialog is only shown when the title and the body are nonempty.
// Official: FUN_1000f9c0 @ 0x1000f9c0 (samp.dll)
bool rpc_show_dialog(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    std::uint8_t style = 0;
    std::string title;
    std::string button1;
    std::string button2;
    std::string text;
    std::uint8_t title_length=0;
    if (!in.read(&(id),2) || !in.read(&(style),1) || !in.read(&title_length,sizeof(title_length)) ||
        static_cast<std::size_t>(title_length)>
            ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) {
        return false;
    }
    title.assign(title_length,'\0');
    if(title_length!=0 && !in.read(title.data(),title_length)) return false;
    std::uint8_t button1_length=0;
    if(!in.read(&button1_length,sizeof(button1_length)) ||
       static_cast<std::size_t>(button1_length)>
           ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) return false;
    button1.assign(button1_length,'\0');
    if(button1_length!=0 && !in.read(button1.data(),button1_length)) return false;
    std::uint8_t button2_length=0;
    if(!in.read(&button2_length,sizeof(button2_length)) ||
       static_cast<std::size_t>(button2_length)>
           ((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) return false;
    button2.assign(button2_length,'\0');
    if(button2_length!=0 && !in.read(button2.data(),button2_length)) return false;
    if(!read_compressed_string(in,text,0x1000)) return false;
    if (title.empty() || text.empty()) {
        return true;
    }
    DialogState& dialog = context.world.stream.dialog;
    dialog.id = id;
    dialog.style = style;
    dialog.title = std::move(title);
    dialog.button1 = std::move(button1);
    dialog.button2 = std::move(button2);
    dialog.text = std::move(text);
    dialog.shown = true;
    return true;
}

// 0x1000edc0: SetWorldTime's hour half, hour (8).
// Official: FUN_1000edc0 @ 0x1000edc0 (samp.dll)
bool rpc_set_clock_hour(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t hour = 0;
    if (!in.read(&(hour),1)) {
        return false;
    }
    context.world.stream.clock_hour = hour;
    return true;
}

// 0x1000f150: the SCM event, player (16), event (32), vehicle (32), first
// argument (32) and second argument (32).  The events one to three change the
// vehicle the event names: the paintjob, a component and the two colours.
// Official: FUN_1000f150 @ 0x1000f150 (samp.dll)
bool rpc_scm_event(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint32_t event = 0;
    std::uint32_t vehicle = 0;
    std::uint32_t arg1 = 0;
    std::uint32_t arg2 = 0;
    if (!in.read(&(player_id),2) || !in.read(&(event),4) || !in.read(&(vehicle),4) ||
        !in.read(&(arg1),4) || !in.read(&(arg2),4)) {
        return false;
    }
    ScmEventState scm_event;
    scm_event.player = player_id;
    scm_event.event = event;
    scm_event.vehicle = vehicle;
    scm_event.arg1 = arg1;
    scm_event.arg2 = arg2;
    context.world.stream.scm_events.push_back(scm_event);
    if (event == 1 || event == 2 || event == 3) {
        WorldVehicle* target = ((static_cast<std::uint16_t>(vehicle) < 2000 && context.world.vehicles_.contains(static_cast<std::uint16_t>(vehicle))) ? &context.world.vehicles_.at(static_cast<std::uint16_t>(vehicle)) : nullptr);
        if (target != nullptr) {
            if (event == 1) {
                target->paintjob = static_cast<std::uint8_t>(arg1);
            } else if (event == 2) {
                target->components.push_back(arg1);
            } else {
                target->body_colour1 = static_cast<std::int32_t>(arg1);
                target->body_colour2 = static_cast<std::int32_t>(arg2);
            }
        }
    }
    return true;
}

// 0x1000e450: the client check state, 0x128 raw bytes.
// Official: FUN_1000e450 @ 0x1000e450 (samp.dll)
bool rpc_set_client_check_blob(ServerRpcContext& context, samp::proto::BitStream& in) {
    if (!in.read(context.world.stream.client_check_blob.data(),
                  context.world.stream.client_check_blob.size())) {
        return false;
    }
    return true;
}

// 0x10011930: the client check the anti cheat asks for.  Type (8), base (32),
// offset (16) and length (16); the offset and the length are limited to 0x100
// bytes and the length has to cover at least two bytes.  The answer is the
// RPC 9 the network client sends from the reply queue.
// Official: FUN_10011930 @ 0x10011930 (samp.dll)
bool rpc_client_check(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t type = 0;
    std::uint32_t base = 0;
    std::uint16_t offset = 0;
    std::uint16_t count = 0;
    if (!in.read(&(type),1) || !in.read(&(base),4) || !in.read(&(offset),2) ||
        !in.read(&(count),2)) {
        return false;
    }
    if (offset > 0x100 || count > 0x100 || count < 2) {
        return true;
    }
    ClientCheckReply reply;
    reply.type = type;
    reply.base = base;
    reply.status = 0;
    switch (type) {
        case 'F':
        case 'G':
        case 'E':
            // The checksum runs over the game memory of the model or the
            // texture; the memory layer answers it and the status stays zero
            // until it has.
            reply.status = 0;
            break;
        case 0x02: {
            const LocalPlayerState& local = context.world.stream.local;
            if (local.in_vehicle) {
                reply.base = local.vehicle_id;
                reply.status = 1;
            }
            break;
        }
        case 0x05:
            if (base < 0x400000 || base > 0x856e00) {
                return true;
            }
            break;
        case 'H':
            reply.base = 0;
            break;
        default:
            return true;
    }
    context.world.stream.client_check_replies.push_back(reply);
    return true;
}

// 0x100116b0: the server edits the attached object of the given slot.
// Official: FUN_100116b0 @ 0x100116b0 (samp.dll)
bool rpc_edit_attached_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t slot = 0;
    if (!in.read(&(slot),4)) {
        return false;
    }
    ObjectEditState& edit = context.world.stream.object_edit;
    edit.object_edit = true;
    edit.selecting = false;
    edit.attached_object = slot;
    return true;
}

// 0x10011770: the server edits a map object, the flag (one bit) and the object
// id (16).
// Official: FUN_10011770 @ 0x10011770 (samp.dll)
bool rpc_edit_object(ServerRpcContext& context, samp::proto::BitStream& in) {
    const bool object_edit = in.readBit();
    std::uint16_t object_id = 0;
    if (!in.read(&(object_id),2)) {
        return false;
    }
    ObjectEditState& edit = context.world.stream.object_edit;
    edit.object_edit = object_edit;
    edit.object_id = object_id;
    edit.attached_object = 0;
    return true;
}

// 0x1000f0b0: the server removes every pickup of a model, model (8).
// Official: FUN_1000f0b0 @ 0x1000f0b0 (samp.dll)
bool rpc_remove_pickup_model(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint8_t model = 0;
    if (!in.read(&(model),1)) {
        return false;
    }
    auto& pickups = context.world.stream.pickups;
    for (auto it = pickups.begin(); it != pickups.end();) {
        if (it->second.model == model) {
            it = pickups.erase(it);
        } else {
            ++it;
        }
    }
    return true;
}

// 0x100115c0: the server closes the passenger side, player (16) and vehicle
// (16).  The player has to be streamed in and within 200 units of the local
// player before the client clears the seat.
// Official: FUN_100115c0 @ 0x100115c0 (samp.dll)
bool rpc_player_close(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    std::uint16_t vehicle_id = 0;
    if (!in.read(&(player_id),2) || !in.read(&(vehicle_id),2)) {
        return false;
    }
    WorldPlayer* player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
    if (player == nullptr || !player->streamed_in) {
        return true;
    }
    const LocalPlayerState& local = context.world.stream.local;
    const float dx = player->x - local.x;
    const float dy = player->y - local.y;
    const float dz = player->z - local.z;
    if (std::sqrt(dx * dx + dy * dy + dz * dz) >= 200.0f) {
        return true;
    }
    player->in_vehicle = false;
    player->vehicle_id = vehicle_id;
    return true;
}

// StreamInVehicle. The 40 byte spawn record and the 23 byte tune
// block are read as raw bytes, the model has to be a road vehicle and the
// trains 537 and 538 become the freight car 569 and the streak car 570 with
// three carriages of their own at the following ids.
// Official: FUN_1000e500 @ 0x1000e500 (samp.dll)
bool rpc_spawn_vehicle(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::array<std::uint8_t, 40> spawn{};
    std::array<std::uint8_t, 23> tune{};
    if (!in.read(spawn.data(), spawn.size()) || !in.read(tune.data(), tune.size())) {
        return false;
    }
    const std::uint16_t id =
        static_cast<std::uint16_t>(spawn[0] | (static_cast<std::uint16_t>(spawn[1]) << 8));
    std::uint32_t model = static_cast<std::uint32_t>(spawn[2]) |
                          (static_cast<std::uint32_t>(spawn[3]) << 8) |
                          (static_cast<std::uint32_t>(spawn[4]) << 16) |
                          (static_cast<std::uint32_t>(spawn[5]) << 24);
    if (model < 0x190 || model > 0x263) {
        return true;
    }
    bool train = false;
    if (model == 537) {
        model = 569;
        train = true;
    } else if (model == 538) {
        model = 570;
        train = true;
    }
    WorldVehicle vehicle;
    vehicle.id = id;
    vehicle.model = model;
    std::memcpy(&vehicle.x, spawn.data() + 6, sizeof(vehicle.x));
    std::memcpy(&vehicle.y, spawn.data() + 10, sizeof(vehicle.y));
    std::memcpy(&vehicle.z, spawn.data() + 14, sizeof(vehicle.z));
    std::memcpy(&vehicle.angle, spawn.data() + 18, sizeof(vehicle.angle));
    vehicle.colour1 = spawn[22];
    vehicle.colour2 = spawn[23];
    std::memcpy(&vehicle.health, spawn.data() + 24, sizeof(vehicle.health));
    vehicle.interior = spawn[28];
    std::memcpy(&vehicle.damage_doors, spawn.data() + 29, sizeof(vehicle.damage_doors));
    std::memcpy(&vehicle.damage_panels, spawn.data() + 33, sizeof(vehicle.damage_panels));
    vehicle.damage_lights = spawn[37];
    vehicle.damage_tires = spawn[38];
    vehicle.siren = spawn[39] != 0;
    vehicle.present = true;
    for (std::size_t i = 0; i < vehicle.mods.size(); ++i) {
        const std::uint8_t component = tune[i];
        if (component == 0) {
            continue;
        }
        vehicle.mods[i] = static_cast<std::uint32_t>(component) + 999u;
        vehicle.components.push_back(vehicle.mods[i]);
    }
    if (tune[14] != 0) {
        vehicle.paintjob = static_cast<std::uint8_t>(tune[14] - 1);
    }
    std::int32_t body1 = 0;
    std::int32_t body2 = 0;
    std::memcpy(&body1, tune.data() + 15, sizeof(body1));
    std::memcpy(&body2, tune.data() + 19, sizeof(body2));
    if (body1 != -1 || body2 != -1) {
        vehicle.body_colour1 = body1;
        vehicle.body_colour2 = body2;
    }
    auto& known = context.world.vehicles_[vehicle.id];
    const std::uint32_t updates = known.updates;
    known = vehicle;
    known.present = true;
    known.updates = updates + 1;
    if(context.commands) context.commands->emplace_back(VehicleSpawnCommand{vehicle.id,
        train?(model==569?537u:538u):model,vehicle.x,vehicle.y,vehicle.z,vehicle.angle,vehicle.health,
        static_cast<std::uint8_t>(vehicle.colour1),static_cast<std::uint8_t>(vehicle.colour2),vehicle.interior,vehicle.siren});
    if (train) {
        for (std::uint16_t carriage = 1; carriage <= 3; ++carriage) {
            WorldVehicle extra = vehicle;
            extra.id = static_cast<std::uint16_t>(id + carriage);
            extra.driver = -1;
            auto& known_extra = context.world.vehicles_[extra.id];
            const std::uint32_t extra_updates = known_extra.updates;
            known_extra = extra;
            known_extra.present = true;
            known_extra.updates = extra_updates + 1;
        }
    }
    return true;
}

// 0x10010dc0: StreamOutVehicle, vehicle (16).  The trailers and the riders of
// the vehicle are detached before it leaves the pool, and the carriages of a
// train follow their engine.
// Official: FUN_10010dc0 @ 0x10010dc0 (samp.dll)
bool rpc_stream_out_vehicle(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    WorldVehicle* vehicle = ((id < 2000 && context.world.vehicles_.contains(id)) ? &context.world.vehicles_.at(id) : nullptr);
    if (vehicle == nullptr) {
        return true;
    }
    const std::uint32_t model = vehicle->model;
    for (int player_id = 0; player_id < 0x3ec; ++player_id) {
        const auto entry = context.world.players_.find(player_id);
        WorldPlayer* player = entry == context.world.players_.end() ? nullptr : &entry->second;
        if (player != nullptr && player->vehicle_id == id) {
            player->in_vehicle = false;
            player->vehicle_id = 0;
        }
    }
    for (auto& entry : context.world.vehicles_) {
        if (entry.second.trailer_id == id) {
            entry.second.trailer_id = 0xFFFFu;
        }
    }
    if(context.commands) context.commands->emplace_back(VehicleRemoveCommand{id});
    context.world.vehicles_.erase(id);
    if (model == 537 || model == 538 || model == 569 || model == 570) {
        for (std::uint16_t carriage = 1; carriage <= 3; ++carriage) {
            context.world.vehicles_.erase(static_cast<std::uint16_t>(id + carriage));
        }
    }
    return true;
}

// 0x10010c20: the server marks a player dead, player (16).
// Official: FUN_10010c20 @ 0x10010c20 (samp.dll)
bool rpc_set_player_dead(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t player_id = 0;
    if (!in.read(&(player_id),2)) {
        return false;
    }
    WorldPlayer* player = ((player_id < 0x3ed && context.world.players_.contains(static_cast<int>(player_id))) ? &context.world.players_.at(static_cast<int>(player_id)) : nullptr);
    if (player == nullptr || !player->streamed_in) {
        return true;
    }
    player->dead = true;
    if(context.commands) context.commands->emplace_back(RemotePlayerDeath{player_id});
    return true;
}

// The camera targeting flag is one bit.
// Official: FUN_1000e8b0 @ 0x1000e8b0 (samp.dll)
bool rpc_set_camera_targeting(ServerRpcContext& context, samp::proto::BitStream& in) {
    const bool targeting = in.readBit();
    context.world.stream.camera_targeting = targeting;
    return true;
}

// 0x1000e940: ShowActorForPlayer.  The 31 byte record carries the actor id
// (16), the skin (32), the 0.3.DL custom skin (32), the position (three
// floats), the facing angle (float), the health (float) and the invulnerable
// flag (8).  The skin has to be a valid ped model before the actor is created.
// Official: FUN_1000e940 @ 0x1000e940 (samp.dll)
bool rpc_show_actor(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::array<std::uint8_t, 31> record{};
    if (!in.read(record.data(), record.size())) {
        return false;
    }
    const std::uint16_t id =
        static_cast<std::uint16_t>(record[0] | (static_cast<std::uint16_t>(record[1]) << 8));
    std::uint32_t skin = 0;
    std::memcpy(&skin, record.data() + 2, sizeof(skin));
    if (id >= 1000 || skin >= 0x7531) {
        return true;
    }
    auto& actors = context.world.stream.actors;
    TestRpcActorSlotsAccess::clear(actors, id);
    auto actor = std::make_unique<ActorState>();
    actor->id = id;
    actor->skin = skin;
    std::memcpy(&actor->custom_skin, record.data() + 6, sizeof(actor->custom_skin));
    std::memcpy(&actor->x, record.data() + 10, sizeof(actor->x));
    std::memcpy(&actor->y, record.data() + 14, sizeof(actor->y));
    std::memcpy(&actor->z, record.data() + 18, sizeof(actor->z));
    std::memcpy(&actor->angle, record.data() + 22, sizeof(actor->angle));
    std::memcpy(&actor->health, record.data() + 26, sizeof(actor->health));
    actor->invulnerable = record[30] != 0;
    TestRpcActorSlotsAccess::set(actors, id, id, std::move(actor));
    return true;
}

// 0x10011cd0: HideActorForPlayer, actor (16).
// Official: FUN_10011cd0 @ 0x10011cd0 (samp.dll)
bool rpc_hide_actor(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id = 0;
    if (!in.read(&(id),2)) {
        return false;
    }
    auto& actors = context.world.stream.actors;
    const auto slot = actors.find_by_network_id(id);
    if (slot != ActorSlots::kNoSlot && actors.used_flag(slot) != 0 &&
        TestRpcActorSlotsAccess::matches(actors, slot, id)) {
        TestRpcActorSlotsAccess::clear(actors, slot);
    }
    return true;
}

// Official: FUN_100109d0 @ 0x100109d0 (samp.dll)
bool rpc_player_stream_in(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint16_t id=0;
    std::uint8_t team=0xff;
    std::uint32_t skin=0,custom_model=0,colour=0;
    float x=0.0f,y=0.0f,z=0.0f,angle=0.0f;
    std::uint8_t fighting_style=4;
    if(!in.read(&(id),2) || !in.read(&(team),1) || !in.read(&(skin),4) ||
       !in.read(&(custom_model),4) || !in.read(&(x),4) || !in.read(&(y),4) ||
       !in.read(&(z),4) || !in.read(&(angle),4) || !in.read(&(colour),4) ||
       !in.read(&(fighting_style),1)) return false;
    std::array<std::uint16_t,11> skills{};
    for(auto& skill:skills) if(!in.read(&(skill),2)) return false;
    if(id>=0x3ec || id==context.local_player_id) return true;
    const auto entry=context.world.players_.find(id);
    if(entry==context.world.players_.end()) return true;
    WorldPlayer& player=entry->second;
    player.skin=skin;
    player.custom_model=custom_model;
    player.x=x;player.y=y;player.z=z;player.angle=angle;
    player.streamed_in=true;player.in_vehicle=false;player.vehicle_id=0xffff;
    player.dead=false;player.aiming=false;player.health=100;player.armour=0;
    if(team!=0xff) player.team=team;
    if(fighting_style!=4) player.fighting_style=fighting_style;
    player.weapon_skills=skills;
    if(colour!=0) player.colour=colour;
    player.present=true;
    if(context.commands) context.commands->emplace_back(
        RemotePlayerStream{static_cast<int>(id),skin,x,y,z,angle,custom_model});
    return true;
}

// 0x10011d80: the model request of the 0.3.DL streaming.  The pool id, the
// count, the kind (8), the virtual world, the base and the new id, the two
// checksums, the two sizes and the two time flags fill one asset record; the
// pool id is the slot of the asset array and the count becomes the current id
// of the manager.
// Official: FUN_10011d80 @ 0x10011d80 (samp.dll)
bool rpc_request_model(ServerRpcContext& context, samp::proto::BitStream& in) {
    std::uint32_t pool_id = 0;
    std::uint32_t count = 0;
    std::uint8_t kind = 0;
    std::uint32_t virtual_world = 0;
    std::uint32_t base_id = 0;
    std::uint32_t new_id = 0;
    std::uint32_t model_checksum = 0;
    std::uint32_t texture_checksum = 0;
    std::uint32_t model_size = 0;
    std::uint32_t texture_size = 0;
    std::uint8_t time_on = 0;
    std::uint8_t time_off = 0;
    if (!in.read(&(pool_id),4) || !in.read(&(count),4) || !in.read(&(kind),1) ||
        !in.read(&(virtual_world),4) || !in.read(&(base_id),4) || !in.read(&(new_id),4) ||
        !in.read(&(model_checksum),4) || !in.read(&(texture_checksum),4) ||
        !in.read(&(model_size),4) || !in.read(&(texture_size),4) || !in.read(&(time_on),1) ||
        !in.read(&(time_off),1)) {
        return false;
    }
    if (context.assets == nullptr) {
        return true;
    }
    AssetElement record;
    record.kind_byte = kind;
    record.parent_id = static_cast<std::int32_t>(virtual_world);
    record.asset_id = static_cast<std::int32_t>(base_id);
    record.element_id = static_cast<std::int32_t>(new_id);
    record.model_id = model_checksum;
    record.texture_id = texture_checksum;
    record.model_size = model_size;
    record.texture_size = texture_size;
    record.flag_56 = time_on;
    record.flag_57 = time_off;
    context.assets->add_asset(pool_id, record);
    context.assets->set_current_id(count);
    return true;
}

// 0x1000ea40: the server removes the first model of the manager.
// Official: FUN_1000ea40 @ 0x1000ea40 (samp.dll)
bool rpc_remove_model(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    if (context.assets != nullptr) {
        context.assets->remove_asset(0);
    }
    return true;
}

// 0.3.DL download control: 0=failure, 2=file end, 5=begin(kind/CRC),
// 6=HTTP(kind/CRC/URL), 1=block(mode8/rawSize32/fragmentSize32/bytes).
// The legacy diagnostic record aliases pool/checksum to mode/rawSize for type1.
// Official: FUN_10011f80 @ 0x10011f80 (samp.dll)
bool rpc_model_url(ServerRpcContext& context,samp::proto::BitStream& in) {
    std::uint8_t operation=0;if(!in.read(&operation,1)) return false;
    AssetDownloadRequest request;request.type=operation;
    switch(operation) {
    case 0:
        if(context.assets) context.assets->fail_download(6001);
        break;
    case 2:
        if(context.assets) context.assets->finish_download();
        break;
    case 5:
    case 6: {
        if(!in.read(&request.pool,1) || !in.read(&request.checksum,4)) return false;
        if(operation==5) {
            if(context.assets && !context.assets->begin_download(request.pool,request.checksum))
                context.assets->fail_download(6001);
        } else {
            std::uint8_t length=0;if(!in.read(&length,1)) return false;
            request.url.assign(length,'\0');
            if(length && !in.read(request.url.data(),length)) return false;
            if(context.assets && !context.assets->start_http_download(request.pool,request.checksum,request.url))
                context.assets->fail_download(6001);
        }
        break;
    }
    case 1: {
        std::uint8_t mode=0;std::uint32_t raw_size=0,length=0;
        if(!in.read(&mode,1) || !in.read(&raw_size,4) || !in.read(&length,4)) return false;
        if(length>4096 || raw_size>4096) return true;
        std::array<std::uint8_t,4096> block{};
        if(length && !in.read(block.data(),length)) return false;
        request.pool=mode;request.checksum=raw_size;request.length=length;
        if(context.assets) context.assets->stage(block.data(),length,mode,raw_size);
        break;
    }
    default:return true;
    }
    if(context.world.stream.asset_downloads.size()>=64) context.world.stream.asset_downloads.erase(context.world.stream.asset_downloads.begin());
    context.world.stream.asset_downloads.push_back(std::move(request));return true;
}

// 0x1000ead0: the server asks for every model; the official client marks the
// six request slots ready and clears the pending one.
// Official: FUN_1000ead0 @ 0x1000ead0 (samp.dll)
bool rpc_request_all_models(ServerRpcContext& context, samp::proto::BitStream& in) {
    (void)in;
    ServerStreamState& stream = context.world.stream;
    stream.asset_slots_ready = 6;
    stream.asset_pending = 0;
    if(context.assets && context.assets->awaiting_finish_ack_) {
        context.assets->ready_=true;context.assets->awaiting_finish_ack_=false;
    }
    return true;
}

}  // namespace samp::client

#include "samp/server/game_layer.hpp"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <iterator>
#include <random>

#if !defined(_WIN32)
#include <strings.h>
#endif

#include "samp/proto/encoders.hpp"
#include "samp/proto/own_sync.hpp"
#include "samp/proto/wire.hpp"

namespace samp::server {

namespace {

using samp::amx::cell;
using samp::proto::BitStream;
using samp::proto::Reliability;

// The server -> client channels.  The client accepts any channel on its
// inbound path; open.mp, the 1:1 reimplementation of the official server,
// uses channel 2 for the RPCs and channel 1 for the game packets.
constexpr std::uint8_t kServerChannelRpc = 2;
constexpr std::uint8_t kServerChannelGame = 1;

// The chat and command sanitiser (samp-server.exe 0x4690d0). It removes valid
// eight-byte "{RRGGBB}" colour codes, then replaces '%' and '~k' with '#'.
// 0x468f70 rejects a brace group unless each of the six digits is hexadecimal.
// Official: FUN_004690d0 @ 0x004690d0 (samp-server.exe)
std::string sanitise_chat_text(std::string text) {
    const auto is_hex = [](char c) {
        return (c >= '0' && c <= '9') || (c >= 'A' && c <= 'F') ||
               (c >= 'a' && c <= 'f');
    };
    // FUN_00469080 repeatedly removes valid colour codes. Keep scanning the
    // same position after erasing because another token may have shifted there.
    bool removed = true;
    while (removed) {
        removed = false;
        for (std::size_t i = 0; i + 8 <= text.size(); ++i) {
            const bool valid_colour = text[i] == '{' && text[i + 7] == '}' &&
                std::all_of(text.begin() + static_cast<std::ptrdiff_t>(i + 1),
                            text.begin() + static_cast<std::ptrdiff_t>(i + 7), is_hex);
            if (valid_colour) {
                text.erase(i, 8);
                removed = true;
                break;
            }
        }
    }
    for (std::size_t i = 0; i < text.size(); ++i) {
        if (text[i] == '%') {
            text[i] = '#';
        } else if (text[i] == '~' && i + 1 < text.size() && text[i + 1] == 'k') {
            text[i] = '#';
        }
    }
    return text;
}

}  // namespace

// Returns true for a rejected character; an empty C string is valid here.
// Official: FUN_00468ee0 @ 0x00468ee0 (samp-server.exe)
bool invalid_player_name(const char* name) {
    for (; *name != '\0'; ++name) {
        const auto c = static_cast<unsigned char>(*name);
        if ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') ||
            (c >= 'a' && c <= 'z') || c == ']' || c == '[' || c == '_' ||
            c == '$' || c == '=' || c == '(' || c == ')' || c == '@' || c == '.')
            continue;
        return true;
    }
    return false;
}

// Official: FUN_00483b80 @ 0x00483b80 (samp-server.exe)
void GameLayer::send_stream_in(GamePlayer& receiver, const GamePlayer& other) {
    // 0.3.DL samp-server.exe 0x4877e0; defaults from 0x484600.
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(other.id))).data(),2);
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(other.team)}.data(),1);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(other.skin)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(other.custom_model)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(other.x)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(other.y)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(other.z)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(other.angle)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(other.colour)).data(),4);
    payload.write(&other.fighting_style, sizeof(other.fighting_style));
    for (int i = 0; i < 11; ++i) payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(999)).data(),2);
    send_rpc(*receiver.peer, kRpcPlayerStreamIn, payload);
    receiver.streamed_to[other.id] = 1;
    ++receiver.streamed_count;
    filterscript_player_stream_in(other.id, receiver.id);
    gamemode_player_stream_in(other.id, receiver.id);
    std::printf("[stream] in source=%d receiver=%d skin=%u pos=%.2f,%.2f,%.2f\n",
                other.id, receiver.id, other.skin, other.x, other.y, other.z);
}

// Official: FUN_00483c10 @ 0x00483c10 (samp-server.exe)
void GameLayer::send_stream_out(GamePlayer& receiver, const GamePlayer& other) {
    // 0x4667d0 and the receiver bookkeeping in 0x483c10.
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(other.id))).data(),2);
    send_rpc(*receiver.peer, kRpcPlayerStreamOut, payload);
    receiver.streamed_to[other.id] = 0;
    if (receiver.streamed_count) --receiver.streamed_count;
    filterscript_player_stream_out(other.id, receiver.id);
    gamemode_player_stream_out(other.id, receiver.id);
    std::printf("[stream] out source=%d receiver=%d\n", other.id, receiver.id);
}

// Official: FUN_004851d0 @ 0x004851d0 (samp-server.exe)
void GameLayer::update_streaming() {
    // Player slice of 0x4851d0. 0x484170 measures XY only; equality is out.
    // 0x485393..0x4853a7 excludes none/spectating and compares virtual worlds.
    // Interior is deliberately absent from this native visibility predicate.
    for (GamePlayer& receiver : players_) {
        if (!receiver.in_use || !receiver.peer || !receiver.joined) continue;
        if(receiver.streamed_objects.size()!=objects_.size()) receiver.streamed_objects.resize(objects_.size());
        if(!artwork_enabled_ || models_.empty() || receiver.models_ready) {
            for(const auto& object:objects_) if(object.active && !receiver.streamed_objects[object.id]) send_global_object(receiver,object);
        }
        if(receiver.streamed_vehicles.size()!=vehicles_.size()) receiver.streamed_vehicles.resize(vehicles_.size());
        if(receiver.streamed_pickups.size()!=pickups_.size()) receiver.streamed_pickups.resize(pickups_.size());
        for(std::uint32_t id=0;id<pickups_.size() && id<=pickup_pool_highest_;++id) {
            const auto& pickup=pickups_[id];
            const double dx=double(receiver.x)-pickup.position[0],dy=double(receiver.y)-pickup.position[1];
            const bool visible=pickup.active && (pickup.world==-1 || pickup.world==receiver.virtual_world) &&
                dx*dx+dy*dy<double(kStreamRadius)*kStreamRadius;
            if(visible && !receiver.streamed_pickups[id]) send_pickup_in(receiver,id);
            else if(!visible && receiver.streamed_pickups[id]) send_pickup_out(receiver,id);
        }
        for(const auto& vehicle:vehicles_) {
            if(vehicle.id==0) continue;
            const double dx=double(receiver.x)-vehicle.x,dy=double(receiver.y)-vehicle.y;
            const bool visible=vehicle.active && vehicle.virtual_world==receiver.virtual_world &&
                vehicle.model!=569 && vehicle.model!=570 && dx*dx+dy*dy<double(kStreamRadius)*kStreamRadius;
            const bool held=receiver.streamed_vehicles[vehicle.id]!=0;
            if(held && !visible && (receiver.vehicle_id!=vehicle.id || vehicle.virtual_world!=receiver.virtual_world || !vehicle.active))
                send_vehicle_stream_out(receiver,vehicle.id);
            else if(!held && visible && receiver.streamed_vehicle_count<=700)
                send_vehicle_stream_in(receiver,vehicle);
        }
        for (const GamePlayer& other : players_) {
            if (receiver.id == other.id) continue;
            // 0x4853a9..0x4853e7 measures a passenger against its vehicle,
            // since its last passenger packet may precede the driver's motion.
            double distance = other.squared_horizontal_distance_to(receiver.x, receiver.y);
            if(other.state==3) {
                if(other.vehicle_id==0 || other.vehicle_id>=vehicles_.size() ||
                   !vehicles_[other.vehicle_id].active) continue;
                const auto& vehicle = vehicles_[other.vehicle_id];
                const double dx = double(vehicle.x) - receiver.x;
                const double dy = double(vehicle.y) - receiver.y;
                distance = dx * dx + dy * dy;
            }
            const bool visible = receiver.spawned && other.in_use && other.spawned &&
                other.state != 0 && other.state != 9 &&
                receiver.virtual_world == other.virtual_world &&
                distance < double(kStreamRadius) * kStreamRadius;
            const bool held = receiver.streamed_to[&other - players_.data()] != 0;
            if (held && !visible) send_stream_out(receiver, other);
            else if (!held && visible && receiver.streamed_count < kMaxStreamedPlayers)
                send_stream_in(receiver, other);
        }
    }
    std::fflush(stdout);
}

// Official: FUN_0046a9d0 @ 0x0046a9d0 (samp-server.exe)
bool GameLayer::load_filterscript(const std::string& name) {
    if(name.empty() || filterscripts_.size()>=16) return false;
    const std::string path="filterscripts/"+name+".amx";
    if(std::any_of(filterscripts_.begin(),filterscripts_.end(),[&path](const auto& script) {
        return script->path_==path;
    })) return false;
    auto script=std::make_unique<samp::pawn::PawnVm>();
    script->path_=path;
    std::ifstream file(path,std::ios::binary);
    if(!file) {
        script->ok_=false;script->error_="cannot open "+path;
        return false;
    }
    std::vector<std::uint8_t> bytes;
    bytes.assign(std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>());
    if (!script->load(bytes, path)) return false;
    samp::pawn::register_server_natives(*script,*this);
    samp::amx::cell result=0;
    static_cast<void>(script->execute("OnFilterScriptInit",{},result));
    filterscripts_.push_back(std::move(script));
    return true;
}

// Official: FUN_0046af20 @ 0x0046af20 (samp-server.exe)
int GameLayer::start_gamemode() {
    // The game mode's OnGameModeInit runs first, then its main().
    samp::amx::cell result = 0;
    vm_.execute("OnGameModeInit", std::span<const samp::amx::cell>{}, result);
    if (!vm_.ok_) return vm_.last_error_ = 13;
    if (vm_.header_.cip == 0xFFFFFFFF) return vm_.last_error_ = 20;
    return vm_.execute(std::string_view{}, std::span<const samp::amx::cell>{}, result);
}

// ------------------------------------------------------------ the native host

// Official: FUN_00473240 @ 0x00473240 (samp-server.exe)
int GameLayer::max_players() const {
    return config_->getInt("maxplayers", 50);
}

// The native truncates to WORD before its fixed 1000-slot occupancy check.
// Official: FUN_00472dd0 @ 0x00472dd0 (samp-server.exe)
bool GameLayer::is_player_connected(int id) const {
    return player_slot_is_occupied(static_cast<std::uint16_t>(id));
}

// Source adapter only; no established separate native entry.
bool GameLayer::player_send_totals(int id, std::uint64_t& sent, std::uint64_t& resent) const {
    if (!is_player_connected(id)) return false;
    const auto* peer = players_[static_cast<std::uint16_t>(id)].peer;
    if (!peer) return false;
    sent = peer->send_state_.total_bits_sent;
    resent = peer->send_state_.total_bits_resent;
    return true;
}

// Console-variable access used by the Pawn native adapter; no separate
// standalone official body is assigned to this interface bridge.
// source adapter only; no established separate native entry
bool GameLayer::read_console_variable(std::string_view name, std::string& value) const {
    if (!config_) return false;
    const auto found = config_->find_variable(name);
    if (found == config_->values_.end()) return false;
    value = found->second;
    return true;
}

// RCON native-to-console bridge; no separate official function entry.
// source adapter only; no established separate native entry
bool GameLayer::send_rcon_command(std::string_view command) {
    if (!execute_remote_console_) return false;
    execute_remote_console_(-1, command);
    return true;
}

// Scan every official slot, including occupied slots after holes.
// Official: FUN_00465de0 @ 0x00465de0 (samp-server.exe)
bool GameLayer::player_name_in_use(const char* name) const {
    for (std::size_t slot = 0; slot < 1000 && slot < players_.size(); ++slot) {
        if (!players_[slot].in_use) continue;
#if defined(_WIN32)
        if (_stricmp(players_[slot].name.c_str(), name) == 0) return true;
#else
        if (::strcasecmp(players_[slot].name.c_str(), name) == 0) return true;
#endif
    }
    return false;
}

// Official: FUN_0046fef0 @ 0x0046fef0 (samp-server.exe)
void GameLayer::set_game_mode_text(std::string_view text) {
    config_->set_string_variable("gamemodetext", std::string(text));
}

// Official: FUN_00496170 @ 0x00496170 (samp-server.exe)
void GameLayer::set_world_time(int hour) {
    world_hour_ = hour & 0xFF;
    const auto byte=static_cast<std::uint8_t>(world_hour_);BitStream payload;payload.write(&byte,1);
    for(std::size_t slot=0;slot<1000 && slot<players_.size() && static_cast<int>(slot)<=player_pool_highest_;++slot) {
        auto& player=players_[slot];
        player.world_hour = byte;
        player.world_minute = 0;
        if(player.in_use && player.peer) send_rpc(*player.peer,94,payload);
    }
    char buffer[16];
    std::snprintf(buffer, sizeof(buffer), "%02d:00", world_hour_);
    config_->set_string_variable("worldtime", buffer);
}

// Official: FUN_00496240 @ 0x00496240 (samp-server.exe)
void GameLayer::set_weather(int id) {
    weather_id_ = id & 0xFF;
    // 0x473f20 -> 0x496240 -> 0x493960: broadcast the low byte to
    // every occupied player slot, including players still initializing.
    BitStream payload;
    const auto weather = static_cast<std::uint8_t>(weather_id_);
    payload.write(&weather, 1);
    for(std::size_t slot=0;slot<1000 && slot<players_.size() && static_cast<int>(slot)<=player_pool_highest_;++slot) {
        const auto& player=players_[slot];
        if (player.in_use && player.peer) send_rpc(*player.peer, 152, payload);
    }
    config_->set_string_variable("weather", std::to_string(weather_id_));
}

// Official: FUN_00496310 @ 0x00496310 (samp-server.exe)
// Updates the server gravity variable and broadcasts RPC 146 to every player.
void GameLayer::set_gravity(float gravity) {
    gravity_ = gravity;
    char buffer[32];
    std::snprintf(buffer, sizeof(buffer), "%f", gravity);
    config_->set_string_variable("gravity", buffer);
    samp::proto::BitStream payload;
    payload.write(&gravity,4);
    for(std::size_t slot=0;slot<1000 && slot<players_.size() && static_cast<int>(slot)<=player_pool_highest_;++slot) {
        const auto& player=players_[slot];
        if(player.in_use && player.peer) send_rpc(*player.peer,146,payload);
    }
}

// Official: FUN_004708c0 @ 0x004708c0 (samp-server.exe)
void GameLayer::kick_player(int id) {
    disconnect_player(id,2);
}

// Official: FUN_00471b70 @ 0x00471b70 (samp-server.exe)
void GameLayer::send_client_message(int id, int type, std::string_view text) {
    if(id<0 || static_cast<std::size_t>(id)>=players_.size()) return;
    GamePlayer& player=players_[static_cast<std::size_t>(id)];
    if(!player.in_use || player.peer==nullptr) return;
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(type))).data(),4);
    const auto length=static_cast<std::uint32_t>(text.size());
    const std::uint8_t length_bytes[4]{static_cast<std::uint8_t>(length),
        static_cast<std::uint8_t>(length>>8),static_cast<std::uint8_t>(length>>16),
        static_cast<std::uint8_t>(length>>24)};
    payload.write(length_bytes,sizeof(length_bytes));
    if(!text.empty()) payload.write(text.data(),text.size());
    send_rpc(*player.peer, kRpcClientMessage, payload);
}

// ------------------------------------------------------- the player natives

// Official: FUN_004943d0 @ 0x004943d0 (samp-server.exe)
int GameLayer::add_player_class(const samp::pawn::PlayerClassSpec& spec) {
    // Both class natives preserve this owner's EAX, including its 319
    // full-pool return. Only indices 0..318 are actually installed.
    if (classes_.size() >= 319) return 319;
    const auto id = static_cast<int>(classes_.size());
    classes_.push_back(spec);
    return id;
}

// Official: FUN_0047bb00 @ 0x0047bb00 (samp-server.exe)
void GameLayer::set_player_interior(int id, int interior) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    BitStream payload;
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>(interior))}.data(),1);
    send_rpc(*player.peer, kRpcSetPlayerInterior, payload);
}

// Official: FUN_0047ae30 @ 0x0047ae30 (samp-server.exe)
void GameLayer::set_player_pos(int id, float x, float y, float z) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    // Native sends the requested position without fabricating a sync update.
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(x)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(y)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(z)).data(),4);
    send_rpc(*player.peer, kRpcSetPlayerPos, payload);
}

// Official: FUN_0047c920 @ 0x0047c920 (samp-server.exe)
void GameLayer::set_player_facing_angle(int id, float angle) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    // The reported angle changes when the client supplies its next sync.
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(angle)).data(),4);
    send_rpc(*player.peer, kRpcSetPlayerFacingAngle, payload);
}

// Official: FUN_0047bcc0 @ 0x0047bcc0 (samp-server.exe)
void GameLayer::set_camera_pos(int id, float x, float y, float z) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(x)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(y)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(z)).data(),4);
    send_rpc(*player.peer, kRpcSetCameraPos, payload);
}

// Official: FUN_0047bde0 @ 0x0047bde0 (samp-server.exe)
void GameLayer::set_camera_look_at(int id, float x, float y, float z, int cut) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    BitStream payload;
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(x)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(y)).data(),4);
    payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(z)).data(),4);
    auto mode = static_cast<std::uint8_t>(cut);
    if (mode < 1 || mode > 2) mode = 2;
    payload.write(&mode, 1);
    send_rpc(*player.peer, kRpcSetCameraLookAt, payload);
}

// Official: FUN_00473050 @ 0x00473050 (samp-server.exe)
void GameLayer::toggle_player_clock(int id, std::uint8_t on) {
    const auto slot = static_cast<std::uint16_t>(id);
    if(slot >= 1000 || slot >= players_.size()) return;
    GamePlayer& player=players_[slot];
    if(!player.in_use || player.peer==nullptr) return;
    player.clock_enabled = on;
    BitStream payload;
    payload.write(&on, 1);
    send_rpc(*player.peer, kRpcTogglePlayerClock, payload);
}

// Official: FUN_00496890 @ 0x00496890 (samp-server.exe)
void GameLayer::on_user_message(RakNetPeer& peer, const BitStream& message) {
    if (message.numberOfBitsUsed_ < 8) {
        return;
    }
    const std::uint8_t first = message.data_[0];
    // Receive's RPC gate (0x458370) recognizes the timestamp wrapper too.
    if (first == samp::proto::kRaknetIdRpc ||
        (first == 40 && message.numberOfBitsUsed_ > 40 && message.data_[5] == samp::proto::kRaknetIdRpc)) {
        handle_rpc_packet(peer, message);
        return;
    }
    if(first==201) {handle_remote_console(peer,message);return;}
    handle_game_packet(peer, message);
}

// Official: FUN_00451fd0 @ 0x00451fd0 (samp-server.exe)
void GameLayer::handle_rpc_packet(RakNetPeer& peer, const BitStream& message) {
    BitStream in;
    in.write(message.data_.data(), (message.numberOfBitsUsed_ + 7u) >> 3);
    // Native HandleRPCPacket receives packet.length (bytes), not bitSize.
    // Its timestamp prefix is ID_TIMESTAMP + u32 time + ID_RPC.
    in.readOffset_ = message.data_[0] == 40 ? 48u : 8u;
    std::uint8_t rpc_id = 0;
    std::uint8_t bit_count_bytes[4]{};
    if (!in.read(&rpc_id, 1) || !in.readCompressed(bit_count_bytes, 32, true)) return;
    const std::uint32_t payload_bits = static_cast<std::uint32_t>(bit_count_bytes[0]) |
        (static_cast<std::uint32_t>(bit_count_bytes[1]) << 8) |
        (static_cast<std::uint32_t>(bit_count_bytes[2]) << 16) |
        (static_cast<std::uint32_t>(bit_count_bytes[3]) << 24);
    BitStream payload;
    if (payload_bits > 0) {
        // 0x4520b1..0x4520e8 sizes storage from unread packet bits, never
        // from the advertised payload length. ReadBits then validates it.
        const std::size_t remaining_bits = in.numberOfBitsUsed_ - in.readOffset_;
        if (remaining_bits == 0) return;
        std::vector<std::uint8_t> buffer((remaining_bits + 7u) >> 3, 0);
        if (!in.readBits(buffer.data(), static_cast<int>(payload_bits), false)) return;
        payload.write(buffer.data(), (static_cast<std::size_t>(payload_bits) + 7u) >> 3);
        payload.numberOfBitsUsed_ = payload_bits;
    }
    switch (rpc_id) {
        case kRpcPlayerConnect:
            handle_player_connect(peer, payload);
            break;
        case kRpcPlayerRequestClass:
            handle_player_request_class(peer, payload);
            break;
        case kRpcPlayerRequestSpawn:
            handle_player_request_spawn(peer);
            break;
        case kRpcPlayerInGame:
            handle_player_in_game(peer);
            break;
        // Registered 0.3.DL callbacks49ac60/49ad60 read CRC32 only.
        case 181:
        case 182: {
            std::uint32_t crc = 0;
            if (!payload.read(&crc, 4)) break;
            for (auto& player : players_) if (player.in_use && player.peer == &peer) {
                request_model_download(player, rpc_id == 181 ? 1 : 2, crc);
                break;
            }
            break;
        }
        case 184: handle_model_finish(peer, payload); break;
        case 155: handle_score_request(peer); break;
        case 27: handle_object_selection(peer, payload); break;
        case 117: handle_object_edit(peer, payload); break;
        case 83: handle_textdraw_click(peer,payload); break;
        case 62: handle_dialog_response(peer, payload); break;
        case 132: handle_menu_row(peer,payload); break;
        case 140: handle_menu_exit(peer); break;
        // 497a10 ->483770 accepts eight target bytes only while enabled.
        case 168: {
            if (gamemode_restarting_) break;
            std::array<std::uint16_t, 4> targets;
            if (!payload.read(targets.data(), 8)) break;
            for (auto& player : players_) if (player.in_use && player.peer == &peer && player.camera_targeting) {
                player.camera_targets = targets;
                break;
            }
            break;
        }
        case 23: handle_player_click(peer, payload); break;
        case 119: handle_player_map_click(peer, payload); break;
        case 131: handle_player_pickup(peer, payload); break;
        case 136: handle_vehicle_death(peer, payload); break;
        case 96: handle_vehicle_appearance(peer, payload); break;
        case 106: handle_vehicle_damage(peer, payload); break;
        case 26: handle_vehicle_enter(peer, payload); break;
        case 154: handle_vehicle_exit(peer, payload); break;
        case 118: handle_player_interior(peer, payload); break;
        case 53: handle_player_death(peer, payload); break;
        case kRpcPlayerGiveDamageActor: handle_actor_damage(peer, payload); break;
        case kRpcPlayerRequestChat: handle_player_chat(peer, payload); break;
        case kRpcPlayerRequestCommand: handle_player_command(peer, payload); break;
        default: break;
    }
}

// The validation of the official server (samp-server.exe 0x4966c0): the
// version, the modded flag, the name, the challenge response, the key and
// the version string.
// RPC 25 registration at 0x0049d5e9 pairs this owner with DAT_004c00d8.
// RPC 54 is the distinct NPC join owner at 0x00497ef0 (24-byte names).
// Official: FUN_0049cea0 @ 0x0049cea0 (samp-server.exe)
void GameLayer::handle_player_connect(RakNetPeer& peer, const BitStream& payload) {
    if (peer.stage_ != RakNetPeer::Stage::Authenticated) return;
    if (std::any_of(players_.begin(), players_.end(), [&](const auto& player) {
        return player.in_use && player.peer == &peer;
    })) return;
    const auto reject = [this](RakNetPeer& target, std::uint8_t code) {
        BitStream response;
        response.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(code)}.data(),1);
        send_rpc(target,kRpcConnectionRejected,response);
        target.stage_ = RakNetPeer::Stage::Closing;
        target.close_after_ms_ = target.last_receive_ms_ + 500;
    };
    BitStream in = payload;

    std::uint32_t version = 0;
    std::uint8_t modded = 0;
    if (!in.read(&(version),4) || !in.read(&(modded),1)) {
        reject(peer, kRejectIncorrectVersion);
        return;
    }
    if (version != kSampVersionNumber) {
        reject(peer, kRejectIncorrectVersion);
        return;
    }

    std::string name;
    std::uint8_t name_length=0;
    if (!in.read(&name_length,sizeof(name_length)) ||
        static_cast<std::size_t>(name_length)>
            (((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3)) {
        reject(peer, kRejectUnacceptableNickName);
        return;
    }
    name.assign(name_length,'\0');
    if(name_length!=0 && !in.read(name.data(),name_length)) {
        reject(peer,kRejectUnacceptableNickName);return;
    }

    std::uint32_t challenge_response = 0;
    if (!in.read(&(challenge_response),4)) {
        reject(peer, kRejectIncorrectVersion);
        return;
    }
    // The response is the token XOR the protocol version (0xFDE for 0.3.DL).
    if (challenge_response != (challenge_token_ ^ kSampVersionNumber)) {
        reject(peer, kRejectIncorrectVersion);
        return;
    }
    // Official 0x49D1C1..0x49D1F9: version/challenge rejection precedes mod.
    if (modded != 1) {
        reject(peer, kRejectBadModVersion);
        return;
    }

    std::string key;
    std::string version_string;
    std::uint8_t key_length=0;
    if(!in.read(&key_length,sizeof(key_length)) ||
       static_cast<std::size_t>(key_length)>
           (((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3)) {
        reject(peer, kRejectIncorrectVersion);
        return;
    }
    key.assign(key_length,'\0');
    if(key_length!=0 && !in.read(key.data(),key_length)) {
        reject(peer,kRejectIncorrectVersion);return;
    }
    std::uint8_t version_length=0;
    if(!in.read(&version_length,sizeof(version_length)) ||
       static_cast<std::size_t>(version_length)>
           (((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3)) {
        reject(peer,kRejectIncorrectVersion);return;
    }
    version_string.assign(version_length,'\0');
    if(version_length!=0 && !in.read(version_string.data(),version_length)) {
        reject(peer,kRejectIncorrectVersion);return;
    }
    // The native normal-client owner parses the hexadecimal serial, divides
    // by 1001 and requires zero remainder and a 2..40-digit quotient.
    std::uint32_t remainder = 0;
    std::string serial;
    bool valid_serial = !key.empty() && key.size() <= 48;
    for (const unsigned char character : key) {
        unsigned digit = 16;
        if (character >= '0' && character <= '9') digit = character - '0';
        else if (character >= 'A' && character <= 'F') digit = character - 'A' + 10;
        else if (character >= 'a' && character <= 'f') digit = character - 'a' + 10;
        if (digit == 16) { valid_serial = false; break; }
        const auto current = remainder * 16u + digit;
        const auto quotient = current / 1001u;
        remainder = current % 1001u;
        if (!serial.empty() || quotient != 0) serial.push_back("0123456789ABCDEF"[quotient]);
    }
    if (!valid_serial || remainder != 0 || serial.size() < 2 || serial.size() > 40) {
        peer.stage_ = RakNetPeer::Stage::Closing;
        peer.close_after_ms_ = peer.last_receive_ms_ + 500;
        return;
    }
    // 0x49D216..0x49D25B: embedded NUL, whitelist, 3..20, occupied names.
    if (std::strlen(name.c_str()) != name.size() || invalid_player_name(name.c_str()) ||
        name.size() < 3 || name.size() > 20 || player_name_in_use(name.c_str())) {
        reject(peer, kRejectUnacceptableNickName);
        return;
    }

    // The connect handler finds the first free player slot before it builds
    // the PlayerJoin and PlayerInit replies.
    int slot = -1;
    for (std::size_t i = 0; i < players_.size(); ++i) {
        if (!players_[i].in_use) {
            slot = static_cast<int>(i);
            break;
        }
    }
    if (slot < 0) {
        reject(peer, kRejectNoPlayerSlot);
        return;
    }

    GamePlayer& player = players_[static_cast<std::size_t>(slot)];
    player.in_use = true;
    player.id = slot;
    player.name = name;
    player.colour = 0xFFFFFFFFu;
    player.is_npc = false;
    player.joined = false;
    player.spawned = false;
    player.peer = &peer;
    player.ipv4_address = peer.address_;
    player.streamed_to.assign(players_.size(), 0);
    player.streamed_count = 0;
    player.streamed_vehicles.assign(vehicles_.size(),0);
    player.streamed_vehicle_count=0;
    player.last_marker_sync_ms = static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());

    // The PlayerJoin: the id, the colour, the NPC flag and the name.
    BitStream join;
    join.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(slot))).data(),2);
    join.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(player.colour)).data(),4);
    join.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(0)}.data(),1);
    const auto player_name_length=static_cast<std::uint8_t>(player.name.size());
    join.write(&player_name_length,sizeof(player_name_length));
    if(!player.name.empty()) join.write(player.name.data(),player.name.size());
    send_rpc(peer, kRpcPlayerJoin, join);

    // The players that are already in the world.  The server sends the join
    // of every player to every other player, so the world of each client has
    // an entry for the players it has to draw.
    for (GamePlayer& other : players_) {
        if (!other.in_use || other.id == slot || other.peer == nullptr) {
            continue;
        }
        BitStream existing;
        existing.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(other.id))).data(),2);
        existing.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(other.colour)).data(),4);
        existing.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(other.is_npc ? 1 : 0)}.data(),1);
        const auto other_name_length=static_cast<std::uint8_t>(other.name.size());
        existing.write(&other_name_length,sizeof(other_name_length));
        if(!other.name.empty()) existing.write(other.name.data(),other.name.size());
        send_rpc(peer, kRpcPlayerJoin, existing);
        if (other.joined) {
            send_rpc(*other.peer, kRpcPlayerJoin, join);
        }
    }

    // The PlayerInit: the server settings and the vehicle models.  Every
    // default below is the value the shipped server sends when the game mode
    // has not changed it; the captures that pin them are
    // work/probe-alpha.txt and work/probe_official.txt (RPC 139).
    // 4661c0 invokes46ae10/46dbf0 before496740 builds the manifest/init.
    // Downloads defer only the initial object batch, never OnPlayerConnect.
    filterscript_player_connect(player.id);
    gamemode_player_connect(player.id);
    if(!player.in_use || player.peer!=&peer) return;
    // 0x4661c0 updates the cached highest slot after OnPlayerConnect.
    update_player_pool_size();
    player.models_ready=!artwork_enabled_ || models_.empty();
    if(artwork_enabled_) send_model_manifest(player);
    if(!gamemode_restarting_ && menu_pool_) menu_pool_->reset_player(static_cast<std::uint16_t>(slot));
    initialize_player(player);
}

// Official: FUN_00494dc0 @ 0x00494dc0 (samp-server.exe)
void GameLayer::handle_game_packet(RakNetPeer& peer, const BitStream& message) {    // The game packets the client sends are its own synchronisation.  The
    // server identifies the sender by the connection, not by a field of the
    // packet (samp-server.exe FUN_00497750 reads the player from the six byte
    // key of the message), and then relays the state to every other player.
    if (((message.numberOfBitsUsed_+7u)>>3) < 1) {
        return;
    }
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr || player->state == 7) {
        return;
    }
    const std::uint8_t id = message.data_[0];
    if (id == 212) {
        handle_spectator_packet(*player, message);
        return;
    }
    const bool spectator_aim = id == 203 && (player->spectating || player->spectate_target_type != 0);
    if (!player->spawned && !spectator_aim) return;
    switch (id) {
    case 200: handle_driver_packet(*player,message); return;
    case 211: handle_passenger_packet(*player,message); return;
    case 203: handle_aim_packet(*player,message); return;
    case 206: handle_bullet_packet(*player,message); return;
    case 205: handle_stats_packet(*player,message); return;
    case 204: handle_weapons_packet(*player,message); return;
    case samp::proto::own::kFootSyncId: break;
    default: return;
    }

    samp::proto::own::FootSync state;
    if (((message.numberOfBitsUsed_+7u)>>3) < 1 + samp::proto::own::kFootSyncBlockSize) return;
    const std::uint8_t* const block = message.data_.data() + 1;
    const auto read_u16 = [block](std::size_t offset) {
        return static_cast<std::uint16_t>(block[offset] |
            (static_cast<std::uint16_t>(block[offset + 1]) << 8));
    };
    const auto read_u32 = [block](std::size_t offset) {
        return static_cast<std::uint32_t>(block[offset]) |
            (static_cast<std::uint32_t>(block[offset + 1]) << 8) |
            (static_cast<std::uint32_t>(block[offset + 2]) << 16) |
            (static_cast<std::uint32_t>(block[offset + 3]) << 24);
    };
    const auto read_float = [&read_u32](std::size_t offset) {
        const std::uint32_t bits = read_u32(offset);
        float value = 0.0f;
        std::memcpy(&value, &bits, sizeof(value));
        return value;
    };
    state.left_right = read_u16(0x00);
    state.up_down = read_u16(0x02);
    state.keys = read_u16(0x04);
    state.x = read_float(0x06);
    state.y = read_float(0x0a);
    state.z = read_float(0x0e);
    state.qw = read_float(0x12);
    state.qx = read_float(0x16);
    state.qy = read_float(0x1a);
    state.qz = read_float(0x1e);
    state.health = block[0x22];
    state.armour = block[0x23];
    state.weapon = block[0x24];
    state.special_action = block[0x25];
    state.vx = read_float(0x26);
    state.vy = read_float(0x2a);
    state.vz = read_float(0x2e);
    state.sx = read_float(0x32);
    state.sy = read_float(0x36);
    state.sz = read_float(0x3a);
    state.surfing_id = read_u16(0x3e);
    state.animation_id = read_u32(0x40);
    if (!std::isfinite(state.x) || !std::isfinite(state.y) || !std::isfinite(state.z) ||
        !std::isfinite(state.qw) || !std::isfinite(state.qx) ||
        !std::isfinite(state.qy) || !std::isfinite(state.qz) ||
        !std::isfinite(state.vx) || !std::isfinite(state.vy) || !std::isfinite(state.vz)) return;

    // samp-server.exe 0x487040: every foot sync also moves the live state of
    // the sender (the position the stream-in RPC reports and the distance
    // checks of the streaming pass 0x4851d0 use it).
    player->special_action = state.special_action;
    player->surfing_id = state.surfing_id;
    player->on_foot_animation = state.animation_id;
    update_player_position(*player, state.x, state.y, state.z, false);
    if (!player->in_use || player->peer != &peer) return;
    const auto previous_keys = player->keys;
    player->health = state.health;
    player->armour = state.armour;
    player->weapon = state.weapon & 0x3f;
    player->left_right = static_cast<std::int16_t>(state.left_right);
    player->up_down = static_cast<std::int16_t>(state.up_down);
    player->keys = state.keys;
    if(state.weapon>>6) player->keys |= 1u<<(15+(state.weapon>>6));
    player->vx = state.vx; player->vy = state.vy; player->vz = state.vz;
    for(auto& vehicle:vehicles_) {
        if(vehicle.driver==player->id) vehicle.driver=-1;
        for(auto& occupant:vehicle.passengers) if(occupant==player->id) occupant=-1;
    }
    player->vehicle_id = 0;
    player->vehicle_seat = 0;
    notify_key_change(*player,previous_keys);
    set_player_state(*player,1);
    if (!player->in_use || player->peer != &peer) return;
    if (state.surfing_id >= 2000 && state.surfing_id < 4000) {
        const auto object = static_cast<std::size_t>(state.surfing_id - 2000);
        if (object >= objects_.size() || !objects_[object].active) {
            player->surfing_id = 0xffff;
        }
    }
    {
        const float qw = state.qw;
        const float qx = state.qx;
        const float qy = state.qy;
        const float qz = state.qz;
        const float yaw = std::atan2(2.0f * (qw * qz + qx * qy), 1.0f - 2.0f * (qy * qy + qz * qz));
        constexpr float kPi = 3.14159265358979f;
        float degrees = yaw * 180.0f / kPi;
        if (degrees < 0.0f) degrees += 360.0f;
        player->angle = degrees;
    }

    const cell update_args[]{player->id};
    const auto allow_update=[&](samp::pawn::PawnVm& script) {
        if(!std::any_of(script.publics_.begin(),script.publics_.end(),[](const auto& p){return p.name=="OnPlayerUpdate";})) return true;
        cell result=1;return script.execute("OnPlayerUpdate",update_args,result)==0 && result!=0;
    };
    for(const auto& script:filterscripts_) if(!allow_update(*script)) return;
    if(!allow_update(vm_)) return;
    BitStream payload;
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::own::kFootSyncId)}.data(),1);
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(static_cast<std::uint16_t>(player->id))).data(),2);
    const bool has_left_right = state.left_right != 0;
    if (has_left_right) payload.write1(); else payload.write0();
    if (has_left_right) payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(state.left_right)).data(),2);
    const bool has_up_down = state.up_down != 0;
    if (has_up_down) payload.write1(); else payload.write0();
    if (has_up_down) payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(state.up_down)).data(),2);
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(state.keys)).data(),2);
    const auto write_float = [&payload](float value) {
        std::uint8_t bytes[sizeof(value)];
        std::memcpy(bytes, &value, sizeof(value));
        payload.write(bytes, sizeof(bytes));
    };
    write_float(state.x); write_float(state.y); write_float(state.z);
    if (state.qw < 0.0f) payload.write1(); else payload.write0();
    if (state.qx < 0.0f) payload.write1(); else payload.write0();
    if (state.qy < 0.0f) payload.write1(); else payload.write0();
    if (state.qz < 0.0f) payload.write1(); else payload.write0();
    constexpr float rotation_scale = 1.0f / 65535.0f;
    const auto rotation_component = [rotation_scale](float component) {
        float magnitude = component < 0.0f ? -component : component;
        if (magnitude > 1.0f) magnitude = 1.0f;
        return static_cast<std::uint16_t>(magnitude / rotation_scale);
    };
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(rotation_component(state.qx))).data(),2);
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(rotation_component(state.qy))).data(),2);
    payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(rotation_component(state.qz))).data(),2);
    constexpr float percent_step = 7.0f;
    constexpr float full_percent = 100.0f;
    const auto percent_nibble = [percent_step, full_percent](float percent) {
        if (percent <= 0.0f) return static_cast<std::uint8_t>(0);
        if (percent >= full_percent) return static_cast<std::uint8_t>(0x0f);
        const auto step = static_cast<std::uint8_t>(percent / percent_step);
        return step >= 0x0f ? static_cast<std::uint8_t>(0x0f) : step;
    };
    const auto health_nibble = percent_nibble(static_cast<float>(state.health));
    const auto armour_nibble = percent_nibble(static_cast<float>(state.armour));
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>((health_nibble << 4) | armour_nibble))}.data(),1);
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>(state.weapon & 0x3fu))}.data(),1);
    payload.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(state.special_action)}.data(),1);
    constexpr float zero_magnitude = 1.0e-5f;
    constexpr float velocity_scale = 1.0f / 32767.5f;
    const float x2 = state.vx * state.vx, y2 = state.vy * state.vy, z2 = state.vz * state.vz;
    const float magnitude = std::sqrt(x2 + y2 + z2);
    if (magnitude <= zero_magnitude) {
        payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(0)).data(),4);
    } else {
        payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(magnitude)).data(),4);
        const auto velocity_component = [magnitude, velocity_scale](float component) {
            float fraction = component / magnitude;
            if (fraction < -1.0f) fraction = -1.0f;
            if (fraction > 1.0f) fraction = 1.0f;
            return static_cast<std::uint16_t>((fraction + 1.0f) / velocity_scale);
        };
        payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(velocity_component(state.vx))).data(),2);
        payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(velocity_component(state.vy))).data(),2);
        payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(velocity_component(state.vz))).data(),2);
    }
    const bool surfing = state.surfing_id != 0;
    if (surfing) payload.write1(); else payload.write0();
    if (surfing) {
        payload.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(state.surfing_id)).data(),2);
        write_float(state.sx); write_float(state.sy); write_float(state.sz);
    }
    const bool animated = state.animation_id != 0;
    if (animated) payload.write1(); else payload.write0();
    if (animated) payload.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(state.animation_id)).data(),4);
    relay_sync(*player, payload);
}

// ------------------------------------------------------- the class selection
//
// The answer of the official server to the RPC 128 is the data of the class
// Official: FUN_00498560 @ 0x00498560 (samp-server.exe)
void GameLayer::handle_player_request_class(RakNetPeer& peer, const BitStream& payload) {
    BitStream in = payload;
    std::uint32_t class_id = 0;
    if (!in.read(&(class_id),4)) {
        return;
    }
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr || class_id >= 319 || class_id >= classes_.size()) {
        return;
    }
    // The class is installed before callbacks; SetSpawnInfo in a callback wins.
    const auto& selected = classes_[class_id];
    player->spawn_info = selected;
    player->has_spawn_info = true;
    player->team = static_cast<std::uint8_t>(selected.team);
    player->skin = static_cast<std::uint32_t>(selected.model);
    player->custom_model = selected.custom_model;
    filterscript_player_request_class(player->id, static_cast<int>(class_id));
    const auto accepted = static_cast<std::uint8_t>(
        vm_.ok_ ? gamemode_player_request_class(player->id, static_cast<int>(class_id)) : 1);
    player->class_allowed = accepted != 0;

    BitStream answer;
    const samp::pawn::PlayerClassSpec& entry=player->spawn_info;
    answer.write(&accepted, 1);
    answer.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(static_cast<std::uint8_t>(entry.team))}.data(),1);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(entry.model))).data(),4);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(entry.custom_model).data(),4);
    answer.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(0)}.data(),1);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(entry.x)).data(),4);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(entry.y)).data(),4);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(entry.z)).data(),4);
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<float>(entry.angle)).data(),4);
    for(int i=0;i<3;++i) answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(entry.weapon[i]))).data(),4);
    for(int i=0;i<3;++i) answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(static_cast<std::uint32_t>(entry.ammunition[i]))).data(),4);
    send_rpc(peer, kRpcPlayerRequestClass, answer);


}

// Official: FUN_00498780 @ 0x00498780 (samp-server.exe)
void GameLayer::handle_player_request_spawn(RakNetPeer& peer) {
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr || !player->has_spawn_info) {
        return;
    }
    const bool allowed = filterscript_player_request_spawn(player->id) != 0 &&
        (!vm_.ok_ || gamemode_player_request_spawn(player->id) != 0);
    if (allowed) player->spawn_authorized = true;
    BitStream answer;
    answer.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(allowed ? kSpawnAnswerAllowed : 0)}.data(),1);
    send_rpc(peer, kRpcPlayerRequestSpawn, answer);
}

// Official: FUN_00497750 @ 0x00497750 (samp-server.exe)
void GameLayer::handle_player_in_game(RakNetPeer& peer) {
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr || !player->has_spawn_info || player->spawn_info.model < 0 ||
        player->spawn_info.model > 319 || (!player->is_npc && !player->spawn_authorized)) {
        return;
    }
    // samp-server.exe 0x487730: a (re)spawn first streams the player out of
    // every client that still holds its old ped, then moves the live state to
    // the spawn point of the class and marks the player as spawned.
    for (GamePlayer& receiver : players_) {
        if (receiver.in_use && receiver.peer && receiver.streamed_to[player->id])
            send_stream_out(receiver, *player);
    }
    player->x = player->spawn_info.x;
    player->y = player->spawn_info.y;
    player->z = player->spawn_info.z;
    player->angle = player->spawn_info.angle;
    player->spawned = true;
    player->vehicle_id = 0;
    player->vehicle_seat = 0;
    player->skin = static_cast<std::uint32_t>(player->spawn_info.model);
    player->custom_model = player->spawn_info.custom_model;
    player->team = static_cast<std::uint8_t>(player->spawn_info.team);
    set_player_state(*player, 8);
    filterscript_player_spawn(player->id);
    gamemode_player_spawn(player->id);
    update_streaming();
}

// --------------------------------------------------------------- the chat
//
// samp-server.exe 0x498340: the receive handler reads a one-byte length, drops
// the whole request when it is 129 or more, sanitises the text, logs it under
// "chatlogging", asks OnPlayerText and, when the callback answers non-zero,
// calls the broadcast at 0x484eb0.  The broadcast is the RPC 101 with the
// sender id in front of the text, sent to every connected player (including
// the sender) unless the optional chat distance is configured.
// Official: FUN_00498340 @ 0x00498340 (samp-server.exe)
void GameLayer::handle_player_chat(RakNetPeer& peer, const BitStream& payload) {
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr) {
        return;
    }
    BitStream in = payload;
    std::string text;
    std::uint8_t text_length=0;
    if(!in.read(&text_length,sizeof(text_length)) ||
       static_cast<std::size_t>(text_length)>
           (((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3)) {
        return;
    }
    text.assign(text_length,'\0');
    if(text_length!=0 && !in.read(text.data(),text_length)) return;
    if (text.size() > kMaxChatLength) {
        return;
    }
    text = sanitise_chat_text(std::move(text));
    text.resize(std::strlen(text.c_str()));
    if (log_message_ && config_ && config_->getInt("chatlogging", 1) != 0) {
        log_message_("[chat] [" + player->name + "]: " + text);
    }
    if (filterscript_player_text(player->id, text) == 0 || !player->in_use) return;
    if (vm_.ok_) gamemode_player_text(player->id, text);
    else broadcast_player_chat(*player, text);
}

// Official: FUN_0046b200 @ 0x0046b200 (samp-server.exe)
cell GameLayer::filterscript_player_text(int player, std::string& text) {
    const cell args[]{player};
    cell result = 1;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        if (!filterscripts_[slot]) continue;
        run_script_text_callback(*filterscripts_[slot], "OnPlayerText", args, text.c_str(), result, &text);
        if (result == 0) break;
    }
    return result;
}

// Official: FUN_0046de60 @ 0x0046de60 (samp-server.exe)
cell GameLayer::gamemode_player_text(int player, std::string& text) {
    if (!vm_.ok_) return 0;
    const cell args[]{player};
    cell result = 1;
    run_script_text_callback(vm_, "OnPlayerText", args, text.c_str(), result, &text);
    const auto slot = static_cast<std::uint16_t>(player);
    if (result != 0 && slot < 1000 && slot < players_.size() && players_[slot].in_use) {
        broadcast_player_chat(players_[slot], text);
    }
    return result;
}

// Official: FUN_0046b2d0 @ 0x0046b2d0 (samp-server.exe)
cell GameLayer::filterscript_player_command(int player, const char* text) {
    const cell args[]{player};
    cell result = 0;
    for (std::size_t slot = 0; slot < 16 && slot < filterscripts_.size(); ++slot) {
        if (!filterscripts_[slot]) continue;
        run_script_text_callback(*filterscripts_[slot], "OnPlayerCommandText", args, text, result);
        if (result != 0) return 1;
    }
    return result;
}

// Official: FUN_0046df60 @ 0x0046df60 (samp-server.exe)
cell GameLayer::gamemode_player_command(int player, const char* text) {
    const auto slot = static_cast<std::uint16_t>(player);
    if (slot >= 1000 || slot >= players_.size() || !players_[slot].in_use) return 0;
    const cell args[]{player};
    cell result = 0;
    run_script_text_callback(vm_, "OnPlayerCommandText", args, text, result);
    return result;
}

// Official: FUN_00498ea0 @ 0x00498ea0 (samp-server.exe)
void GameLayer::handle_player_command(RakNetPeer& peer, const BitStream& payload) {
    GamePlayer* player = nullptr;
    for (GamePlayer& candidate : players_) {
        if (candidate.in_use && candidate.peer == &peer) {
            player = &candidate;
            break;
        }
    }
    if (player == nullptr) {
        return;
    }
    BitStream in = payload;
    std::string command;
    std::uint8_t length_bytes[4]{};
    if(!in.read(length_bytes,sizeof(length_bytes))) {
        return;
    }
    const std::uint32_t length=static_cast<std::uint32_t>(length_bytes[0]) |
        (static_cast<std::uint32_t>(length_bytes[1])<<8) |
        (static_cast<std::uint32_t>(length_bytes[2])<<16) |
        (static_cast<std::uint32_t>(length_bytes[3])<<24);
    if(length>((in.numberOfBitsUsed_>in.readOffset_?in.numberOfBitsUsed_-in.readOffset_:0)+7u)>>3) return;
    command.assign(length,'\0');
    if(length!=0 && !in.read(command.data(),length)) return;
    if (command.size() < 2 || command.size() > kMaxCommandLength) {
        return;
    }
    command = sanitise_chat_text(std::move(command));
    if (std::strlen(command.c_str()) < 2 ||
        filterscript_player_command(player->id, command.c_str()) != 0 ||
        !vm_.ok_ || gamemode_player_command(player->id, command.c_str()) != 0) return;
    BitStream answer;
    answer.write(std::bit_cast<std::array<std::uint8_t,4>>(static_cast<std::uint32_t>(0xFFFFFFFFu)).data(),4);
    constexpr std::string_view unknown_command="SERVER: Unknown command.";
    constexpr std::uint32_t unknown_command_length=static_cast<std::uint32_t>(unknown_command.size());
    const std::uint8_t unknown_length_bytes[4]{
        static_cast<std::uint8_t>(unknown_command_length),
        static_cast<std::uint8_t>(unknown_command_length>>8),
        static_cast<std::uint8_t>(unknown_command_length>>16),
        static_cast<std::uint8_t>(unknown_command_length>>24)};
    answer.write(unknown_length_bytes,sizeof(unknown_length_bytes));
    answer.write(unknown_command.data(),unknown_command.size());
    send_rpc(peer, kRpcClientMessage, answer);
}

// Official: FUN_00465d60 @ 0x00465d60 (samp-server.exe)
double GameLayer::player_distance(const GamePlayer& sender, const GamePlayer& receiver) const {
    return std::sqrt(sender.squared_distance_from_point(receiver.x, receiver.y, receiver.z));
}

// Official: FUN_00484eb0 @ 0x00484eb0 (samp-server.exe)
void GameLayer::broadcast_player_chat(const GamePlayer& sender, std::string_view text) {
    BitStream payload;
    const auto id = static_cast<std::uint16_t>(sender.id);
    const auto length = static_cast<std::uint8_t>(text.size());
    payload.write(&id, sizeof(id));
    payload.write(&length, sizeof(length));
    if (length) payload.write(text.data(), length);

    const auto channel = limit_global_chat_radius_ ? std::uint8_t{3} : kServerChannelRpc;
    for (std::size_t slot = 0; slot < 1000 && slot < players_.size(); ++slot) {
        const auto& recipient = players_[slot];
        if (!recipient.in_use || !recipient.joined || !recipient.peer) continue;
        if (limit_global_chat_radius_ && &recipient != &sender &&
            !(player_distance(sender, recipient) < global_chat_radius_)) continue;
        send_ordered_rpc(*recipient.peer, kRpcPlayerChat, payload, channel);
    }
}

// Official: FUN_00456040 @ 0x00456040 (samp-server.exe)
void GameLayer::send_rpc(RakNetPeer& peer, std::uint8_t rpc_id, const BitStream& payload) {
    send_ordered_rpc(peer, rpc_id, payload, kServerChannelRpc);
}

// Official: FUN_00493a40 @ 0x00493a40 (samp-server.exe)
void GameLayer::send_streamed_player_rpc(std::uint16_t source, std::uint8_t rpc_id, const BitStream& payload) {
    if (source >= 1000) return;
    for (const auto& recipient : samp::pawn::live_player_slots(*this)) {
        if (recipient.in_use && recipient.peer && recipient.id != source &&
            source < recipient.streamed_to.size() && recipient.streamed_to[source]) {
            send_ordered_rpc(*recipient.peer, rpc_id, payload, kServerChannelRpc);
        }
    }
}

// no standalone native entry
void GameLayer::send_ordered_rpc(RakNetPeer& peer, std::uint8_t rpc_id, const BitStream& payload,
                                 std::uint8_t channel) {
    BitStream frame;
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(samp::proto::kRaknetIdRpc)}.data(),1);
    frame.write(std::array<std::uint8_t,1>{static_cast<std::uint8_t>(rpc_id)}.data(),1);
    const auto payload_bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    const std::uint8_t payload_bit_count[4]{
        static_cast<std::uint8_t>(payload_bits),static_cast<std::uint8_t>(payload_bits>>8),
        static_cast<std::uint8_t>(payload_bits>>16),static_cast<std::uint8_t>(payload_bits>>24)};
    frame.writeCompressed(payload_bit_count,32,true);
    if(payload_bits!=0) frame.writeBits(payload.data_.data(),static_cast<int>(payload_bits),false);
    peer.send(std::span<const std::uint8_t>(frame.data_.data(), (frame.numberOfBitsUsed_+7u)>>3),
              Reliability::ReliableOrdered, channel, frame.numberOfBitsUsed_);
}

}  // namespace samp::server

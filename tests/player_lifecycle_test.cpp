#include <algorithm>
#include <array>
#include <bit>
#include <chrono>
#include <cstdio>
#include <cstring>
#include <functional>
#include <cstdlib>
#include "samp/server/game_layer.hpp"
#include "samp/client/network_client.hpp"
#include "pawn/amx_set_string_api.hpp"
#include "BitStream.h"
#include "StringCompressor.h"

namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> messages(const RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for (const auto& queue : peer.send_state_.unsent)
            for (const auto& frame : queue) result.push_back(frame.data);
        return result;
    }
    static std::uint8_t first_channel(const RakNetPeer& peer) {
        for (const auto& queue : peer.send_state_.unsent)
            if (!queue.empty()) return queue.front().ordering_channel;
        return 0xff;
    }
    static void clear(RakNetPeer& peer) { peer.send_state_ = {}; }
};
}

namespace samp::pawn {
struct PawnNativeTestAccess {
    static samp::amx::cell argument(const PawnVm& vm, unsigned index) {
        samp::amx::cell value;
        std::memcpy(&value, vm.image_.data() + vm.header_.dat + vm.frm_ + 12 + index * 4, 4);
        return value;
    }
    static void text(PawnVm& vm, samp::amx::cell offset, const char* value, std::size_t cells = 6) {
        auto* destination = reinterpret_cast<samp::amx::cell*>(vm.image_.data() + vm.header_.dat + offset);
        amx_string::set_string(destination, value, 0, 0, cells);
    }
    static samp::amx::cell native(PawnVm& vm, const char* name, std::span<const samp::amx::cell> args) {
        return vm.native_functions_.at(name)(args);
    }
    static std::string input_text(const PawnVm& vm, samp::amx::cell offset) {
        std::string value;
        for (std::size_t i = 0; i <= 128; ++i) {
            samp::amx::cell code = 0;
            std::memcpy(&code, vm.image_.data() + vm.header_.dat + offset + 4 * i, 4);
            if (code == 0) break;
            value.push_back(static_cast<char>(code));
        }
        return value;
    }
    static samp::amx::cell heap(const PawnVm& vm) { return vm.hea_; }
    static void callbacks(PawnVm& vm, std::initializer_list<const char*> names,
                          std::function<samp::amx::cell(std::string_view)> callback) {
        std::vector<samp::amx::cell> code{0x78, 0}; // halt 0
        for (const auto* name : names) {
            const auto index = static_cast<samp::amx::cell>(vm.natives_.size());
            vm.publics_.push_back({name, static_cast<std::uint32_t>(code.size()*4)});
            vm.natives_.push_back({name});
            vm.native_functions_[name] = [callback, name](auto) { return callback(name); };
            const samp::amx::cell body[]{0x2e, 0x27, 0, 0x7b, index, 0x2c, 4, 0x30};
            code.insert(code.end(),std::begin(body),std::end(body));
        }
        // The merged VM reads the live AMX header/base, as the official executor does.
        vm.header_.cod=sizeof(samp::amx::AmxHeader);
        vm.header_.dat=vm.header_.cod+static_cast<int>(code.size()*4);
        vm.header_.hea=vm.header_.dat+128;vm.header_.stp=vm.header_.dat+4096;
        vm.image_.assign(vm.header_.stp,0);
        std::memcpy(vm.image_.data(),&vm.header_,sizeof(vm.header_));
        std::memcpy(vm.image_.data()+vm.header_.cod,code.data(),code.size()*4);
        vm.amx_.base=vm.image_.data();vm.amx_.flags=0x8000;
        vm.stk_=vm.amx_.stk=vm.amx_.stp=4092;
        vm.hea_=vm.hlw_=vm.amx_.hea=vm.amx_.hlw=128;
        vm.ok_=true;
    }
};
}
namespace {
int failures=0;
#define CHECK(x) do { if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;} } while(false)
void rpc(samp::server::GameLayer& game,samp::server::RakNetPeer& peer,
         std::uint8_t id,const samp::proto::BitStream& payload={}) {
    samp::proto::BitStream frame;
    const std::uint8_t header[]{20,id};frame.write(header,2);
    const auto bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
    if(bits) frame.writeBits(payload.data_.data(),static_cast<int>(bits),false);
    game.on_user_message(peer,frame);
}
void lifecycle() {
    samp::server::GameLayer game; samp::server::RakNetPeer peer;
    game.players_.resize(2);
    auto& p=game.players_[0];p.in_use=p.joined=true;p.peer=&peer;p.streamed_to.resize(2);
    samp::pawn::PlayerClassSpec spec;spec.model=7;spec.x=10;spec.y=20;spec.z=30;
    game.add_player_class(spec);
    std::vector<std::string> trace;
    bool allow=false;
    auto filter=std::make_unique<samp::pawn::PawnVm>();
    samp::pawn::PawnNativeTestAccess::callbacks(*filter,
        {"OnPlayerRequestClass","OnPlayerRequestSpawn","OnPlayerStateChange","OnPlayerSpawn","OnPlayerDeath"},
        [&](auto name) {trace.push_back("fs:"+std::string(name));
            if(name=="OnPlayerRequestClass") {CHECK(p.has_spawn_info);CHECK(p.spawn_info.x==10);}
            if(name=="OnPlayerSpawn" || name=="OnPlayerDeath") return 0;
            return name=="OnPlayerRequestSpawn"?static_cast<int>(allow):1;});
    game.filterscripts_.push_back(std::move(filter));
    auto later_filter = std::make_unique<samp::pawn::PawnVm>();
    samp::pawn::PawnNativeTestAccess::callbacks(*later_filter, {"OnPlayerSpawn", "OnPlayerDeath"},
        [&](auto name) {trace.push_back("later:" + std::string(name)); return 1;});
    game.filterscripts_.push_back(std::move(later_filter));
    samp::pawn::PawnNativeTestAccess::callbacks(game.vm_,
        {"OnPlayerRequestClass","OnPlayerRequestSpawn","OnPlayerStateChange","OnPlayerSpawn","OnPlayerDeath"},
        [&](auto name) {trace.push_back("gm:"+std::string(name));
            if(name=="OnPlayerRequestClass") {p.spawn_info.x=42;return 256;}
            if(name=="OnPlayerSpawn") CHECK(p.state==8 && p.x==42);
            if(name=="OnPlayerDeath") CHECK(p.state==7);
            return 1;});
    rpc(game,peer,52);CHECK(!p.spawned);
    samp::proto::BitStream request;std::uint32_t id=0;request.write(&id,4);rpc(game,peer,128,request);
    CHECK(!p.class_allowed && p.spawn_info.x==42);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerRequestClass","gm:OnPlayerRequestClass"}));
    trace.clear();rpc(game,peer,129);CHECK(!p.spawn_authorized);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerRequestSpawn"}));
    rpc(game,peer,52);CHECK(!p.spawned);
    allow=true;trace.clear();rpc(game,peer,129);CHECK(p.spawn_authorized);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerRequestSpawn","gm:OnPlayerRequestSpawn"}));
    allow=false;trace.clear();rpc(game,peer,129);CHECK(p.spawn_authorized);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerRequestSpawn"}));
    trace.clear();rpc(game,peer,52);CHECK(p.spawned && p.state==8 && p.x==42);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerStateChange","gm:OnPlayerStateChange","fs:OnPlayerSpawn","gm:OnPlayerSpawn"}));
    samp::proto::BitStream death;std::uint8_t reason=24;std::uint16_t killer=0xffff;
    death.write(&reason,1);death.write(&killer,2);trace.clear();rpc(game,peer,53,death);
    CHECK(p.state==7 && p.spawned);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerStateChange","gm:OnPlayerStateChange","fs:OnPlayerDeath","gm:OnPlayerDeath"}));
    trace.clear();rpc(game,peer,52);CHECK(p.spawned && p.state==8);
    samp::client::NetworkClient client;client.in_game_=client.spawned_=client.spawn_accepted_=true;
    client.send_death_notification(24,0xffff);
    CHECK(!client.in_game_ && !client.spawn_accepted_ && client.outgoing_frames_.size()==1);
    client.send_death_notification(24,0xffff);CHECK(client.outgoing_frames_.size()==1);
    const auto& outgoing=client.outgoing_frames_[0];
    CHECK(outgoing.reliability==samp::proto::Reliability::ReliableOrdered && outgoing.ordering_channel==0);
    auto bits=outgoing.data;std::uint8_t kind=0,rpcid=0;std::uint32_t length=0;
    CHECK(bits.read(&kind,1) && bits.read(&rpcid,1) && kind==20 && rpcid==53);
    CHECK(bits.readCompressed(reinterpret_cast<std::uint8_t*>(&length),32,true) && length==24);
    CHECK(bits.read(&reason,1) && bits.read(&killer,2) && reason==24 && killer==0xffff);
}
void callback_order() {
    samp::server::GameLayer game;samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& p=game.players_[0];p.in_use=p.joined=p.spawned=true;p.state=8;p.peer=&peer;p.streamed_to.resize(1);
    game.vehicles_[1].id=1;game.vehicles_[1].active=true;game.vehicles_[1].model=411;
    std::vector<std::string> trace;
    auto callback=[&](std::string_view prefix,std::string_view name) {
        trace.push_back(std::string(prefix)+std::string(name));
        if(name=="OnPlayerKeyStateChange") CHECK(p.state==8 && p.keys==0x20001);
        if(name=="OnPlayerStateChange") CHECK(p.state==1);
        if(name=="OnPlayerDisconnect") CHECK(p.in_use);
        return prefix=="fs:" && name=="OnPlayerUpdate"?0:1;
    };
    auto filter=std::make_unique<samp::pawn::PawnVm>();
    samp::pawn::PawnNativeTestAccess::callbacks(*filter,{"OnPlayerKeyStateChange","OnPlayerStateChange","OnPlayerUpdate","OnPlayerInteriorChange","OnPlayerEnterVehicle","OnPlayerExitVehicle","OnPlayerDisconnect"},
        [&](auto name){return callback("fs:",name);});
    game.filterscripts_.push_back(std::move(filter));
    samp::pawn::PawnNativeTestAccess::callbacks(game.vm_,{"OnPlayerKeyStateChange","OnPlayerStateChange","OnPlayerUpdate","OnPlayerInteriorChange","OnPlayerEnterVehicle","OnPlayerExitVehicle","OnPlayerDisconnect"},
        [&](auto name){return callback("gm:",name);});
    std::array<std::uint8_t,69> foot{};foot[0]=207;foot[5]=1;foot[35]=100;foot[37]=24|0x80;
    const float identity=1;std::memcpy(foot.data()+19,&identity,4);
    samp::proto::BitStream packet;packet.write(foot.data(),foot.size());game.on_user_message(peer,packet);
    CHECK(p.state==1 && p.weapon==24);
    CHECK(trace==std::vector<std::string>({"gm:OnPlayerKeyStateChange","fs:OnPlayerKeyStateChange","fs:OnPlayerStateChange","gm:OnPlayerStateChange","fs:OnPlayerUpdate"}));
    trace.clear();samp::proto::BitStream interior;const std::uint8_t area=3;interior.write(&area,1);rpc(game,peer,118,interior);
    CHECK(p.interior==3 && trace==std::vector<std::string>({"gm:OnPlayerInteriorChange","fs:OnPlayerInteriorChange"}));
    trace.clear();samp::proto::BitStream enter;const std::uint16_t id=1;const std::uint8_t passenger=0;
    enter.write(&id,2);enter.write(&passenger,1);rpc(game,peer,26,enter);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerEnterVehicle","gm:OnPlayerEnterVehicle"}));
    trace.clear();samp::proto::BitStream exit;exit.write(&id,2);rpc(game,peer,154,exit);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerExitVehicle","gm:OnPlayerExitVehicle"}));
    trace.clear();game.vehicles_[1].driver=0;game.kick_player(0);
    CHECK(!p.in_use && game.vehicles_[1].driver==-1);
    CHECK(trace==std::vector<std::string>({"fs:OnPlayerDisconnect","gm:OnPlayerDisconnect"}));
}

void vehicles() {
    samp::server::GameLayer game;samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& p=game.players_[0];p.in_use=p.joined=true;p.peer=&peer;p.streamed_to.resize(1);
    p.streamed_vehicles.resize(2000);p.streamed_vehicles[1]=1;p.streamed_vehicle_count=1;
    auto& v=game.vehicles_[1];v.active=true;v.id=1;v.model=411;v.health=400;
    v.x=v.spawn_x=20;v.respawn_x=10;v.respawn_delay_ms=1000;v.has_been_occupied=true;
    std::vector<std::string> trace;
    auto callback=[&](std::string_view prefix,std::string_view name) {
        trace.push_back(std::string(prefix)+std::string(name));
        if(name=="OnVehicleSpawn") CHECK(v.health==1000 && v.x==10 && !p.streamed_vehicles[1]);
        if(name=="OnVehicleDeath") CHECK(v.death_notified && v.killer==0);
        return 1;
    };
    auto filter=std::make_unique<samp::pawn::PawnVm>();
    samp::pawn::PawnNativeTestAccess::callbacks(*filter,{"OnVehicleSpawn","OnVehicleDeath"},[&](auto name){return callback("fs:",name);});
    game.filterscripts_.push_back(std::move(filter));
    samp::pawn::PawnNativeTestAccess::callbacks(game.vm_,{"OnVehicleSpawn","OnVehicleDeath"},[&](auto name){return callback("gm:",name);});
    std::srand(0);
    for(int i=0;i<100;++i) game.update_vehicles(9999);
    CHECK(v.health==400 && trace.empty()); // native minimum age is ten seconds
    for(int i=0;i<1000 && v.has_been_occupied;++i) game.update_vehicles(10000);
    CHECK(v.health==1000 && v.x==10 && !v.has_been_occupied);
    CHECK(trace==std::vector<std::string>({"fs:OnVehicleSpawn","gm:OnVehicleSpawn"}));
    trace.clear();v.model=537;v.health=400;v.has_been_occupied=true;
    for(int i=0;i<100;++i) game.update_vehicles(100000);
    CHECK(v.health==400 && trace.empty()); // trains do not use idle respawn
    v.model=411;v.respawn_delay_ms=-1;p.streamed_vehicles[1]=1;p.streamed_vehicle_count=1;
    samp::proto::BitStream death;const std::uint16_t id=1;death.write(&id,2);rpc(game,peer,136,death);
    CHECK(v.dead && !v.death_notified && trace.empty());
    game.update_vehicles(20000);
    CHECK(trace==std::vector<std::string>({"fs:OnVehicleDeath","gm:OnVehicleDeath"}));trace.clear();
    for(int i=0;i<100;++i) game.update_vehicles(30000);
    CHECK(v.dead && trace.empty()); // destruction expiry is strictly greater than ten seconds
    for(int i=0;i<1000 && v.dead;++i) game.update_vehicles(30001);
    CHECK(!v.dead && v.health==1000 && v.x==10);
    CHECK(trace==std::vector<std::string>({"fs:OnVehicleSpawn","gm:OnVehicleSpawn"}));
    samp::client::NetworkClient client;client.state_=samp::client::ConnectionState::Connected;client.last_vehicle_driven_=1;
    client.send_vehicle_death(1);client.send_vehicle_death(1);
    CHECK(client.outgoing_frames_.size()==1 && client.last_vehicle_driven_==0xffff);
    CHECK(client.outgoing_frames_[0].reliability==samp::proto::Reliability::ReliableSequenced);
}

void actor_callbacks() {
    using Access = samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer;
    game.players_.resize(2);
    auto& player = game.players_[1];
    player.id = 1;
    player.in_use = player.joined = true;
    player.peer = &peer;
    player.streamed_to.resize(game.players_.size());
    game.update_player_pool_size();

    CHECK(game.create_actor(7, {0, 0, 0}, 0) == 0);
    CHECK(game.create_actor(7, {4, 0, 0}, 0) == 1);
    game.set_actor_world(0, 1);
    std::vector<std::string> trace;
    const auto record = [&](auto& vm, const char* scope, std::string_view name) {
        CHECK(Access::argument(vm, 0) == 1);
        CHECK(Access::argument(vm, 1) == 1);
        CHECK(player.is_actor_streamed(1) == (name == "OnActorStreamIn"));
        trace.push_back(std::string(scope) + std::string(name));
    };

    auto filter = std::make_unique<samp::pawn::PawnVm>();
    auto& filter_vm = *filter;
    Access::callbacks(filter_vm, {"OnActorStreamIn", "OnActorStreamOut"},
        [&](auto name) { record(filter_vm, "fs:", name); return 0; });
    game.filterscripts_.push_back(std::move(filter));
    Access::callbacks(game.vm_, {"OnActorStreamIn", "OnActorStreamOut"},
        [&](auto name) { record(game.vm_, "gm:", name); return 1; });

    auto& host = static_cast<samp::pawn::NativeHost&>(game);
    host.update_player_position(player, 0, 0, 0, true);
    CHECK(trace == std::vector<std::string>({"fs:OnActorStreamIn", "gm:OnActorStreamIn"}));
    trace.clear();
    CHECK(game.destroy_actor(1));
    CHECK(trace == std::vector<std::string>({"fs:OnActorStreamOut", "gm:OnActorStreamOut"}));
}

void actor_damage_callbacks() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer, unbound;
    game.players_.resize(2);
    auto& player = game.players_[1];
    player.id = 1;
    player.in_use = player.joined = true;
    player.peer = &peer;
    CHECK(game.create_actor(7, {0, 0, 0}, 0) == 0);
    constexpr std::uint16_t actor = 0;
    constexpr float damage = 12.5f;
    constexpr std::uint32_t weapon = 24, body_part = 3;
    std::vector<int> trace;
    const auto record = [&](const auto& vm, int script) {
        CHECK(Access::argument(vm, 0) == 1);
        CHECK(Access::argument(vm, 1) == actor);
        CHECK(Access::argument(vm, 2) == std::bit_cast<cell>(damage));
        CHECK(Access::argument(vm, 3) == weapon);
        CHECK(Access::argument(vm, 4) == body_part);
        trace.push_back(script);
    };
    for (int slot = 0; slot < 3; ++slot) {
        auto filter = std::make_unique<samp::pawn::PawnVm>();
        auto* vm = filter.get();
        Access::callbacks(*vm, {"OnPlayerGiveDamageActor"}, [&, vm, slot](auto) {
            record(*vm, slot);
            return slot == 1 ? 1 : 0;
        });
        game.filterscripts_.push_back(std::move(filter));
    }
    Access::callbacks(game.vm_, {"OnPlayerGiveDamageActor"}, [&](auto) {
        record(game.vm_, 3);
        return 0;
    });

    samp::proto::BitStream payload;
    payload.write0();
    payload.write(&actor, sizeof(actor));
    payload.write(&damage, sizeof(damage));
    payload.write(&weapon, sizeof(weapon));
    payload.write(&body_part, sizeof(body_part));
    rpc(game, unbound, samp::server::kRpcPlayerGiveDamageActor, payload);
    CHECK(trace.empty());
    rpc(game, peer, samp::server::kRpcPlayerGiveDamageActor, payload);
    CHECK(trace == std::vector<int>({0, 1, 3}));
    CHECK(game.get_actor(actor)->health == 100.0f);
    trace.clear();
    payload.numberOfBitsUsed_ -= 32;
    rpc(game, peer, samp::server::kRpcPlayerGiveDamageActor, payload);
    CHECK(trace.empty());
}

void dialog_round_trip() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer;
    game.players_.resize(1);
    auto& player = game.players_[0];
    player.in_use = player.joined = true;
    player.peer = &peer;
    std::vector<int> trace;
    const auto callback = [&](samp::pawn::PawnVm& vm, int tag) {
        CHECK(Access::argument(vm, 0) == 0);
        CHECK(Access::argument(vm, 1) == 65534);
        CHECK(Access::argument(vm, 2) == 1);
        CHECK(Access::argument(vm, 3) == -1);
        CHECK(Access::input_text(vm, Access::argument(vm, 4)) == "reply");
        trace.push_back(tag);
        return tag >= 1 ? 1 : 0;
    };
    for (int tag = 0; tag < 3; ++tag) {
        auto script = std::make_unique<samp::pawn::PawnVm>();
        auto* pointer = script.get();
        Access::callbacks(*script, {"OnDialogResponse"}, [&, pointer, tag](auto) {
            return callback(*pointer, tag);
        });
        game.filterscripts_.push_back(std::move(script));
    }
    Access::callbacks(game.vm_, {"OnDialogResponse"}, [&](auto) {
        return callback(game.vm_, 4);
    });
    samp::pawn::register_server_natives(game.vm_, game);
    Access::text(game.vm_, 0, "Title");
    Access::text(game.vm_, 24, "Body");
    Access::text(game.vm_, 48, "Next");
    Access::text(game.vm_, 72, "Back");
    const cell args[]{0, 0x1fffe, 0x105, 0, 24, 48, 72};
    CHECK(Access::native(game.vm_, "ShowPlayerDialog", args) == 1 && player.dialog_id == 65534);

    const auto messages = samp::server::RakNetTransportTestAccess::messages(peer);
    CHECK(messages.size() == 1);
    if (messages.size() != 1) return;
    auto wire = messages[0];
    std::uint8_t kind = 0, rpc_id = 0, style = 0;
    std::uint32_t count = 0;
    CHECK(wire.read(&kind, 1) && wire.read(&rpc_id, 1) && kind == 20 && rpc_id == 61 &&
        wire.readCompressed(reinterpret_cast<std::uint8_t*>(&count), 32, true));
    samp::proto::BitStream payload;
    std::vector<std::uint8_t> bytes((count + 7) / 8, 0);
    if (bytes.empty() || !wire.readBits(bytes.data(), static_cast<int>(count), false)) {
        CHECK(false);
        return;
    }
    payload.writeBits(bytes.data(), static_cast<int>(count), false);
    std::uint16_t shown_id = 0;
    CHECK(payload.read(&shown_id, 2) && shown_id == 65534 && payload.read(&style, 1) && style == 5);
    for (const char* expected : {"Title", "Next", "Back"}) {
        std::uint8_t length = 0;
        std::array<char, 256> field{};
        CHECK(payload.read(&length, 1) && payload.read(field.data(), length) &&
            std::string_view(field.data(), length) == expected);
    }
    RakNet::BitStream encoded(bytes.data(), static_cast<unsigned int>(bytes.size()), false);
    encoded.SetReadOffset(static_cast<int>(payload.readOffset_));
    std::array<char, 20> body{};
    CHECK(StringCompressor::Instance()->DecodeString(body.data(), static_cast<int>(body.size()), &encoded, 0) &&
        std::string_view(body.data()) == "Body");

    const auto response = [&](std::uint16_t id) {
        samp::proto::BitStream reply;
        const std::uint8_t button = 1, length = 5;
        const std::int16_t item = -1;
        reply.write(&id, 2);
        reply.write(&button, 1);
        reply.write(&item, 2);
        reply.write(&length, 1);
        reply.write("reply", length);
        rpc(game, peer, 62, reply);
    };
    const auto old_heap = Access::heap(game.vm_);
    response(1);
    CHECK(trace.empty());
    response(65534);
    CHECK(trace == std::vector<int>({0, 1, 4}));
    CHECK(Access::heap(game.vm_) == old_heap && Access::heap(*game.filterscripts_[0]) == old_heap);
}

void player_chat_callbacks() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    using Wire = samp::server::RakNetTransportTestAccess;
    samp::server::GameLayer game;
    samp::server::Config config;
    config.values_["chatlogging"] = "1";
    game.config_ = &config;
    std::string log;
    game.log_message_ = [&log](std::string_view line) { log = line; };
    std::array<samp::server::RakNetPeer, 3> peers;
    game.players_.resize(peers.size());
    for (unsigned slot = 0; slot < peers.size(); ++slot) {
        auto& player = game.players_[slot];
        player.id = static_cast<int>(slot);
        player.in_use = player.joined = true;
        player.peer = &peers[slot];
    }
    game.players_[0].name = "Sender";
    game.players_[1].z = 4.f;
    game.players_[1].virtual_world = 8;
    game.players_[2].z = 5.f;
    auto filterscript = std::make_unique<samp::pawn::PawnVm>();
    auto& fs = *filterscript;
    bool veto = false;
    std::vector<std::string> calls;
    Access::callbacks(fs, {"OnPlayerText", "OnPlayerCommandText"}, [&](auto name) {
        const auto address = Access::argument(fs, 1);
        const auto text = Access::input_text(fs, address);
        calls.push_back("fs:" + text);
        if (name == "OnPlayerText") {
            Access::text(fs, address, "xyz");
            return veto ? 0 : 1;
        }
        return text == "/handled" ? 1 : 0;
    });
    game.filterscripts_.push_back(std::move(filterscript));
    Access::callbacks(game.vm_, {"OnPlayerText", "OnPlayerCommandText"}, [&](auto name) {
        const auto address = Access::argument(game.vm_, 1);
        calls.push_back("gm:" + Access::input_text(game.vm_, address));
        if (name == "OnPlayerText") {
            Access::text(game.vm_, address, "ok");
            return 1;
        }
        return 0;
    });
    samp::pawn::register_server_natives(game.vm_, game);
    const cell radius[]{std::bit_cast<cell>(5.f)};
    CHECK(Access::native(game.vm_, "LimitGlobalChatRadius", radius) == 1);

    samp::proto::BitStream chat;
    const std::uint8_t text_size = 5;
    chat.write(&text_size, 1);
    chat.write("ab%c!", text_size);
    rpc(game, peers[0], 101, chat);
    CHECK(calls == std::vector<std::string>({"fs:ab#c!", "gm:xyz"}));
    CHECK(log == "[chat] [Sender]: ab#c!");
    for (auto slot : {0, 1}) {
        auto messages = Wire::messages(peers[slot]);
        CHECK(messages.size() == 1 && Wire::first_channel(peers[slot]) == 3);
        if (messages.size() != 1) continue;
        auto& frame = messages.front();
        std::uint8_t kind = 0, rpc_id = 0, length = 0;
        std::uint32_t payload_bits = 0;
        std::uint16_t sender = 0xffff;
        std::array<char, 2> text{};
        CHECK(frame.read(&kind, 1) && kind == 20 && frame.read(&rpc_id, 1) && rpc_id == 101 &&
            frame.readCompressed(reinterpret_cast<std::uint8_t*>(&payload_bits), 32, true) &&
            payload_bits == 40 && frame.read(&sender, 2) && sender == 0 &&
            frame.read(&length, 1) && length == 2 && frame.read(text.data(), 2) &&
            std::string_view(text.data(), 2) == "ok");
    }
    CHECK(Wire::messages(peers[2]).empty());
    for (auto& peer : peers) Wire::clear(peer);
    calls.clear();
    veto = true;
    rpc(game, peers[0], 101, chat);
    CHECK(calls == std::vector<std::string>({"fs:ab#c!"}) && Wire::messages(peers[0]).empty());

    const auto command = [&](std::string_view body) {
        samp::proto::BitStream payload;
        const auto size = static_cast<std::uint32_t>(body.size());
        payload.write(&size, 4);
        payload.write(body.data(), body.size());
        rpc(game, peers[0], 50, payload);
    };
    calls.clear();
    command("/handled");
    CHECK(calls == std::vector<std::string>({"fs:/handled"}) && Wire::messages(peers[0]).empty());
    calls.clear();
    command("/missing");
    CHECK(calls == std::vector<std::string>({"fs:/missing", "gm:/missing"}) &&
        Wire::messages(peers[0]).size() == 1);
}

void marker_and_chat_bubble_packets() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    using Wire = samp::server::RakNetTransportTestAccess;
    samp::server::GameLayer game;
    std::array<samp::server::RakNetPeer, 6> peers;
    game.players_.resize(peers.size());
    for (unsigned i = 0; i < peers.size(); ++i) {
        auto& player = game.players_[i];
        player.id = static_cast<int>(i);
        player.in_use = player.joined = true;
        player.state = 1;
        player.peer = &peers[i];
        player.streamed_to.resize(peers.size());
    }
    game.update_player_pool_size();
    auto& sender = game.players_[0];
    game.players_[1].x = 3.f;
    game.players_[1].y = 4.f;
    game.players_[1].z = -42.75f;
    game.players_[2].x = 6.f;
    game.players_[3].virtual_world = 2;
    game.players_[4].state = 9;
    game.players_[5].is_npc = true;
    Access::callbacks(game.vm_, {}, [](auto) { return 0; });
    samp::pawn::register_server_natives(game.vm_, game);
    const cell radius[]{std::bit_cast<cell>(5.f)};
    CHECK(Access::native(game.vm_, "LimitPlayerMarkerRadius", radius) == 1);
    auto& host = static_cast<samp::pawn::NativeHost&>(game);
    const auto now = static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    const cell disabled[]{2}, enabled[]{1};
    sender.last_marker_sync_ms = now - 3000;
    CHECK(Access::native(game.vm_, "ShowPlayerMarkers", disabled) == 1);
    host.update_player_position(sender, 0.f, 0.f, 0.f, true);
    CHECK(Wire::messages(peers[0]).empty());
    CHECK(Access::native(game.vm_, "ShowPlayerMarkers", enabled) == 1);
    host.update_player_position(sender, 0.f, 0.f, 0.f, true);
    auto messages = Wire::messages(peers[0]);
    CHECK(messages.size() == 1 && Wire::first_channel(peers[0]) == 1);
    if (messages.size() == 1) {
        auto& packet = messages.front();
        std::uint8_t kind = 0;
        std::uint32_t count = 0;
        std::uint16_t id = 0;
        std::array<std::int16_t, 3> coordinates{};
        CHECK(packet.numberOfBitsUsed_ == 156 && packet.read(&kind, 1) && kind == 208 &&
            packet.read(&count, 4) && count == 4 &&
            packet.read(&id, 2) && id == 1 && packet.readBit() &&
            packet.read(coordinates.data(), 6) &&
            (coordinates == std::array<std::int16_t, 3>{3, 4, -42}));
        for (auto slot : std::array<std::uint16_t, 3>{2, 3, 4})
            CHECK(packet.read(&id, 2) && id == slot && !packet.readBit());
    }
    Wire::clear(peers[0]);
    host.update_player_position(sender, 0.f, 0.f, 0.f, true);
    CHECK(Wire::messages(peers[0]).empty());
    for (unsigned slot = 1; slot < peers.size(); ++slot) CHECK(Wire::messages(peers[slot]).empty());

    game.players_[1].streamed_to[0] = 1;
    game.players_[3].streamed_to[0] = 1;
    sender.streamed_to[0] = 1;
    const cell args[]{0, 0, std::bit_cast<cell>(0xff00aabbu), std::bit_cast<cell>(80.f), -42};
    Access::text(game.vm_, 0, "Hello");
    CHECK(Access::native(game.vm_, "SetPlayerChatBubble", args) == 1);
    for (auto slot : {1, 3}) {
        messages = Wire::messages(peers[slot]);
        CHECK(messages.size() == 1 && Wire::first_channel(peers[slot]) == 2);
        if (messages.size() != 1) continue;
        auto& frame = messages.front();
        std::uint8_t kind = 0, id = 0, length = 0;
        std::uint32_t bits = 0;
        std::uint16_t source = 0xffff;
        std::array<cell, 3> values{};
        std::array<char, 5> text{};
        CHECK(frame.read(&kind, 1) && kind == 20 && frame.read(&id, 1) && id == 59 &&
            frame.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 32, true) && bits == 160 &&
            frame.read(&source, 2) && source == 0 && frame.read(values.data(), 12) &&
            std::equal(values.begin(), values.end(), args + 2) &&
            frame.read(&length, 1) && length == 5 && frame.read(text.data(), 5) &&
            std::string_view(text.data(), 5) == "Hello");
    }
    for (auto slot : {0, 2, 4, 5}) CHECK(Wire::messages(peers[slot]).empty());
    Wire::clear(peers[1]);
    Wire::clear(peers[3]);
    Access::text(game.vm_, 0, std::string(145, 'a').c_str(), 146);
    CHECK(Access::native(game.vm_, "SetPlayerChatBubble", args) == 0);
    sender.state = 9;
    Access::text(game.vm_, 0, "");
    CHECK(Access::native(game.vm_, "SetPlayerChatBubble", args) == 0);
    CHECK(Wire::messages(peers[1]).empty() && Wire::messages(peers[3]).empty());
}

void player_interaction_callbacks() {
    using Access = samp::pawn::PawnNativeTestAccess;
    using samp::amx::cell;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer;
    samp::server::RakNetPeer unknown_peer;
    game.players_.resize(4);
    auto& player = game.players_[1];
    player.id = 1;
    player.in_use = player.joined = true;
    player.peer = &peer;
    game.players_[3].in_use = true;
    const cell coordinates[]{std::bit_cast<cell>(-12.5f), std::bit_cast<cell>(19.25f), std::bit_cast<cell>(2.f)};
    std::vector<int> calls;
    const auto bind = [&](samp::pawn::PawnVm& vm, int order) {
        Access::callbacks(vm, {"OnPlayerClickPlayer", "OnPlayerClickMap", "OnPlayerPickUpPickup"},
            [&, order](std::string_view name) {
                calls.push_back(order);
                CHECK(Access::argument(vm, 0) == 1);
                if (name == "OnPlayerClickPlayer") {
                    CHECK(Access::argument(vm, 1) == 3 && Access::argument(vm, 2) == 255);
                } else if (name == "OnPlayerClickMap") {
                    for (unsigned axis = 0; axis < 3; ++axis) CHECK(Access::argument(vm, axis + 1) == coordinates[axis]);
                } else {
                    CHECK(Access::argument(vm, 1) == -47);
                }
                return order == 1 ? 256 : 0;
            });
    };
    bind(game.vm_, 0);
    for (int order : {1, 2}) {
        game.filterscripts_.push_back(std::make_unique<samp::pawn::PawnVm>());
        bind(*game.filterscripts_.back(), order);
    }
    samp::proto::BitStream map_click;
    map_click.write(coordinates, sizeof(coordinates));
    rpc(game, unknown_peer, 119, map_click);
    CHECK(calls.empty());
    rpc(game, peer, 119, map_click);
    CHECK(calls == std::vector<int>({0, 1}));

    calls.clear();
    const auto click_player = [&](std::uint16_t target) {
        samp::proto::BitStream click;
        const std::uint8_t source = 255;
        click.write(&target, sizeof(target));
        click.write(&source, sizeof(source));
        rpc(game, peer, 23, click);
    };
    click_player(2);
    click_player(1000);
    CHECK(calls.empty());
    click_player(3);
    CHECK(calls == std::vector<int>({1, 0}));

    calls.clear();
    samp::proto::BitStream pickup;
    const cell pickup_id = -47;
    pickup.write(&pickup_id, sizeof(pickup_id));
    game.gamemode_restarting_ = true;
    rpc(game, peer, 131, pickup);
    CHECK(calls.empty());
    game.gamemode_restarting_ = false;
    rpc(game, peer, 131, pickup);
    CHECK(calls == std::vector<int>({0, 1, 2}));
}

void callback_live_arguments() {
    using Access = samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    samp::server::RakNetPeer peer;
    game.players_.resize(1);
    auto& player = game.players_[0];
    player.in_use = player.joined = true;
    player.peer = &peer;
    player.state = 1;
    player.has_spawn_info = player.spawn_authorized = true;
    player.spawn_info.model = 7;
    player.streamed_to.resize(1);
    int state_calls = 0, key_calls = 0;
    auto filter = std::make_unique<samp::pawn::PawnVm>();
    auto* filter_vm = filter.get();
    Access::callbacks(*filter, {"OnPlayerStateChange", "OnPlayerKeyStateChange"}, [&](auto name) {
        if (name == "OnPlayerStateChange") {
            if (state_calls == 0) {
                CHECK(Access::argument(*filter_vm, 1) == 8);
                CHECK(Access::argument(*filter_vm, 2) == 1);
                player.state = 3; // Reentrant script work may change live state.
            }
            ++state_calls;
        } else {
            CHECK(Access::argument(*filter_vm, 1) == 0x1234);
            CHECK(Access::argument(*filter_vm, 2) == 0);
            ++key_calls;
        }
        return 1;
    });
    game.filterscripts_.push_back(std::move(filter));
    Access::callbacks(game.vm_, {"OnPlayerStateChange", "OnPlayerKeyStateChange"}, [&](auto name) {
        if (name == "OnPlayerStateChange" && state_calls == 1) {
            CHECK(Access::argument(game.vm_, 1) == 3);
            CHECK(Access::argument(game.vm_, 2) == 1);
        }
        if (name == "OnPlayerKeyStateChange") {
            CHECK(Access::argument(game.vm_, 1) == 1);
            player.keys = 0x1234;
        }
        return 1;
    });
    rpc(game, peer, 52);
    CHECK(state_calls == 1 && player.state == 3);
    std::array<std::uint8_t, 69> foot{};
    foot[0] = 207; foot[5] = 1; foot[35] = 100;
    const float identity = 1;
    std::memcpy(foot.data() + 19, &identity, 4);
    samp::proto::BitStream packet;
    packet.write(foot.data(), foot.size());
    game.on_user_message(peer, packet);
    CHECK(key_calls == 1 && state_calls == 2);
}

void vehicle_callback_live_arguments() {
    using Access=samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    auto& vehicle=game.vehicles_[1];
    vehicle.active=vehicle.dead=true; vehicle.id=1; vehicle.killer=7;
    int calls=0;
    auto filter=std::make_unique<samp::pawn::PawnVm>();
    auto* filter_vm=filter.get();
    Access::callbacks(*filter,{"OnVehicleDeath"},[&](auto) {
        CHECK(Access::argument(*filter_vm,0)==1 && Access::argument(*filter_vm,1)==7);
        vehicle.killer=8; ++calls; return 1;
    });
    game.filterscripts_.push_back(std::move(filter));
    Access::callbacks(game.vm_,{"OnVehicleDeath"},[&](auto) {
        CHECK(calls==1 && Access::argument(game.vm_,0)==1 && Access::argument(game.vm_,1)==8);
        ++calls; return 1;
    });
    game.update_vehicles(10000);
    CHECK(calls==2 && vehicle.death_notified);
}

void timer_iteration() {
    using Access=samp::pawn::PawnNativeTestAccess;
    samp::server::GameLayer game;
    std::vector<int> calls;
    std::function<void(int)> on_timer;
    Access::callbacks(game.vm_,{"Timer"},[&](auto) {
        const auto id=Access::argument(game.vm_,0);
        calls.push_back(id);if(on_timer) on_timer(id);return 1;
    });
    const auto add=[&](unsigned id,bool repeat=true) {
        auto& timer=game.script_timers_[id];
        timer.owner=&game.vm_;timer.callback="Timer";timer.arguments={static_cast<samp::amx::cell>(id)};
        timer.interval=20;timer.remaining=10;timer.repeat=repeat;
    };
    for(unsigned id=1;id<=4;++id) add(id);
    game.process_script_timers(10);
    CHECK(calls==std::vector<int>({1,3}));
    CHECK(game.script_timers_[1].remaining==20 && game.script_timers_[2].remaining==10 &&
        game.script_timers_[3].remaining==20 && game.script_timers_[4].remaining==10);
    game.process_script_timers(1);game.process_script_timers(9);
    CHECK(calls==std::vector<int>({1,3,2,4}));
    CHECK(game.script_timers_[3].remaining==19); // skipped timers do not consume this tick's elapsed time
    game.script_timers_.clear();calls.clear();
    add(1,false);add(2,false);
    game.script_timers_[1].killed=true;game.script_timers_[1].remaining=0;
    game.process_script_timers(10);
    CHECK(calls.empty() && !game.script_timers_.contains(1) && game.script_timers_[2].remaining==10);
    game.process_script_timers(10);
    CHECK(calls==std::vector<int>({2}) && game.script_timers_.empty());
    calls.clear();add(1,false);add(2,false);
    on_timer=[&](int id){if(id==1) add(3,false);};
    game.process_script_timers(10);
    CHECK(calls==std::vector<int>({1,3}) && game.script_timers_.size()==1 && game.script_timers_.contains(2));
    game.script_timers_.clear();calls.clear();add(1,false);
    on_timer=[&](int id){if(id==1) add(2,false);};
    game.process_script_timers(10);
    CHECK(calls==std::vector<int>({1}) && game.script_timers_.at(2).remaining==10);
    game.process_script_timers(10);
    CHECK(calls==std::vector<int>({1,2}) && game.script_timers_.empty());
}

}
int main(int,char**) {lifecycle();callback_order();vehicles();actor_callbacks();actor_damage_callbacks();dialog_round_trip();player_chat_callbacks();marker_and_chat_bubble_packets();player_interaction_callbacks();callback_live_arguments();vehicle_callback_live_arguments();timer_iteration();std::printf("player lifecycle: %d failures\n",failures);return failures!=0;}

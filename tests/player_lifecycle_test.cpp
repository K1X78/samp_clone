#include <cstdio>
#include <cstring>
#include <functional>
#include <cstdlib>
#include "samp/server/game_layer.hpp"
#include "samp/client/network_client.hpp"

namespace samp::pawn {
struct PawnNativeTestAccess {
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
            return name=="OnPlayerRequestSpawn"?static_cast<int>(allow):1;});
    game.filterscripts_.push_back(std::move(filter));
    samp::pawn::PawnNativeTestAccess::callbacks(game.vm_,
        {"OnPlayerRequestClass","OnPlayerRequestSpawn","OnPlayerStateChange","OnPlayerSpawn","OnPlayerDeath"},
        [&](auto name) {trace.push_back("gm:"+std::string(name));
            if(name=="OnPlayerRequestClass") {p.spawn_info.x=42;return 0;}
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
    v.x=v.spawn_x=20;v.respawn_x=10;v.respawn_delay=1;v.has_been_occupied=true;
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
    v.model=411;v.respawn_delay=-1;p.streamed_vehicles[1]=1;p.streamed_vehicle_count=1;
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

}
int main(int,char**) {lifecycle();callback_order();vehicles();std::printf("player lifecycle: %d failures\n",failures);return failures!=0;}

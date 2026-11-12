#include <bit>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <limits>
#include "samp/server/game_layer.hpp"
#include "samp/client/network_client.hpp"
#include "samp/client/server_rpc.hpp"

namespace samp::pawn {
struct PawnNativeTestAccess {
    static void prepare(PawnVm& vm) {
        vm.image_.resize(1024);vm.ok_=true;vm.header_.dat=0;
        vm.amx_.hea=256;vm.amx_.stk=384;vm.amx_.stp=512;
    }
    static samp::amx::cell call(PawnVm& vm,const char* name,std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(),args.size()});
    }
};
}
namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> drain(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for(auto& queue:peer.send_state_.unsent) for(auto& frame:queue) result.push_back(frame.data);
        peer.send_state_={};return result;
    }
};
}
namespace samp::client {
struct NetworkClientTestAccess {
    static void packet(NetworkClient& client,const samp::proto::BitStream& packet) {
        switch(packet.data_[0]) {
        case 200:client.handle_vehicle_sync(packet,100);break;
        case 203:client.handle_aim_sync(packet,100);break;
        case 206:client.handle_bullet_sync(packet,100);break;
        case 207:client.handle_foot_sync(packet,100);break;
        case 211:client.handle_passenger_sync(packet,100);break;
        }
    }
};
}
namespace {
using namespace samp::proto;
using Native=samp::pawn::PawnNativeTestAccess;
using Peer=samp::server::RakNetTransportTestAccess;
int failures=0;
#define CHECK(x) do {if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
void apply(samp::client::NetworkClient& client,const BitStream& frame) {
    auto input=frame;std::uint8_t kind=0;CHECK(input.read(&kind,1));
    if(kind==20) {
        std::uint8_t id=0;std::uint32_t count=0;CHECK(input.read(&id,1));
        CHECK(input.readCompressed(reinterpret_cast<std::uint8_t*>(&count),32,true));
        BitStream payload;std::vector<std::uint8_t> data((count+7)/8);
        if(count) {CHECK(input.readBits(data.data(),count,false));payload.writeBits(data.data(),count,false);}
        samp::client::ServerRpcContext context{client.world_,&client.game_commands_,client.player_id_};
        CHECK(samp::client::apply_server_rpc(context,id,payload));
    } else if(kind==0x28) {
        std::uint32_t sender=0;CHECK(input.read(&sender,4));CHECK(sender==256);
        BitStream packet;const auto count=input.numberOfBitsUsed_-input.readOffset_;
        std::vector<std::uint8_t> data((count+7)/8);CHECK(input.readBits(data.data(),count,false));
        packet.writeBits(data.data(),count,false);samp::client::NetworkClientTestAccess::packet(client,packet);
    }
}
template<class T,std::size_t N> void put(std::array<std::uint8_t,N>& data,std::size_t offset,T value) {
    std::memcpy(data.data()+offset,&value,sizeof(value));
}
void multiplayer() {
    samp::server::GameLayer game;samp::server::RakNetPeer sender,receiver;
    game.players_.resize(257);
    for(const int id:{0,256}) {
        auto& p=game.players_[id];p.in_use=p.joined=p.spawned=true;p.state=1;p.id=id;
        p.peer=id?&sender:&receiver;p.streamed_to.resize(257);p.name="Player";
    }
    samp::pawn::PawnVm vm;Native::prepare(vm);samp::pawn::register_server_natives(vm,game);
    const auto fl=[](float n){return std::bit_cast<samp::amx::cell>(n);};
    const auto car=Native::call(vm,"CreateVehicle",{411,fl(10),fl(0),fl(0),fl(90),1,2,-1});
    CHECK(car==1 && game.vehicles_[car].active && game.vehicles_[car].health==1000);
    CHECK(Native::call(vm,"CreateVehicle",{399,0,0,0,0,0,0,-1})==0xffff);
    CHECK(Native::call(vm,"CreateVehicle",{537,0,0,0,0,0,0,-1})==0);
    game.update_streaming();
    CHECK(game.players_[0].streamed_to[256] && game.players_[0].streamed_vehicles[car]);
    samp::client::NetworkClient client;client.player_id_=0;client.in_game_=true;client.state_=samp::client::ConnectionState::Connected;
    client.world_.players_[256].id=256;
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(client.world_.vehicles_.at(car).model==411);
    CHECK(std::any_of(client.game_commands_.begin(),client.game_commands_.end(),[](auto& c){return std::holds_alternative<samp::client::VehicleSpawnCommand>(c);}));
    Peer::drain(sender);client.game_commands_.clear();
    // Native 63-byte driver record. No serializer shared with the implementation.
    std::array<std::uint8_t,64> driver{};driver[0]=200;put(driver,1,std::uint16_t(car));
    put(driver,3,std::int16_t(-128));put(driver,5,std::int16_t(128));put(driver,7,std::uint16_t(5));
    put(driver,9,1.f);put(driver,25,12.f);put(driver,29,2.f);put(driver,33,3.f);
    put(driver,37,.1f);put(driver,49,750.f);driver[53]=80;driver[54]=14;driver[55]=24;
    BitStream packet;packet.write(driver.data(),driver.size());game.on_user_message(sender,packet);
    CHECK(game.players_[256].state==2 && game.players_[256].vehicle_id==car);
    CHECK(game.vehicles_[car].driver==256 && game.vehicles_[car].x==12 && game.vehicles_[car].health==750);
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(client.world_.vehicles_.at(car).model==411 && client.world_.vehicles_.at(car).health==750);
    CHECK(client.world_.players_[256].in_vehicle && client.world_.players_[256].health==77 && client.world_.players_[256].armour==14);
    CHECK(std::holds_alternative<samp::client::VehicleTransformCommand>(client.game_commands_.back()));
    // Malformed position never enters shared server state or the relay queue.
    put(driver,25,std::numeric_limits<float>::quiet_NaN());packet={};packet.write(driver.data(),driver.size());
    game.on_user_message(sender,packet);CHECK(game.vehicles_[car].x==12 && Peer::drain(receiver).empty());
    // Different interiors do not create a world boundary in 0.3.DL's 4851d0.
    game.players_[0].interior=1;game.players_[256].interior=2;game.update_streaming();
    CHECK(game.players_[0].streamed_to[256]);
    CHECK(Native::call(vm,"SetPlayerVirtualWorld",{256,5})==1);game.update_streaming();
    CHECK(!game.players_[0].streamed_to[256] && !game.players_[256].streamed_vehicles[car]);
    Peer::drain(sender);Peer::drain(receiver);
    put(driver,25,12.f);packet={};packet.write(driver.data(),driver.size());game.on_user_message(sender,packet);
    CHECK(Peer::drain(receiver).empty());
    Native::call(vm,"SetPlayerVirtualWorld",{256,0});game.update_streaming();Peer::drain(sender);Peer::drain(receiver);
    std::array<std::uint8_t,25> passenger{};passenger[0]=211;put(passenger,1,std::uint16_t(car));passenger[3]=1;
    passenger[4]=24;passenger[5]=80;passenger[6]=14;put(passenger,13,12.f);
    packet={};packet.write(passenger.data(),passenger.size());game.on_user_message(sender,packet);
    CHECK(game.players_[256].state==3 && game.players_[256].vehicle_seat==1 && game.vehicles_[car].driver==-1);
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(std::get<samp::client::VehicleTransformCommand>(client.game_commands_.back()).seat==1);
    // Passenger visibility follows the moving vehicle even with stale ped XY.
    game.players_[256].x=1000;game.update_streaming();CHECK(game.players_[0].streamed_to[256]);
    game.vehicles_[car].x=200;game.vehicles_[car].y=0;game.update_streaming();CHECK(!game.players_[0].streamed_to[256]);
    game.vehicles_[car].x=12;game.update_streaming();CHECK(game.players_[0].streamed_to[256]);
    // Strict XY radius; Z does not change visibility. Crossing equality streams out.
    game.players_[256].vehicle_id=0;game.players_[256].state=1;game.players_[256].x=200;game.players_[256].y=0;
    game.update_streaming();CHECK(!game.players_[0].streamed_to[256]);
    game.players_[256].x=199.99f;game.players_[256].z=10000;game.update_streaming();CHECK(game.players_[0].streamed_to[256]);
    Peer::drain(receiver);Peer::drain(sender);client.game_commands_.clear();
    // The foot packet shares observed state with Pawn getters and both other sync modes.
    std::array<std::uint8_t,69> foot{};foot[0]=207;put(foot,1,std::int16_t(-128));put(foot,3,std::int16_t(128));
    put(foot,5,std::uint16_t(137));put(foot,7,1.f);put(foot,11,2.f);put(foot,15,3.f);put(foot,19,1.f);
    foot[35]=80;foot[36]=14;foot[37]=24;put(foot,39,.1f);
    packet={};packet.write(foot.data(),foot.size());game.on_user_message(sender,packet);
    CHECK(game.players_[256].state==1 && game.players_[256].health==80 && game.players_[256].keys==137);
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(client.world_.players_[256].health==77 && !client.world_.players_[256].in_vehicle);
    CHECK(std::get<samp::client::RemotePlayerUpdate>(client.game_commands_.back()).weapon==24);
    client.local_stats_provided_=true;client.local_money_=1234;client.local_drunk_=100;
    client.local_weapons_[2]=24;client.local_ammo_[2]=40000;
    client.send_stats_sync();client.send_weapons_sync();
    for(const auto& frame:client.outgoing_frames_) game.on_user_message(sender,frame.data);
    client.outgoing_frames_.clear();
    CHECK(game.players_[256].money==1234 && game.players_[256].weapons[2]==24);
    CHECK(Native::call(vm,"GetPlayerAmmo",{256})==-25536); // original sign extends ushort ammo
    client.local_aim_provided_=true;client.local_aim_[0]=4;
    put(client.local_aim_,1,1.f);put(client.local_aim_,13,3.f);put(client.local_aim_,17,4.f);put(client.local_aim_,21,5.f);
    put(client.local_aim_,25,2.f);client.local_aim_[29]=0xc0;client.local_aim_[30]=128;
    client.send_aim_sync();CHECK(client.outgoing_frames_.size()==1);
    game.on_user_message(sender,client.outgoing_frames_.front().data);client.outgoing_frames_.clear();
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(client.world_.players_[256].aim_x==5 && client.world_.players_[256].aim_y==4 && client.world_.players_[256].aim_z==5);
    CHECK(std::get<samp::client::RemoteAimCommand>(client.game_commands_.back()).data[0]==4);
    client.send_aim_sync();CHECK(client.outgoing_frames_.empty());
    std::array<std::uint8_t,40> bullet{};put(bullet,1,std::uint16_t(0xffff));
    put(bullet,3,1.f);put(bullet,7,2.f);put(bullet,11,3.f);put(bullet,15,4.f);put(bullet,19,5.f);put(bullet,23,6.f);bullet[39]=24;
    client.send_bullet_sync(bullet);CHECK(client.outgoing_frames_.front().ordering_channel==0);
    game.on_user_message(sender,client.outgoing_frames_.front().data);client.outgoing_frames_.clear();
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(std::get<samp::client::RemoteBulletCommand>(client.game_commands_.back()).data==bullet);
    client.send_interior(5);CHECK(client.outgoing_frames_.size()==1);
    game.on_user_message(sender,client.outgoing_frames_.front().data);client.outgoing_frames_.clear();
    CHECK(game.players_[256].interior==5 && Native::call(vm,"GetPlayerInterior",{256})==5);
    CHECK(Native::call(vm,"SetVehicleHealth",{car,fl(600)})==1);
    CHECK(Native::call(vm,"SetVehiclePos",{car,fl(20),fl(30),fl(40)})==1);
    for(const auto& frame:Peer::drain(receiver)) apply(client,frame);
    CHECK(client.world_.vehicles_.at(car).health==600 && client.world_.vehicles_.at(car).x==20);
    CHECK(std::get<samp::client::VehicleAttributeCommand>(client.game_commands_.back()).kind==samp::client::VehicleAttributeCommand::Kind::Position);
    CHECK(Native::call(vm,"DestroyVehicle",{car})==1 && !game.vehicles_[car].active);
    CHECK(game.players_[0].streamed_vehicle_count==0);
}
void vehicle_attribute_dispatch() {
    samp::client::WorldState world;
    std::vector<samp::client::GameCommand> commands;
    samp::client::ServerRpcContext context{world,&commands,0};
    world.vehicles_[7].id=7;
    // Independent literal little-endian payloads, including missing/truncated IDs.
    const std::uint8_t health[]{7,0,0,0,22,68}; // 600.0f
    BitStream payload;payload.write(health,sizeof(health));
    CHECK(samp::client::apply_server_rpc(context,147,payload));
    CHECK(world.vehicles_.at(7).health==600 && commands.size()==1);
    const std::uint8_t position[]{7,0,0,0,160,65,0,0,240,65,0,0,32,66}; // 20,30,40
    payload={};payload.write(position,sizeof(position));
    CHECK(samp::client::apply_server_rpc(context,159,payload));
    CHECK(world.vehicles_.at(7).x==20 && world.vehicles_.at(7).y==30 && world.vehicles_.at(7).z==40);
    CHECK(commands.size()==2 && std::get<samp::client::VehicleAttributeCommand>(commands.back()).id==7);
    payload={};payload.write(position,5);
    CHECK(!samp::client::apply_server_rpc(context,159,payload));
    CHECK(world.vehicles_.at(7).x==20 && commands.size()==2);
}
void capacity() {
    samp::server::GameLayer game;samp::server::RakNetPeer receiver;
    game.players_.resize(204);
    for(int id=0;id<204;++id) {
        auto& p=game.players_[id];p.id=id;p.in_use=p.joined=p.spawned=true;p.state=1;
        p.streamed_to.resize(204);p.z=10000.f;
    }
    game.players_[0].peer=&receiver;
    for(int id=1;id<=702;++id) {
        auto& v=game.vehicles_[id];v.id=static_cast<std::uint16_t>(id);v.active=true;v.model=411;
    }
    game.update_streaming();
    CHECK(game.players_[0].streamed_count==201 && !game.players_[0].streamed_to[202]);
    CHECK(game.players_[0].streamed_vehicle_count==701 && !game.players_[0].streamed_vehicles[702]);
    game.players_[201].virtual_world=5;game.vehicles_[1].virtual_world=5;game.update_streaming();
    CHECK(!game.players_[0].streamed_to[201] && game.players_[0].streamed_to[202] && game.players_[0].streamed_count==201);
    CHECK(!game.players_[0].streamed_vehicles[1] && game.players_[0].streamed_vehicles[702] && game.players_[0].streamed_vehicle_count==701);
}
}
int main(int,char**) {multiplayer();vehicle_attribute_dispatch();capacity();std::printf("multiplayer: %d failures\n",failures);return failures!=0;}

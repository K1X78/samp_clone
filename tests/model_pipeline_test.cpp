#ifdef _WIN32
#include <winsock2.h>
#include <ws2tcpip.h>
#endif
#include "samp/server/game_layer.hpp"
#include "samp/client/server_rpc.hpp"
#include "samp/client/asset_manager.hpp"
#include "samp/client/network_client.hpp"
#include "LzmaLib.h"
#include "zlib.h"
#include <chrono>
#include <algorithm>
#include <bit>
#include <cstdio>
#include <cstring>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <thread>
#include <atomic>
#include <tuple>

namespace samp::client {
struct AssetManagerTestAccess {
    static std::size_t jobs(const AssetManager& manager) {return std::count_if(manager.http_.begin(),manager.http_.end(),[](const auto& job){return job.has_value();});}
    static void isolate(AssetManager& manager,const std::filesystem::path& root) {
        manager.model_cache_root_=root.string();manager.fallback_directory_=(root/"local").string();
        std::filesystem::create_directories(manager.fallback_directory_);
    }
};
}
namespace samp::pawn {
struct PawnNativeTestAccess {
    static void prepare(PawnVm& vm) {
        vm.image_.assign(4096,0);vm.header_.dat=0;vm.ok_=true;
        vm.amx_.stp=4096;vm.amx_.hea=1024;vm.amx_.stk=3000;
    }
    static void text(PawnVm& vm,int at,std::string_view value) {
        for(std::size_t i=0;i<=value.size();++i) {
            const samp::amx::cell c=i<value.size()?static_cast<unsigned char>(value[i]):0;
            std::memcpy(vm.image_.data()+at+i*4,&c,4);
        }
    }
    static std::string text(const PawnVm& vm,int at) {
        std::string value;
        for(;;at+=4) {samp::amx::cell c;std::memcpy(&c,vm.image_.data()+at,4);if(!c) return value;value+=static_cast<char>(c);}
    }
    static void redirect(PawnVm& vm,std::function<samp::amx::cell()> action,const char* public_name="OnPlayerRequestDownload") {
        const samp::amx::cell code[]{0x78,0,0x2e,0x27,0,0x7b,0,0x2c,4,0x30};
        vm.header_.cod=sizeof(samp::amx::AmxHeader);vm.header_.dat=vm.header_.cod+sizeof(code);
        vm.header_.hea=vm.header_.dat+128;vm.header_.stp=vm.header_.dat+4096;
        vm.image_.assign(vm.header_.stp,0);std::memcpy(vm.image_.data(),&vm.header_,sizeof(vm.header_));
        std::memcpy(vm.image_.data()+vm.header_.cod,code,sizeof(code));
        vm.publics_={{public_name,8}};vm.natives_={{"redirect-fixture"}};
        vm.native_functions_["redirect-fixture"]=[action](auto){return action();};
        vm.amx_.base=vm.image_.data();vm.amx_.stk=vm.amx_.stp=4092;
        vm.amx_.hea=vm.amx_.hlw=128;vm.amx_.flags=0x8000;vm.ok_=true;
    }
    static samp::amx::cell call(PawnVm& vm,const char* name,std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(),args.size()});
    }
};
}
namespace samp::server {
struct RakNetTransportTestAccess {
    static void authenticate(RakNetPeer& peer) {peer.stage_=RakNetPeer::Stage::Authenticated;}
    static std::vector<samp::proto::BitStream> drain(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> out;
        for(auto& queue:peer.send_state_.unsent) for(auto& frame:queue) out.push_back(frame.data);
        peer.send_state_={};return out;
    }
};
}
namespace {
int failures=0;
#define CHECK(x) do {if(!(x)){std::printf("FAIL %d: %s\n",__LINE__,#x);++failures;}} while(false)
using Native=samp::pawn::PawnNativeTestAccess;
using Peer=samp::server::RakNetTransportTestAccess;
using samp::proto::BitStream;
struct Rpc {std::uint8_t id=0;BitStream payload;};
Rpc decode(BitStream input) {
    std::uint8_t kind=0;Rpc rpc;std::uint32_t bits=0;
    CHECK(input.read(&kind,1) && kind==20);CHECK(input.read(&rpc.id,1));
    CHECK(input.readCompressed(reinterpret_cast<std::uint8_t*>(&bits),32,true));
    std::vector<std::uint8_t> bytes((bits+7)/8);
    if(bits) {CHECK(input.readBits(bytes.data(),bits,false));rpc.payload.writeBits(bytes.data(),bits,false);}
    return rpc;
}
void write(const std::filesystem::path& path,std::string_view bytes) {
    std::ofstream file(path,std::ios::binary);file.write(bytes.data(),bytes.size());
    if(!file) throw std::runtime_error("fixture write failed");
}
std::string word(std::uint32_t value) {
    std::string result(4,'\0');std::memcpy(result.data(),&value,4);return result;
}
std::string rw(std::uint32_t id,const std::string& data) {
    return word(id)+word(static_cast<std::uint32_t>(data.size()))+word(0x1803ffff)+data;
}
std::string minimal_dff() {
    // The original validation profile accepts an empty frame list and a
    // geometry list declaring one entry without a geometry child. This tests
    // transfer/cache validation, not an in-engine renderable asset.
    return rw(0x10,rw(1,word(0)+word(0)+word(0))+rw(0xe,rw(1,word(0)))+rw(0x1a,rw(1,word(1))));
}
std::string minimal_txd() {return rw(0x16,rw(1,word(0)));}
void route(samp::server::GameLayer& game,samp::server::RakNetPeer& peer,std::uint8_t id,const BitStream& payload) {
    BitStream frame;const std::uint8_t marker=20;frame.write(&marker,1);frame.write(&id,1);
    const auto bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
    if(bits) frame.writeBits(payload.data_.data(),bits,false);
    game.on_user_message(peer,frame);
}
void native_activation_messages(const std::filesystem::path& root) {
    samp::server::Config config;samp::server::GameLayer game;game.config_=&config;
    samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& player=game.players_[0];player.id=0;player.in_use=player.joined=true;player.peer=&peer;
    game.artwork_enabled_=true;game.models_directory_=root.string();
    samp::pawn::CustomModelSpec spec;spec.kind=1;spec.base_id=7;spec.new_id=20001;
    spec.model_file="model.dff";spec.texture_file="texture.txd";game.add_custom_model(spec);Peer::drain(peer);
    samp::pawn::PawnVm vm;Native::prepare(vm);samp::pawn::register_server_natives(vm,game);
    CHECK(Native::call(vm,"SetSpawnInfo",{0,255,20001,0,0,0,0,0,0,0,0,0,0})==1);
    CHECK(player.spawn_info.model==7 && player.spawn_info.custom_model==20001);
    auto messages=Peer::drain(peer);CHECK(messages.size()==1);
    auto spawn=decode(messages.at(0));CHECK(spawn.id==68 && spawn.payload.numberOfBitsUsed_==50*8);
    std::uint8_t team=0;std::uint32_t base=0,custom=0;
    CHECK(spawn.payload.read(&team,1) && spawn.payload.read(&base,4) && spawn.payload.read(&custom,4));
    CHECK(team==255 && base==7 && custom==20001);
    CHECK(Native::call(vm,"SpawnPlayer",{0})==1 && player.spawn_authorized);
    messages=Peer::drain(peer);CHECK(messages.size()==1);auto forced=decode(messages.at(0));std::uint32_t answer=0;
    CHECK(forced.id==129 && forced.payload.numberOfBitsUsed_==32 && forced.payload.read(&answer,4) && answer==2);
    CHECK(Native::call(vm,"SpawnPlayer",{1000})==0);
    CHECK(Native::call(vm,"SetPlayerSkin",{0,20001})==1);
    CHECK(Native::call(vm,"GetPlayerSkin",{0})==7 && Native::call(vm,"GetPlayerCustomSkin",{0})==20001);
    samp::client::WorldState world;std::vector<samp::client::GameCommand> commands;
    samp::client::ServerRpcContext context{world,&commands,0};
    messages=Peer::drain(peer);CHECK(messages.size()==2);
    auto skin=decode(messages.at(0));CHECK(skin.id==153 && skin.payload.numberOfBitsUsed_==80);
    CHECK(samp::client::apply_server_rpc(context,skin.id,skin.payload));
    CHECK(std::get<samp::client::PlayerSkin>(commands.back()).custom==20001);
    BitStream short_skin;short_skin.write(&base,4);CHECK(!samp::client::apply_server_rpc(context,153,short_skin));
    CHECK(Native::call(vm,"SetPlayerSkin",{0,8})==1 && player.skin==8 && player.custom_model==0);Peer::drain(peer);
    game.set_world_time(20);messages=Peer::drain(peer);CHECK(messages.size()==1);
    auto clock=decode(messages.at(0));CHECK(clock.id==94 && samp::client::apply_server_rpc(context,94,clock.payload) && world.stream.clock_hour==20);
    const auto object=Native::call(vm,"CreateObject",{-1000,0,0,0,0,0,0,0});CHECK(object==1);
    messages=Peer::drain(peer);CHECK(messages.size()==1);auto create=decode(messages.at(0));
    CHECK(create.id==44 && create.payload.numberOfBitsUsed_==40*8);
    CHECK(samp::client::apply_server_rpc(context,44,create.payload));
    CHECK(world.objects_.at(1).model==static_cast<std::uint32_t>(-1000));
    CHECK(Native::call(vm,"IsValidObject",{1})==1 && Native::call(vm,"GetObjectModel",{1})==-1000);
    player.model_finish_reported=false;player.models_ready=false;
    BitStream complete;complete.write1();game.handle_model_finish(peer,complete);
    messages=Peer::drain(peer);CHECK(messages.size()==2);
    CHECK(decode(messages.at(0)).id==44 && decode(messages.at(1)).id==185 && player.model_finish_reported && player.models_ready);
    game.handle_model_finish(peer,complete);messages=Peer::drain(peer);
    CHECK(messages.size()==1 && decode(messages.at(0)).id==185); // Initial object batch is sent once.
    CHECK(Native::call(vm,"SetObjectPos",{1,std::bit_cast<samp::amx::cell>(10.f),0,0})==1);
    messages=Peer::drain(peer);CHECK(messages.size()==1);auto move=decode(messages.at(0));
    CHECK(move.id==45 && move.payload.numberOfBitsUsed_==14*8);
    CHECK(samp::client::apply_server_rpc(context,45,move.payload) && world.objects_.at(1).x==10.f);
    CHECK(Native::call(vm,"DestroyObject",{1})==1 && Native::call(vm,"IsValidObject",{1})==0);
    messages=Peer::drain(peer);CHECK(messages.size()==1);auto destroy=decode(messages.at(0));
    CHECK(destroy.id==47 && samp::client::apply_server_rpc(context,47,destroy.payload) && world.objects_.empty());
    BitStream truncated;const std::uint16_t id=1;truncated.write(&id,2);
    CHECK(!samp::client::apply_server_rpc(context,44,truncated) && world.objects_.empty());
}
void connect_callback_order(const std::filesystem::path& root) {
    samp::server::Config config;samp::server::GameLayer game;game.config_=&config;game.players_.resize(2);
    samp::server::RakNetPeer peer;Peer::authenticate(peer);game.artwork_enabled_=true;game.models_directory_=root.string();
    samp::pawn::CustomModelSpec spec;spec.kind=1;spec.base_id=7;spec.new_id=20001;
    spec.model_file="model.dff";spec.texture_file="texture.txd";int calls=0;
    Native::redirect(game.vm_,[&]{++calls;game.add_custom_model(spec);return 1;},"OnPlayerConnect");
    BitStream join;const std::uint32_t version=0xfde;const std::uint8_t mod=1;
    join.write(&version,4);join.write(&mod,1);
    for(const auto text:{std::string_view("P2Client"),std::string_view("3E90"),std::string_view("0.3.DL-R1")}) {
        if(text=="3E90") join.write(&version,4); // challenge0 XOR protocol version
        const auto length=static_cast<std::uint8_t>(text.size());join.write(&length,1);join.write(text.data(),text.size());
    }
    route(game,peer,25,join);CHECK(calls==1 && game.models_.size()==1 && game.players_[0].joined);
    std::vector<int> ids;for(auto& frame:Peer::drain(peer)) ids.push_back(decode(frame).id);
    const auto manifest=std::find(ids.begin(),ids.end(),179),init=std::find(ids.begin(),ids.end(),139);
    CHECK(manifest!=ids.end() && init!=ids.end() && manifest<init);
    BitStream complete;complete.write1();route(game,peer,184,complete);
    CHECK(calls==1 && game.players_[0].models_ready); // Connect is never deferred/repeated on download completion.
}
void visual_fixture(samp::server::GameLayer& game,const std::filesystem::path& models,bool native_mode=false) {
    samp::server::Config config;game.config_=&config;game.players_.resize(1);
    game.artwork_enabled_=true;game.models_directory_=models.string();
    samp::server::RakNetPeer peer;auto& player=game.players_[0];player.id=0;player.in_use=player.joined=true;player.peer=&peer;player.streamed_to.assign(1,0);
    samp::pawn::register_server_natives(game.vm_,game);samp::amx::cell result=0;
    CHECK(game.vm_.execute("OnGameModeInit",{},result)==0 && result==1);
    CHECK(game.models_.size()==4 && game.objects_[1].active && game.vehicles_[1].active);
    Peer::drain(peer);const samp::amx::cell done[]{0,0};
    CHECK(game.vm_.execute("OnPlayerFinishedDownloading",done,result)==0 && result==1);
    bool forced=false;for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);if(rpc.id==129) forced=true;}
    if(native_mode) {
        CHECK(!forced && !player.spawn_authorized && !player.spawned);
        for(const std::uint32_t class_id:{0u,1u,0u}) {
            BitStream request;request.write(&class_id,4);route(game,peer,128,request);
            CHECK(player.class_allowed && player.spawn_info.custom_model==(class_id==0?20001u:0u));
            CHECK(player.spawn_info.model==(class_id==0?7:265));
            for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);CHECK(rpc.id!=129 && rpc.id!=70);}
        }
        route(game,peer,129,{});CHECK(player.spawn_authorized);Peer::drain(peer);
    } else CHECK(forced && player.spawn_info.custom_model==20001 && player.spawn_authorized);
    game.update_streaming();Peer::drain(peer);route(game,peer,52,{});
    bool entered=false;for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);if(rpc.id==70) entered=true;}
    CHECK(player.spawned && entered==!native_mode);
    if(native_mode) {
        for(const auto occupied:{2,3}) for(const auto command:{"/car","/deletecar"}) {
            player.state=static_cast<std::uint8_t>(occupied);player.vehicle_id=1;
            BitStream payload;const auto n=static_cast<std::uint32_t>(std::strlen(command));payload.write(&n,4);payload.write(command,n);
            route(game,peer,50,payload);
            bool refused=false;
            for(auto& frame:Peer::drain(peer)) {
                auto rpc=decode(frame);
                CHECK(rpc.id!=165 && rpc.id!=164 && rpc.id!=70);
                if(rpc.id==93) refused=true;
            }
            CHECK(refused && game.vehicles_[1].active && player.vehicle_id==1);
        }
    }
    player.state=1;player.vehicle_id=0;
    const std::vector<const char*> commands=native_mode?std::vector<const char*>{"/help","/night","/day","/base","/skin","/deleteobjects","/objects","/deletecar","/car","/world1"}:
        std::vector<const char*>{"/p2night","/p2day","/p2base","/p2skin","/p2delete","/p2create","/p2vdelete","/p2vcreate","/p2world1"};
    for(const auto command:commands) {
        BitStream payload;const auto n=static_cast<std::uint32_t>(std::strlen(command));payload.write(&n,4);payload.write(command,n);
        route(game,peer,50,payload);bool acknowledged=false;
        for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);if(rpc.id==93) {
            std::uint32_t colour=0,length=0;CHECK(rpc.payload.read(&colour,4) && rpc.payload.read(&length,4));
            std::string text(length,'\0');CHECK(rpc.payload.read(text.data(),length));
            std::printf("%s -> %s\n",command,text.c_str());
            if(native_mode) CHECK(text!="SERVER: Unknown command.");
            if(native_mode?text!="SERVER: Unknown command.":text==std::string("P2 executed: ")+command) acknowledged=true;
        }}
        CHECK(acknowledged);
        if(std::string_view(command)=="/p2night" || std::string_view(command)=="/night") CHECK(config.get("worldtime","")=="22:00");
        if(std::string_view(command)=="/p2day" || std::string_view(command)=="/day") CHECK(config.get("worldtime","")=="12:00");
        if(std::string_view(command)=="/p2skin" || std::string_view(command)=="/skin") CHECK(player.custom_model==20001);
        if(std::string_view(command)=="/p2delete" || std::string_view(command)=="/deleteobjects") CHECK(!game.objects_[1].active);
        if(std::string_view(command)=="/p2create" || std::string_view(command)=="/objects") CHECK(game.objects_[1].active);
        if(std::string_view(command)=="/p2vdelete" || std::string_view(command)=="/deletecar") CHECK(!game.vehicles_[1].active);
        if(std::string_view(command)=="/p2vcreate" || std::string_view(command)=="/car") CHECK(game.vehicles_[1].active);
        if(std::string_view(command)=="/p2world1" || std::string_view(command)=="/world1") CHECK(player.virtual_world==1);
    }
}
void world_selection_and_failures(const std::filesystem::path& root) {
    using Assets=samp::client::AssetManager;using Entry=samp::client::AssetElement;
    const auto crc=[](std::string_view data){return static_cast<std::uint32_t>(crc32(0,reinterpret_cast<const Bytef*>(data.data()),static_cast<uInt>(data.size())));};
    Assets assets;samp::client::AssetManagerTestAccess::isolate(assets,root/"world-cache");assets.initialize_cache("test",1);
    Entry first;first.kind_byte=2;first.parent_id=1;first.asset_id=19379;first.element_id=-1000;
    first.model_id=0x1111;first.texture_id=0x2222;first.model_loaded=first.texture_loaded=1;first.flag_56=6;first.flag_57=20;
    Entry second=first;second.parent_id=2;second.model_id=0x3333;second.flag_56=20;second.flag_57=6;
    const auto cache=root/"world-cache/test.1";
    write(cache/"0x1111.dff",minimal_dff());write(cache/"0x3333.dff",minimal_dff());write(cache/"0x2222.txd",minimal_txd());
    assets.add_asset(0,first);assets.add_asset(1,second);
    for(int world:{1,2}) {
        assets.world_=world;std::string path;
        CHECK(assets.load_texture(static_cast<std::uint32_t>(-1000),[&](bool object,auto base,auto id,const auto&,const auto& model,const auto&) {
            CHECK(object && base==19379 && static_cast<std::int32_t>(id)==-1000);path=model;return true;
        }));
        CHECK(std::filesystem::path(path).filename()==(world==1?"0x1111.dff":"0x3333.dff"));
        CHECK(static_cast<std::uint8_t>(assets.flag_56(static_cast<std::uint32_t>(-1000)))==(world==1?6:20));
    }
    assets.world_=3;CHECK(!assets.load_texture(static_cast<std::uint32_t>(-1000),[](auto...){return true;}));
    Assets cold;samp::client::AssetManagerTestAccess::isolate(cold,root/"cold-world-cache");cold.initialize_cache("test",1);
    first.model_loaded=first.texture_loaded=second.model_loaded=second.texture_loaded=0;
    cold.add_asset(0,first);cold.add_asset(1,second);cold.set_current_id(2);
    std::vector<std::pair<int,std::uint32_t>> requests;
    const auto emit=[&](int id,BitStream payload){std::uint32_t sum=0;if(id!=184) CHECK(payload.read(&sum,4));requests.emplace_back(id,sum);};
    cold.process_downloads(1,emit);CHECK((requests.back()==std::pair{181,0x1111u}));cold.fail_download(6001);
    cold.process_downloads(2,emit);CHECK((requests.back()==std::pair{181,0x3333u}));cold.fail_download(6001);
    cold.process_downloads(2,emit);CHECK(requests.back().first==184 && !cold.ready_ && cold.awaiting_finish_ack_);
    // Full-byte checksum match is insufficient: wrong format must never reach the final cache file.
    for(const auto [type,bytes,expected]:{std::tuple{1,std::string("bad model"),102u},std::tuple{2,std::string("bad texture"),103u}}) {
        Assets bad;samp::client::AssetManagerTestAccess::isolate(bad,root/"bad-format-cache");bad.initialize_cache("test",static_cast<std::uint16_t>(type));
        Entry entry;entry.kind_byte=1;entry.asset_id=7;entry.element_id=20001;
        entry.model_id=entry.texture_id=crc(bytes);entry.model_size=entry.texture_size=static_cast<std::uint32_t>(bytes.size());bad.add_asset(0,entry);
        CHECK(bad.begin_download(static_cast<std::uint8_t>(type),crc(bytes)));
        CHECK(bad.write_download({reinterpret_cast<const std::uint8_t*>(bytes.data()),bytes.size()}));
        CHECK(!bad.finish_download() && bad.last_error_==expected);
        CHECK(!bad.has_cached_model(entry.model_id) && !bad.has_cached_texture(entry.texture_id));
    }
    Assets interrupted;samp::client::AssetManagerTestAccess::isolate(interrupted,root/"interrupted-cache");interrupted.initialize_cache("first",1);
    Entry entry;entry.kind_byte=1;entry.asset_id=7;entry.element_id=20001;
    const auto valid=minimal_dff();entry.model_id=crc(valid);entry.model_size=static_cast<std::uint32_t>(valid.size());interrupted.add_asset(0,entry);
    CHECK(interrupted.begin_download(1,entry.model_id));
    const std::uint8_t broken[]{0xff,0xff,0xff,0xff,0xff};
    CHECK(!interrupted.stage(broken,sizeof(broken),2,10) && interrupted.last_error_==5001);
    CHECK(interrupted.begin_download(1,entry.model_id));
    CHECK(interrupted.write_download({reinterpret_cast<const std::uint8_t*>(valid.data()),valid.size()/2}));
    CHECK(!interrupted.finish_download() && interrupted.last_error_==100);
    CHECK(interrupted.begin_download(1,entry.model_id));
    CHECK(interrupted.write_download({reinterpret_cast<const std::uint8_t*>(valid.data()),valid.size()/2}));
    interrupted.reset();
    for(const auto& file:std::filesystem::directory_iterator(root/"interrupted-cache/first.1")) CHECK(file.path().extension()!=".temp");
    samp::client::AssetManagerTestAccess::isolate(interrupted,root/"interrupted-cache");interrupted.initialize_cache("second",2);
    CHECK(!interrupted.has_cached_model(entry.model_id) && interrupted.ready_ && interrupted.current_id_==0);
    Assets shared;samp::client::AssetManagerTestAccess::isolate(shared,root/"shared-failure-cache");shared.initialize_cache("test",1);
    shared.add_asset(0,entry);entry.element_id=20002;shared.add_asset(1,entry);shared.set_current_id(2);
    std::vector<int> sequence;const auto shared_emit=[&](int id,const auto&){sequence.push_back(id);};
    shared.process_downloads(0,shared_emit);shared.fail_download(101);shared.process_downloads(0,shared_emit);
    CHECK(sequence==std::vector<int>({181,184}));
    bool loaded=false;
    CHECK(!shared.load_model(20002,[&](auto...){loaded=true;return true;}) && !loaded);
}
void pipeline(const std::filesystem::path& root,const std::filesystem::path& source_model={},const std::filesystem::path& source_texture={}) {
    std::string model=minimal_dff(),texture=minimal_txd();
    if(source_model.empty()) model.resize(8192,'U');
    else {
        std::ifstream dff(source_model,std::ios::binary),txd(source_texture,std::ios::binary);
        model.assign(std::istreambuf_iterator<char>(dff),std::istreambuf_iterator<char>());
        texture.assign(std::istreambuf_iterator<char>(txd),std::istreambuf_iterator<char>());
    }
    write(root/"valid.dff",model);write(root/"valid.txd",texture);
    CHECK(samp::client::AssetManager::validate_model_file(root/"valid.dff"));
    CHECK(samp::client::AssetManager::validate_texture_file(root/"valid.txd"));
    samp::server::GameLayer game;samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& player=game.players_[0];player.in_use=player.joined=true;player.peer=&peer;
    game.artwork_enabled_=true;game.models_directory_=root.string();
    samp::pawn::CustomModelSpec spec;spec.kind=1;spec.base_id=7;spec.new_id=20001;
    spec.model_file="valid.dff";spec.texture_file="valid.txd";CHECK(game.add_custom_model(spec)==0);
    Peer::drain(peer);
    const auto run=[&]() {
        samp::client::AssetManager assets;assets.initialize_user_directory(root.string());samp::client::AssetManagerTestAccess::isolate(assets,root/"SAMP/cache");assets.initialize_cache("127.0.0.1",7777);
        samp::client::WorldState world;samp::client::ServerRpcContext context{world,nullptr,0};context.assets=&assets;
        game.send_model_manifest(player);
        const auto deliver=[&]() {
            for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);CHECK(samp::client::apply_server_rpc(context,rpc.id,rpc.payload));}
        };
        deliver();CHECK(!assets.ready_);
        std::vector<int> requests;
        for(int tick=0;tick<1000 && !assets.ready_;++tick) {
            assets.process_downloads(0,[&](auto id,const auto& payload){
                requests.push_back(id);if(id==184) CHECK(payload.numberOfBitsUsed_==1);
                route(game,peer,id,payload);
            });
            game.process_model_download(player,source_model.empty()?44:1024);deliver();
        }
        CHECK(assets.ready_ && player.models_ready && assets.last_error_==0);
        return requests;
    };
    CHECK(run()==std::vector<int>({181,182,184})); // Three raw blocks, including the final empty one.
    CHECK(run()==std::vector<int>({184})); // Warm cache requires no bytes from the server.
    char name[40];std::snprintf(name,sizeof(name),"0x%X.dff",game.models_[0].model_crc);
    const auto cached=root/"SAMP/cache/127.0.0.1.7777"/name;
    CHECK(std::filesystem::file_size(cached)==model.size());
    write(cached,"corrupt cache");CHECK(run()==std::vector<int>({181,184}));
    CHECK(std::filesystem::file_size(cached)==model.size());
    for(const auto& entry:std::filesystem::directory_iterator(cached.parent_path())) CHECK(entry.path().extension()!=".temp");
}
#ifdef _WIN32
struct HttpPeer {
    SOCKET listener=INVALID_SOCKET;
    std::uint16_t port=0;
    std::string model,texture;
    std::atomic_bool stop=false,slow_entered=false;
    std::atomic_int requests=0;
    std::thread thread;
    HttpPeer(std::string dff,std::string txd):model(std::move(dff)),texture(std::move(txd)) {
        listener=socket(AF_INET,SOCK_STREAM,IPPROTO_TCP);if(listener==INVALID_SOCKET) throw std::runtime_error("HTTP socket");
        sockaddr_in address{};address.sin_family=AF_INET;address.sin_addr.s_addr=htonl(INADDR_LOOPBACK);
        if(bind(listener,reinterpret_cast<sockaddr*>(&address),sizeof(address)) || listen(listener,16)) throw std::runtime_error("HTTP bind/listen");
        int n=sizeof(address);getsockname(listener,reinterpret_cast<sockaddr*>(&address),&n);port=ntohs(address.sin_port);
        thread=std::thread([this] {
            while(!stop.load()) {
                fd_set readable;FD_ZERO(&readable);FD_SET(listener,&readable);timeval wait{0,100000};
                if(select(0,&readable,nullptr,nullptr,&wait)<=0) continue;
                const auto client=accept(listener,nullptr,nullptr);if(client==INVALID_SOCKET) continue;
                const DWORD timeout=1000;setsockopt(client,SOL_SOCKET,SO_RCVTIMEO,reinterpret_cast<const char*>(&timeout),sizeof(timeout));
                std::string request;std::array<char,1024> bytes{};
                while(request.find("\r\n\r\n")==std::string::npos && request.size()<8192) {
                    const auto count=recv(client,bytes.data(),bytes.size(),0);if(count<=0) break;request.append(bytes.data(),count);
                }
                ++requests;const auto first=request.find(' '),last=request.find(' ',first+1);
                const auto path=first==std::string::npos?std::string{}:request.substr(first+1,last-first-1);
                std::string body,header;
                if(path=="/redirect") header="HTTP/1.1 302 Found\r\nLocation: "+url("/model")+"\r\nContent-Length: 0\r\nConnection: close\r\n\r\n";
                else {
                    int status=200;
                    if(path=="/model" || path=="/slow" || path=="/badcrc" || path=="/short") body=model;
                    else if(path=="/texture") body=texture;
                    else status=404;
                    if(path=="/badcrc" && !body.empty()) body.back()^=1;
                    header="HTTP/1.1 "+std::to_string(status)+(status==200?" OK":" Not Found")+"\r\nContent-Length: "+std::to_string(body.size())+"\r\nConnection: close\r\n\r\n";
                    if(path=="/short") body.resize(body.size()/2);
                    if(path=="/slow") {slow_entered=true;for(int i=0;i<1000 && !stop.load();++i) std::this_thread::sleep_for(std::chrono::milliseconds(1));}
                }
                const auto response=header+body;std::size_t at=0;
                while(at<response.size()) {const auto n=send(client,response.data()+at,static_cast<int>(response.size()-at),0);if(n<=0) break;at+=n;}
                closesocket(client);
            }
        });
    }
    ~HttpPeer() {stop=true;if(thread.joinable()) thread.join();closesocket(listener);}
    std::string url(std::string_view path) const {return "http://127.0.0.1:"+std::to_string(port)+std::string(path);}
};
void http_pipeline(const std::filesystem::path& root) {
    std::string model=minimal_dff();model.resize(9001,'H');const auto texture=minimal_txd();
    write(root/"http.dff",model);write(root/"http.txd",texture);HttpPeer http(model,texture);
    samp::server::GameLayer game;samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& player=game.players_[0];player.in_use=player.joined=true;player.peer=&peer;
    game.artwork_enabled_=true;game.models_directory_=root.string();
    samp::pawn::CustomModelSpec spec;spec.kind=1;spec.base_id=7;spec.new_id=20002;spec.model_file="http.dff";spec.texture_file="http.txd";
    game.add_custom_model(spec);Peer::drain(peer);
    Native::redirect(game.vm_,[&]{CHECK(game.redirect_download(0,http.url(player.model_transfer.type==1?"/redirect":"/texture")));return 0;});
    samp::client::AssetManager assets;assets.initialize_user_directory(root.string());
    samp::client::AssetManagerTestAccess::isolate(assets,root/"SAMP/cache");assets.initialize_cache("127.0.0.1",7788);
    samp::client::WorldState world;samp::client::ServerRpcContext context{world,nullptr,0};context.assets=&assets;
    game.send_model_manifest(player);
    const auto deliver=[&] {for(auto& frame:Peer::drain(peer)) {auto rpc=decode(frame);CHECK(samp::client::apply_server_rpc(context,rpc.id,rpc.payload));}};
    deliver();std::vector<int> requests;const auto deadline=std::chrono::steady_clock::now()+std::chrono::seconds(8);
    while(!assets.ready_ && std::chrono::steady_clock::now()<deadline) {
        assets.process_downloads(0,[&](auto id,const auto& data){requests.push_back(id);route(game,peer,id,data);});
        deliver();std::this_thread::sleep_for(std::chrono::milliseconds(1));
    }
    CHECK(assets.ready_ && assets.last_error_==0 && player.models_ready);
    CHECK(requests==std::vector<int>({181,182,184}) && http.requests>=3);
    // Actual HTTP status, CRC and truncated-content failures use fresh caches.
    for(const auto [path,port,expected]:{std::tuple{"/missing",7789,22u},std::tuple{"/badcrc",7790,101u},std::tuple{"/short",7791,18u}}) {
        samp::client::AssetManager bad;bad.initialize_user_directory(root.string());
        samp::client::AssetManagerTestAccess::isolate(bad,root/"SAMP/cache");bad.initialize_cache("127.0.0.1",static_cast<std::uint16_t>(port));
        samp::client::AssetElement entry;entry.kind_byte=1;entry.asset_id=7;entry.element_id=20002;
        entry.model_id=game.models_[0].model_crc;entry.model_size=static_cast<std::uint32_t>(model.size());bad.add_asset(0,entry);
        CHECK(bad.start_http_download(1,entry.model_id,http.url(path)));
        const auto limit=std::chrono::steady_clock::now()+std::chrono::seconds(5);
        while(!bad.last_error_ && std::chrono::steady_clock::now()<limit) {bad.poll_http_downloads();std::this_thread::sleep_for(std::chrono::milliseconds(1));}
        if(bad.last_error_!=expected) std::printf("HTTP %s: error=%u expected=%u\n",path,bad.last_error_,expected);
        CHECK(bad.last_error_==expected && bad.find_index(samp::client::AssetKind::kModel,entry.model_id)==0);
    }
    // Six occupied worker slots, seventh rejected, then all six results committed.
    {
        samp::client::AssetManager six;samp::client::AssetManagerTestAccess::isolate(six,root/"http-six-cache");six.initialize_cache("test",1);
        samp::client::AssetElement entry;entry.kind_byte=1;entry.asset_id=7;entry.element_id=20002;
        entry.model_id=game.models_[0].model_crc;entry.model_size=static_cast<std::uint32_t>(model.size());six.add_asset(0,entry);
        for(int i=0;i<6;++i) CHECK(six.start_http_download(1,entry.model_id,http.url("/model")));
        CHECK(samp::client::AssetManagerTestAccess::jobs(six)==6);
        CHECK(!six.start_http_download(1,entry.model_id,http.url("/model")));
        const auto limit=std::chrono::steady_clock::now()+std::chrono::seconds(5);
        while(samp::client::AssetManagerTestAccess::jobs(six) && std::chrono::steady_clock::now()<limit) {
            six.poll_http_downloads();std::this_thread::sleep_for(std::chrono::milliseconds(1));
        }
        CHECK(samp::client::AssetManagerTestAccess::jobs(six)==0 && six.last_error_==0 && six.has_cached_model(entry.model_id));
    }
    // Real disconnect cancels an in-flight job and leaves no manager reference
    // in its worker; a subsequent server connection cannot receive that result.
    samp::client::NetworkClient client;auto& manager=client.assets_;
    manager.initialize_user_directory(root.string());samp::client::AssetManagerTestAccess::isolate(manager,root/"SAMP/cache");manager.initialize_cache("127.0.0.1",7792);
    samp::client::AssetElement entry;entry.kind_byte=1;entry.asset_id=7;entry.element_id=20002;
    entry.model_id=game.models_[0].model_crc;entry.model_size=static_cast<std::uint32_t>(model.size());manager.add_asset(0,entry);
    CHECK(manager.start_http_download(1,entry.model_id,http.url("/slow")));
    const auto limit=std::chrono::steady_clock::now()+std::chrono::seconds(3);
    while(!http.slow_entered && std::chrono::steady_clock::now()<limit) std::this_thread::sleep_for(std::chrono::milliseconds(1));
    CHECK(http.slow_entered);client.disconnect();
    CHECK(manager.ready_ && manager.current_id_==0 && manager.find_index(samp::client::AssetKind::kModel,entry.model_id)==-1);
}
#endif
void registry_and_transfer(const std::filesystem::path& root) {
    write(root/"model.dff","123456789");write(root/"texture.txd","abc");
    samp::server::GameLayer game;samp::server::RakNetPeer peer;game.players_.resize(1);
    auto& player=game.players_[0];player.in_use=player.joined=true;player.peer=&peer;
    game.models_directory_=root.string();
    samp::pawn::PawnVm vm;Native::prepare(vm);samp::pawn::register_server_natives(vm,game);
    Native::text(vm,32,"model.dff");Native::text(vm,128,"texture.txd");
    CHECK(Native::call(vm,"AddCharModel",{7,20001,32,128})==0 && game.models_.empty());
    game.artwork_enabled_=true;
    CHECK(Native::call(vm,"AddCharModel",{7,20001,32,128})==0 && game.models_.size()==1);
    CHECK(game.models_[0].model_crc==0xcbf43926 && game.models_[0].texture_crc==0x352441c2);
    CHECK(game.model_base_id(20001)==7 && game.model_base_id(99999)==-1);
    auto frames=Peer::drain(peer);CHECK(frames.size()==1);auto rpc=decode(frames.at(0));CHECK(rpc.id==179);
    // Literal manifest, independent of production serializers.
    const std::uint8_t expected[]{0,0,0,0,1,0,0,0,1,255,255,255,255,7,0,0,0,
        33,78,0,0,38,57,244,203,194,65,36,53,9,0,0,0,3,0,0,0,0,0};
    CHECK(rpc.payload.numberOfBitsUsed_==sizeof(expected)*8);
    CHECK(std::memcmp(rpc.payload.data_.data(),expected,sizeof(expected))==0);
    CHECK(Native::call(vm,"FindModelFileNameFromCRC",{std::bit_cast<samp::amx::cell>(0xcbf43926u),256,64})==1);
    CHECK(Native::text(vm,256)=="model.dff");
    CHECK(Native::call(vm,"FindTextureFileNameFromCRC",{0x352441c2,256,5})==1);
    CHECK(Native::text(vm,256)=="text");
    CHECK(Native::call(vm,"FindModelFileNameFromCRC",{123,256,64})==0 && Native::text(vm,256)=="text");
    CHECK(Native::call(vm,"AddSimpleModelTimed",{9,19379,-1000,32,128,256+6,256+20})==1);
    CHECK(game.models_[1].spec.kind==2 && game.models_[1].spec.virtual_world==9);
    CHECK(game.models_[1].spec.time_on==6 && game.models_[1].spec.time_off==20);
    Native::text(vm,32,"missing.dff");
    CHECK(Native::call(vm,"AddSimpleModel",{-1,19379,-1001,32,128})==0 && game.models_.size()==2);
    Peer::drain(peer);game.request_model_download(player,1,0xcbf43926);
    frames=Peer::drain(peer);CHECK(frames.size()==1);rpc=decode(frames.at(0));
    const std::uint8_t begin[]{5,1,38,57,244,203};
    CHECK(rpc.id==183 && rpc.payload.numberOfBitsUsed_==48 && std::memcmp(rpc.payload.data_.data(),begin,6)==0);
    // Tiny MTU forces a compressed block across multiple application fragments.
    std::vector<std::uint8_t> compressed;bool final=false,end=false;
    for(int tick=0;tick<100 && player.model_transfer.active;++tick) {
        game.process_model_download(player,44);
        for(auto& frame:Peer::drain(peer)) {
            rpc=decode(frame);std::uint8_t type=0;CHECK(rpc.payload.read(&type,1));
            if(type==2) {end=true;continue;}
            std::uint8_t mode=0;std::uint32_t raw=0,n=0;
            CHECK(type==1 && rpc.payload.read(&mode,1) && rpc.payload.read(&raw,4) && rpc.payload.read(&n,4));
            CHECK(raw==9 && n<=4);const auto at=compressed.size();compressed.resize(at+n);
            CHECK(rpc.payload.read(compressed.data()+at,n));if(mode==2) final=true;
        }
    }
    CHECK(final && end && !player.model_transfer.active);
    std::array<unsigned char,9> raw{};std::size_t output=raw.size(),input=compressed.size();
    const unsigned char props[]{0x5d,0,0,1,0};
    CHECK(LzmaUncompress(raw.data(),&output,compressed.data(),&input,props,5)==0);
    CHECK(output==9 && std::memcmp(raw.data(),"123456789",9)==0);
    game.request_model_download(player,2,123);frames=Peer::drain(peer);
    CHECK(frames.size()==1 && decode(frames[0]).payload.data_[0]==0);
}
}
int main(int argc,char** argv) {
    if(argc==4 && (std::string_view(argv[1])=="--visual-fixture" || std::string_view(argv[1])=="--native-gamemode")) {
        samp::server::GameLayer game;auto& vm=game.vm_;
        std::ifstream file(argv[2],std::ios::binary);std::vector<std::uint8_t> bytes{std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>()};
        samp::pawn::AmxImage image;CHECK(samp::pawn::AmxImage::load_from_memory(bytes.data(),bytes.size(),image));
        vm.image_=std::move(image.data_);vm.header_=image.header_;vm.publics_=image.publics_;vm.natives_=image.natives_;
        vm.amx_.base=vm.image_.data();vm.amx_.stk=vm.amx_.stp=vm.header_.stp-vm.header_.dat-4;
        vm.amx_.hea=vm.amx_.hlw=vm.header_.hea-vm.header_.dat;vm.amx_.flags=0x8000;
        vm.stk_=vm.amx_.stk;vm.hea_=vm.hlw_=vm.amx_.hea;vm.ok_=true;
        visual_fixture(game,argv[3],std::string_view(argv[1])=="--native-gamemode");std::printf("visual fixture: %d failures\n",failures);return failures!=0;
    }
    if(argc>=3 && std::string_view(argv[1])=="--validate-assets") {
        int rejected=0;
        for(int i=2;i<argc;++i) {
            const std::filesystem::path path=argv[i];
            const bool valid=path.extension()==".txd"?samp::client::AssetManager::validate_texture_file(path):samp::client::AssetManager::validate_model_file(path);
            std::printf("%s: %s\n",path.filename().string().c_str(),valid?"accepted":"rejected");if(!valid) ++rejected;
        }
        return rejected!=0;
    }
    std::setvbuf(stdout,nullptr,_IONBF,0);
    try {
    const auto root=std::filesystem::path(SAMP_MODEL_TEST_ROOT)/std::to_string(std::chrono::steady_clock::now().time_since_epoch().count());
    std::filesystem::create_directories(root.parent_path());
    if(!std::filesystem::create_directory(root)) return 2;
    if(argc==4 && std::string_view(argv[1])=="--transfer-assets") {
        pipeline(root,argv[2],argv[3]);std::filesystem::remove_all(root);
        std::printf("real asset transfer/cache: %d failures\n",failures);return failures!=0;
    }
    registry_and_transfer(root);native_activation_messages(root);connect_callback_order(root);world_selection_and_failures(root);pipeline(root);
#ifdef _WIN32
    WSADATA winsock{};CHECK(WSAStartup(MAKEWORD(2,2),&winsock)==0);http_pipeline(root);WSACleanup();
#endif
    // Only this newly created child is owned by this fixture.
    std::filesystem::remove_all(root);
    std::printf("model pipeline: %d failures\n",failures);return failures!=0;
    } catch(const std::exception& error) {std::printf("fixture exception: %s\n",error.what());return 3;}
}

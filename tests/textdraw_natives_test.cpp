#include "samp/server/game_layer.hpp"
#include "pawn/amx_set_string_api.hpp"
#include <algorithm>
#include <array>
#include <bit>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <stdexcept>
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
#include "support/reference_code.hpp"
#endif

namespace samp::pawn {
struct PawnNativeTestAccess {
    static void text(PawnVm& vm,const std::string& text,bool packed=false) {
        vm.image_.assign(16384,0);vm.header_.dat=0;vm.ok_=true;
        vm.amx_.stp=16380;vm.amx_.hea=12000;vm.amx_.stk=14000;
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data()),text.c_str(),packed,0,3000);
    }
    static samp::amx::cell call(PawnVm& vm,const char* name,std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(),args.size()});
    }
    static samp::amx::cell call_span(PawnVm& vm,const char* name,std::span<const samp::amx::cell> args) {
        return vm.native_functions_.at(name)(args);
    }
    static void disable(PawnVm& vm) {vm.ok_=false;}
    static void callbacks(PawnVm& vm,std::function<samp::amx::cell(std::string_view,std::span<const samp::amx::cell>)> hook) {
        using samp::amx::cell;
        std::vector<cell> code{0x78,0};
        for(const char* name:{"OnPlayerClickTextDraw","OnPlayerClickPlayerTextDraw"}) {
            const auto index=static_cast<cell>(vm.natives_.size());
            vm.publics_.push_back({name,static_cast<std::uint32_t>(code.size()*4)});vm.natives_.push_back({name});
            vm.native_functions_[name]=[&vm,hook,name](auto)->cell {
                std::array<cell,2> args{};cell bytes=0;
                std::memcpy(&bytes,vm.image_.data()+vm.header_.dat+vm.frm_+8,4);
                if(bytes!=8) throw std::runtime_error("textdraw callback argument extent differs");
                std::memcpy(args.data(),vm.image_.data()+vm.header_.dat+vm.frm_+12,8);
                return hook(name,args);
            };
            const cell body[]{0x2e,0x27,0,0x7b,index,0x2c,4,0x30};code.insert(code.end(),std::begin(body),std::end(body));
        }
        vm.header_.cod=sizeof(samp::amx::AmxHeader);vm.header_.dat=vm.header_.cod+static_cast<int>(code.size()*4);
        vm.header_.hea=vm.header_.dat+128;vm.header_.stp=vm.header_.dat+4096;
        vm.image_.assign(vm.header_.stp,0);std::memcpy(vm.image_.data(),&vm.header_,sizeof(vm.header_));
        std::memcpy(vm.image_.data()+vm.header_.cod,code.data(),code.size()*4);
        vm.amx_={};vm.amx_.base=vm.image_.data();vm.amx_.flags=0x8000;
        vm.stk_=vm.amx_.stk=vm.amx_.stp=4092;vm.hea_=vm.hlw_=vm.amx_.hea=vm.amx_.hlw=128;vm.ok_=true;
    }
};
}
namespace samp::server {
struct RakNetTransportTestAccess {
    static std::vector<samp::proto::BitStream> take(RakNetPeer& peer) {
        std::vector<samp::proto::BitStream> result;
        for(auto& queue:peer.send_state_.unsent) for(auto& frame:queue) {
            if(frame.reliability!=samp::proto::Reliability::ReliableOrdered || frame.ordering_channel!=2)
                throw std::runtime_error("textdraw RPC reliability/channel differs");
            result.push_back(frame.data);
        }
        peer.send_state_={};return result;
    }
};
}
namespace {
using samp::amx::cell;
using samp::proto::BitStream;
using Access=samp::pawn::PawnNativeTestAccess;
using Wire=samp::server::RakNetTransportTestAccess;
void require(bool value,const char* description) {if(!value) throw std::runtime_error(description);}
BitStream take(samp::server::RakNetPeer& peer,std::uint8_t expected) {
    auto frames=Wire::take(peer);require(frames.size()==1,"expected one textdraw RPC");
    auto frame=frames.front();std::uint8_t marker=0,id=0;std::uint32_t bits=0;
    require(frame.read(&marker,1) && marker==20 && frame.read(&id,1) && id==expected &&
        frame.readCompressed(reinterpret_cast<std::uint8_t*>(&bits),32,true),"textdraw RPC header differs");
    BitStream payload;
    if(bits) {std::vector<std::uint8_t> data((bits+7u)/8);require(frame.readBits(data.data(),bits,false),"truncated textdraw RPC");payload.writeBits(data.data(),bits,false);}
    return payload;
}

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
class OfficialPool {
    // 0x466c00 allocator and seven complete self-contained storage owners.
    ReferenceCode code_{SAMP_OFFICIAL_SERVER_PATH,0x466c00,0x2c6};
    std::vector<std::uint8_t> state_=std::vector<std::uint8_t>(0x6000+2048*1000);
public:
    OfficialPool() {
        code_.redirect(0x466c55,reinterpret_cast<const void*>(&std::calloc));
        code_.redirect(0x466c63,reinterpret_cast<const void*>(&std::calloc));
        code_.redirect(0x466c88,reinterpret_cast<const void*>(static_cast<char*(__cdecl*)(char*,const char*,std::size_t)>(&std::strncpy)));
        code_.executable();
    }
    ~OfficialPool() {
        for(unsigned i=0;i<2048;++i) {
            std::uint32_t data=0,text=0;std::memcpy(&data,state_.data()+0x2000+i*4,4);std::memcpy(&text,state_.data()+0x4000+i*4,4);
            std::free(reinterpret_cast<void*>(data));std::free(reinterpret_cast<void*>(text));
        }
    }
    unsigned create(cell x,cell y,const std::string& text) {
        using Create=std::uint16_t(__thiscall*)(void*,cell,cell,const char*);
        return reinterpret_cast<Create>(code_.entry(0x466c00))(state_.data(),x,y,text.c_str());
    }
    std::array<std::uint8_t,63> data(unsigned id) const {
        std::uint32_t pointer=0;std::memcpy(&pointer,state_.data()+0x2000+id*4,4);
        std::array<std::uint8_t,63> result{};std::memcpy(result.data(),reinterpret_cast<const void*>(pointer),63);return result;
    }
    void pair(std::uint32_t address,unsigned id,cell x,cell y) {
        using Pair=void(__thiscall*)(void*,std::uint16_t,cell,cell);
        reinterpret_cast<Pair>(code_.entry(address))(state_.data(),static_cast<std::uint16_t>(id),x,y);
    }
    void single(std::uint32_t address,unsigned id,cell value) {
        using Single=void(__thiscall*)(void*,std::uint16_t,cell);
        reinterpret_cast<Single>(code_.entry(address))(state_.data(),static_cast<std::uint16_t>(id),value);
    }
};

class OfficialPlayerPool {
    ReferenceCode code_{SAMP_OFFICIAL_SERVER_PATH,0x4886d0,0x346};
    ReferenceCode rotation_{SAMP_OFFICIAL_SERVER_PATH,0x46fd60,0x33};
    std::array<std::uint8_t,0xd02> state_{};
public:
    OfficialPlayerPool() {
        code_.redirect(0x48872b,reinterpret_cast<const void*>(&std::free));
        code_.redirect(0x488744,reinterpret_cast<const void*>(&std::free));
        code_.redirect(0x4887a6,reinterpret_cast<const void*>(&std::calloc));
        code_.redirect(0x4887b4,reinterpret_cast<const void*>(&std::calloc));
        code_.redirect(0x4887d9,reinterpret_cast<const void*>(static_cast<char*(__cdecl*)(char*,const char*,std::size_t)>(&std::strncpy)));
        code_.executable();rotation_.executable();
        using Constructor=void(__thiscall*)(void*);
        reinterpret_cast<Constructor>(code_.entry(0x4886d0))(state_.data());
    }
    ~OfficialPlayerPool() {
        using Destructor=void(__thiscall*)(void*);
        reinterpret_cast<Destructor>(code_.entry(0x488710))(state_.data());
    }
    unsigned create(cell x,cell y,const std::string& text) {
        using Create=std::uint16_t(__thiscall*)(void*,cell,cell,const char*);
        return reinterpret_cast<Create>(code_.entry(0x488760))(state_.data(),x,y,text.c_str());
    }
    std::array<std::uint8_t,63> data(unsigned id) const {
        std::uint32_t pointer=0;std::memcpy(&pointer,state_.data()+0x400+id*4,4);
        std::array<std::uint8_t,63> result{};std::memcpy(result.data(),reinterpret_cast<const void*>(pointer),63);return result;
    }
    void pair(std::uint32_t address,unsigned id,cell x,cell y) {
        using Pair=void(__thiscall*)(void*,std::uint16_t,cell,cell);
        reinterpret_cast<Pair>(code_.entry(address))(state_.data(),static_cast<std::uint16_t>(id),x,y);
    }
    void single(std::uint32_t address,unsigned id,cell value) {
        using Single=void(__thiscall*)(void*,std::uint16_t,cell);
        reinterpret_cast<Single>(code_.entry(address))(state_.data(),static_cast<std::uint16_t>(id),value);
    }
    void rotation(unsigned id,const std::array<cell,4>& values) {
        using Rotation=void(__thiscall*)(void*,std::uint16_t,cell,cell,cell,cell);
        reinterpret_cast<Rotation>(rotation_.entry(0x46fd60))(state_.data(),static_cast<std::uint16_t>(id),values[0],values[1],values[2],values[3]);
    }
};
#endif

void allocation_and_style() {
    samp::server::GameLayer game;samp::pawn::register_server_natives(game.vm_,game);
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    OfficialPool official;
#endif
    for(int id=0;id<2048;++id) {
        const std::string text(id==0?1025:0,'X');Access::text(game.vm_,text,id%2!=0);
        require(Access::call(game.vm_,"TextDrawCreate",{0x3f800000,std::bit_cast<cell>(-2.0f),0})==id,"textdraw first-free allocation differs");
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        require(official.create(0x3f800000,std::bit_cast<cell>(-2.0f),text)==static_cast<unsigned>(id),"original textdraw allocation differs");
        require(game.textdraw_pool_.entries[id].data==official.data(id),"textdraw defaults differ from original instructions");
#endif
        require(game.textdraw_pool_.entries[id].text==text.substr(0,1024),"textdraw string extent differs");
    }
    require(Access::call(game.vm_,"TextDrawCreate",{0,0,0})==65535,"textdraw exhaustion sentinel differs");
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    require(official.create(0,0,"")==65535,"original textdraw exhaustion differs");
    for(const cell value:{0,1,2,3,255,256,257,-1,INT32_MIN,0x7fc12345}) {
        const cell other=std::bit_cast<cell>(0xff800000u);
        require(Access::call(game.vm_,"TextDrawLetterSize",{65536,value,other})==1,"wrapped textdraw ID rejected");
        official.pair(0x466d40,0,value,other);require(game.textdraw_pool_.entries[0].data==official.data(0),"letter size differs from original");
        Access::call(game.vm_,"TextDrawTextSize",{0,value,other});official.pair(0x466d70,0,value,other);
        require(game.textdraw_pool_.entries[0].data==official.data(0),"text size differs from original");
        for(const auto& [name,address]:std::array<std::pair<const char*,std::uint32_t>,5>{{
            {"TextDrawAlignment",0x466da0},{"TextDrawColor",0x466df0},{"TextDrawBoxColor",0x466e30},
            {"TextDrawBackgroundColor",0x466e70},{"TextDrawSetSelectable",0x466eb0}}}) {
            require(Access::call(game.vm_,name,{0,value})==1,"textdraw native failed");official.single(address,0,value);
            require(game.textdraw_pool_.entries[0].data==official.data(0),"textdraw field differs from original instructions");
        }
    }
#endif
    for(const cell value:{0,1,2,255,256,257,-1}) {
        auto expected=game.textdraw_pool_.entries[0].data;
        Access::call(game.vm_,"TextDrawUseBox",{0,value});expected[0]=static_cast<std::uint8_t>((expected[0]&0xfe)|(static_cast<std::uint8_t>(value)!=0));
        Access::call(game.vm_,"TextDrawSetProportional",{0,value});expected[0]=static_cast<std::uint8_t>((expected[0]&0xef)|(static_cast<std::uint8_t>(value)!=0?16:0));
        Access::call(game.vm_,"TextDrawSetShadow",{0,value});expected[25]=static_cast<std::uint8_t>(value);
        Access::call(game.vm_,"TextDrawSetOutline",{0,value});expected[26]=static_cast<std::uint8_t>(value);
        Access::call(game.vm_,"TextDrawFont",{0,value});expected[31]=static_cast<std::uint8_t>(value);
        Access::call(game.vm_,"TextDrawSetPreviewModel",{0,value});const auto model=static_cast<std::uint16_t>(value);std::memcpy(expected.data()+41,&model,2);
        const std::array<cell,4> rotation{value,INT32_MIN,0x7fc12345,0x3f800000};
        Access::call(game.vm_,"TextDrawSetPreviewRot",{0,rotation[0],rotation[1],rotation[2],rotation[3]});std::memcpy(expected.data()+43,rotation.data(),16);
        Access::call(game.vm_,"TextDrawSetPreviewVehCol",{0,value,-1});std::memcpy(expected.data()+59,&model,2);expected[61]=expected[62]=255;
        require(game.textdraw_pool_.entries[0].data==expected,"textdraw bit/byte/WORD/float storage differs");
    }
    require(Access::call(game.vm_,"TextDrawDestroy",{17})==1 && Access::call(game.vm_,"TextDrawDestroy",{17})==0,"textdraw destruction return differs");
    require(Access::call(game.vm_,"TextDrawFont",{17,5})==0 && Access::call(game.vm_,"TextDrawFont",{2048,5})==0 &&
        Access::call(game.vm_,"TextDrawFont",{-1,5})==0,"invalid textdraw accepted");
    require(Access::call(game.vm_,"TextDrawCreate",{0,0,0})==17,"textdraw hole was not reused");
}

void wire_and_lifetime() {
    samp::server::GameLayer game;samp::server::Config config;game.config_=&config;
    std::array<samp::server::RakNetPeer,3> peers;game.players_.resize(1001);
    game.players_[0].in_use=true;game.players_[0].peer=&peers[0];
    game.players_[999].in_use=true;game.players_[999].peer=&peers[1];
    game.players_[1000].in_use=true;game.players_[1000].peer=&peers[2];
    samp::pawn::register_server_natives(game.vm_,game);Access::text(game.vm_,"title",true);
    require(Access::call(game.vm_,"TextDrawCreate",{0x3f800000,0x40000000,0})==0,"textdraw create failed");
    require(Access::call(game.vm_,"TextDrawHideForPlayer",{0,0})==1 && Wire::take(peers[0]).empty(),"hidden textdraw emitted a hide RPC");
    require(Access::call(game.vm_,"TextDrawShowForPlayer",{65536,65536})==1,"textdraw show alias failed");
    auto shown=take(peers[0],134);std::uint16_t id=99,length=0;std::array<std::uint8_t,63> style{};
    require(shown.numberOfBitsUsed_==72*8 && shown.read(&id,2) && id==0 && shown.read(style.data(),63) &&
        style==game.textdraw_pool_.entries[0].data && shown.read(&length,2) && length==5,"textdraw show layout differs");
    std::string text(length,'\0');require(shown.read(text.data(),length) && text=="title","textdraw show text differs");
    Access::call(game.vm_,"TextDrawFont",{0,5});require(Wire::take(peers[0]).empty(),"style setter sent an unsolicited refresh");
    require(Access::call(game.vm_,"TextDrawShowForAll",{0})==1,"show-all failed");take(peers[0],134);
    require(Wire::take(peers[1]).empty() && Wire::take(peers[2]).empty(),"show-all bypassed cached/fixed player bound");
    require(game.textdraw_pool_.entries[0].viewers[500]==1,"show-all must retain visibility for empty slots");
    Access::text(game.vm_,std::string(1025,'Q'));
    require(Access::call(game.vm_,"TextDrawSetString",{0,0})==1,"textdraw string update failed");
    for(int p=0;p<2;++p) {
        auto updated=take(peers[p],105);require(updated.numberOfBitsUsed_==1028*8 && updated.read(&id,2) && id==0 &&
            updated.read(&length,2) && length==1024,"visible textdraw string update extent differs");
    }
    require(Wire::take(peers[2]).empty(),"textdraw updated player1000");
    require(Access::call(game.vm_,"TextDrawHideForPlayer",{999,0})==1,"textdraw hide failed");take(peers[1],135);
    require(Access::call(game.vm_,"TextDrawHideForPlayer",{999,0})==1 && Wire::take(peers[1]).empty(),"duplicate hide was sent");
    require(Access::call(game.vm_,"TextDrawDestroy",{0})==1,"textdraw destroy failed");take(peers[0],135);
    require(Wire::take(peers[1]).empty(),"destroy sent hide to a hidden player");
    Access::text(game.vm_,"");require(Access::call(game.vm_,"TextDrawCreate",{0,0,0})==0,"empty textdraw rejected");
    game.update_player_pool_size();Access::call(game.vm_,"TextDrawShowForAll",{0});take(peers[0],134);take(peers[1],134);
    Access::call(game.vm_,"TextDrawHideForAll",{0});take(peers[0],135);take(peers[1],135);
    require(std::all_of(game.textdraw_pool_.entries[0].viewers.begin(),game.textdraw_pool_.entries[0].viewers.end(),[](auto v){return v==0;}),"hide-all retained stale visibility");
    game.players_[1000].in_use=false;
    Access::disable(game.vm_);game.begin_gamemode_restart();take(peers[0],40);take(peers[1],40);
    require(game.textdraw_pool_.entries.empty() && Access::call(game.vm_,"TextDrawCreate",{0,0,0})==65535,"restart did not release textdraw pool");
    game.textdraw_pool_.reset();Access::text(game.vm_,"new mode");
    require(Access::call(game.vm_,"TextDrawCreate",{0,0,0})==0 && game.textdraw_pool_.entries[0].data[31]==1,"new textdraw pool retained previous styles");
}

void player_allocation_and_style() {
    samp::server::GameLayer game;game.players_.resize(1001);
    game.players_[0].in_use=game.players_[999].in_use=game.players_[1000].in_use=true;
    samp::pawn::register_server_natives(game.vm_,game);Access::text(game.vm_,"player");
    require(game.players_[0].textdraw_pool.owner==65535,"player textdraw constructor owner differs");
    for(const int player:{1,1000,-1})
        require(Access::call(game.vm_,"CreatePlayerTextDraw",{player,0,0,0})==0,"invalid player creation sentinel differs");
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    OfficialPlayerPool official;
#endif
    for(int id=0;id<256;++id) {
        const std::string text(id==0?1025:0,'L');Access::text(game.vm_,text,id%2!=0);
        require(Access::call(game.vm_,"CreatePlayerTextDraw",{65536,0x3f800000,std::bit_cast<cell>(-2.0f),0})==id,
            "per-player textdraw allocation differs");
        require(game.players_[0].textdraw_pool.entries[id].text==text.substr(0,1024),"per-player textdraw string extent differs");
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        require(official.create(0x3f800000,std::bit_cast<cell>(-2.0f),text)==static_cast<unsigned>(id) &&
            game.players_[0].textdraw_pool.entries[id].data==official.data(id),"per-player defaults differ from original");
#endif
    }
    require(Access::call(game.vm_,"CreatePlayerTextDraw",{0,0,0,0})==65535,"per-player textdraw full-pool sentinel differs");
    require(Access::call(game.vm_,"CreatePlayerTextDraw",{999,0,0,0})==0 && game.players_[999].textdraw_pool.owner==999,
        "player textdraw allocation was not isolated by owner");
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
    require(official.create(0,0,"")==65535,"original per-player full-pool return differs");
    for(const cell value:{0,1,2,3,255,256,257,-1,INT32_MIN,0x7fc12345}) {
        const cell other=std::bit_cast<cell>(0xff800000u);
        auto& data=game.players_[0].textdraw_pool.entries[0].data;
        require(Access::call(game.vm_,"PlayerTextDrawLetterSize",{-65536,65536,value,other})==1,"player/draw WORD aliases rejected");
        official.pair(0x488890,0,value,other);require(data==official.data(0),"per-player letter size differs from original");
        Access::call(game.vm_,"PlayerTextDrawTextSize",{0,0,value,other});official.pair(0x4888c0,0,value,other);
        require(data==official.data(0),"per-player text size differs from original");
        for(const auto& [name,address]:std::array<std::pair<const char*,std::uint32_t>,5>{{
            {"PlayerTextDrawAlignment",0x4888f0},{"PlayerTextDrawColor",0x488940},{"PlayerTextDrawBoxColor",0x488980},
            {"PlayerTextDrawBackgroundColor",0x4889c0},{"PlayerTextDrawSetSelectable",0x488a00}}}) {
            require(Access::call(game.vm_,name,{0,0,value})==1,"per-player style native failed");official.single(address,0,value);
            require(data==official.data(0),"per-player field differs from original instructions");
        }
        const std::array<cell,4> values{value,INT32_MIN,0x7fc12345,0x3f800000};
        Access::call(game.vm_,"PlayerTextDrawSetPreviewRot",{0,0,values[0],values[1],values[2],values[3]});official.rotation(0,values);
        require(data==official.data(0),"per-player preview rotation differs from original");
    }
#endif
    for(const cell value:{0,1,2,255,256,257,-1}) {
        auto expected=game.players_[0].textdraw_pool.entries[0].data;
        Access::call(game.vm_,"PlayerTextDrawUseBox",{0,0,value});expected[0]=static_cast<std::uint8_t>((expected[0]&0xfe)|(static_cast<std::uint8_t>(value)!=0));
        Access::call(game.vm_,"PlayerTextDrawSetProportional",{0,0,value});expected[0]=static_cast<std::uint8_t>((expected[0]&0xef)|(static_cast<std::uint8_t>(value)!=0?16:0));
        Access::call(game.vm_,"PlayerTextDrawSetShadow",{0,0,value});expected[25]=static_cast<std::uint8_t>(value);
        Access::call(game.vm_,"PlayerTextDrawSetOutline",{0,0,value});expected[26]=static_cast<std::uint8_t>(value);
        Access::call(game.vm_,"PlayerTextDrawFont",{0,0,value});expected[31]=static_cast<std::uint8_t>(value);
        const auto model=static_cast<std::uint16_t>(value);
        Access::call(game.vm_,"PlayerTextDrawSetPreviewModel",{0,0,value});std::memcpy(expected.data()+41,&model,2);
        Access::call(game.vm_,"PlayerTextDrawSetPreviewVehCol",{0,0,value,-1});std::memcpy(expected.data()+59,&model,2);expected[61]=expected[62]=255;
        require(game.players_[0].textdraw_pool.entries[0].data==expected,"per-player bit/byte/WORD storage differs");
    }
    require(Access::call(game.vm_,"PlayerTextDrawFont",{1,0,5})==0 && Access::call(game.vm_,"PlayerTextDrawFont",{0,256,5})==0 &&
        Access::call(game.vm_,"PlayerTextDrawFont",{0,-1,5})==0,"invalid player/draw slot accepted");
    require(Access::call(game.vm_,"PlayerTextDrawDestroy",{0,17})==1 && Access::call(game.vm_,"PlayerTextDrawDestroy",{0,17})==0 &&
        Access::call(game.vm_,"CreatePlayerTextDraw",{0,0,0,0})==17,"per-player textdraw hole reuse differs");
}

void player_wire_and_lifetime() {
    samp::server::GameLayer game;samp::server::Config config;game.config_=&config;
    std::array<samp::server::RakNetPeer,2> peers;game.players_.resize(1000);
    game.players_[0].in_use=true;game.players_[0].peer=&peers[0];
    game.players_[999].in_use=true;game.players_[999].peer=&peers[1];
    samp::pawn::register_server_natives(game.vm_,game);Access::text(game.vm_,"local",true);
    require(Access::call(game.vm_,"CreatePlayerTextDraw",{0,0,0,0})==0 &&
        Access::call(game.vm_,"CreatePlayerTextDraw",{999,0,0,0})==0,"separate player pools could not share local ID zero");
    require(Access::call(game.vm_,"PlayerTextDrawShow",{999,0})==1 && Wire::take(peers[0]).empty(),"local show reached another player");
    auto shown=take(peers[1],134);std::uint16_t id=0,length=0;std::array<std::uint8_t,63> data{};
    require(shown.read(&id,2) && id==2048 && shown.read(data.data(),63) &&
        data==game.players_[999].textdraw_pool.entries[0].data && shown.read(&length,2) && length==5,
        "player textdraw ID offset/layout differs");
    Access::text(game.vm_,std::string(1025,'P'));Access::call(game.vm_,"PlayerTextDrawSetString",{0,0,0});
    require(Wire::take(peers[0]).empty() && Wire::take(peers[1]).empty(),"hidden local string update was sent");
    Access::call(game.vm_,"PlayerTextDrawSetString",{999,0,0});auto changed=take(peers[1],105);
    require(changed.numberOfBitsUsed_==1028*8 && changed.read(&id,2) && id==2048 && changed.read(&length,2) && length==1024,
        "per-player string update wire extent differs");
    Access::call(game.vm_,"PlayerTextDrawHide",{999,0});auto hidden=take(peers[1],135);
    require(hidden.numberOfBitsUsed_==16 && hidden.read(&id,2) && id==2048,"per-player hide wire ID differs");
    Access::call(game.vm_,"PlayerTextDrawHide",{999,0});require(Wire::take(peers[1]).empty(),"duplicate local hide was sent");
    Access::call(game.vm_,"PlayerTextDrawShow",{0,0});take(peers[0],134);
    Access::call(game.vm_,"PlayerTextDrawDestroy",{0,0});take(peers[0],135);
    require(game.players_[999].textdraw_pool.entries[0].active,"local destroy affected another player's draw");
    Access::text(game.vm_,"recreated");Access::call(game.vm_,"CreatePlayerTextDraw",{0,0,0,0});
    Access::disable(game.vm_);game.disconnect_player(0,1);Wire::take(peers[1]);
    require(!game.players_[0].in_use && std::none_of(game.players_[0].textdraw_pool.entries.begin(),
        game.players_[0].textdraw_pool.entries.end(),[](auto& e){return e.active;}),"disconnect retained local textdraws");
    game.begin_gamemode_restart();take(peers[1],40);
    require(std::none_of(game.players_[999].textdraw_pool.entries.begin(),game.players_[999].textdraw_pool.entries.end(),
        [](auto& e){return e.active;}),"gamemode restart retained player textdraws");
}

void selection_and_callbacks() {
    samp::server::GameLayer game;std::array<samp::server::RakNetPeer,3> peers;
    game.players_.resize(1001);
    game.players_[0].in_use=true;game.players_[0].peer=&peers[0];
    game.players_[999].in_use=true;game.players_[999].peer=&peers[1];
    game.players_[1000].in_use=true;game.players_[1000].peer=&peers[2];
    game.players_[3].in_use=true;
    std::vector<std::string> trace;int consume=-1;
    const auto record=[&](std::string tag,std::string_view name,std::span<const cell> args)->cell {
        trace.push_back(tag+":"+(name=="OnPlayerClickTextDraw"?"G":"P")+":"+std::to_string(args[0])+":"+std::to_string(args[1]));
        return tag=="fs"+std::to_string(consume)?-1:0;
    };
    Access::callbacks(game.vm_,[&](auto name,auto args){return record("gm",name,args);});
    for(int i=0;i<2;++i) {
        auto script=std::make_unique<samp::pawn::PawnVm>();
        Access::callbacks(*script,[&,i](auto name,auto args){return record("fs"+std::to_string(i),name,args);});
        game.filterscripts_.push_back(std::move(script));
    }
    samp::pawn::register_server_natives(game.vm_,game);
    for(const cell player:{0,65536,-65536,999,3,1,1000,-1}) {
        const bool valid=player==0 || player==65536 || player==-65536 || player==999 || player==3;
        require(Access::call(game.vm_,"SelectTextDraw",{player,0x11223344})==(valid?1:0),"selection player WORD/return differs");
        if(valid && player!=3) {
            const auto payload=take(peers[player==999?1:0],83);
            const std::array<std::uint8_t,5> expected{0xa2,0x19,0x91,8,0x80};
            require(payload.numberOfBitsUsed_==33 && std::memcmp(payload.data_.data(),expected.data(),5)==0,
                "selection must transmit one flag bit and raw colour cells");
        }
        require(Access::call(game.vm_,"CancelSelectTextDraw",{player})==(valid?1:0),"cancel selection native return differs");
        if(valid && player!=3) {
            const auto payload=take(peers[player==999?1:0],83);
            require(payload.numberOfBitsUsed_==33 && std::all_of(payload.data_.begin(),payload.data_.end(),[](auto b){return b==0;}),
                "cancel selection must send a zero flag/colour");
        }
        for(auto& peer:peers) require(Wire::take(peer).empty(),"selection command reached an unintended player");
    }
    require(trace.empty(),"selection natives fabricated server click callbacks");
    const auto click=[&](samp::server::RakNetPeer& peer,std::uint16_t id,std::uint32_t bits=16) {
        BitStream frame;const std::uint8_t header[]{20,83};frame.write(header,2);
        frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
        if(bits) frame.writeBits(reinterpret_cast<const std::uint8_t*>(&id),static_cast<int>(bits),false);
        game.on_user_message(peer,frame);
    };
    for(const std::uint16_t id:std::array<std::uint16_t,7>{0,2047,2048,2303,2304,65000,65535}) {
        trace.clear();click(peers[1],id);
        const bool local=id>=2048 && id<2304;
        const auto suffix=std::string(local?":P:999:":":G:999:")+std::to_string(local?id-2048:id);
        require(trace==std::vector<std::string>({"fs0"+suffix,"fs1"+suffix,"gm"+suffix}),
            "textdraw ID classification, callback order or arguments differ");
    }
    for(const int filter:{0,1}) for(const std::uint16_t id:std::array<std::uint16_t,2>{12,2048}) {
        consume=filter;trace.clear();click(peers[0],id);
        require(trace.size()==static_cast<std::size_t>(filter+1) && trace.back().starts_with("fs"+std::to_string(filter)+":"),
            "consumed textdraw callback reached a later script");
    }
    consume=-1;trace.clear();click(peers[0],0,0);require(trace.empty(),"empty click payload reached scripts");
    click(peers[0],0,1);
    require(trace==std::vector<std::string>({"fs0:G:0:65535","fs1:G:0:65535","gm:G:0:65535"}),
        "native ignored-read failure did not preserve cancellation ID");
    trace.clear();game.gamemode_restarting_=true;click(peers[0],0);game.gamemode_restarting_=false;
    click(peers[2],0);samp::server::RakNetPeer unknown;click(unknown,0);
    require(trace.empty(),"click accepted a restarting, unknown or out-of-domain player");
    game.filterscripts_.clear();
    for(int i=0;i<17;++i) {
        auto script=std::make_unique<samp::pawn::PawnVm>();
        Access::callbacks(*script,[&,i](auto name,auto args){return record("fs"+std::to_string(i),name,args);});
        game.filterscripts_.push_back(std::move(script));
    }
    consume=16;click(peers[0],7);
    require(trace.size()==17 && trace.front()=="fs0:G:0:7" && trace[15]=="fs15:G:0:7" && trace.back()=="gm:G:0:7",
        "textdraw filterscript dispatch exceeded the native 16-slot domain");
}
}
int main(int,char**) {
    try {allocation_and_style();wire_and_lifetime();player_allocation_and_style();player_wire_and_lifetime();selection_and_callbacks();std::puts("textdraw native checks passed");return 0;}
    catch(const std::exception& error) {std::fprintf(stderr,"%s\n",error.what());return 1;}
}

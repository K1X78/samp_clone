#include "samp/server/game_layer.hpp"
#include "pawn/amx_set_string_api.hpp"
#include <array>
#include <bit>
#include <cstdio>
#include <cstring>
#include <new>
#include <stdexcept>
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
#include "support/reference_code.hpp"
#endif

namespace samp::pawn {
struct PawnNativeTestAccess {
    static void text(PawnVm& vm,const std::string& value,bool packed=false) {
        vm.image_.assign(16384,0);vm.header_.dat=0;vm.ok_=true;
        vm.amx_.stp=16380;vm.amx_.hea=12000;vm.amx_.stk=14000;
        amx_string::set_string(reinterpret_cast<samp::amx::cell*>(vm.image_.data()),value.c_str(),packed,0,3000);
    }
    static samp::amx::cell call(PawnVm& vm,const char* name,std::initializer_list<samp::amx::cell> args) {
        return vm.native_functions_.at(name)({args.begin(),args.size()});
    }
    static void disable(PawnVm& vm) {vm.ok_=false;}
    static void callbacks(PawnVm& vm,std::function<samp::amx::cell(std::string_view,std::span<const samp::amx::cell>)> hook) {
        using samp::amx::cell;std::vector<cell> code{0x78,0};
        for(const char* name:{"OnPlayerExitedMenu","OnPlayerSelectedMenuRow"}) {
            const auto index=static_cast<cell>(vm.natives_.size());
            const auto count=std::string_view(name)=="OnPlayerExitedMenu"?1u:2u;
            vm.publics_.push_back({name,static_cast<std::uint32_t>(code.size()*4)});vm.natives_.push_back({name});
            vm.native_functions_[name]=[&vm,hook,name,count](auto)->cell {
                std::array<cell,2> args{};cell bytes=0;
                std::memcpy(&bytes,vm.image_.data()+vm.header_.dat+vm.frm_+8,4);
                if(bytes!=count*4) throw std::runtime_error("menu callback argument extent differs");
                std::memcpy(args.data(),vm.image_.data()+vm.header_.dat+vm.frm_+12,count*4);
                return hook(name,{args.data(),count});
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
                throw std::runtime_error("menu RPC reliability/channel differs");
            result.push_back(frame.data);
        }
        peer.send_state_={};return result;
    }
    static void authenticate(RakNetPeer& peer,std::uint16_t id) {peer.stage_=RakNetPeer::Stage::Authenticated;peer.peer_index_=id;}
};
}
namespace {
using samp::amx::cell;
using samp::pawn::MenuNativeState;
using samp::proto::BitStream;
using Access=samp::pawn::PawnNativeTestAccess;
using Wire=samp::server::RakNetTransportTestAccess;
void require(bool value,const char* description) {if(!value) throw std::runtime_error(description);}
BitStream unpack(BitStream frame,std::uint8_t expected) {
    std::uint8_t marker=0,id=0;std::uint32_t bits=0;
    require(frame.read(&marker,1) && marker==20 && frame.read(&id,1) && id==expected &&
        frame.readCompressed(reinterpret_cast<std::uint8_t*>(&bits),32,true),"menu RPC header differs");
    BitStream payload;
    if(bits) {std::vector<std::uint8_t> data((bits+7u)/8);require(frame.readBits(data.data(),bits,false),"truncated menu RPC");payload.writeBits(data.data(),bits,false);}
    return payload;
}

#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
void storage_against_binary() {
    static_assert(sizeof(MenuNativeState)==0x1354);
    ReferenceCode code(SAMP_OFFICIAL_SERVER_PATH,0x492da0,0x1b5);code.executable();
    using Constructor=void(__thiscall*)(void*,char*,cell,cell,std::uint8_t,cell,cell);
    using Add=std::uint8_t(__thiscall*)(void*,std::uint8_t,char*);
    using Header=void(__thiscall*)(void*,std::uint8_t,char*);
    for(const std::uint8_t columns:{0,1,2,3,255}) {
        alignas(MenuNativeState) std::array<std::uint8_t,0x1354> clone,official;
        clone.fill(0xa5);official.fill(0xa5);
        std::string title(50,'T'),copy=title;
        auto* menu=new(clone.data()) MenuNativeState(title.data(),0x7fc12345,INT32_MIN,columns,0x3f800000,-1);
        reinterpret_cast<Constructor>(code.entry(0x492e90))(official.data(),copy.data(),0x7fc12345,INT32_MIN,columns,0x3f800000,-1);
        require(clone==official && title==copy,"menu constructor bytes or title truncation differ from original");
        for(unsigned row=0;row<32;++row) for(std::uint8_t column=0;column<2;++column) {
            std::string text=std::to_string(row)+std::string(40,'A'+column),input=text;
            const auto result=MenuNativeState::add_item(menu,column,text.data());
            const auto expected=reinterpret_cast<Add>(code.entry(0x492dc0))(official.data(),column,input.data());
            require(result==expected && result==row && clone==official && text==input,
                "menu item storage, overflow overlaps or truncation differ from original");
        }
        require(MenuNativeState::add_item(menu,0,nullptr)==255 &&
            reinterpret_cast<Add>(code.entry(0x492dc0))(official.data(),0,nullptr)==255,"full column touched null text");
        for(const std::uint8_t column:{0,1,2,255}) {
            std::string text(45,'H'),input=text;
            MenuNativeState::set_header(menu,column,text.data());
            reinterpret_cast<Header>(code.entry(0x492e40))(official.data(),column,input.data());
            require(clone==official && text==input,"menu header storage differs from original");
        }
    }
    require(MenuNativeState::add_item(nullptr,2,nullptr)==255 &&
        reinterpret_cast<Add>(code.entry(0x492dc0))(nullptr,2,nullptr)==255,"invalid column accessed null menu");
    MenuNativeState::set_header(nullptr,2,nullptr);
    reinterpret_cast<Header>(code.entry(0x492e40))(nullptr,2,nullptr);
}

struct Fault {DWORD code;std::uintptr_t address;ULONG_PTR write;};
int capture(EXCEPTION_POINTERS* info,Fault* result) {
    if(info->ExceptionRecord->ExceptionCode!=EXCEPTION_ACCESS_VIOLATION) return EXCEPTION_CONTINUE_SEARCH;
    result->code=info->ExceptionRecord->ExceptionCode;
    result->write=info->ExceptionRecord->ExceptionInformation[0];
    result->address=info->ExceptionRecord->ExceptionInformation[1];return EXCEPTION_EXECUTE_HANDLER;
}
Fault observe(void(*body)(void*),void* context) {
    Fault result{};__try {body(context);} __except(capture(GetExceptionInformation(),&result)) {}return result;
}
struct DisableCall {void* function;samp::server::GameLayer* game;cell id,row;bool row_call;};
void call_disable(void* context) {
    const auto& call=*static_cast<DisableCall*>(context);
    if(call.function) {
        using Native=cell(__cdecl*)(void*,const cell*);const cell args[]{8,call.id,call.row};
        reinterpret_cast<Native>(call.function)(nullptr,args);
    } else if(call.row_call) call.game->disable_menu_row(call.id,call.row);
    else call.game->disable_menu(call.id);
}
void unchecked_writes_against_binary() {
    samp::server::GameLayer game;game.create_menu("title",1,{0x7fc12345,2,3,4});
    std::array<std::uint8_t,0x1c> global{};
    auto pointer=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(game.menu_pool_->data.data()));
    std::memcpy(global.data()+0x18,&pointer,4);
    const auto root=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(global.data()));
    ReferenceCode code(SAMP_OFFICIAL_SERVER_PATH,0x475dd0,0x79);
    code.pointer(0x475dd1,&root);code.pointer(0x475e11,&root);code.executable();
    for(const bool row:{false,true}) for(const cell id:{0,128,256}) {
        DisableCall original{code.entry(row?0x475e10:0x475dd0),&game,id,15,row},clone{nullptr,&game,id,15,row};
        const auto a=observe(call_disable,&original),b=observe(call_disable,&clone);
        require(a.code==EXCEPTION_ACCESS_VIOLATION && a.code==b.code && a.write==1 && b.write==1 &&
            a.address==b.address && a.address==(row?0x1341u:0x1301u),"unchecked menu write fault differs from original");
    }
    auto* menu=game.menu_pool_->objects[1];auto expected=menu->data;
    pointer=static_cast<std::uint32_t>(reinterpret_cast<std::uintptr_t>(expected.data()));
    std::memcpy(game.menu_pool_->data.data()+4,&pointer,4);
    DisableCall original{code.entry(0x475e10),&game,257,271,true};call_disable(&original);
    game.disable_menu_row(257,271);
    require(menu->data==expected && std::memcmp(menu->data.data()+0x1341,"\0\0\0\0",4)==0,
        "row BYTE alias must preserve the original write into menu X");
}
#endif

void allocation_and_natives() {
    samp::server::GameLayer game;samp::pawn::register_server_natives(game.vm_,game);
    for(int id=1;id<128;++id) {
        Access::text(game.vm_,std::string(40,'T'),id%2!=0);
        require(Access::call(game.vm_,"CreateMenu",{0,258,0x7fc12345,INT32_MIN,0x3f800000,-1})==id,"menu ID allocation differs");
        const auto& data=game.menu_pool_->objects[id]->data;
        require(data[0]==id && data[32]==0 && data[0x1351]==2,"menu title/column BYTE truncation differs");
    }
    require(Access::call(game.vm_,"CreateMenu",{0,1,0,0,0,0})==-1,"menu exhaustion sentinel differs");
    require(Access::call(game.vm_,"IsValidMenu",{257})==1 && Access::call(game.vm_,"IsValidMenu",{256})==0 &&
        Access::call(game.vm_,"IsValidMenu",{-1})==0,"menu BYTE alias validation differs");
    require(Access::call(game.vm_,"DestroyMenu",{256})==0 && Access::call(game.vm_,"DestroyMenu",{273})==1 &&
        Access::call(game.vm_,"DestroyMenu",{17})==0 && Access::call(game.vm_,"CreateMenu",{0,1,0,0,0,0})==17,"menu hole reuse differs");
    Access::text(game.vm_,"item",true);
    require(Access::call(game.vm_,"AddMenuItem",{257,256,0})==0 && Access::call(game.vm_,"AddMenuItem",{1,258,0})==-1,
        "menu item column BYTE alias differs");
    require(Access::call(game.vm_,"SetMenuColumnHeader",{0,2,0})==1,"ignored invalid header column return differs");
    for(const cell player:{0,999,1000,-1,65536}) require(Access::call(game.vm_,"GetPlayerMenu",{player})==255,"default current menu differs");
    game.menu_pool_.reset();
    require(Access::call(game.vm_,"CreateMenu",{0,1,0,0,0,0})==-1 && Access::call(game.vm_,"AddMenuItem",{0,0,0})==0 &&
        Access::call(game.vm_,"GetPlayerMenu",{0})==255,"released menu pool return differs");
}

void wire_and_lifetime() {
    samp::server::GameLayer game;samp::server::Config config;game.config_=&config;
    std::array<samp::server::RakNetPeer,3> peers;game.players_.resize(1001);
    for(unsigned i=0;i<3;++i) {const auto slot=i==0?0:998+i;game.players_[slot].in_use=true;game.players_[slot].peer=&peers[i];}
    samp::pawn::register_server_natives(game.vm_,game);
    for(const int columns:{1,2}) {
        Access::text(game.vm_,"title");const auto id=Access::call(game.vm_,"CreateMenu",{0,columns,11,22,33,44});
        Access::text(game.vm_,"row",true);Access::call(game.vm_,"AddMenuItem",{id,0,0});Access::call(game.vm_,"AddMenuItem",{id,1,0});
        Access::text(game.vm_,"header");Access::call(game.vm_,"SetMenuColumnHeader",{id,0,0});
        require(Access::call(game.vm_,"ShowMenuForPlayer",{id+256,65536})==1,"menu show WORD/BYTE aliases rejected");
        auto frames=Wire::take(peers[0]);require(frames.size()==2,"initial menu show must initialize first");
        const auto payload=unpack(frames[0],76);const auto shown=unpack(frames[1],77);
        const auto& data=game.menu_pool_->objects[id]->data;
        std::vector<std::uint8_t> expected;const auto append=[&](std::size_t offset,std::size_t size){expected.insert(expected.end(),data.begin()+offset,data.begin()+offset+size);};
        append(0,1);const std::uint32_t two=columns==2;const auto* bytes=reinterpret_cast<const std::uint8_t*>(&two);
        expected.insert(expected.end(),bytes,bytes+4);append(1,32);append(0x1341,12);if(two)append(0x134d,4);
        append(0x1301,4);append(0x1305,48);append(0x321,32);append(0x1352,1);append(0x21,32);
        if(two) {append(0x341,32);append(0x1353,1);append(0x41,32);}
        require(payload.numberOfBitsUsed_==expected.size()*8 && std::memcmp(payload.data_.data(),expected.data(),expected.size())==0 &&
            shown.numberOfBitsUsed_==8 && shown.data_[0]==id,"menu initialization/show wire layout differs");
        require(expected.size()==static_cast<std::size_t>(columns==2?235:166),"menu fixed field extent differs");
        Access::call(game.vm_,"ShowMenuForPlayer",{id,0});frames=Wire::take(peers[0]);require(frames.size()==1,"cached menu was reinitialized");unpack(frames[0],77);
        Access::call(game.vm_,"DisableMenu",{id});Access::call(game.vm_,"DisableMenuRow",{id,0});
        Access::call(game.vm_,"ShowMenuForPlayer",{id,0});frames=Wire::take(peers[0]);require(frames.size()==1,"disable unexpectedly invalidated cache");unpack(frames[0],77);
        Access::text(game.vm_,"changed");Access::call(game.vm_,"SetMenuColumnHeader",{id,1,0});
        Access::call(game.vm_,"ShowMenuForPlayer",{id,0});frames=Wire::take(peers[0]);require(frames.size()==2,"header did not invalidate cache");unpack(frames[0],76);unpack(frames[1],77);
        for(int repeat=0;repeat<2;++repeat) {Access::call(game.vm_,"HideMenuForPlayer",{id,0});frames=Wire::take(peers[0]);require(frames.size()==1,"hide must always send");unpack(frames[0],78);}
        require(Access::call(game.vm_,"GetPlayerMenu",{0})==id,"hide cleared current menu");
        game.players_[0].in_use=false;require(Access::call(game.vm_,"GetPlayerMenu",{65536})==id,"current menu incorrectly checked occupancy");game.players_[0].in_use=true;
        game.menu_pool_->reset_player(0);Access::call(game.vm_,"ShowMenuForPlayer",{id,0});frames=Wire::take(peers[0]);require(frames.size()==2,"reconnect cache was retained");
        require(Access::call(game.vm_,"DestroyMenu",{id})==1 && Wire::take(peers[0]).empty() && Access::call(game.vm_,"GetPlayerMenu",{0})==id,
            "destroy must retain current ID and send no hide");
    }
    Access::text(game.vm_,"last");const auto id=Access::call(game.vm_,"CreateMenu",{0,1,0,0,0,0});
    require(Access::call(game.vm_,"ShowMenuForPlayer",{id,999})==1 && Wire::take(peers[1]).size()==2 &&
        Access::call(game.vm_,"ShowMenuForPlayer",{id,1000})==0 && Wire::take(peers[2]).empty(),"menu player fixed bound differs");
    game.players_[1000].in_use=false;Access::disable(game.vm_);game.begin_gamemode_restart();
    require(!game.menu_pool_,"gamemode restart retained menus");
}

void menu_callbacks() {
    samp::server::GameLayer game;std::array<samp::server::RakNetPeer,3> peers;game.players_.resize(1001);
    game.players_[999].peer=&peers[0]; // Occupancy is deliberately false.
    game.players_[1000].peer=&peers[1];Wire::authenticate(peers[2],17);
    std::vector<std::string> trace;
    const auto record=[&](std::string tag,std::string_view name,std::span<const cell> args)->cell {
        trace.push_back(tag+":"+(name=="OnPlayerExitedMenu"?"exit":"row")+":"+std::to_string(args[0])+
            (args.size()==2?":"+std::to_string(args[1]):""));return -1;
    };
    Access::callbacks(game.vm_,[&](auto name,auto args){return record("gm",name,args);});
    for(int i=0;i<17;++i) {auto vm=std::make_unique<samp::pawn::PawnVm>();Access::callbacks(*vm,[&,i](auto name,auto args){return record("fs"+std::to_string(i),name,args);});game.filterscripts_.push_back(std::move(vm));}
    const auto send=[&](samp::server::RakNetPeer& peer,std::uint8_t id,std::uint8_t row,std::uint32_t bits) {
        BitStream message;const std::uint8_t header[]{20,id};message.write(header,2);
        message.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
        if(bits)message.writeBits(&row,bits,false);game.on_user_message(peer,message);
    };
    for(const auto& [peer,player]:std::array<std::pair<samp::server::RakNetPeer*,int>,3>{{{&peers[0],999},{&peers[1],1000},{&peers[2],17}}}) {
        trace.clear();send(*peer,132,255,8);std::vector<std::string> expected{"gm:row:"+std::to_string(player)+":255"};
        for(int i=0;i<16;++i)expected.push_back("fs"+std::to_string(i)+":row:"+std::to_string(player)+":255");
        require(trace==expected,"menu row callback order, unchecked player/row or filterscript limit differs");
        trace.clear();send(*peer,140,0,0);expected={"gm:exit:"+std::to_string(player)};
        for(int i=0;i<16;++i)expected.push_back("fs"+std::to_string(i)+":exit:"+std::to_string(player));
        require(trace==expected,"empty menu exit callback or non-consuming order differs");
    }
    trace.clear();send(peers[0],132,0,0);require(trace.empty(),"empty row callback accepted");
    send(peers[0],132,0x80,1);require(trace.front()=="gm:row:999:128","borrowed byte padding behavior differs");
    samp::server::RakNetPeer unknown;trace.clear();send(unknown,140,0,0);require(trace.front()=="gm:exit:65535","unknown peer index was not forwarded");
    trace.clear();game.gamemode_restarting_=true;Access::disable(game.vm_);send(peers[0],132,12,8);
    require(trace.size()==16 && trace.front()=="fs0:row:999:12" && trace.back()=="fs15:row:999:12","restart incorrectly suppressed menu filterscripts");
}
}

int main(int,char**) {
    try {
#if defined(_MSC_VER) && defined(_M_IX86) && defined(SAMP_OFFICIAL_SERVER_PATH)
        storage_against_binary();unchecked_writes_against_binary();
#endif
        allocation_and_natives();wire_and_lifetime();menu_callbacks();
    } catch(const std::exception& error) {std::fprintf(stderr,"%s\n",error.what());return 1;}
    return 0;
}

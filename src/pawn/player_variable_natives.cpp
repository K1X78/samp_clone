#include "pawn/variable_natives.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_string_api.hpp"
#include <bit>
#include <cstring>
#ifdef _MSC_VER
#include <malloc.h>
#else
#include <alloca.h>
#define _alloca alloca
#endif

namespace samp::pawn::variable_natives {

// Official: FUN_0046fcb0 @ 0x0046fcb0 (samp-server.exe)
cell write_string(samp::amx::Amx* amx,cell address,const char* text,cell length) {
    auto* base=static_cast<std::uint8_t*>(amx->base);std::uint32_t offset=0;
    std::memcpy(&offset,base+0x10,4);
    auto* output=base+offset+static_cast<std::uint32_t>(address);
    std::uint32_t remaining=static_cast<std::uint32_t>(length);cell written=0;
    while(remaining!=0 && *text!=0) {
        --remaining;const cell value=static_cast<signed char>(*text++);
        std::memcpy(output,&value,4);output+=4;++written;
    }
    const cell zero=0;std::memcpy(output,&zero,4);return written;
}

// Official: FUN_004783e0 @ 0x004783e0 (samp-server.exe)
cell set_player_int(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<3) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->set_int(name,args[2])!=0?1:0;
}

// Official: FUN_004784b0 @ 0x004784b0 (samp-server.exe)
cell set_player_string(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<3) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    amx_memory::get_address(amx,args[2],&source);amx_string::length(source,length);
    const char* text="";
    if(length>0) {
        auto* buffer=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
        amx_string::get_string(buffer,source,0,static_cast<std::uint32_t>(length)+1u);text=buffer;
    }
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->set_string(name,text)!=0?1:0;
}

// Official: FUN_004785e0 @ 0x004785e0 (samp-server.exe)
cell set_player_float(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<3) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->set_float(name,std::bit_cast<float>(args[2]))!=0?1:0;
}

// Official: FUN_004786b0 @ 0x004786b0 (samp-server.exe)
cell get_player_int(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->get_int(name);
}

// Official: FUN_00478770 @ 0x00478770 (samp-server.exe)
cell get_player_float(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    const float value=player.variables->get_float(name);return std::bit_cast<cell>(value);
}

// Official: FUN_00478840 @ 0x00478840 (samp-server.exe)
cell get_player_string(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<4) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    const auto* text=player.variables->get_string(name);
    return text?write_string(amx,args[2],text,args[3]):0;
}

// Official: FUN_00478920 @ 0x00478920 (samp-server.exe)
cell erase_player(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->erase(name);
}

// Official: FUN_004789e0 @ 0x004789e0 (samp-server.exe)
cell player_type(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->type(name);
}

// Official: FUN_00478aa0 @ 0x00478aa0 (samp-server.exe)
cell player_name_at(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<4) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    const auto* text=player.variables->name_at(args[1]);
    if(text) return write_string(amx,args[2],text,args[3]);
    write_string(amx,args[2],"",args[3]);return 0;
}

// Official: FUN_00478b20 @ 0x00478b20 (samp-server.exe)
cell player_upper(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<1) return 0;
    const auto slot=static_cast<std::uint16_t>(args[0]);
    if(slot>=1000 || slot>=host.players_.size() || !host.players_[slot].in_use) return 0;
    auto& player=host.players_[slot];
    if(!player.variables) player.variables=std::make_shared<PlayerVariablePool>();
    return player.variables->upper;
}

} // namespace samp::pawn::variable_natives

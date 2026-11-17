#include "pawn/variable_natives.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_string_api.hpp"
#include <bit>
#ifdef _MSC_VER
#include <malloc.h>
#else
#include <alloca.h>
#define _alloca alloca
#endif

namespace samp::pawn::variable_natives {

// Official: FUN_00478b80 @ 0x00478b80 (samp-server.exe)
cell set_server_int(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->set_int(name,args[1])!=0?1:0;
}

// Official: FUN_00478c10 @ 0x00478c10 (samp-server.exe)
cell set_server_string(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    amx_memory::get_address(amx,args[1],&source);amx_string::length(source,length);
    const char* text="";
    if(length>0) {
        auto* buffer=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
        amx_string::get_string(buffer,source,0,static_cast<std::uint32_t>(length)+1u);text=buffer;
    }
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->set_string(name,text)!=0?1:0;
}

// Official: FUN_00478cf0 @ 0x00478cf0 (samp-server.exe)
cell set_server_float(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<2) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->set_float(name,std::bit_cast<float>(args[1]))!=0?1:0;
}

// Official: FUN_00478d80 @ 0x00478d80 (samp-server.exe)
cell get_server_int(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<1) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->get_int(name);
}

// Official: FUN_00478e00 @ 0x00478e00 (samp-server.exe)
cell get_server_float(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<1) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    const float value=host.server_variables_->get_float(name);return std::bit_cast<cell>(value);
}

// Official: FUN_00478e80 @ 0x00478e80 (samp-server.exe)
cell get_server_string(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<3) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    const auto* text=host.server_variables_->get_string(name);
    return text?write_string(amx,args[1],text,args[2]):0;
}

// Official: FUN_00478f20 @ 0x00478f20 (samp-server.exe)
cell erase_server(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<1) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->erase(name);
}

// Official: FUN_00478fa0 @ 0x00478fa0 (samp-server.exe)
cell server_type(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<1) return 0;
    cell* source=nullptr;int length=0;
    amx_memory::get_address(amx,args[0],&source);amx_string::length(source,length);
    if(length<=0) return 0;
    auto* name=static_cast<char*>(_alloca((static_cast<std::uint32_t>(length)+4u)&~3u));
    amx_string::get_string(name,source,0,static_cast<std::uint32_t>(length)+1u);
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->type(name);
}

// Official: FUN_00479020 @ 0x00479020 (samp-server.exe)
cell server_name_at(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(args.size()<3) return 0;
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    const auto* text=host.server_variables_->name_at(args[0]);
    if(text) return write_string(amx,args[1],text,args[2]);
    write_string(amx,args[1],"",args[2]);return 0;
}

// Official: FUN_00479070 @ 0x00479070 (samp-server.exe)
cell server_upper(samp::amx::Amx* amx,NativeHost& host,std::span<const cell> args) {
    if(!host.server_variables_) host.server_variables_=std::make_shared<ServerVariablePool>();
    return host.server_variables_->upper;
}

} // namespace samp::pawn::variable_natives

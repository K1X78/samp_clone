#include "pawn/player_variables.hpp"
#include <cstdlib>
#include <cstring>

namespace samp::pawn {

// Official: FUN_00468c60 @ 0x00468c60 (samp-server.exe)
static int variable_upper_character(char value) {
    const auto byte=static_cast<signed char>(value);return byte>96 && byte<123?byte-32:byte;
}

// Official: FUN_00468d20 @ 0x00468d20 (samp-server.exe)
static void variable_upper_name(char* name) {
    for(;*name!=0;++name) *name=static_cast<char>(variable_upper_character(*name));
}

// Official: FUN_00488da0 @ 0x00488da0 (samp-server.exe)
PlayerVariablePool::PlayerVariablePool() {
    entries.fill({});active.fill(0);upper=0;
}

// Official: FUN_00488de0 @ 0x00488de0 (samp-server.exe)
PlayerVariablePool::~PlayerVariablePool() {
    for(std::size_t id=0;id<800;++id) {if(active[id] && entries[id].string) std::free(entries[id].string);active[id]=0;}
}

// Official: FUN_00488e20 @ 0x00488e20 (samp-server.exe)
void PlayerVariablePool::update_upper() {
    upper=0;for(int id=0;id<800;++id) if(active[id]) upper=id+1;
}

// Official: FUN_00488e80 @ 0x00488e80 (samp-server.exe)
int PlayerVariablePool::find(char* name) {
    variable_upper_name(name);
    for(int id=0;id<upper;++id) if(active[id] && std::strcmp(name,entries[id].name.data())==0) return id;
    return -1;
}

// Official: FUN_00488f20 @ 0x00488f20 (samp-server.exe)
int PlayerVariablePool::create(char* name) {
    int id=0;for(;id<800 && active[id];++id) {}
    if(id==800 || std::strlen(name)>40) return -1;
    variable_upper_name(name);std::strcpy(entries[id].name.data(),name);
    entries[id].read_only=entries[id].type=0;active[id]=1;update_upper();return id;
}

// Official: FUN_00488ff0 @ 0x00488ff0 (samp-server.exe)
int PlayerVariablePool::set_int(char* name,std::int32_t value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=1;entry.integer=value;return 1;
}

// Official: FUN_00489050 @ 0x00489050 (samp-server.exe)
int PlayerVariablePool::set_string(char* name,const char* value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=2;if(entry.string) std::free(entry.string);
    entry.string=static_cast<char*>(std::calloc(1,std::strlen(value)+1));
    std::strcpy(entry.string,value);return 1;
}

// Official: FUN_004890f0 @ 0x004890f0 (samp-server.exe)
int PlayerVariablePool::set_float(char* name,float value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=3;entry.floating=value;return 1;
}

// Official: FUN_00489150 @ 0x00489150 (samp-server.exe)
std::int32_t PlayerVariablePool::get_int(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==1?entries[id].integer:0;
}

// Official: FUN_00489180 @ 0x00489180 (samp-server.exe)
const char* PlayerVariablePool::get_string(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==2?entries[id].string:nullptr;
}

// Official: FUN_004891b0 @ 0x004891b0 (samp-server.exe)
float PlayerVariablePool::get_float(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==3?entries[id].floating:0.0f;
}

// Official: FUN_004891e0 @ 0x004891e0 (samp-server.exe)
int PlayerVariablePool::erase(char* name) {
    const auto id=find(name);if(id<0) return 0;
    if(entries[id].string) std::free(entries[id].string);
    entries[id]={};active[id]=0;update_upper();return 1;
}

// Official: FUN_00489240 @ 0x00489240 (samp-server.exe)
int PlayerVariablePool::type(char* name) {
    const auto id=find(name);return id<0?0:static_cast<int>(entries[id].type);
}

// Official: FUN_00489270 @ 0x00489270 (samp-server.exe)
const char* PlayerVariablePool::name_at(int index) {
    return index>=0 && index<800 && active[index]?entries[index].name.data():nullptr;
}

} // namespace samp::pawn

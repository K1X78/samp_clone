#include "pawn/server_variables.hpp"
#include <cstdlib>
#include <cstring>

namespace samp::pawn {

// Official: FUN_0049ec60 @ 0x0049ec60 (samp-server.exe)
ServerVariablePool::ServerVariablePool() {
    entries.fill({});active.fill(0);upper=0;
}

// Official: FUN_0049eca0 @ 0x0049eca0 (samp-server.exe)
ServerVariablePool::~ServerVariablePool() {
    for(std::size_t id=0;id<2000;++id) {if(active[id] && entries[id].string) std::free(entries[id].string);active[id]=0;}
}

// Official: FUN_0049ece0 @ 0x0049ece0 (samp-server.exe)
void ServerVariablePool::update_upper() {
    upper=0;for(int id=0;id<2000;++id) if(active[id]) upper=id+1;
}

// Official: FUN_0049ed40 @ 0x0049ed40 (samp-server.exe)
int ServerVariablePool::find(char* name) {
    variable_upper_name(name);
    for(int id=0;id<upper;++id) if(active[id] && std::strcmp(name,entries[id].name.data())==0) return id;
    return -1;
}

// Official: FUN_0049ede0 @ 0x0049ede0 (samp-server.exe)
int ServerVariablePool::create(char* name) {
    int id=0;for(;id<2000 && active[id];++id) {}
    if(id==2000 || std::strlen(name)>40) return -1;
    variable_upper_name(name);std::strcpy(entries[id].name.data(),name);
    entries[id].read_only=entries[id].type=0;active[id]=1;update_upper();return id;
}

// Official: FUN_0049eeb0 @ 0x0049eeb0 (samp-server.exe)
int ServerVariablePool::set_int(char* name,std::int32_t value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=1;entry.integer=value;return 1;
}

// Official: FUN_0049ef10 @ 0x0049ef10 (samp-server.exe)
int ServerVariablePool::set_string(char* name,const char* value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=2;if(entry.string) std::free(entry.string);
    entry.string=static_cast<char*>(std::calloc(1,std::strlen(value)+1));
    std::strcpy(entry.string,value);return 1;
}

// Official: FUN_0049efb0 @ 0x0049efb0 (samp-server.exe)
int ServerVariablePool::set_float(char* name,float value,int read_only) {
    auto id=find(name);if(id<0) id=create(name);if(id<0) return 0;
    auto& entry=entries[id];if(read_only) entry.read_only=1;else if(entry.read_only) return 0;
    entry.type=3;entry.floating=value;return 1;
}

// Official: FUN_0049f010 @ 0x0049f010 (samp-server.exe)
std::int32_t ServerVariablePool::get_int(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==1?entries[id].integer:0;
}

// Official: FUN_0049f040 @ 0x0049f040 (samp-server.exe)
const char* ServerVariablePool::get_string(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==2?entries[id].string:nullptr;
}

// Official: FUN_0049f070 @ 0x0049f070 (samp-server.exe)
float ServerVariablePool::get_float(char* name) {
    const auto id=find(name);return id>=0 && entries[id].type==3?entries[id].floating:0.0f;
}

// Official: FUN_0049f0a0 @ 0x0049f0a0 (samp-server.exe)
int ServerVariablePool::erase(char* name) {
    const auto id=find(name);if(id<0) return 0;
    if(entries[id].string) std::free(entries[id].string);
    entries[id]={};active[id]=0;update_upper();return 1;
}

// Official: FUN_0049f100 @ 0x0049f100 (samp-server.exe)
int ServerVariablePool::type(char* name) {
    const auto id=find(name);return id<0?0:static_cast<int>(entries[id].type);
}

// Official: FUN_0049f130 @ 0x0049f130 (samp-server.exe)
const char* ServerVariablePool::name_at(int index) {
    return index>=0 && index<2000 && active[index]?entries[index].name.data():nullptr;
}

} // namespace samp::pawn

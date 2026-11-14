#pragma once

#include "pawn/player_variables.hpp"

namespace samp::pawn {

struct ServerVariablePool {
    std::array<VariableEntry,2000> entries;
    std::array<std::uint32_t,2000> active;
    std::int32_t upper;

    ServerVariablePool();
    ~ServerVariablePool();
    ServerVariablePool(const ServerVariablePool&)=delete;
    ServerVariablePool& operator=(const ServerVariablePool&)=delete;
    void update_upper();
    int find(char* name);
    int create(char* name);
    int set_int(char* name,std::int32_t value,int read_only=0);
    int set_string(char* name,const char* value,int read_only=0);
    int set_float(char* name,float value,int read_only=0);
    std::int32_t get_int(char* name);
    const char* get_string(char* name);
    float get_float(char* name);
    int erase(char* name);
    int type(char* name);
    const char* name_at(int index);
};

}

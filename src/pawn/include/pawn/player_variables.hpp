#pragma once

#include <array>
#include <cstdint>

namespace samp::pawn {

struct VariableEntry {
    std::array<char,41> name;
    std::uint32_t read_only,type;
    std::int32_t integer;
    float floating;
    char* string;
};

struct PlayerVariablePool {
    std::array<VariableEntry,800> entries;
    std::array<std::uint32_t,800> active;
    std::int32_t upper;

    PlayerVariablePool();
    ~PlayerVariablePool();
    PlayerVariablePool(const PlayerVariablePool&)=delete;
    PlayerVariablePool& operator=(const PlayerVariablePool&)=delete;
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

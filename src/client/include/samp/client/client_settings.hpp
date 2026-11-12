#pragma once
#include <cstdint>
#include <filesystem>
#include <string>
#include <string_view>
#include <vector>

namespace samp::client {
struct ClientSetting {
    std::string name,value;
    int type=0; // Native types:1=int,2=string,3=float.
    bool read_only=false;
};
class ClientSettings {
public:
    std::filesystem::path file;
    std::vector<ClientSetting> entries;
    bool load();
    bool save() const;
    std::int32_t get_int(std::string_view name) const;
    bool set_int(std::string_view name,std::int32_t value,bool read_only=false);
};
}

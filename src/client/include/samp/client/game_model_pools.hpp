#pragma once
#include "samp/client/hooks.hpp"
#include <array>
#include <cstdint>
#include <map>
#include <string>

namespace samp::client {
// Compatibility adapter for the pool-growth operation reached from the
// native initialization owner at 0x100aa180 in game/patches.cpp.
bool expand_game_pools(std::vector<PatchRecord>& patches);
// Compatibility adapters patch GTA 1.0 US operands used by the native pool
// initialization owners already implemented in game/patches.cpp.
class GameModelPools {
private:
    friend class GameRuntime;
    friend struct GameModelPoolsTestAccess;
    bool install_custom_model_table(std::vector<PatchRecord>& patches);
    void* model_info(std::int32_t id) const;
    void release_custom_model(std::int32_t id);
    bool custom_table_installed_=false;
    std::vector<std::uint32_t> model_infos_=std::vector<std::uint32_t>(65535);
    struct CustomDefinition {
        std::vector<std::uint8_t> info;
        std::int32_t base=0;
        bool object=false;
        std::string model_path,texture_path;
        void* rw=nullptr;
        void* shared_hit_collision=nullptr;
        void* collision=nullptr;
    };
    std::map<std::int32_t,CustomDefinition> custom_definitions_;

    bool install_pointer_lists(std::vector<PatchRecord>& patches);
    bool install_ped_pool(std::vector<PatchRecord>& patches);
    bool install_atomic_pool();

    // This is the relocated pointer-list storage from 0x100aa6a0.
    // Separate custom-model activation relocates CModelInfo through the
    // biased table above; this pointer-list expansion does not relocate it.
    std::array<std::uint32_t,40000> pointer_lists_{};
    std::array<std::array<std::uint32_t,17>,319> peds_{};
    std::array<std::array<std::uint32_t,8>,20000> atomics_{};
};
}

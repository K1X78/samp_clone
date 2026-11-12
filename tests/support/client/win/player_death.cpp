#include "game_runtime.hpp"
#include <cstring>

namespace samp::client {

std::uint8_t GameRuntime::death_info(const std::uint8_t* ped, std::uint16_t& killer) const {
    killer=0xffff;
    if(!ped) return 0xff;
    const auto reason=ped[0x760];
    if(reason==53) return reason;
    if(reason>=43 && reason!=50 && reason!=51 && reason!=49 && reason!=54) return 0xff;
    const void* damager=nullptr;std::memcpy(&damager,ped+0x764,sizeof(damager));
    if(!damager) return 0xff;
    const auto player_id=[&](const void* entity) -> std::uint16_t {
        for(const auto& [id,remote]:remote_peds_.peds_)
            if(remote.ped==entity) return static_cast<std::uint16_t>(id);
        return 0xffff;
    };
    if(reason!=49 && reason!=54) {
        killer=player_id(damager);
        if(killer!=0xffff) return reason;
    }
    for(const auto& [id,vehicle]:remote_vehicles_) {
        (void)id;
        if(vehicle.entity!=damager) continue;
        const void* driver=nullptr;
        std::memcpy(&driver,static_cast<const std::uint8_t*>(damager)+0x460,sizeof(driver));
        killer=player_id(driver);
        return killer!=0xffff?reason:0xff;
    }
    return reason==54?54:0xff;
}

} // namespace samp::client

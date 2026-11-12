#include "game_runtime.hpp"
#include <windows.h>

namespace samp::client {
std::uint32_t GameRuntime::create_engine_pickup(const PickupState& pickup,std::int32_t& game_id) {
    auto model=static_cast<std::int32_t>(pickup.model);
    if(!models_.model_info(model)) model=18631;
    if(model>=0 && model<=20000 && !script_.command(0x0248,"i",model)) {
        script_.command(0x0247,"i",model);script_.command(0x038b,"");
        while(!script_.command(0x0248,"i",model)) Sleep(1);
    }
    std::uint32_t handle=0;
    // Descriptor1011e830:0213/iifffv. Low16 bits index GTA's pickup array.
    script_.command(0x0213,"iifffv",model,pickup.type,static_cast<double>(pickup.x),
        static_cast<double>(pickup.y),static_cast<double>(pickup.z),&handle);
    game_id=static_cast<std::int32_t>(handle&0xffffu);
    return handle;
}
}

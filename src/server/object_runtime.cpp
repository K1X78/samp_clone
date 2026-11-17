#include "samp/server/game_layer.hpp"

namespace samp::server {

// Basic global object metadata. The original writes attachment IDsffff,
// omits their conditional transform and terminates with material count zero.
// Official: FUN_0049dfc0 @ 0x0049dfc0 (samp-server.exe)
void GameLayer::send_object(GamePlayer& player,const samp::pawn::ObjectNativeState& object) {
    if(!player.peer || !object.active || object.id>=2000) return;
    samp::proto::BitStream payload;
    payload.write(&object.id,2);payload.write(&object.model,4);
    payload.write(object.position.data(),12);payload.write(object.rotation.data(),12);
    payload.write(&object.draw_distance,4);
    const std::uint8_t no_camera_collision=object.no_camera_collision;
    const std::uint16_t none=0xffff;
    const std::uint8_t no_materials=0;
    payload.write(&no_camera_collision,1);payload.write(&none,2);payload.write(&none,2);payload.write(&no_materials,1);
    send_rpc(*player.peer,44,payload);
    if(player.streamed_objects.size()!=objects_.size()) player.streamed_objects.resize(objects_.size());
    player.streamed_objects[object.id]=1;
}

} // namespace samp::server

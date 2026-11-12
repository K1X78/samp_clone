#include "samp/server/game_layer.hpp"

namespace samp::server {
// Official: FUN_00483d20 @ 0x00483d20 (samp-server.exe)
void GameLayer::send_pickup_in(GamePlayer& player,std::uint32_t id) {
    if(!player.peer || id>=pickups_.size() || !pickups_[id].active) return;
    if(player.streamed_pickups.size()!=pickups_.size()) player.streamed_pickups.resize(pickups_.size());
    const auto& pickup=pickups_[id];samp::proto::BitStream payload;
    payload.write(&id,4);payload.write(&pickup.model,4);payload.write(&pickup.type,4);payload.write(pickup.position.data(),12);
    send_rpc(*player.peer,95,payload);++player.streamed_pickups[id];
}
// Official: FUN_00483d60 @ 0x00483d60 (samp-server.exe)
void GameLayer::send_pickup_out(GamePlayer& player,std::uint32_t id) {
    if(!player.peer || id>=pickups_.size()) return;
    samp::proto::BitStream payload;payload.write(&id,4);send_rpc(*player.peer,63,payload);
    if(id<player.streamed_pickups.size()) player.streamed_pickups[id]=0;
}
}

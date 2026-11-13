#include "samp/server/game_layer.hpp"
#include "samp/proto/wire.hpp"
#include <algorithm>
#include <bit>
#include <chrono>
#include <set>

namespace samp::server {
// Official: FUN_00465c50 @ 0x00465c50 (samp-server.exe)
void GameLayer::update_player_pool_size() {
    player_pool_highest_ = 0;
    const auto end = std::min<std::size_t>(1000, players_.size());
    for (std::size_t slot = 0; slot < end; ++slot)
        if (players_[slot].in_use) player_pool_highest_ = static_cast<int>(slot);
}

// Official: FUN_00499090 @ 0x00499090 (samp-server.exe)
void GameLayer::handle_score_request(RakNetPeer& peer) {
    const auto found=std::find_if(players_.begin(),players_.end(),[&](const auto& player){return player.in_use && player.joined && player.peer==&peer;});
    if(found==players_.end()) return;
    const auto now=static_cast<std::uint32_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    if(std::bit_cast<std::int32_t>(now-found->last_score_request_ms)<2000) return;
    found->last_score_request_ms=now;
    samp::proto::BitStream payload;
    for(const auto& player:players_) if(player.in_use) {
        const auto id=static_cast<std::uint16_t>(player.id);
        std::uint32_t ping=0xffffffffu;
        if(player.peer && player.peer->send_state_.lowest_ping!=0xffff) {
            std::uint32_t total=0,count=0;
            for(std::size_t slot=0;slot<player.peer->send_state_.ping_samples.size();++slot)
                if(player.peer->send_state_.ping_valid[slot]) {total+=player.peer->send_state_.ping_samples[slot];++count;}
            ping=count?total/count:0;
        }
        payload.write(&id,2);payload.write(&player.score,4);payload.write(&ping,4);
    }
    // Native466080 maintains the number of DISTINCT connected IPs at+30d54.
    // The trailing word is that count, not the requesting player's id.
    std::set<std::uint32_t> addresses;
    for(const auto& player:players_) if(player.in_use) addresses.insert(player.ipv4_address);
    const auto unique_addresses=static_cast<std::uint16_t>(addresses.size());payload.write(&unique_addresses,2);
    samp::proto::BitStream frame;const std::uint8_t prefix[]{samp::proto::kRaknetIdRpc,155};frame.write(prefix,2);
    const auto bits=static_cast<std::uint32_t>(payload.numberOfBitsUsed_);
    frame.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits),32,true);
    frame.writeBits(payload.data_.data(),bits,false);
    peer.send({frame.data_.data(),(frame.numberOfBitsUsed_+7u)/8},samp::proto::Reliability::Reliable,0,frame.numberOfBitsUsed_);
}
}

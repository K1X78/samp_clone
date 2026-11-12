#include "samp/client/network_client.hpp"
#include <chrono>

namespace samp::client {

void NetworkClient::send_aim_sync() {
    if(!in_game_ || !local_aim_provided_) return;
    const auto now=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    if(local_aim_==last_aim_ && now-last_aim_ms_<=500) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::UnreliableSequenced;
    frame.ordering_channel=1;frame.ordering_index=next_ordering_index_[1]++;
    const std::uint8_t kind=203;frame.data.write(&kind,1);frame.data.write(local_aim_.data(),31);
    outgoing_frames_.push_back(std::move(frame));last_aim_=local_aim_;last_aim_ms_=now;
}

void NetworkClient::send_bullet_sync(const std::array<std::uint8_t,40>& bullet) {
    if(!in_game_) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::UnreliableSequenced;
    frame.ordering_channel=0;frame.ordering_index=next_ordering_index_[0]++;
    const std::uint8_t kind=206;frame.data.write(&kind,1);frame.data.write(bullet.data(),40);
    outgoing_frames_.push_back(std::move(frame));
}

void NetworkClient::send_stats_sync() {
    if(!in_game_ || !local_stats_provided_) return;
    const auto now=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    if(now-last_stats_ms_<=1000) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::Unreliable;
    const std::uint8_t kind=205;frame.data.write(&kind,1);
    frame.data.write(&local_money_,4);frame.data.write(&local_drunk_,4);
    outgoing_frames_.push_back(std::move(frame));last_stats_ms_=now;
}

// Native callable entry inside the labeled class-selection region.
void NetworkClient::send_weapons_sync() {
    if(!in_game_ || !local_stats_provided_) return;
    const auto now=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    if(now-last_weapons_ms_<=100) return;
    if(local_weapons_==reported_weapons_ && local_ammo_==reported_ammo_) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::Unreliable;
    const std::uint8_t kind=204;frame.data.write(&kind,1);
    frame.data.write(&target_player_,2);frame.data.write(&target_actor_,2);
    for(std::uint8_t slot=0;slot<13;++slot) {
        if(local_weapons_[slot]==reported_weapons_[slot] && local_ammo_[slot]==reported_ammo_[slot]) continue;
        frame.data.write(&slot,1);frame.data.write(&local_weapons_[slot],1);frame.data.write(&local_ammo_[slot],2);
    }
    outgoing_frames_.push_back(std::move(frame));last_weapons_ms_=now;
    reported_weapons_=local_weapons_;reported_ammo_=local_ammo_;
}

void NetworkClient::send_interior(std::uint8_t interior) {
    if(state_!=ConnectionState::Connected || interior==reported_interior_) return;
    reported_interior_=interior;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::Reliable;
    const std::uint8_t header[]{samp::proto::kRaknetIdRpc,118};frame.data.write(header,2);
    const std::uint8_t count[]{8,0,0,0};frame.data.writeCompressed(count,32,true);frame.data.write(&interior,1);
    outgoing_frames_.push_back(std::move(frame));
}

} // namespace samp::client

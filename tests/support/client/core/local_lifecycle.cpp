#include "samp/client/network_client.hpp"

namespace samp::client {

void NetworkClient::send_death_notification(std::uint8_t reason, std::uint16_t killer) {
    if (!in_game_) return;
    samp::proto::ReliabilityFrame frame;
    frame.message_number = next_message_number_++;
    frame.reliability = samp::proto::Reliability::ReliableOrdered;
    frame.ordering_channel = 0;
    frame.ordering_index = next_ordering_index_[0]++;
    const std::uint8_t rpc[]{samp::proto::kRaknetIdRpc, 53};
    frame.data.write(rpc, 2);
    const std::uint8_t bits[]{24,0,0,0};
    frame.data.writeCompressed(bits,32,true);
    frame.data.write(&reason,1);
    frame.data.write(&killer,2);
    outgoing_frames_.push_back(std::move(frame));
    in_game_ = spawned_ = spawn_accepted_ = spawn_requested_ = false;
    last_foot_packet_.clear();
    death_reported_ = true;
}

} // namespace samp::client

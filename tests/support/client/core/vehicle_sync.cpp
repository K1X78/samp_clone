#include "samp/client/network_client.hpp"
#include <cmath>
#include <cstring>

namespace samp::client {

void NetworkClient::send_driver_sync() {
    if(!in_game_) return;
    samp::proto::ReliabilityFrame frame;
    frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::UnreliableSequenced;
    frame.ordering_channel=1;frame.ordering_index=next_ordering_index_[1]++;
    const std::uint8_t kind=200;frame.data.write(&kind,1);frame.data.write(local_driver_.data(),63);
    outgoing_frames_.push_back(std::move(frame));
}

void NetworkClient::send_passenger_sync() {
    if(!in_game_) return;
    samp::proto::ReliabilityFrame frame;
    frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::UnreliableSequenced;
    frame.ordering_channel=1;frame.ordering_index=next_ordering_index_[1]++;
    const std::uint8_t kind=211;frame.data.write(&kind,1);frame.data.write(local_passenger_.data(),24);
    outgoing_frames_.push_back(std::move(frame));
}

void NetworkClient::handle_passenger_sync(const samp::proto::BitStream& packet,std::uint64_t stamp) {
    auto input=packet;std::uint8_t kind=0;std::uint16_t player_id=0;
    std::array<std::uint8_t,24> raw{};
    if(!input.read(&kind,1) || !input.read(&player_id,2) || !input.read(raw.data(),24)) return;
    const auto found=world_.players_.find(player_id);
    if(found==world_.players_.end() || !found->second.streamed_in || found->second.dead) return;
    std::uint16_t vehicle_id=0;std::memcpy(&vehicle_id,raw.data(),2);
    if(!world_.vehicles_.contains(vehicle_id)) return;
    float position[3];std::memcpy(position,raw.data()+12,12);
    if(!std::isfinite(position[0]) || !std::isfinite(position[1]) || !std::isfinite(position[2])) return;
    auto& player=found->second;
    player.x=position[0];player.y=position[1];player.z=position[2];
    player.health=raw[4];player.armour=raw[5];player.weapon=raw[3]&0x3f;
    player.in_vehicle=true;player.vehicle_id=vehicle_id;player.last_update_ms=stamp;++player.updates;
    VehicleTransformCommand command;command.id=vehicle_id;command.player_id=player_id;
    command.seat=raw[2]&0x3f;command.position={position[0],position[1],position[2]};
    std::memcpy(&command.left_right,raw.data()+6,2);std::memcpy(&command.up_down,raw.data()+8,2);
    std::memcpy(&command.keys,raw.data()+10,2);command.weapon=raw[3]&0x3f;
    command.player_health=raw[4];command.player_armour=raw[5];
    game_commands_.emplace_back(command);
}

void NetworkClient::send_enter_vehicle(std::uint16_t id,bool passenger) {
    if(!in_game_) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::ReliableSequenced;
    frame.ordering_channel=0;frame.ordering_index=next_ordering_index_[0]++;
    const std::uint8_t header[]{samp::proto::kRaknetIdRpc,26}, count[]{24,0,0,0},flag=passenger;
    frame.data.write(header,2);frame.data.writeCompressed(count,32,true);
    frame.data.write(&id,2);frame.data.write(&flag,1);outgoing_frames_.push_back(std::move(frame));
}

void NetworkClient::send_exit_vehicle(std::uint16_t id) {
    if(!in_game_) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::ReliableSequenced;
    frame.ordering_channel=0;frame.ordering_index=next_ordering_index_[0]++;
    const std::uint8_t header[]{samp::proto::kRaknetIdRpc,154},count[]{16,0,0,0};
    frame.data.write(header,2);frame.data.writeCompressed(count,32,true);frame.data.write(&id,2);
    outgoing_frames_.push_back(std::move(frame));
}

// The audited vehicle-pool notification is in net/vehiclepool.cpp.
void NetworkClient::send_vehicle_death(std::uint16_t id) {
    if(state_!=ConnectionState::Connected || id!=last_vehicle_driven_) return;
    samp::proto::ReliabilityFrame frame;frame.message_number=next_message_number_++;
    frame.reliability=samp::proto::Reliability::ReliableSequenced;
    frame.ordering_channel=0;frame.ordering_index=next_ordering_index_[0]++;
    const std::uint8_t header[]{samp::proto::kRaknetIdRpc,136},count[]{16,0,0,0};
    frame.data.write(header,2);frame.data.writeCompressed(count,32,true);frame.data.write(&id,2);
    outgoing_frames_.push_back(std::move(frame));last_vehicle_driven_=0xffff;
}

} // namespace samp::client

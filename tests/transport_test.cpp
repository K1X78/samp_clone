#include <algorithm>
#include <chrono>
#include <cstdio>
#include <vector>

#include "samp/proto/reliability_frame.hpp"
#include "samp/proto/obfuscation.hpp"
#include "samp/server/raknet_server.hpp"
#include "samp/client/network_client.hpp"

using namespace samp::proto;

namespace samp::server {
struct RakNetTransportTestAccess {
    static RakNetPeer& peer(RakNetServer& server, std::uint32_t address, std::uint16_t port, std::uint64_t now) {
        auto& peer = server.peers_[(std::uint64_t(address) << 16) | port];
        peer.address_ = address; peer.port_ = port; peer.last_receive_ms_ = now;
        peer.stage_ = RakNetPeer::Stage::Authenticated;
        return peer;
    }
    static std::size_t outstanding(const RakNetPeer& peer) {
        return peer.send_state_.pending.size() + peer.send_state_.queued_ids.size();
    }
};
}

namespace {
int failures = 0;
#define CHECK(value) do { if (!(value)) { std::printf("FAIL %d: %s\n", __LINE__, #value); ++failures; } } while (false)

ReliabilityFrame frame(std::uint16_t number, Reliability reliability, std::uint16_t order = 0,
                        std::uint8_t value = 42, std::uint8_t channel = 0) {
    ReliabilityFrame result;
    result.message_number = number; result.reliability = reliability;
    result.ordering_index = order; result.ordering_channel = channel;
    result.data.write(&value, 1);
    return result;
}

std::vector<std::uint8_t> wire(const ConnectedDatagram& datagram) {
    auto bits = encode_connected_datagram(datagram);
    return {bits.data_.begin(), bits.data_.begin() + (bits.numberOfBitsUsed_ + 7u) / 8u};
}

ConnectedDatagram receive(ReliabilityReceiveState& state, const ReliabilityFrame& input, std::uint64_t now = 0) {
    ConnectedDatagram output;
    CHECK(decode_connected_datagram(wire({{}, {input}}), output, &state, now));
    return output;
}

void golden_frames() {
    // Independently assembled MSB-first fields, including byte alignment.
    const std::vector<std::uint8_t> plain{0x02, 0x80, 0x43, 0x80, 0x42};
    const std::vector<std::uint8_t> ordered{0x02, 0x80, 0x48, 0xcd, 0x04, 0x9c, 0x00, 0x42};
    const std::vector<std::uint8_t> split{0x02, 0x80, 0x44, 0x85, 0x0f, 0xc7, 0xcb, 0x30, 0xa0};
    const std::vector<std::uint8_t> ack{0xe3, 0x05, 0x00};
    CHECK(wire({{}, {frame(5, Reliability::Reliable, 0, 0x42)}}) == plain);
    CHECK(wire({{}, {frame(5, Reliability::ReliableOrdered, 0x1234, 0x42, 3)}}) == ordered);
    auto fragment = frame(5, Reliability::Reliable, 0, 0xa0);
    fragment.is_split = true; fragment.split_packet_id = 0x4321;
    fragment.split_packet_index = 1; fragment.split_packet_count = 2;
    fragment.data.numberOfBitsUsed_ = 3;
    CHECK(wire({{}, {fragment}}) == split);
    CHECK(wire({{{5, 5}}, {}}) == ack);
    for (const auto& bytes : {plain, ordered, split, ack}) {
        ConnectedDatagram result;
        CHECK(decode_connected_datagram(bytes, result));
        CHECK(wire(result) == bytes);
        for (std::size_t size = 0; size < bytes.size(); ++size) {
            ConnectedDatagram unchanged;
            unchanged.acks.push_back({99, 99});
            CHECK(!decode_connected_datagram(std::span(bytes.data(), size), unchanged));
            CHECK(unchanged.acks.size() == 1 && unchanged.acks[0].min_index == 99);
        }
    }
    ConnectedDatagram decoded;
    CHECK(decode_connected_datagram(split, decoded));
    CHECK(decoded.frames[0].data.numberOfBitsUsed_ == 3);
    CHECK(decoded.frames[0].split_packet_index == 1);
    CHECK(decoded.frames[0].split_packet_count == 2);
}

void ordering_and_duplicates() {
    ReliabilityReceiveState state;
    CHECK(receive(state, frame(1, Reliability::ReliableOrdered, 1, 11)).frames.empty());
    CHECK(state.ordered_count == 1);
    auto output = receive(state, frame(0, Reliability::ReliableOrdered, 0, 10));
    CHECK(output.frames.size() == 2);
    CHECK(output.frames[0].data.data_[0] == 10 && output.frames[1].data.data_[0] == 11);
    CHECK(state.ordered_count == 0 && state.buffered_bytes == 0);
    state.acknowledgements.clear();
    CHECK(receive(state, frame(0, Reliability::ReliableOrdered, 0, 10)).frames.empty());
    CHECK(state.acknowledgements.contains(0)); // duplicate still re-ACKed
    CHECK(receive(state, frame(2, Reliability::Reliable, 0, 12)).frames.size() == 1);
    CHECK(receive(state, frame(2, Reliability::Reliable, 0, 12)).frames.empty());
    CHECK(receive(state, frame(3, Reliability::UnreliableSequenced, 2, 13)).frames.size() == 1);
    CHECK(receive(state, frame(4, Reliability::UnreliableSequenced, 1, 14)).frames.empty());
    CHECK(!state.acknowledgements.contains(3));
    CHECK(receive(state, frame(5, Reliability::ReliableOrdered, 0, 15, 1)).frames.size() == 1);
    CHECK(receive(state, frame(6, Reliability::ReliableSequenced, 3, 16)).frames.size() == 1);
    CHECK(receive(state, frame(7, Reliability::ReliableSequenced, 2, 17)).frames.empty());
    CHECK(state.acknowledgements.contains(7));

    ReliabilityReceiveState wrapping;
    wrapping.ordered_next[0] = 65535;
    wrapping.first_missing = 65535;
    CHECK(receive(wrapping, frame(65535, Reliability::ReliableOrdered, 65535)).frames.size() == 1);
    CHECK(receive(wrapping, frame(0, Reliability::ReliableOrdered, 0)).frames.size() == 1);
    // An unreliable hole must not permanently stop message-number rollover.
    ReliabilityReceiveState cycling;
    for (std::uint32_t number = 1; number < 70000; ++number) {
        auto result = receive(cycling, frame(static_cast<std::uint16_t>(number), Reliability::Unreliable), number);
        CHECK(result.frames.size() == 1);
    }
    ReliabilityReceiveState holes;
    CHECK(receive(holes, frame(1, Reliability::Reliable), 100).frames.size() == 1);
    CHECK(holes.first_missing == 0);
    receive(holes, frame(2, Reliability::Reliable), 10100);
    CHECK(holes.first_missing == 0); // native expiry is strict, not >=
    receive(holes, frame(3, Reliability::Reliable), 10101);
    CHECK(holes.first_missing == 4);
    CHECK(receive(holes, frame(0, Reliability::Reliable), 10200).frames.empty());
}

void split_loss_and_retry() {
    ReliabilitySendState sender;
    set_reliability_ping(sender, 30);
    ReliabilityReceiveState receiver;
    auto large = frame(0, Reliability::ReliableOrdered);
    large.data.reset();
    std::vector<std::uint8_t> payload(9001);
    for (std::size_t i = 0; i < payload.size(); ++i) payload[i] = static_cast<std::uint8_t>(i * 37);
    large.data.write(payload.data(), payload.size());
    large.data.numberOfBitsUsed_ -= 3; // preserve the final partial byte
    std::uint16_t next = 1;
    CHECK(queue_reliability_frame(sender, large, next, 100));
    CHECK(sender.outbox.empty());
    update_reliability_sends(sender, 300);
    CHECK(sender.outbox.size() > 1 && sender.pending.size() == sender.outbox.size());
    auto datagrams = std::move(sender.outbox);
    sender.outbox.clear();
    for (std::size_t i = datagrams.size(); i-- > 1;) {
        CHECK(datagrams[i].size() <= 1492 - 28);
        ConnectedDatagram output;
        CHECK(decode_connected_datagram(datagrams[i], output, &receiver, 110));
        CHECK(output.frames.empty());
    }
    // ACK the surviving fragments, leaving only the deliberately lost first.
    std::vector<AckRange> ranges;
    for (auto number : receiver.acknowledgements) ranges.push_back({number, number});
    acknowledge_reliability_frames(sender, ranges);
    CHECK(sender.pending.size() == 1);
    update_reliability_sends(sender, 389);
    CHECK(sender.outbox.empty());
    update_reliability_sends(sender, 391);
    CHECK(sender.outbox.size() == 1);
    CHECK(sender.outbox[0] == datagrams[0]); // identical split ID/header/number
    ConnectedDatagram complete;
    CHECK(decode_connected_datagram(sender.outbox[0], complete, &receiver, 210));
    CHECK(complete.frames.size() == 1);
    CHECK(complete.frames[0].data.numberOfBitsUsed_ == large.data.numberOfBitsUsed_);
    CHECK(std::equal(payload.begin(), payload.end(), complete.frames[0].data.data_.begin()));
    CHECK(receiver.splits.empty() && receiver.buffered_bytes == 0);
    CHECK(decode_connected_datagram(datagrams[0], complete, &receiver, 220));
    CHECK(complete.frames.empty());
    acknowledge_reliability_frames(sender, {{0, 65535}});
    CHECK(sender.pending.empty() && sender.pending_bytes == 0);
}

void malformed_and_limits() {
    ConnectedDatagram output;
    CHECK(!decode_connected_datagram({}, output));
    CHECK(!decode_connected_datagram(std::vector<std::uint8_t>{0}, output));
    auto invalid = frame(0, static_cast<Reliability>(15));
    CHECK(!decode_connected_datagram(wire({{}, {invalid}}), output));
    invalid = frame(0, Reliability::Reliable);
    invalid.data.reset();
    CHECK(!decode_connected_datagram(wire({{}, {invalid}}), output));
    invalid.data.write(std::vector<std::uint8_t>(1492).data(), 1492);
    CHECK(!decode_connected_datagram(wire({{}, {invalid}}), output));
    invalid = frame(0, Reliability::Reliable);
    invalid.is_split = true; invalid.split_packet_count = 2; invalid.split_packet_index = 2;
    CHECK(!decode_connected_datagram(wire({{}, {invalid}}), output));

    ReliabilityReceiveState state;
    invalid.split_packet_index = 0; invalid.split_packet_count = 0xffffffff;
    CHECK(!decode_connected_datagram(wire({{}, {invalid}}), output, &state));
    CHECK(state.splits.empty() && state.buffered_bytes == 0);
    invalid.split_packet_count = 2;
    CHECK(decode_connected_datagram(wire({{}, {invalid}}), output, &state, 0));
    auto conflict = invalid; conflict.message_number = 1; conflict.split_packet_index = 1;
    conflict.split_packet_count = 3;
    CHECK(!decode_connected_datagram(wire({{}, {conflict}}), output, &state, 1));
    CHECK(state.splits.begin()->second.fragments.size() == 1);
    CHECK(state.first_missing == 1); // rejected metadata cannot advance dedup window

    ReliabilityReceiveState expiry;
    invalid.reliability = Reliability::Unreliable;
    CHECK(decode_connected_datagram(wire({{}, {invalid}}), output, &expiry, 0));
    receive(expiry, frame(1, Reliability::Unreliable), 10001);
    CHECK(expiry.splits.empty() && expiry.buffered_bytes == 0);
    ReliabilitySendState timeout;
    std::uint16_t next = 1;
    CHECK(queue_reliability_frame(timeout, frame(0, Reliability::Reliable), next, 0));
    update_reliability_sends(timeout, 50);
    timeout.outbox.clear();
    update_reliability_sends(timeout, 10051);
    CHECK(timeout.failed && timeout.pending.empty() && timeout.outbox.empty());

    ReliabilitySendState channels;
    set_reliability_ping(channels, 30);
    next = 1;
    CHECK(queue_reliability_frame(channels, frame(0, Reliability::UnreliableSequenced), next, 0));
    CHECK(queue_reliability_frame(channels, frame(1, Reliability::ReliableOrdered), next, 0));
    update_reliability_sends(channels, 100);
    ConnectedDatagram sequenced, ordered;
    CHECK(decode_connected_datagram(channels.outbox[0], sequenced));
    CHECK(sequenced.frames.size() == 2);
    CHECK(sequenced.frames[0].ordering_index == 0 && sequenced.frames[1].ordering_index == 0);
    CHECK(channels.pending.size() == 1); // unreliable traffic never enters retry state
    channels.outbox.clear();
    update_reliability_sends(channels, 200);
    CHECK(channels.outbox.size() == 1);
    ReliabilityReceiveState lost_ack_receiver;
    CHECK(decode_connected_datagram(channels.outbox[0], ordered, &lost_ack_receiver));
    CHECK(ordered.frames.size() == 1);
    lost_ack_receiver.acknowledgements.clear();
    CHECK(decode_connected_datagram(channels.outbox[0], ordered, &lost_ack_receiver));
    CHECK(ordered.frames.empty() && lost_ack_receiver.acknowledgements.contains(1));
    acknowledge_reliability_frames(channels, {{1, 1}});
    CHECK(channels.pending.empty());

    ReliabilitySendState capacity;
    for (std::uint32_t id = 0; id < 4096; ++id) {
        next = static_cast<std::uint16_t>(id + 1);
        CHECK(queue_reliability_frame(capacity, frame(static_cast<std::uint16_t>(id), Reliability::Reliable), next, 0));
        capacity.outbox.clear();
    }
    next = 4097;
    CHECK(!queue_reliability_frame(capacity, frame(4096, Reliability::Reliable), next, 0));
    CHECK(capacity.failed && capacity.pending.size() + capacity.queued_ids.size() == 4096);

    ReliabilitySendState priorities;
    auto low = frame(0, Reliability::Unreliable); low.priority = 3;
    auto high = frame(1, Reliability::Unreliable); high.priority = 0;
    next = 2;
    CHECK(queue_reliability_frame(priorities, low, next, 0));
    CHECK(queue_reliability_frame(priorities, high, next, 0));
    update_reliability_sends(priorities, 100);
    CHECK(decode_connected_datagram(priorities.outbox[0], output));
    CHECK(output.frames.size() == 2 && output.frames[0].message_number == 1);
}

struct Sink : samp::server::RakNetHandler {
    std::vector<BitStream> messages;
    void on_user_message(samp::server::RakNetPeer&, const BitStream& message) override { messages.push_back(message); }
};

void server_and_client_paths() {
    using Access = samp::server::RakNetTransportTestAccess;
    const auto now = static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());
    samp::server::RakNetServer server;
    server.port_ = 7802;
    Sink sink; server.handler_ = &sink;
    constexpr std::uint32_t address = 0x0100007f;
    auto& peer = Access::peer(server, address, 12345, now);
    const std::uint8_t byte = 42;
    peer.send({&byte, 1}, Reliability::Reliable, 0);
    CHECK(Access::outstanding(peer) == 1);
    server.tick(now + 50); server.outbox_.clear();
    auto ack = obfuscate(wire({{{0, 0}}, {}}), server.port_);
    server.handle_datagram(address, 12345, ack);
    CHECK(Access::outstanding(peer) == 0); // real ACK-only parser path
    server.tick(now + 200);
    CHECK(server.outbox_.empty());
    auto input = obfuscate(wire({{}, {frame(0, Reliability::Reliable, 0, 55)}}), server.port_);
    server.handle_datagram(address, 12345, input);
    server.handle_datagram(address, 12345, input);
    CHECK(sink.messages.size() == 1 && sink.messages[0].data_[0] == 55);
    server.tick(now + 250);
    CHECK(!server.outbox_.empty());
    server.outbox_.clear();
    for (std::uint16_t index = 1; index <= 600; ++index) {
        auto packet = obfuscate(wire({{}, {frame(static_cast<std::uint16_t>(index * 2), Reliability::Reliable)}}), server.port_);
        server.handle_datagram(address, 12345, packet);
    }
    server.tick(now + 500);
    CHECK(server.outbox_.size() == 3);
    std::size_t acknowledged = 0;
    for (const auto& packet : server.outbox_) {
        CHECK(packet.data.size() <= 1492 - 28);
        ConnectedDatagram acknowledgement;
        CHECK(decode_connected_datagram(packet.data, acknowledgement));
        for (const auto& range : acknowledgement.acks) acknowledged += range.max_index - range.min_index + 1;
    }
    CHECK(acknowledged == 600);

    // The existing server send entry point must use fragmentation too.
    const std::vector<std::uint8_t> large(9001, 0x5a);
    peer.send(large, Reliability::ReliableOrdered, 2);
    server.outbox_.clear();
    server.tick(now + 550);
    ReliabilityReceiveState large_receiver;
    std::size_t delivered = 0;
    for (const auto& packet : server.outbox_) {
        ConnectedDatagram result;
        CHECK(decode_connected_datagram(packet.data, result, &large_receiver));
        for (const auto& message : result.frames) {
            ++delivered;
            CHECK(message.data.numberOfBitsUsed_ == large.size() * 8);
        }
    }
    CHECK(delivered == 1);

    // Socket-free client tick adopts an existing RPC producer's queue into
    // the shared retry state. No game code, UDP listener or live server runs.
    samp::client::NetworkClient client;
    client.state_ = samp::client::ConnectionState::Connected;
    client.player_id_ = 0;
    CHECK(client.send_command("/test"));
    client.tick();
    CHECK(client.send_state_.pending.size() + client.send_state_.queued_ids.size() == 1);
    CHECK(client.pending_.empty());
    auto large_client_frame = frame(client.next_message_number_++, Reliability::Reliable);
    large_client_frame.data.reset(); large_client_frame.data.write(large.data(), large.size());
    client.outgoing_frames_.push_back(std::move(large_client_frame));
    client.tick();
    CHECK(!client.send_state_.failed);
    CHECK(client.send_state_.queued_ids.size() + client.send_state_.pending.size() > 2);
}
}

int main() {
    golden_frames();
    ordering_and_duplicates();
    split_loss_and_retry();
    malformed_and_limits();
    server_and_client_paths();
    std::printf("transport checks: %d failures\n", failures);
    return failures != 0;
}

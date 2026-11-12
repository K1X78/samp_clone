#pragma once

#include "samp/proto/raknet.hpp"
#include <array>
#include <deque>
#include <map>
#include <set>

namespace samp::proto {

struct SplitReceiveGroup {
    Reliability reliability = Reliability::Reliable;
    std::uint8_t channel = 0;
    std::uint16_t ordering = 0;
    std::uint32_t count = 0;
    std::uint64_t updated_ms = 0;
    std::size_t bytes = 0;
    std::map<std::uint32_t, ReliabilityFrame> fragments;
};

struct ReliabilityReceiveState {
    std::uint16_t first_missing = 0;
    std::deque<std::uint64_t> receive_holes;
    std::uint32_t timeout_ms = 10000;
    std::set<std::uint16_t> acknowledgements;
    std::array<std::uint16_t, 32> ordered_next{};
    std::array<std::uint16_t, 32> sequenced_next{};
    std::array<std::map<std::uint16_t, ReliabilityFrame>, 32> ordered;
    std::map<std::uint16_t, SplitReceiveGroup> splits;
    std::size_t buffered_bytes = 0;
    std::size_t ordered_count = 0;
    bool failed = false;
};

struct ReliabilityPendingSend {
    ReliabilityFrame frame;
    std::uint64_t first_send_ms = 0;
    std::uint64_t next_send_ms = 0;
    std::uint32_t epoch = 0;
};

struct ReliabilitySendState {
    std::uint16_t next_split_id = 0;
    std::array<std::uint16_t, 32> ordered_next{};
    std::array<std::uint16_t, 32> sequenced_next{};
    std::map<std::uint16_t, ReliabilityPendingSend> pending;
    std::array<std::deque<ReliabilityFrame>, 4> unsent;
    std::set<std::uint16_t> queued_ids;
    std::size_t queued_bytes = 0;
    std::vector<std::vector<std::uint8_t>> outbox;
    std::size_t pending_bytes = 0;
    std::uint32_t ping_ms = 1000;
    std::uint32_t timeout_ms = 10000;
    std::uint32_t simulated_delay_ms = 0;
    std::uint32_t simulated_variance_ms = 0;
    std::uint64_t retry_ms = 3000;
    std::uint64_t last_ack_ms = 0;
    bool clock_initialized = false;
    std::uint64_t last_update_ms = 0;
    double bandwidth = 512000.0;
    double bandwidth_low = 512000.0;
    double bandwidth_high = 0.0;
    double credit = 0.0;
    bool insufficient_credit = false;
    std::uint32_t epoch = 0;
    std::uint32_t epoch_acks = 0;
    std::uint32_t epoch_resends = 0;
    std::uint32_t zero_loss_epochs = 0;
    std::uint64_t congestion_begin_ms = 0;
    std::uint64_t congestion_evaluate_ms = 0;
    std::uint64_t last_ping_ms = 0;
    std::array<std::uint16_t, 5> ping_samples{};
    std::array<bool,5> ping_valid{};
    std::size_t ping_slot = 0;
    std::uint16_t lowest_ping = 0xffff;
    std::int32_t remote_clock_offset = 0;
    bool failed = false;
};

bool reliability_sequence_older(std::uint16_t incoming, std::uint16_t expected);
std::uint64_t reliability_retry_delay(std::uint32_t ping_ms);
void set_reliability_ping(ReliabilitySendState& state, std::uint32_t ping_ms);
std::size_t reliability_header_bits(const ReliabilityFrame& frame);

bool queue_reliability_frame(ReliabilitySendState& state, ReliabilityFrame frame,
                             std::uint16_t& next_message_number, std::uint64_t now_ms);
void acknowledge_reliability_frames(ReliabilitySendState& state, const std::vector<AckRange>& ranges,
                                    std::uint64_t now_ms = 0);
void update_reliability_sends(ReliabilitySendState& state, std::uint64_t now_ms,
                              std::uint16_t* next_message_number = nullptr);
void queue_connected_ping(ReliabilitySendState& state, std::uint16_t& next_message_number,
                           std::uint64_t now_ms);
bool handle_connected_ping(ReliabilitySendState& state, const BitStream& message,
                            std::uint16_t& next_message_number, std::uint64_t now_ms);

// Partial recovery of the real 0.3.DL ReliabilityLayer owners. See
// docs/transport/P1_1.md for evidence and the remaining state-machine work.
bool decode_reliability_frame(BitStream& input, ReliabilityFrame& frame);
void encode_reliability_frame(BitStream& output, const ReliabilityFrame& frame);
bool decode_connected_datagram(std::span<const std::uint8_t> bytes, ConnectedDatagram& output,
                               ReliabilityReceiveState* state = nullptr, std::uint64_t now_ms = 0);

} // namespace samp::proto

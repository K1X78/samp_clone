#include "samp/proto/reliability_frame.hpp"

#include <algorithm>
#include <utility>

namespace samp::proto {

// Official: FUN_10043ac0 @ 0x10043ac0 (samp.dll)
bool reliability_sequence_older(std::uint16_t incoming, std::uint16_t expected) {
    if (expected > 0x7fff)
        return incoming >= static_cast<std::uint16_t>(expected - 0x7ffe) && incoming < expected;
    return incoming >= static_cast<std::uint16_t>(expected + 0x8000) || incoming < expected;
}

// Official: FUN_10043b30 @ 0x10043b30 (samp.dll)
std::uint64_t reliability_retry_delay(std::uint32_t ping_ms) {
    const std::uint32_t tripled = ping_ms * 3u;
    return tripled < 30 ? 30 : tripled;
}

// Official: FUN_100456c0 @ 0x100456c0 (samp.dll)
void set_reliability_ping(ReliabilitySendState& state, std::uint32_t ping_ms) {
    state.ping_ms = std::max(ping_ms > state.timeout_ms ? 500u : ping_ms, 30u);
    state.ping_ms = std::max(state.ping_ms,
        2u * (state.simulated_delay_ms + state.simulated_variance_ms));
    state.retry_ms = reliability_retry_delay(state.ping_ms);
}

// Official: FUN_10043980 @ 0x10043980 (samp.dll)
std::size_t reliability_header_bits(const ReliabilityFrame& frame) {
    const bool ordered = frame.reliability == Reliability::UnreliableSequenced ||
                         frame.reliability == Reliability::ReliableOrdered ||
                         frame.reliability == Reliability::ReliableSequenced;
    return 4u + 32u + 1u + (ordered ? 21u : 0u) + (frame.is_split ? 96u : 16u);
}

// Official: FUN_100465c0 @ 0x100465c0 (samp.dll)
bool queue_reliability_frame(ReliabilitySendState& state, ReliabilityFrame frame,
                             std::uint16_t& next_message_number, std::uint64_t now_ms) {
    const auto reliability = static_cast<std::uint8_t>(frame.reliability);
    const auto bytes = (frame.data.numberOfBitsUsed_ + 7u) / 8u;
    if (state.failed || bytes == 0 || reliability < 6 || reliability > 10 ||
        bytes > 4u * 1024u * 1024u || frame.is_split) return false;
    frame.ordering_channel = frame.ordering_channel < 32 ? frame.ordering_channel : 0;
    const bool sequenced = frame.reliability == Reliability::UnreliableSequenced ||
                           frame.reliability == Reliability::ReliableSequenced;
    const bool ordered = frame.reliability == Reliability::ReliableOrdered;
    if (sequenced) frame.ordering_index = state.sequenced_next[frame.ordering_channel]++;
    else if (ordered) frame.ordering_index = state.ordered_next[frame.ordering_channel]++;
    // 1492-byte IP MTU, subtract UDP/IP (28) and the native header estimate
    // from 0x10043980. Split sizing follows 0x100452c0, inlined into Send.
    const std::size_t unsplit_header = (4u + 32u + 1u + 16u + ((sequenced || ordered) ? 21u : 0u) + 7u) / 8u;
    const bool split = bytes > 1492u - 28u - unsplit_header;
    const std::size_t split_header = (4u + 32u + 1u + 96u + ((sequenced || ordered) ? 21u : 0u) + 7u) / 8u;
    const auto stride = split ? 1492u - 28u - split_header : bytes;
    const auto count = (bytes + stride - 1u) / stride;
    set_reliability_ping(state, state.ping_ms);
    if (!state.clock_initialized) {
        state.clock_initialized = true;
        state.last_update_ms = now_ms;
        state.congestion_begin_ms = now_ms + 2u * state.ping_ms + 500;
        state.congestion_evaluate_ms = state.congestion_begin_ms + 250;
        state.last_ping_ms = now_ms;
    }
    if (count > 4096 || state.pending.size() + state.queued_ids.size() + count > 4096 ||
        state.pending_bytes + state.queued_bytes + bytes > 4u * 1024u * 1024u) {
        state.failed = true;
        return false;
    }
    const auto split_id = state.next_split_id;
    if (split) ++state.next_split_id;
    for (std::size_t index = 0; index < count; ++index) {
        ReliabilityFrame fragment = frame;
        if (index != 0) fragment.message_number = next_message_number++;
        if (state.pending.contains(fragment.message_number) || state.queued_ids.contains(fragment.message_number)) {
            state.failed = true; // never overwrite an unacknowledged wrapped id
            return false;
        }
        const auto offset = index * stride;
        const auto size = std::min(stride, bytes - offset);
        fragment.is_split = split;
        fragment.split_packet_id = split_id;
        fragment.split_packet_index = static_cast<std::uint32_t>(index);
        fragment.split_packet_count = static_cast<std::uint32_t>(count);
        fragment.data.reset();
        fragment.data.write(frame.data.data_.data() + offset, size);
        fragment.data.numberOfBitsUsed_ = std::min(size * 8u, frame.data.numberOfBitsUsed_ - offset * 8u);
        state.queued_bytes += size;
        state.queued_ids.insert(fragment.message_number);
        state.unsent[std::min<std::uint8_t>(fragment.priority, 3)].push_back(std::move(fragment));
    }
    return true;
}

// Official: FUN_10048170 @ 0x10048170 (samp.dll)
void acknowledge_reliability_frames(ReliabilitySendState& state, const std::vector<AckRange>& ranges,
                                    std::uint64_t now_ms) {
    // Intersect pending IDs with ranges instead of expanding a 65536-ID ACK.
    for (auto it = state.pending.begin(); it != state.pending.end();) {
        const bool acknowledged = std::any_of(ranges.begin(), ranges.end(), [&](const AckRange& range) {
            return range.min_index <= it->first && it->first <= range.max_index;
        });
        if (acknowledged) {
            state.last_ack_ms = now_ms;
            if (now_ms >= state.congestion_begin_ms && it->second.epoch == state.epoch) ++state.epoch_acks;
            state.pending_bytes -= (it->second.frame.data.numberOfBitsUsed_ + 7u) / 8u;
            it = state.pending.erase(it);
        } else ++it;
    }
}

// Official: FUN_100495a0 @ 0x100495a0 (samp.dll)
void update_reliability_sends(ReliabilitySendState& state, std::uint64_t now_ms,
                              std::uint16_t* next_message_number) {
    if (state.failed) return;
    if (!state.clock_initialized || now_ms <= state.last_update_ms) {
        state.clock_initialized = true;
        state.last_update_ms = now_ms;
        return;
    }
    state.credit = std::min(state.bandwidth,
        state.credit + (now_ms - state.last_update_ms) * 0.001 * state.bandwidth);
    state.last_update_ms = now_ms;
    if (!state.pending.empty() && now_ms > state.last_ack_ms &&
        now_ms - state.last_ack_ms > state.timeout_ms) {
        state.failed = true;
        state.pending.clear(); state.unsent = {}; state.queued_ids.clear();
        state.pending_bytes = state.queued_bytes = 0;
        state.outbox.clear();
        return;
    }
    if (next_message_number && now_ms > state.last_ping_ms && now_ms - state.last_ping_ms > 5000)
        queue_connected_ping(state, *next_message_number, now_ms);
    const double threshold = std::min(1492.0 * 8.0 + 224.0, state.bandwidth);
    while (state.credit > threshold) {
        if (state.outbox.size() >= 4096) {
            state.failed = true;
            state.pending.clear(); state.unsent = {}; state.queued_ids.clear();
            state.pending_bytes = state.queued_bytes = 0; state.outbox.clear();
            return;
        }
        ConnectedDatagram datagram;
        std::size_t used = 1;
        std::vector<ReliabilityPendingSend*> due;
        for (auto& [id, pending] : state.pending) {
            (void)id;
            if (pending.next_send_ms < now_ms) due.push_back(&pending);
        }
        std::stable_sort(due.begin(), due.end(), [](const auto* a, const auto* b) {
            return a->next_send_ms < b->next_send_ms;
        });
        for (auto* pending : due) {
            const auto estimated = reliability_header_bits(pending->frame) + pending->frame.data.numberOfBitsUsed_;
            if (used + estimated > (1492u - 28u) * 8u) break;
            if (now_ms >= state.congestion_begin_ms && pending->epoch == state.epoch) ++state.epoch_resends;
            pending->epoch = state.epoch;
            pending->next_send_ms = now_ms + state.retry_ms;
            datagram.frames.push_back(pending->frame);
            used = encode_connected_datagram(datagram).numberOfBitsUsed_;
        }
        for (auto& priority : state.unsent) {
            while (!priority.empty()) {
                const auto estimated = reliability_header_bits(priority.front()) + priority.front().data.numberOfBitsUsed_;
                if (used + estimated > (1492u - 28u) * 8u) break;
                auto frame = std::move(priority.front()); priority.pop_front();
                const auto bytes = (frame.data.numberOfBitsUsed_ + 7u) / 8u;
                state.queued_ids.erase(frame.message_number);
                state.queued_bytes -= bytes;
                datagram.frames.push_back(frame);
                if (static_cast<std::uint8_t>(frame.reliability) >= 8) {
                    if (state.pending.empty()) state.last_ack_ms = now_ms;
                    state.pending_bytes += bytes;
                    state.pending.emplace(frame.message_number,
                        ReliabilityPendingSend{frame, now_ms, now_ms + state.retry_ms, state.epoch});
                }
                used = encode_connected_datagram(datagram).numberOfBitsUsed_;
            }
        }
        if (datagram.frames.empty()) break;
        const auto encoded = encode_connected_datagram(datagram);
        state.outbox.emplace_back(encoded.data_.begin(), encoded.data_.begin() + (encoded.numberOfBitsUsed_ + 7u) / 8u);
        state.credit -= encoded.numberOfBitsUsed_ + 224.0;
    }
    // Native congestion controller: rate/credit at +0x452/+0x45a, lower/upper
    // bounds at +0x442/+0x44a, and per-epoch resend/ACK counters at +0x43a/e.
    const bool insufficient = state.credit < threshold;
    if (insufficient && !state.insufficient_credit) {
        state.congestion_begin_ms = now_ms + 2u * state.ping_ms;
        state.congestion_evaluate_ms = state.congestion_begin_ms + 250;
        state.epoch_acks = state.epoch_resends = 0;
        if (++state.epoch == 0xffffffffu) state.epoch = 0;
    }
    state.insufficient_credit = insufficient;
    if (now_ms < state.congestion_evaluate_ms) return;
    const std::uint64_t total = std::uint64_t(state.epoch_resends) + state.epoch_acks;
    // FST stores a float but retains the wider ratio on the x87 stack for
    // the first comparisons. In particular 2/100 is above the float 0.02.
    const double loss = total ? static_cast<double>(state.epoch_resends) / static_cast<double>(total) : 0.0;
    const float stored_loss = static_cast<float>(loss);
    if (!insufficient) {
        if (loss > 0.02f) {
            state.bandwidth_high = state.bandwidth;
            state.bandwidth_low = std::max(144400.0, state.bandwidth_low * (stored_loss > 0.2 ? 0.5 : 0.9));
            state.bandwidth = state.bandwidth_low + (state.bandwidth - state.bandwidth_low) * 0.5;
            state.zero_loss_epochs = 0;
        }
    } else {
        if (loss <= 0.02f) state.bandwidth_low = state.bandwidth;
        else state.bandwidth_high = state.bandwidth;
        if (loss == 0.0f) {
            if (++state.zero_loss_epochs == 10) {
                state.bandwidth_high = 0.0; state.zero_loss_epochs = 0;
            }
        } else state.zero_loss_epochs = 0;
        if (state.bandwidth_high == 0.0) state.bandwidth *= 2.0;
        else {
            if (loss > 0.2) state.bandwidth_low = std::max(144400.0, state.bandwidth_low * 0.5);
            if ((state.bandwidth_high - state.bandwidth_low) * 0.5 < 36100.0) {
                if (loss == 0.0f) state.bandwidth_high *= 1.5;
                else if (stored_loss < 0.02f) state.bandwidth_high *= 1.05;
                else if (stored_loss > 0.04f) state.bandwidth_low = std::max(144400.0, state.bandwidth_low * 0.9);
            }
            state.bandwidth = state.bandwidth_low + (state.bandwidth_high - state.bandwidth_low) * 0.5;
        }
    }
    state.congestion_begin_ms = now_ms + 2u * state.ping_ms + 500;
    state.congestion_evaluate_ms = state.congestion_begin_ms + 250;
    state.epoch_acks = state.epoch_resends = 0;
    if (++state.epoch == 0xffffffffu) state.epoch = 0;
}

// Official: FUN_1003ec60 @ 0x1003ec60 (samp.dll)
void queue_connected_ping(ReliabilitySendState& state, std::uint16_t& next_message_number,
                           std::uint64_t now_ms) {
    ReliabilityFrame ping;
    ping.message_number = next_message_number++;
    ping.priority = 0;
    ping.reliability = Reliability::Unreliable;
    const std::uint8_t id = 6;
    const auto stamp = static_cast<std::uint32_t>(now_ms);
    ping.data.write(&id, 1); ping.data.write(&stamp, 4);
    queue_reliability_frame(state, std::move(ping), next_message_number, now_ms);
    state.last_ping_ms = now_ms;
}

// Official: FUN_10040f10 @ 0x10040f10 (samp.dll)
bool handle_connected_ping(ReliabilitySendState& state, const BitStream& message,
                            std::uint16_t& next_message_number, std::uint64_t now_ms) {
    if (message.numberOfBitsUsed_ < 8) return false;
    const auto id = message.data_[0];
    if (id != 6 && id != 9) return false;
    BitStream input = message;
    std::uint8_t type = 0;
    std::uint32_t sent = 0;
    if (!input.read(&type, 1) || !input.read(&sent, 4)) return true;
    const auto now = static_cast<std::uint32_t>(now_ms);
    if (id == 6 && message.numberOfBitsUsed_ == 40) {
        ReliabilityFrame pong;
        pong.message_number = next_message_number++;
        pong.reliability = Reliability::Unreliable; pong.priority = 0;
        type = 9;
        pong.data.write(&type, 1); pong.data.write(&sent, 4); pong.data.write(&now, 4);
        queue_reliability_frame(state, std::move(pong), next_message_number, now_ms);
    } else if (id == 9 && message.numberOfBitsUsed_ == 72) {
        std::uint32_t remote = 0;
        if (!input.read(&remote, 4)) return true;
        const auto elapsed = now > sent ? now - sent : 0;
        const auto previous = state.ping_samples[state.ping_slot];
        if (previous != 0 && elapsed >= 3u * previous && elapsed >= 1200) return true;
        const auto sample = static_cast<std::uint16_t>(elapsed);
        state.ping_samples[state.ping_slot] = sample;
        state.ping_valid[state.ping_slot] = true;
        state.lowest_ping = std::min(state.lowest_ping, sample);
        state.remote_clock_offset = static_cast<std::int32_t>(remote - ((sent + now) >> 1));
        state.ping_slot = (state.ping_slot + 1) % state.ping_samples.size();
        set_reliability_ping(state, sample);
    }
    return true;
}

// Official: FUN_10045110 @ 0x10045110 (samp.dll)
bool decode_reliability_frame(BitStream& input, ReliabilityFrame& frame) {
    ReliabilityFrame decoded;
    std::uint8_t reliability = 0;
    if (!input.read(&decoded.message_number, 2) ||
        !input.readBits(&reliability, 4, true) || reliability < 6 || reliability > 10) return false;
    decoded.reliability = static_cast<Reliability>(reliability);
    if (decoded.reliability == Reliability::UnreliableSequenced ||
        decoded.reliability == Reliability::ReliableOrdered ||
        decoded.reliability == Reliability::ReliableSequenced) {
        if (!input.readBits(&decoded.ordering_channel, 5, true) ||
            !input.read(&decoded.ordering_index, 2)) return false;
    }
    if (input.readOffset_ >= input.numberOfBitsUsed_) return false;
    decoded.is_split = input.readBit();
    if (decoded.is_split) {
        if (!input.read(&decoded.split_packet_id, 2) ||
            !input.readCompressed(reinterpret_cast<std::uint8_t*>(&decoded.split_packet_index), 32, true) ||
            !input.readCompressed(reinterpret_cast<std::uint8_t*>(&decoded.split_packet_count), 32, true)) return false;
        // Reject malformed metadata before any reassembly allocation.
        if (decoded.split_packet_count == 0 || decoded.split_packet_index >= decoded.split_packet_count) return false;
    }
    std::uint16_t bits = 0;
    if (!input.readCompressed(reinterpret_cast<std::uint8_t*>(&bits), 16, true)) return false;
    const std::size_t bytes = (bits + 7u) >> 3;
    // 0x1004524c rejects zero bits; 0x10045259 rejects >=0x5d4 bytes.
    if (bits == 0 || bytes >= 0x5d4) return false;
    std::vector<std::uint8_t> payload(bytes, 0);
    if (!input.readAlignedBytes(payload.data(), bytes)) return false;
    decoded.data.write(payload.data(), payload.size());
    decoded.data.numberOfBitsUsed_ = bits;
    frame = std::move(decoded);
    return true;
}

// Official: FUN_10044ff0 @ 0x10044ff0 (samp.dll)
void encode_reliability_frame(BitStream& output, const ReliabilityFrame& frame) {
    output.write(&frame.message_number, 2);
    const auto reliability = static_cast<std::uint8_t>(frame.reliability);
    output.writeBits(&reliability, 4, true);
    if (frame.reliability == Reliability::UnreliableSequenced ||
        frame.reliability == Reliability::ReliableOrdered ||
        frame.reliability == Reliability::ReliableSequenced) {
        output.writeBits(&frame.ordering_channel, 5, true);
        output.write(&frame.ordering_index, 2);
    }
    if (frame.is_split) {
        output.write1();
        output.write(&frame.split_packet_id, 2);
        output.writeCompressed(reinterpret_cast<const std::uint8_t*>(&frame.split_packet_index), 32, true);
        output.writeCompressed(reinterpret_cast<const std::uint8_t*>(&frame.split_packet_count), 32, true);
    } else {
        output.write0();
    }
    const auto bits = static_cast<std::uint16_t>(frame.data.numberOfBitsUsed_);
    output.writeCompressed(reinterpret_cast<const std::uint8_t*>(&bits), 16, true);
    output.writeAlignedBytes(frame.data.data_.data(), (frame.data.numberOfBitsUsed_ + 7u) >> 3);
}

// Official: FUN_10048d10 @ 0x10048d10 (samp.dll)
bool decode_connected_datagram(std::span<const std::uint8_t> bytes, ConnectedDatagram& output,
                               ReliabilityReceiveState* state, std::uint64_t now_ms) {
    if (bytes.empty()) return false;
    BitStream input;
    input.write(bytes.data(), bytes.size());
    ConnectedDatagram decoded;
    const bool has_acks = input.readBit();
    if (has_acks) {
        std::uint16_t count = 0;
        if (!input.readCompressed(reinterpret_cast<std::uint8_t*>(&count), 16, true)) return false;
        // Each range needs at least its flag and a sixteen-bit endpoint.
        if (count > (input.numberOfBitsUsed_ - input.readOffset_) / 17u) return false;
        for (std::uint16_t index = 0; index < count; ++index) {
            if (input.readOffset_ >= input.numberOfBitsUsed_) return false;
            const bool single = input.readBit();
            AckRange range;
            if (!input.read(&range.min_index, 2)) return false;
            if (single) range.max_index = range.min_index;
            else if (!input.read(&range.max_index, 2) || range.max_index < range.min_index) return false;
            decoded.acks.push_back(range);
        }
    }
    // The official frame reader returns no frame when fewer than sixteen
    // bits remain. ACK-only datagrams can have up to seven padding bits.
    while (input.numberOfBitsUsed_ - input.readOffset_ >= 16) {
        ReliabilityFrame frame;
        if (!decode_reliability_frame(input, frame)) return false;
        decoded.frames.push_back(std::move(frame));
    }
    if (input.numberOfBitsUsed_ - input.readOffset_ > 7) return false;
    if (decoded.acks.empty() && decoded.frames.empty()) return false;
    if (state != nullptr) {
        if (state->failed) return false;
        // Original receive uses a ushort hole window and acknowledges reliable
        // frames before dropping duplicate deliveries (0x10049082..0x10049285).
        // Allocation limits below are explicit host bounds, not recovered
        // official capacity constants. A reliable overflow fails the peer.
        constexpr std::size_t max_buffered_bytes = 4u * 1024u * 1024u;
        for (auto it = state->splits.begin(); it != state->splits.end();) {
            const auto reliability = it->second.reliability;
            if ((reliability == Reliability::Unreliable || reliability == Reliability::UnreliableSequenced) &&
                now_ms > it->second.updated_ms && now_ms - it->second.updated_ms > 10000) {
                state->buffered_bytes -= it->second.bytes;
                it = state->splits.erase(it);
            } else ++it;
        }
        std::vector<ReliabilityFrame> delivered;
        for (auto& incoming : decoded.frames) {
            const bool reliable = static_cast<std::uint8_t>(incoming.reliability) >= 8;
            const auto acknowledge = [&] {
                if (reliable) state->acknowledgements.insert(incoming.message_number);
            };
            const auto distance = static_cast<std::uint16_t>(incoming.message_number - state->first_missing);
            if (distance > 0x8000 ||
                (distance < state->receive_holes.size() && state->receive_holes[distance] == 0)) {
                acknowledge();
                continue;
            }
            if (state->buffered_bytes + (incoming.data.numberOfBitsUsed_ + 7u) / 8u > max_buffered_bytes) {
                state->failed = reliable;
                return false;
            }
            ReliabilityFrame ready = incoming;
            bool complete = true;
            if (incoming.is_split) {
                if (incoming.split_packet_count > 4096 ||
                    (incoming.split_packet_index + 1 != incoming.split_packet_count &&
                     (incoming.data.numberOfBitsUsed_ & 7u) != 0)) return false;
                if (!state->splits.contains(incoming.split_packet_id) && state->splits.size() >= 32) {
                    state->failed = reliable;
                    return false;
                }
                auto& group = state->splits[incoming.split_packet_id];
                if (group.fragments.empty()) {
                    group.reliability = incoming.reliability;
                    group.channel = incoming.ordering_channel;
                    group.ordering = incoming.ordering_index;
                    group.count = incoming.split_packet_count;
                } else if (group.reliability != incoming.reliability || group.channel != incoming.ordering_channel ||
                           group.ordering != incoming.ordering_index || group.count != incoming.split_packet_count) return false;
                if (group.fragments.contains(incoming.split_packet_index)) return false;
                const auto size = (incoming.data.numberOfBitsUsed_ + 7u) / 8u;
                group.bytes += size;
                state->buffered_bytes += size;
                group.updated_ms = now_ms;
                group.fragments.emplace(incoming.split_packet_index, incoming);
                complete = group.fragments.size() == group.count;
                if (complete) {
                    // 0x10048400 sums bit lengths and concatenates fragment
                    // bytes in index order, keeping the original header.
                    ready = group.fragments.begin()->second;
                    ready.is_split = false;
                    ready.data.reset();
                    std::size_t bits = 0;
                    for (const auto& [index, fragment] : group.fragments) {
                        (void)index;
                        ready.data.write(fragment.data.data_.data(), (fragment.data.numberOfBitsUsed_ + 7u) / 8u);
                        bits += fragment.data.numberOfBitsUsed_;
                    }
                    ready.data.numberOfBitsUsed_ = bits;
                    state->buffered_bytes -= group.bytes;
                    state->splits.erase(incoming.split_packet_id);
                }
            }
            acknowledge();
            while (state->receive_holes.size() <= distance)
                state->receive_holes.push_back(now_ms + state->timeout_ms);
            state->receive_holes[distance] = 0;
            while (!state->receive_holes.empty() &&
                   (state->receive_holes.front() == 0 || state->receive_holes.front() < now_ms)) {
                state->receive_holes.pop_front();
                ++state->first_missing;
            }
            if (!complete) continue;
            const auto channel = ready.ordering_channel;
            if (ready.reliability == Reliability::UnreliableSequenced || ready.reliability == Reliability::ReliableSequenced) {
                auto& expected = state->sequenced_next[channel];
                if (!reliability_sequence_older(ready.ordering_index, expected)) {
                    expected = static_cast<std::uint16_t>(ready.ordering_index + 1);
                    delivered.push_back(std::move(ready));
                }
            } else if (ready.reliability == Reliability::ReliableOrdered) {
                auto& expected = state->ordered_next[channel];
                if (ready.ordering_index == expected) {
                    ++expected;
                    delivered.push_back(std::move(ready));
                    auto& pending = state->ordered[channel];
                    while (pending.contains(expected)) {
                        auto next = pending.extract(expected);
                        state->buffered_bytes -= (next.mapped().data.numberOfBitsUsed_ + 7u) / 8u;
                        --state->ordered_count;
                        ++expected;
                        delivered.push_back(std::move(next.mapped()));
                    }
                } else if (static_cast<std::uint16_t>(ready.ordering_index - expected) < 0x8000) {
                    auto& pending = state->ordered[channel];
                    if (!pending.contains(ready.ordering_index)) {
                        const auto size = (ready.data.numberOfBitsUsed_ + 7u) / 8u;
                        if (state->ordered_count >= 1024 || state->buffered_bytes + size > max_buffered_bytes) {
                            state->failed = true;
                            return false;
                        }
                        state->buffered_bytes += size;
                        ++state->ordered_count;
                        pending.emplace(ready.ordering_index, std::move(ready));
                    }
                }
            } else delivered.push_back(std::move(ready));
        }
        decoded.frames = std::move(delivered);
    }
    output = std::move(decoded);
    return true;
}

} // namespace samp::proto

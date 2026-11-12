// The SA-MP 0.3.7 RakNet transport, layer by layer.
//
// Provenance
//   reference/openmp/RakNet/Include/raknet/PacketEnumerations.h  legacy ids
//   reference/openmp/RakNet/Include/raknet/PacketPriority.h       reliability
//   reference/openmp/RakNet/Source/ReliabilityLayer.cpp            frames
//   reference/openmp/RakNet/Include/raknet/DS_RangeList.h          ack list
//   reference/openmp/RakNet/Source/RakPeer.cpp                     RPC framing
//   reference/openmp/RakNet/SAMPRakNet.cpp                        socket layer
//   reference/openmp/RakNet/Source/SocketLayer.cpp                send/receive
//   samp.dll                                                     the 0.3.7 client
//
// The fork is compiled with RAKNET_LEGACY=1.  That has three consequences
// that a stock RakNet 4.x implementation gets wrong:
//
//   1. The message id is the FIRST BYTE of the user message.  There is no
//      flags byte and no "id nibble" (RakPeer.cpp:5033 dispatches every
//      user message whose first byte is >= ID_RPC to the application).
//   2. PacketReliability is shifted by +6, so the wire values are 6..10
//      (PacketPriority.h:38 "SA:MP seems to like `+6` offsets").
//   3. The reliability frame carries compressed lengths and the message id
//      is *not* split out of the payload.
//
// Layer stack, outermost first:
//
//   socket      client -> server is obfuscated (samp/proto/obfuscation.hpp),
//               server -> client is plaintext.  The "SAMP" query dialect is
//               never obfuscated.
//   datagram    [u1 hasAcks] [ack range list] [frame] [frame] ...
//   frame       [u16 messageNumber] [u4 reliability]
//               [[u5 orderingChannel] [u16 orderingIndex]]
//               [u1 isSplit] [[u16 splitId] [compressed idx] [compressed cnt]]
//               [compressed u16 dataBitLength] [byte aligned data]
//   user msg    game packet: [u8 packetId] [payload bits]
//               RPC:         [u8 ID_RPC] [u8 rpcId]
//                            [compressed u32 payloadBits] [payload bits]
//
// The whole datagram is ONE continuous bit stream: the ack list and the
// frames are not byte aligned relative to each other.

#pragma once

#include <cstddef>
#include <cstdint>
#include <span>
#include <string_view>
#include <vector>

#include "samp/proto/bitstream.hpp"

namespace samp::proto {

// --------------------------------------------------------------- message ids
//
// PacketEnumerations.h with RAKNET_LEGACY=1.  The enum starts at
// ID_UNKNOWN_0 = 0, so the values below are the literal enum positions.
inline constexpr std::uint8_t kIdPing = 7;                 // unconnected ping
inline constexpr std::uint8_t kIdPingOpenConnections = 8;  // ping, answered only while accepting
inline constexpr std::uint8_t kIdConnectionRequest = 11;
inline constexpr std::uint8_t kIdAuthKey = 12;
inline constexpr std::uint8_t kIdRpc = 20;
inline constexpr std::uint8_t kIdDetectLostConnections = 23;  // the connected keep-alive
inline constexpr std::uint8_t kIdOpenConnectionRequest = 24;
inline constexpr std::uint8_t kIdOpenConnectionReply = 25;
inline constexpr std::uint8_t kIdOpenConnectionCookie = 26;
inline constexpr std::uint8_t kIdPong = 39;

// ----------------------------------------------------------------- reliability

// RakNet/Include/raknet/PacketPriority.h:35-46, RAKNET_LEGACY=1.
enum class Reliability : std::uint8_t {
    Unreliable = 6,
    UnreliableSequenced = 7,
    Reliable = 8,
    ReliableOrdered = 9,
    ReliableSequenced = 10,
};

// ---------------------------------------------------------------------- frame

struct ReliabilityFrame {
    std::uint8_t priority = 1; // host scheduling only; never serialized
    std::uint16_t message_number = 0;
    Reliability reliability = Reliability::Reliable;
    std::uint8_t ordering_channel = 0;
    std::uint16_t ordering_index = 0;
    bool is_split = false;
    std::uint16_t split_packet_id = 0;
    std::uint32_t split_packet_index = 0;
    std::uint32_t split_packet_count = 0;
    BitStream data;  // the user message
};

void encode_reliability_frame(BitStream& output, const ReliabilityFrame& frame);

// ------------------------------------------------------------------ ack ranges

struct AckRange {
    std::uint16_t min_index = 0;
    std::uint16_t max_index = 0;
};

// DS_RangeList.h:50-92 (write) and :94-121 (read).
//
// The fork writes the range COUNT straight into the destination stream and
// builds the ranges themselves in a temporary bit stream, which is then
// copied over bit by bit (DS_RangeList.h:78).  Copying the temporary through
// writeBits() instead would produce different bytes, because the fork's
// writeBits hoists the byte offset out of its loop.
// ------------------------------------------------------------------- datagram

struct ConnectedDatagram {
    std::vector<AckRange> acks;
    std::vector<ReliabilityFrame> frames;
};

// The recovered datagram writer delegates frame serialization to 0x10044ff0.
// Official: FUN_10047b30 @ 0x10047b30 (samp.dll)
inline BitStream encode_connected_datagram(const ConnectedDatagram& datagram) {
    BitStream out;
    if (!datagram.acks.empty()) {
        out.write1();
        BitStream ranges;
        for (const AckRange& range : datagram.acks) {
            const bool single = range.min_index == range.max_index;
            if (single) ranges.write1();
            else ranges.write0();
            ranges.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(range.min_index)).data(),2);
            if (!single) ranges.write(std::bit_cast<std::array<std::uint8_t,2>>(static_cast<std::uint16_t>(range.max_index)).data(),2);
        }
        const auto range_count = static_cast<std::uint16_t>(datagram.acks.size());
        const std::uint8_t range_count_bytes[2]{
            static_cast<std::uint8_t>(range_count), static_cast<std::uint8_t>(range_count >> 8)};
        out.writeCompressed(range_count_bytes, 16, true);
        out.writeBitStream(ranges);
    } else {
        out.write0();
    }
    for (const ReliabilityFrame& frame : datagram.frames) {
        encode_reliability_frame(out, frame);
    }
    return out;
}

// ------------------------------------------------------------------- handshake
//
// The unconnected messages are plain byte strings, not bit streams: they are
// written straight to the socket layer.

inline constexpr std::uint16_t kSampCookieXor = 0x6969;  // 'SAMP_PETARDED', samp.dll 0x100fe7e0

// [0x1A][u16 LE cookie]
// ------------------------------------------------------- the connection request
//
// The RakNet level handshake is not finished by the open-connection reply.
// The client has to send the connection request itself, and only then does the
// server accept the peer and answer with the connection accepted message.
//
//   client -> server  [0x0B][the password bytes]
//                   RakPeer.cpp:3969-3972 writes the id and the outgoing
//                   password into a bit stream and sends it immediately with
//                   SYSTEM_PRIORITY / RELIABLE on ordering channel 0, so it
//                   travels as a connected datagram.
//
//   server -> client  [0x22][u32 LE the address the server sees]
//                   [u16 LE the port][u16 LE the peer index]
//                   [u32 LE the challenge token]
//                   RakPeer.cpp:2725-2732 (AcceptConnectionRequest).
//
// The password is compared by the server with its own incoming password
// (RakPeer.cpp:2682-2687); a mismatch is answered with ID_INVALID_PASSWORD.

// The id of the connection accepted message.  It is also the number 34, which
// is inside the game's dispatch window, so it is only unambiguous because the
// game never sends a bare 0x22 as an RPC: an RPC always starts with 0x14.
inline constexpr std::uint8_t kIdConnectionRequestAccepted = 34;

// The id of the "new incoming connection" message.
//
// The client sends it to the server to tell it the address and the port it
// reached the server from.  The official client asks the socket layer for its
// own address with getsockname and puts the answer in the message
// (samp.dll 0x10041450, the builder; 0x10053a00, the socket call).  The
// server keeps that address as the address of the peer, and a peer whose
// address is still the "unassigned" one - 0xFFFFFFFF:0xFFFF - is refused
// with "Invalid client connecting from" (samp-server.exe 0x496947).
//
// The message is seven bytes:
//   [u8 0x1E][u32 the address, in the network order][u16 the port]
inline constexpr std::uint8_t kIdNewIncomingConnection = 30;

}  // namespace samp::proto

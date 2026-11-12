// The SA-MP 0.3.7 user-message layer: what a RakNet user message contains.
//
// Provenance
//   reference/openmp/RakNet/Source/RakPeer.cpp        (the SA-MP RakNet fork)
//   reference/openmp/RakNet/Include/raknet/PacketEnumerations.h
//   reference/openmp/openmp/Server/Components/LegacyNetwork/legacy_network_impl.hpp
//   Extracted verbatim into docs/re/ref-samp-encoders.md, section 4 and 5.
//
// The RakNet framing underneath (the reliability frame, the connected
// datagram, the ack range list) lives in samp/proto/raknet.hpp.  This header
// is only the layer that RakNet hands to the application.
//
// Two user message shapes exist.
//
//   (a) RPC  (both directions)
//       byte 0        : 0x14          ID_RPC
//       byte 1        : rpc id (u8)   e.g. 25 = PlayerConnect
//       then          : RakNet-compressed uint32 -> payload length in BITS
//       then          : the payload, exactly that many bits
//       The compressed length and the payload live in the same bit stream, so
//       the RPC frame is NOT necessarily byte aligned.
//
//   (b) Game packet (server to client, and client to server for the on-foot
//       style packets)
//       byte 0        : packet id (u8)  e.g. 207 = PlayerFootSync
//       then          : the payload bits
//       There is no RakNet message-id byte and no length prefix; RakNet's own
//       framing supplies the length.  RakPeer.cpp:5033 hands every user
//       message whose first byte is >= ID_RPC to the application, and
//       RakPeer.cpp:903 diverts the ones whose first byte is exactly ID_RPC
//       to the RPC handler.
//
// The fork is built with RAKNET_LEGACY=1 (reference/openmp/RakNet/Include/
// raknet/NetworkTypes.h:40-43), which means RPCID_STRING=0: the RPC id is a
// single byte, and RakNet's blockingCommand / networkID object-id bits are
// not present in the frame.

#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

#include "samp/proto/bitstream.hpp"
#include "samp/proto/raknet.hpp"

namespace samp::proto {

// RakNet ID_RPC value in the 0.3.DL transport.
inline constexpr std::uint8_t kRaknetIdRpc = kIdRpc;

// The ordering channels the 0.3.7 client actually uses, read out of samp.dll
// (lane R03: every c2s RPC goes out on channel 0; the on-foot style sync
// packets go out on channel 1; 205/206 go out on channel 0).
//
// The server -> client direction is not directly measurable from samp.dll
// (the client is a peer), so it follows open.mp's legacy network, which is
// the 1:1 reimplementation of the official server:
//
//   RPC to a client        RELIABLE_ORDERED (9), channel 2
//   unicast sync packet    UNRELIABLE_SEQUENCED (7), channel 1
//   broadcast packet       RELIABLE_ORDERED (9), channel 1
//
// RakNet ordering is per (sender, channel), so the asymmetry between the
// client's channel 0 and the server's channel 2 is legal and interoperable.
inline constexpr std::uint8_t kClientChannelRpc = 0;
inline constexpr std::uint8_t kServerChannelRpc = 2;
inline constexpr std::uint8_t kServerChannelSync = 1;


// ------------------------------------------------------------------- RPC frame

}  // namespace samp::proto

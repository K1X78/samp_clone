// The SA-MP 0.3.DL game transport: the RakNet layer of the shipped server.
//
// Provenance
//   reference/openmp/RakNet/SAMPRakNet.cpp        the SA-MP socket layer
//   reference/openmp/RakNet/Source/RakPeer.cpp     the connection handshake
//   reference/openmp/RakNet/Source/ReliabilityLayer.cpp  the reliability layer
//   reference/openmp/RakNet/Include/raknet/DS_RangeList.h  the ack list
//   docs/re/spec/raknet-handshake.json            (lane R01: the handshake)
//   docs/re/spec/raknet-usage.json                (lane R03: the send paths)
//   docs/re/spec/connection-handshake.json         (lane R04: the connect flow)
//   docs/re/spec/protocol-answers.json             (lane R19: the channels)
//
// The layer stack of the game traffic is
//
//   socket      the client -> server datagrams are obfuscated, the server ->
//               client datagrams are plaintext.  The 'SAMP' query dialect is
//               never obfuscated and is handled before this layer.
//   datagram    [u1 hasAcks] [ack range list] [frame] ...
//   frame       the RakNet reliability frame (see samp/proto/raknet.hpp)
//   user msg    a game packet ([u8 id][payload]) or an RPC frame
//               ([u8 0x14][u8 rpcId][compressed length][payload])
//
// The connection handshake is NOT stock RakNet:
//
//   1. the client sends [0x18][u16 cookie ^ 0x6969]  (ID_OPEN_CONNECTION_REQUEST)
//   2. if the cookie is wrong the server answers [0x1A][u16 cookie]
//      (ID_OPEN_CONNECTION_COOKIE) and the client retries with the cookie
//      it was given
//   3. when the cookie matches, the server accepts the peer and answers
//      [0x19][0x00] (ID_OPEN_CONNECTION_REPLY); the second byte is a pad,
//      "some routers apparently block 1 byte packets"
//
// The cookie is per remote IP address and is derived from two random tables
// that are filled at start-up (SAMPRakNet.cpp:640-653):
//
//   cookie = (cookies[0][a[0]] | cookies[1][a[3]] << 8) ^ ((a[1] << 8) | a[2])
//
// with a[] the four bytes of the address in NETWORK order.

#pragma once

#include <cstdint>
#include <map>
#include <span>
#include <string>
#include <vector>

#include "samp/proto/obfuscation.hpp"
#include "samp/proto/raknet.hpp"
#include "samp/proto/reliability_frame.hpp"

namespace samp::server {

class RakNetPeer;

// The handler for the user messages of a peer.
class RakNetHandler {
public:
    virtual ~RakNetHandler() = default;

    // A user message arrived.  `message` is the user message: a game packet
    // (the id byte and the payload) or an RPC frame.  It is a bit stream
    // because a user message is not necessarily a whole number of bytes.
    virtual void on_user_message(RakNetPeer& peer, const samp::proto::BitStream& message) = 0;

};

// One connected peer.
class RakNetPeer {
public:
    // Handles one de-obfuscated datagram.
    void handle_datagram(std::span<const std::uint8_t> data);

    // Sends a user message.
    void send(std::span<const std::uint8_t> message, samp::proto::Reliability reliability,
              std::uint8_t channel, std::size_t bit_count = 0, std::uint8_t priority = 1);

private:
    friend class RakNetServer;
    friend class GameLayer;
    friend struct RakNetTransportTestAccess;
    enum class Stage { Opening, AwaitingAuth, Authenticated, Closing };
    Stage stage_ = Stage::Opening;
    std::uint8_t auth_index_ = 0;
    std::uint16_t peer_index_ = 0;
    std::uint64_t close_after_ms_ = 0;
    std::uint8_t close_reason_ = 0;
    samp::proto::ReliabilityReceiveState receive_state_;
    samp::proto::ReliabilitySendState send_state_;
    std::uint32_t address_ = 0;
    std::uint16_t port_ = 0;
    std::uint16_t cookie_ = 0;
    std::uint64_t last_receive_ms_ = 0;

    std::uint16_t next_message_number_ = 0;

    // The message numbers that have been received and still have to be
    // acknowledged.
    std::vector<std::uint16_t> received_;
    std::uint64_t next_ack_time_ = 0;

    // The user messages that have been delivered.
    std::vector<samp::proto::BitStream> delivered_;

    std::vector<std::vector<std::uint8_t>> outbox_;
};

// The outbox of a peer: the datagrams that have to go to it.  The
// destination travels with the datagram because the transport sends the
// acknowledgements and the resends of a peer even when the datagram that
// started the work came from somebody else.
struct OutgoingDatagram {
    std::uint32_t address = 0;   // in network order, as recvfrom reports it
    std::uint16_t port = 0;      // in host order
    std::vector<std::uint8_t> data;
};

// The game transport.
class RakNetServer {
public:
    // Listener setup and the datagrams drained by main's socket loop.
    std::uint16_t port_ = 0;
    RakNetHandler* handler_ = nullptr;
    std::vector<OutgoingDatagram> outbox_;
    std::uint16_t cookie_table_[2][256] = {};

    // Handles one datagram that arrived from a peer.
    void handle_datagram(std::uint32_t address, std::uint16_t port,
                         std::span<const std::uint8_t> data);

    // The tick of every peer.
    void tick(std::uint64_t now_ms);

private:
    // Queues a bare datagram (a handshake reply) for a peer.

    friend struct RakNetTransportTestAccess;
    void handle_connection_request(RakNetPeer& peer, const samp::proto::BitStream& message);
    void begin_authentication(RakNetPeer& peer);
    void handle_authentication(RakNetPeer& peer, const samp::proto::BitStream& message);
    void accept_connection(RakNetPeer& peer);
    std::map<std::uint64_t, RakNetPeer> peers_;
};

}  // namespace samp::server

// The SA-MP 0.3.DL query / RCON server.
//
// Provenance
//   docs/re/lane-j2-query-ground-truth.md  (byte-exact ground truth captured
//   against the shipped samp-server.exe v0.3.DL-R1)
//   docs/re/lane-j2-live-capture.md
//
// Every response is rebuilt byte for byte:
//
//   header (11 bytes, identical in the request and the response)
//     0  : "SAMP"
//     4  : the requester's IPv4 address, BIG endian
//     8  : the requester's port, LITTLE endian
//     10 : the type byte
//
//   'i' info          u8 password_flag | u16 players | u16 maxplayers
//                     | u32+hostname | u32+gamemode | u32+language
//   'r' rules         u16 count | N * (u8 klen+key | u8 vlen+value)
//   'c' client list   u16 count | N * (u8 id | u8 namelen+name | u32 ping)
//   'd' client list   same as 'c'
//   'x' RCON          request: u16 passlen+pass | u16 cmdslen+cmd
//                     response: u16 msglen+message
//   'p' ping          NOT answered by the original server
//   'z'               NOT answered by the original server
//
// The query protocol is NOT obfuscated.

#pragma once

#include <cstdint>
#include <string>
#include <string_view>
#include <vector>

namespace samp::server {

enum class QueryType : std::uint8_t {
    Info = 'i',
    Rules = 'r',
    ClientList = 'c',
    DetailedClientList = 'd',
    Rcon = 'x',
    Ping = 'p',
    Unknown = 'z',
};

// The runtime state the query responses are built from.
struct ServerState {
    std::string hostname = "SA-MP Server";
    std::string gamemode = "Grand Larceny";
    std::string language = "English";
    std::string version = "0.3.DL-R1";
    std::string mapname = "San Andreas";
    std::string weburl = "www.sa-mp.com";
    std::string lagcomp = "On";
    std::string weather = "2";
    std::string worldtime = "20:00";
    std::string rcon_password = "changeme";

    std::uint16_t players = 0;
    std::uint16_t maxplayers = 50;
    bool password_required = false;

};

// A connected player, as it appears in the 'c' and 'd' responses.
struct QueryPlayer {
    std::uint8_t id = 0;
    std::string name;
    std::uint32_t ping = 0;
};

// Decodes the payload of an 'x' request.  The password and command lengths
// are u16 little endian.
//
// The original checks the PASSWORD before it looks at the command: a
// request that carries a zero length password and no command at all is
// answered with "Invalid RCON password." (lane R20).  So the password is
// decoded on its own and the command is only read when the caller asks for
// it.
// Reads the command of an 'x' request.  It follows the password, so the
// password has to be decoded first.
// The request header, decoded.
struct QueryRequest {
    std::uint32_t ipv4_network_order = 0;
    std::uint16_t port = 0;
    QueryType type = QueryType::Unknown;
    std::vector<std::uint8_t> payload;
};

}  // namespace samp::server

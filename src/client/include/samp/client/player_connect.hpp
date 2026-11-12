// The PlayerConnect RPC: the packet that joins a SA-MP 0.3.DL server.
//
// Provenance
//   samp.dll 0x1000aa60        the response handler that builds the join packet
//   samp.dll 0x1005ffa0        the key generator the official client uses
//   samp.dll 0x10001080        the RakNet open connection exchange
//   samp-server.exe 0x498114   the version comparison of the official server
//   samp-server.exe 0x49812b   the challenge XOR of the official server
//   samp-server.exe 0x494ce0   the division of the key by 1001
//
// The payload, in the order the official client writes it:
//
//   u32   the version, 0xFDE
//   u8    the modded flag, 1
//   u8    the length of the name, then the name
//   u32   the challenge response: the token of the connection accepted
//         message XOR 0xFDE
//   u8    the length of the key, then the key
//   u8    the length of the version string, then the version string
//   u32   the challenge response once more
//
// The key is the upper case hex of the permuted SHA-1 digest of the secret
// of the game, multiplied by 1001.  The server divides the key by 1001 and
// demands the remainder to be zero, so a key that was multiplied by 1001 is
// always accepted; the secret itself is never checked.

#pragma once

#include <cstdint>
#include <string_view>

namespace samp::client {

// The version of the protocol the official client speaks.  The server
// compares it with the version of the edition it serves and refuses every
// other value.
//
//   4057 (0xFD9)  SA-MP 0.3.7
//   4062 (0xFDE)  SA-MP 0.3.DL
inline constexpr std::uint32_t kProtocolVersion = 0x00000FDEu;

// The version string the official client sends.  The server only demands
// that it is at most 24 characters long, but the 0.3.DL server refuses a
// client that announces another edition.
inline constexpr std::string_view kVersionString = "0.3.DL-R1";

// The address of the secret the key is derived from, in the game process.
// The official client reads the string there (samp.dll 0x1000ad80) and
// hashes it.
inline constexpr std::uint32_t kKeySecretAddress = 0x00C9236Cu;

// The multiplier of the key.  1001 is what the official client uses once
// the network object exists; the value 1000 that the official client uses
// before that would produce a key the server rejects.
inline constexpr std::uint32_t kKeyMultiplier = 1001u;

// The secret the key is derived from, when the game is not there to be
// asked.  The server never looks at the secret, only at the arithmetic of
// the key, so any secret produces a key the server accepts.
inline constexpr std::string_view kFallbackKeySecret = "samp_clone";

}  // namespace samp::client

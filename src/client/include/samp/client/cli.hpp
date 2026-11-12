// The GTA:SA command line that samp.dll parses.
//
// Official: FUN_100c5c90 @ 0x100c5c90 (samp.dll)
//
// The parser is a raw character scan of the whole command line for '-' and
// '/' switches.
//
// The canonical invocation is
//     gta_sa.exe -c -h 127.0.0.1 -p 7777 -n Player
// where
//     -c   connect to a server on startup
//     -d   debug mode (the developer path; it clears -c)
//     -h   the server host
//     -p   the server port
//     -n   the player nickname
//     -z   the SERVER PASSWORD
//     -l   the path of a DEBUG SCRIPT (only used when -d is also present)
//
// Quirks that the original has and this reimplementation keeps:
//
//   * -c and -d are mutually exclusive: each one clears the other, so the
//     last one on the command line wins.
//
//   * The value of -h, -p, -n and -z is one token terminated by a space,
//     '-', '/' or the end of the string. Tabs are part of the token.
//
//   * The value may be attached to the switch letter (-h127.0.0.1) or
//     separate (-h 127.0.0.1).
//
//   * Because the value stops at '-', a negative port is impossible:
//     "-p -1" and "-p-1" both yield an empty value, i.e. port 0.
//
//   * -l is the only switch with a quoting rule.  Its value is the text
//     between the FIRST pair of double quotes after the switch letter;
//     everything between the letter and the opening quote is skipped, and
//     the closing quote is optional.
//
//   * The port is converted with _atol (base 10) and stored as a 32 bit
//     value with no range check.  It also seeds the client -> server
//     obfuscation mask: mask = (port & 0xFFFF) ^ 0xCCCC.

#pragma once

#include <cstdint>
#include <string>
#include <string_view>

namespace samp::client {

// The parsed GTA:SA command line.
struct CommandLine {
    bool connect = false;        // -c
    bool debug = false;          // -d
    std::string host;            // -h
    std::string port_text;       // -p, the raw token
    std::int32_t port = 0;       // -p, converted with _atol (base 10)
    std::string name;            // -n
    std::string password;        // -z, the server password
    std::string debug_script;    // -l, the debug script path

};

// Parses a GTA:SA command line.  The whole string is scanned, exactly like
// the original does with GetCommandLineA, so the executable name does not
// have to be stripped first.
//
// This is the switch dispatcher of the original, with its jump table of the
// 'c'..'z' window (samp.dll 0x100c45b0).
[[nodiscard]] CommandLine parse_command_line(std::string_view command_line);

}  // namespace samp::client

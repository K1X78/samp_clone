// The SA-MP 0.3.DL server console.
//
// Provenance
//   docs/re/spec/console-commands.json         (lane R17: every command,
//                                                its arguments, its exact
//                                                output format strings and
//                                                their addresses)
//   docs/re/lane-r17-console-commands.md
//     * the 20 console commands and their order in the 0x107 stride table at
//       .data 0xE43D8
//     * the console strings and their addresses
//         "Console Commands:"            0xB91E8
//         "Console Variables:"           0xB926C
//         "Unknown command or variable:" 0xB9284  (dead code)
//         "Usage:"                       0xB938C
//         "  exec <filename>"           0xB9378  (plain ASCII: the
//                                                      bytes are
//                                                      20 20 65 78 65 63
//                                                      20 3c 66 69 6c 65
//                                                      6e 61 6d 65 3e, with
//                                                      NO zero-width space)
//         "Unable to exec file '%s'."    0xB9394
//         "Unable to access variable '%s'. Debug mode required." 0xB9340
//         "%s.cfg"                       0xB93B0
//
// The original parses a console line into a command name and its arguments.
// A COMMAND NAME SHADOWS A VARIABLE of the same name: "weather" runs the
// command and never reads the variable.
//
// An unknown line is forwarded to the OnRconCommand public of every loaded
// filterscript.  The "Unknown command or variable:" literal is DEAD CODE --
// the forwarder always returns non-zero, so the message is never printed.

#pragma once

#include <functional>
#include <map>
#include <string>
#include <string_view>
#include <vector>

#include "samp/server/config.hpp"

namespace samp::server {

class GameLayer;

// A console line, split into a command and its arguments.
struct ConsoleLine {
    std::string name;
    std::vector<std::string> args;
    std::string rest;  // everything after the command name, verbatim
};

// The host services the console needs.  The server implements this interface.
class ConsoleHost {
public:
    virtual ~ConsoleHost() = default;

    // The configuration, whose values are the "console variables".
    // A line of console output.
    virtual void print(std::string_view line) = 0;
    // The optional operations.  The default implementations report that the
    // operation is not available, which is what the original does when the
    // target does not exist.
    // Sends a chat message to the connected players.
    virtual void say_to_players(std::string_view text) = 0;
    // Sets the runtime gravity / weather / world time.
    // Reloads the log file.  Returns false when the file could not be
    // reopened.
    virtual bool reload_log() = 0;
};

// The server console.
class Console {
public:
    // Runs one console line.  Returns false when the line was rejected.
    bool execute(std::string_view line);

private:
    void command_list();
    void variable_list();
    void command_echo(const ConsoleLine& line);
    void command_exec(const ConsoleLine& line);
    void command_exit();
    void command_players();
    void command_kick(const ConsoleLine& line);
    void command_ban(const ConsoleLine& line);
    void command_ban_ip(const ConsoleLine& line);
    void command_unban_ip(const ConsoleLine& line);
    void command_reload_log();
    void command_gravity(const ConsoleLine& line);
    void command_weather(const ConsoleLine& line);
    void command_load_filterscript(const ConsoleLine& line);
    void command_unload_filterscript(const ConsoleLine& line);
    void command_reload_filterscript(const ConsoleLine& line);

public:
    ConsoleHost* host_;
    GameLayer* game_layer_;
    Config* config_;
    bool* running_;
    bool is_rcon_;
};

}  // namespace samp::server

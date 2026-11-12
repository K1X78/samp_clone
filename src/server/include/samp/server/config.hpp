// The SA-MP 0.3.DL `server.cfg` reader.
//
// Provenance
//   docs/re/spec/config-defaults.json        (lane R16: the 48 registered
//                                             console variables, their
//                                             defaults, types and ranges)
//   docs/re/spec/config-defaults.varlist.txt (lane R16: the LIVE "varlist"
//                                             output of the official server)
//   docs/re/spec/console-commands.json      (lane R17: the console formats)
//
// The original stores every setting as a string and converts on use, and the
// console's "varlist" command prints them back as strings, so this reader
// does the same: the values are kept verbatim and the typed accessors only
// interpret them.
//
// A config line is
//     <key> <value>            (the official server.cfg format)
//     <key>=<value>
// Blank lines and lines whose first non-space character is ';' or '#' are
// ignored.
//
// The reader of the original (0x48BC52) only applies KNOWN console
// variables.  A line that names a console command instead -- "echo" or
// "exec" -- is not executed, which is why the official server never prints
// the "echo Executing Server Config..." line that the stock server.cfg
// starts with.

#pragma once

#include <cstdint>
#include <cstdlib>
#include <map>
#include <string>
#include <string_view>
#include <vector>

namespace samp::server {

// The 20 console commands, in the order they live in the 0x107 stride table
// at .data 0xE43D8 (lane R17).
inline constexpr std::string_view kConsoleCommands[] = {
    "echo",  "exec",   "cmdlist",  "varlist",   "exit",    "kick",    "ban",
    "gmx",   "changemode", "say", "reloadbans", "reloadlog", "players", "banip",
    "unbanip", "gravity", "weather", "loadfs",   "unloadfs", "reloadfs",
};
inline constexpr std::size_t kConsoleCommandCount =
    sizeof(kConsoleCommands) / sizeof(kConsoleCommands[0]);

// The value types the original registers the console variables with.  They
// decide how "varlist" renders a value.
enum class ConfigValueType { Int, Bool, String, Float };

// The variable flags of the original.
inline constexpr unsigned kVarFlagDebug = 1;      // " (debug)"
inline constexpr unsigned kVarFlagReadOnly = 2;   // " (read-only)"
inline constexpr unsigned kVarFlagRule = 4;       // " (rule)"

// The config keys, with the default that was actually observed in the
// shipped 0.3.DL-R1 binary (lane R16).
//
// `is_config_key` is false for the literals that live in .rdata but are NOT
// registered console variables: a server.cfg line naming one of them is
// silently dropped.
struct ConfigKey {
    std::string_view name;
    std::string_view verified_default;
    ConfigValueType type = ConfigValueType::String;
    unsigned flags = 0;
    bool is_config_key = true;
};

inline constexpr ConfigKey kConfigKeys[] = {
    {"port", "8192", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"bind", "", ConfigValueType::String, kVarFlagReadOnly, true},
    {"maxplayers", "50", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"maxnpc", "0", ConfigValueType::Int, 0, true},
    {"hostname", "SA-MP Server", ConfigValueType::String, 0, true},
    {"gamemodetext", "Unknown", ConfigValueType::String, 0, true},
    {"language", "", ConfigValueType::String, 0, true},
    {"mapname", "San Andreas", ConfigValueType::String, kVarFlagRule, true},
    {"weburl", "www.sa-mp.com", ConfigValueType::String, kVarFlagRule, true},
    {"announce", "1", ConfigValueType::Bool, 0, true},
    {"lanmode", "0", ConfigValueType::Bool, 0, true},
    {"filterscripts", "", ConfigValueType::String, kVarFlagReadOnly, true},
    {"nosign", "", ConfigValueType::String, kVarFlagReadOnly, true},
    {"plugins", "", ConfigValueType::String, kVarFlagReadOnly, true},
    {"chatlogging", "1", ConfigValueType::Int, 0, true},
    {"logqueries", "0", ConfigValueType::Bool, 0, true},
    {"logtimeformat", "[%H:%M:%S]", ConfigValueType::String, kVarFlagReadOnly, true},
    {"cookielogging", "0", ConfigValueType::Int, 0, true},
    {"conncookies", "1", ConfigValueType::Int, 0, true},
    {"connseedtime", "300000", ConfigValueType::Int, 0, true},
    {"db_logging", "0", ConfigValueType::Int, 0, true},
    {"db_log_queries", "0", ConfigValueType::Int, 0, true},
    {"minconnectiontime", "0", ConfigValueType::Int, 0, true},
    {"playertimeout", "10000", ConfigValueType::Int, 0, true},
    {"ackslimit", "3000", ConfigValueType::Int, 0, true},
    {"messageslimit", "500", ConfigValueType::Int, 0, true},
    {"messageholelimit", "3000", ConfigValueType::Int, 0, true},
    {"queryflood", "1", ConfigValueType::Int, 0, true},
    {"timestamp", "1", ConfigValueType::Bool, 0, true},
    {"lagcomp", "On", ConfigValueType::String, kVarFlagReadOnly | kVarFlagRule, true},
    {"lagcompmode", "1", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"myriad", "0", ConfigValueType::Bool, 0, true},
    {"stream_rate", "1000", ConfigValueType::Int, 0, true},
    {"stream_distance", "200.000000", ConfigValueType::Float, 0, true},
    {"weapon_rate", "30", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"incar_rate", "30", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"onfoot_rate", "30", ConfigValueType::Int, kVarFlagReadOnly, true},
    {"sleep", "5", ConfigValueType::Int, 0, true},
    {"query", "1", ConfigValueType::Bool, 0, true},
    {"rcon", "1", ConfigValueType::Bool, 0, true},
    {"rcon_password", "changeme", ConfigValueType::String, 0, true},
    {"weather", "10", ConfigValueType::String, kVarFlagRule, true},
    {"worldtime", "12:00", ConfigValueType::String, kVarFlagRule, true},
    {"gravity", "0.008", ConfigValueType::String, 0, true},
    {"version", "0.3.DL-R1", ConfigValueType::String, kVarFlagReadOnly | kVarFlagRule, true},
    {"password", "", ConfigValueType::String, 0, true},
    // 492919/492930 register these 0.3.DL artwork settings; 492c02/1b
    // construct the model registry and read artconfig.txt before scripts.
    {"useartwork", "0", ConfigValueType::Bool, kVarFlagReadOnly, true},
    {"artpath", "models", ConfigValueType::String, kVarFlagReadOnly, true},

    // Present in .rdata but NOT registered as console variables in
    // 0.3.DL-R1, so a server.cfg line naming them is silently ignored.
    {"rcon_port", "", ConfigValueType::Int, 0, false},
    {"rcon_bind", "", ConfigValueType::String, 0, false},
    {"gamemode%u", "", ConfigValueType::String, 0, false},
    {"exec server", "", ConfigValueType::String, 0, false},
    {"samp.ban", "", ConfigValueType::String, 0, false},
    {"server_log.txt", "", ConfigValueType::String, 0, false},
};
inline constexpr std::size_t kConfigKeyCount = sizeof(kConfigKeys) / sizeof(kConfigKeys[0]);

// The number of "gamemode%d" console variables the server creates at
// startup (lane R16: the loop at 0x48D240 formats the name with the
// "gamemode%u" literal).
inline constexpr int kGamemodeVariableCount = 16;

// The settings of a running server.  Values are kept as strings, exactly like
// the original.
class Config {
public:
    Config() = default;

    // Official: FUN_00490ba0 @ 0x00490ba0 (samp-server.exe)
    [[nodiscard]] std::string get(std::string_view key, std::string_view fallback = "") const {
        const auto it = values_.find(std::string(key));
        return it == values_.end() ? std::string(fallback) : it->second;
    }

    // Official: FUN_00490c80 @ 0x00490c80 (samp-server.exe)
    [[nodiscard]] int getInt(std::string_view key, int fallback = 0) const {
        const auto it = values_.find(std::string(key));
        if (it == values_.end()) {
            return fallback;
        }
        try {
            return std::stoi(it->second);
        } catch (...) {
            return fallback;
        }
    }

    // Official: FUN_00490c30 @ 0x00490c30 (samp-server.exe)
    [[nodiscard]] float getFloat(std::string_view key, float fallback = 0.0f) const {
        const auto it = values_.find(std::string(key));
        if (it == values_.end()) {
            return fallback;
        }
        try {
            return std::stof(it->second);
        } catch (...) {
            return fallback;
        }
    }

    // The original treats a non-zero number as true and renders booleans as
    // "On" / "Off" in the console variables and in the server rules.
    // Official: FUN_00490cc0 @ 0x00490cc0 (samp-server.exe)
    [[nodiscard]] bool getBool(std::string_view key, bool fallback = false) const {
        const auto it = values_.find(std::string(key));
        if (it == values_.end()) {
            return fallback;
        }
        if (it->second == "On" || it->second == "on") {
            return true;
        }
        if (it->second == "Off" || it->second == "off") {
            return false;
        }
        return getInt(key, fallback ? 1 : 0) != 0;
    }

public:
    friend class Console;
    std::vector<std::string> ordered_names_;
    std::map<std::string, std::string> values_;
    std::map<std::string, ConfigValueType> types_;
    std::map<std::string, unsigned> flags_;
};

}  // namespace samp::server

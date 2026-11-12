// The SA-MP 0.3.DL dedicated server.
//
// The startup output is reproduced from the captured run of the shipped
// samp-server.exe v0.3.DL-R1:
//
//   harness\runs\20261019T165249Z\server.stdout.log      (the console)
//   harness\runs\20261019T170300Z\server\server_log.txt  (the log file)
//
// Two things matter for byte fidelity:
//
//   * The log file is opened BEFORE the banner, so the banner IS in the log.
//     The lines written before the config is read are NOT timestamped; every
//     line after that carries the "[%H:%M:%S] " prefix.
//
//   * "Started server on port: ..." is printed with the CRT printf, so it
//     reaches the console only and is NOT in the log file.
//
// The query / RCON responder is byte exact, see
// docs/re/lane-j2-query-ground-truth.md.

#include <atomic>
#include <algorithm>
#include <chrono>
#include <cstdint>
#include <cstdio>
#include <cstring>
#include <ctime>
#include <fstream>
#include <iostream>
#include <iterator>
#include <random>
#include <span>
#include <string>
#include <vector>
#include <sstream>

#if defined(_WIN32)
#include <winsock2.h>
#include <ws2tcpip.h>
#include <windows.h>
using socket_t = SOCKET;
constexpr socket_t kInvalidSocket = INVALID_SOCKET;
#else
#include <arpa/inet.h>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
using socket_t = int;
constexpr socket_t kInvalidSocket = -1;
#endif

#include "samp/server/config.hpp"
#include "samp/server/console.hpp"
#include "samp/server/game_layer.hpp"
#include "samp/server/query_server.hpp"
#include "samp/server/raknet_server.hpp"

namespace {

using samp::server::Config;
using samp::server::Console;
using samp::server::ConsoleHost;
using samp::server::ConsoleLine;
using samp::server::QueryPlayer;
using samp::server::QueryRequest;
using samp::server::QueryType;
using samp::server::ServerState;

constexpr const char* kServerVersion = "0.3.DL-R1";
constexpr const char* kLogFileName = "server_log.txt";

// The largest query datagram the original server answers.  The boundary is
// exact: a 576 byte datagram is answered, a 577 byte one is dropped
// (lane R20, the differ's size sweep).
constexpr std::size_t kMaxQueryDatagramSize = 576;

class Server final : public ConsoleHost {
public:
    Server() = default;

    // Official: FUN_00491fa0 @ 0x00491fa0 (samp-server.exe)
    void print(std::string_view line) override {
        if(remote_console_player_>=0 && game_layer_)
            game_layer_->send_client_message(remote_console_player_,-1,line);
        if (rcon_capture_) {
            rcon_capture_->emplace_back(line);
            return;
        }
        std::string output(line);
        output += "\n";
        std::cout << output;
        std::cout.flush();
        if (log_.is_open()) {
            std::string prefix;
            if (config_.getBool("timestamp", true)) {
                const std::string format = config_.get("logtimeformat", "[%H:%M:%S]");
                const std::time_t now = std::time(nullptr);
                std::tm local{};
#if defined(_WIN32)
                localtime_s(&local, &now);
#else
                localtime_r(&now, &local);
#endif
                char buffer[64];
                const std::size_t length = std::strftime(buffer, sizeof(buffer), format.c_str(), &local);
                prefix.assign(buffer, length);
                prefix += ' ';
            }
            log_ << prefix << output;
            log_.flush();
        }
    }
    // Official: FUN_0048ff00 @ 0x0048ff00 (samp-server.exe)
    void say_to_players(std::string_view text) override {
        if (game_layer_ == nullptr) return;
        std::string message(text.substr(0,230));
        message="* Admin: "+message;
        for (const auto& player : game_layer_->players_) {
            if (player.in_use) game_layer_->send_client_message(player.id,0x2587ceaa,message);
        }
    }
    std::vector<std::string>* rcon_capture_ = nullptr;
    int remote_console_player_=-1;
    ServerState state_;
    bool running_ = true;
    std::ofstream log_;
    samp::server::GameLayer* game_layer_ = nullptr;
    Config config_;

    // Official: FUN_00492380 @ 0x00492380 (samp-server.exe)
    [[nodiscard]] bool reload_log() override {
        const bool was_open = log_.is_open();
        if (was_open) {
            log_.close();
        }
        log_.open(kLogFileName, std::ios::app | std::ios::out);
        return log_.is_open();
    }

private:
};



// Handles one query datagram and returns the responses, if any.
//
// The RCON reply is STREAMED: the original sends one datagram per line of
// console output, so "cmdlist" produces 22 datagrams and "varlist" 64
// (lane R20).  A command that produces no output at all produces no
// datagram.
// Official: FUN_0049e480 @ 0x0049e480 (samp-server.exe)
std::vector<std::vector<std::uint8_t>> handle_query(Server& server, const QueryRequest& request) {
    const auto ip = request.ipv4_network_order;
    const auto port = request.port;
    if (server.game_layer_ != nullptr) {
        const auto count=std::count_if(server.game_layer_->players_.begin(),
            server.game_layer_->players_.end(),[](const auto& player) { return player.in_use; });
        server.state_.players=static_cast<std::uint16_t>(count);
    }
    const auto response_header = [ip, port](QueryType type) {
        std::vector<std::uint8_t> out;
        out.reserve(11);
        out.insert(out.end(), {'S', 'A', 'M', 'P'});
        out.push_back(static_cast<std::uint8_t>(ip >> 24));
        out.push_back(static_cast<std::uint8_t>(ip >> 16));
        out.push_back(static_cast<std::uint8_t>(ip >> 8));
        out.push_back(static_cast<std::uint8_t>(ip));
        out.push_back(static_cast<std::uint8_t>(port));
        out.push_back(static_cast<std::uint8_t>(port >> 8));
        out.push_back(static_cast<std::uint8_t>(type));
        return out;
    };
    const auto write_u16 = [](std::vector<std::uint8_t>& out, std::uint16_t value) {
        out.push_back(static_cast<std::uint8_t>(value));
        out.push_back(static_cast<std::uint8_t>(value >> 8));
    };
    const auto write_u32 = [](std::vector<std::uint8_t>& out, std::uint32_t value) {
        for (unsigned shift = 0; shift < 32; shift += 8)
            out.push_back(static_cast<std::uint8_t>(value >> shift));
    };
    const auto write_u8_string = [](std::vector<std::uint8_t>& out, std::string_view value) {
        out.push_back(static_cast<std::uint8_t>(value.size() & 0xFFu));
        out.insert(out.end(), value.begin(), value.end());
    };
    const auto write_u32_string = [&](std::vector<std::uint8_t>& out, std::string_view value) {
        write_u32(out, static_cast<std::uint32_t>(value.size()));
        out.insert(out.end(), value.begin(), value.end());
    };
    const auto info_response = [&] {
        const ServerState& state = server.state_;
        auto out = response_header(QueryType::Info);
        out.push_back(state.password_required ? 1 : 0);
        write_u16(out, state.players);
        write_u16(out, state.maxplayers);
        write_u32_string(out, state.hostname);
        write_u32_string(out, state.gamemode);
        write_u32_string(out, state.language);
        return out;
    };
    const auto rules_response = [&] {
        const ServerState& state = server.state_;
        auto out = response_header(QueryType::Rules);
        const std::string_view keys[]{"lagcomp", "mapname", "version", "weather", "weburl", "worldtime"};
        const std::string_view values[]{state.lagcomp, state.mapname, state.version,
                                        state.weather, state.weburl, state.worldtime};
        write_u16(out, static_cast<std::uint16_t>(sizeof(keys) / sizeof(keys[0])));
        for (std::size_t index = 0; index < sizeof(keys) / sizeof(keys[0]); ++index) {
            write_u8_string(out, keys[index]);
            write_u8_string(out, values[index]);
        }
        return out;
    };
    const auto client_list_response = [&](QueryType type, const std::vector<QueryPlayer>& players) {
        auto out = response_header(type);
        write_u16(out, static_cast<std::uint16_t>(players.size()));
        for (const auto& player : players) {
            out.push_back(player.id);
            write_u8_string(out, player.name);
            write_u32(out, player.ping);
        }
        return out;
    };
    const auto rcon_response = [&](std::string_view body) {
        auto out = response_header(QueryType::Rcon);
        const auto length = static_cast<std::uint16_t>(body.size() & 0xFFFFu);
        write_u16(out, length);
        out.insert(out.end(), body.begin(), body.end());
        return out;
    };
    switch (request.type) {
        case QueryType::Info:
            return {info_response()};
        case QueryType::Rules:
            return {rules_response()};
        case QueryType::ClientList:
        case QueryType::DetailedClientList: {
            std::vector<QueryPlayer> players;
            if (server.game_layer_ != nullptr) {
                for (const auto& player : server.game_layer_->players_) {
                    if (!player.in_use) continue;
                    players.push_back({static_cast<std::uint8_t>(player.id),player.name,0});
                }
            }
            return {client_list_response(request.type, players)};
        }
        case QueryType::Rcon: {
            // The original checks the password BEFORE it reads the command,
            // so a request with a zero length password and no command at
            // all is answered with "Invalid RCON password." (lane R20).
            std::string password;
            if (request.payload.size() < 2) return {};
            const std::size_t pass_len = static_cast<std::size_t>(request.payload[0]) |
                                         (static_cast<std::size_t>(request.payload[1]) << 8);
            if (request.payload.size() < 2 + pass_len) return {};
            password.assign(reinterpret_cast<const char*>(request.payload.data() + 2), pass_len);
            if (password != server.state_.rcon_password) {
                return {rcon_response("Invalid RCON password.")};
            }
            std::string command;
            const std::size_t command_header = 2 + pass_len;
            if (request.payload.size() >= command_header + 2) {
                const std::size_t command_len = static_cast<std::size_t>(request.payload[command_header]) |
                    (static_cast<std::size_t>(request.payload[command_header + 1]) << 8);
                if (request.payload.size() >= command_header + 2 + command_len)
                    command.assign(reinterpret_cast<const char*>(request.payload.data() + command_header + 2),
                                   command_len);
            }
            // The RCON answer is the console output of the command, one
            // datagram per line.
            std::vector<std::string> captured_lines;
            auto* const previous_capture = server.rcon_capture_;
            server.rcon_capture_ = &captured_lines;
            Console rcon_console{&server,server.game_layer_,&server.config_,&server.running_,true};
            rcon_console.execute(command);
            server.rcon_capture_ = previous_capture;
            std::vector<std::vector<std::uint8_t>> out;
            out.reserve(captured_lines.size());
            for (const std::string& line : captured_lines) {
                out.push_back(rcon_response(line));
            }
            return out;
        }
        case QueryType::Ping:
        case QueryType::Unknown:
            // The original server does not answer these.
            return {};
    }
    return {};
}


}  // namespace

// Official: FUN_00492420 @ 0x00492420 (samp-server.exe)
int main(int argc, char** argv) {
#if defined(_WIN32)
    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);
#endif

    std::string config_path = "server.cfg";
    if (argc > 1) {
        config_path = argv[1];
    }

    Server server;
    Config& config=server.config_;
    for(const samp::server::ConfigKey& key:samp::server::kConfigKeys) {
        if(!key.is_config_key) continue;
        const std::string name(key.name);
        config.ordered_names_.push_back(name);
        config.values_[name]=std::string(key.verified_default);
        config.types_[name]=key.type;
        config.flags_[name]=key.flags;
    }
    for(int index=0;index<samp::server::kGamemodeVariableCount;++index) {
        const std::string name="gamemode"+std::to_string(index);
        config.ordered_names_.push_back(name);
        config.values_[name]=std::string();
        config.types_[name]=samp::server::ConfigValueType::String;
        config.flags_[name]=0;
    }

    // The game transport.  It shares the socket with the query layer.
    samp::server::RakNetServer network;
    std::random_device cookie_source;
    std::mt19937 cookie_generator(cookie_source());
    std::uniform_int_distribution<std::uint32_t> cookie_distribution(0, 0xFFFFu);
    for (auto& table : network.cookie_table_) {
        for (auto& cookie : table) {
            cookie = static_cast<std::uint16_t>(cookie_distribution(cookie_generator));
        }
    }
    samp::server::GameLayer game_layer;
    game_layer.config_=&server.config_;
    game_layer.players_.resize(1000);
    for(auto& player:game_layer.players_)
        player.streamed_to.assign(game_layer.players_.size(),0);
    std::random_device challenge_source;
    std::mt19937 challenge_generator(challenge_source());
    std::uniform_int_distribution<std::uint32_t> challenge_distribution(0,0xFFFFFFFFu);
    game_layer.challenge_token_=challenge_distribution(challenge_generator);
    server.game_layer_ = &game_layer;
    game_layer.log_message_=[&server](std::string_view message) {server.print(message);};
    game_layer.execute_remote_console_=[&server,&game_layer](int player,std::string_view command) {
        server.remote_console_player_=player;
        Console remote{&server,&game_layer,&server.config_,&server.running_,true};
        remote.execute(command);server.remote_console_player_=-1;
    };

    // Step 1: open the log file, then announce it.  These lines are written
    // before the config is read, so they carry no timestamp.
    server.log_.open(kLogFileName, std::ios::app | std::ios::out);
    const std::string startup_lines[]{
        "", "----------", "Loaded log file: \"server_log.txt\".", "----------",
        "", "SA-MP Dedicated Server", "----------------------",
        std::string("v") + kServerVersion + ", (C)2005-2018 SA-MP Team\n"};
    for (const std::string& startup_line : startup_lines) {
        std::string line(startup_line);
        line += "\n";
        std::cout << line;
        std::cout.flush();
        if (server.log_.is_open()) {
            server.log_ << line;
            server.log_.flush();
        }
    }

    // Step 3: read server.cfg.  This is SILENT: the cfg reader only applies
    // known console variables, so the "echo Executing Server Config..." line
    // of the stock server.cfg produces no output at all.
    std::ifstream config_file(config_path, std::ios::binary);
    if (!config_file) {
        std::cerr << "Failed to load " << config_path << ": cannot open " << config_path << "\n";
        return 1;
    }
    std::string config_line;
    while (std::getline(config_file,config_line)) {
        std::size_t begin=0;
        while(begin<config_line.size() && (config_line[begin]==' ' || config_line[begin]=='\t' ||
              config_line[begin]=='\r' || config_line[begin]=='\n')) ++begin;
        std::size_t end=config_line.size();
        while(end>begin && (config_line[end-1]==' ' || config_line[end-1]=='\t' ||
              config_line[end-1]=='\r' || config_line[end-1]=='\n')) --end;
        const std::string stripped=config_line.substr(begin,end-begin);
        if(stripped.empty() || stripped[0]==';' || stripped[0]=='#') continue;
        std::string key;
        std::string value;
        const std::size_t equals=stripped.find('=');
        const std::size_t whitespace=stripped.find_first_of(" \t");
        if(equals!=std::string::npos && (whitespace==std::string::npos || equals<whitespace)) {
            const std::string_view key_part(stripped.data(),equals);
            std::size_t key_begin=0,key_end=key_part.size();
            while(key_begin<key_end && (key_part[key_begin]==' ' || key_part[key_begin]=='\t' ||
                  key_part[key_begin]=='\r' || key_part[key_begin]=='\n')) ++key_begin;
            while(key_end>key_begin && (key_part[key_end-1]==' ' || key_part[key_end-1]=='\t' ||
                  key_part[key_end-1]=='\r' || key_part[key_end-1]=='\n')) --key_end;
            key.assign(key_part.substr(key_begin,key_end-key_begin));
            const std::string_view value_part(stripped.data()+equals+1,stripped.size()-equals-1);
            std::size_t value_begin=0,value_end=value_part.size();
            while(value_begin<value_end && (value_part[value_begin]==' ' || value_part[value_begin]=='\t' ||
                  value_part[value_begin]=='\r' || value_part[value_begin]=='\n')) ++value_begin;
            while(value_end>value_begin && (value_part[value_end-1]==' ' || value_part[value_end-1]=='\t' ||
                  value_part[value_end-1]=='\r' || value_part[value_end-1]=='\n')) --value_end;
            value.assign(value_part.substr(value_begin,value_end-value_begin));
        } else if(whitespace!=std::string::npos) {
            key=stripped.substr(0,whitespace);
            const std::string_view value_part(stripped.data()+whitespace+1,
                                              stripped.size()-whitespace-1);
            std::size_t value_begin=0,value_end=value_part.size();
            while(value_begin<value_end && (value_part[value_begin]==' ' || value_part[value_begin]=='\t' ||
                  value_part[value_begin]=='\r' || value_part[value_begin]=='\n')) ++value_begin;
            while(value_end>value_begin && (value_part[value_end-1]==' ' || value_part[value_end-1]=='\t' ||
                  value_part[value_end-1]=='\r' || value_part[value_end-1]=='\n')) --value_end;
            value.assign(value_part.substr(value_begin,value_end-value_begin));
        } else {
            key=stripped;
        }
        bool registered=false;
        for(const samp::server::ConfigKey& entry:samp::server::kConfigKeys) {
            if(entry.is_config_key && entry.name==key) {registered=true;break;}
        }
        if(!registered && key.size()>8 && key.compare(0,8,"gamemode")==0) {
            const std::string_view tail=std::string_view(key).substr(8);
            if(!tail.empty() && tail.find_first_not_of("0123456789")==std::string_view::npos) {
                const int index=std::atoi(std::string(tail).c_str());
                registered=index>=0 && index<samp::server::kGamemodeVariableCount;
            }
        }
        if(registered) {
            std::string clamped(value);
            if(key=="maxplayers") {
                const long number=std::strtol(clamped.c_str(),nullptr,10);
                if(number<0) clamped="0"; else if(number>1000) clamped="1000";
            } else if(key=="stream_rate") {
                const long number=std::strtol(clamped.c_str(),nullptr,10);
                if(number<500) clamped="500"; else if(number>5000) clamped="5000";
            } else if(key=="stream_distance") {
                const float number=std::strtof(clamped.c_str(),nullptr);
                if(number<50.0f) clamped="50.000000";
                else if(number>400.0f) clamped="400.000000";
            }
            server.config_.values_[key]=clamped;
            if(key=="lagcompmode")
                server.config_.values_["lagcomp"]=
                    (server.config_.getInt("lagcompmode",1)>0)?"On":"Off";
        }
    }

    // Step 4: the server refuses to start with the default rcon password.
    if (server.config_.get("rcon_password") == "changeme") {
        server.print(
            "Error: Your password must be changed from the default password, please change it.");
        return 1;
    }

    const auto port = static_cast<std::uint16_t>(server.config_.getInt("port", 8192));
    network.port_ = port;
    const auto maxplayers = static_cast<std::uint16_t>(server.config_.getInt("maxplayers", 50));
    const bool lanmode = server.config_.getBool("lanmode", false);
    server.state_.maxplayers = maxplayers;
    server.state_.password_required = !server.config_.get("password").empty();
    server.state_.hostname = server.config_.get("hostname", "SA-MP Server");
    server.state_.language = server.config_.get("language", "English");
    server.state_.mapname = server.config_.get("mapname", "San Andreas");
    server.state_.weburl = server.config_.get("weburl", "www.sa-mp.com");
    server.state_.rcon_password = server.config_.get("rcon_password", "changeme");
    server.state_.version = kServerVersion;
    // The "gamemodetext" CONFIG variable is NOT what the info query
    // publishes: that is the runtime game mode text, which the gamemode
    // sets with SetGameModeText() (lane R16).  The variable's own default
    // is the literal "Unknown" and is only visible in "varlist".

    // Step 5: the plugins block.
    server.print("");
    server.print("Server Plugins");
    server.print("--------------");
    server.print(" Loaded 0 plugins.\n");

    // Step 6: the network starts.  This line is printed with the CRT printf,
    // so it reaches the console only and is NOT in the log file.
    std::cout << "\nStarted server on port: " + std::to_string(port) +
                 ", with maxplayers: " + std::to_string(maxplayers) +
                 " lanmode is " + (lanmode ? "ON." : "OFF.") + "\n\n";
    std::cout.flush();
    server.print("");

    // 492bc8..492c1b: artwork registry exists before any script initializer.
    game_layer.artwork_enabled_=server.config_.getBool("useartwork",false);
    game_layer.models_directory_=server.config_.get("artpath","models");
    if(game_layer.artwork_enabled_) game_layer.load_model_config();

    // Step 7: the filterscripts.
    server.print("");
    server.print("Filterscripts");
    server.print("---------------");
    const std::string filterscripts = server.config_.get("filterscripts");
    std::size_t loaded_filterscripts = 0;
    {
        std::size_t i = 0;
        while (i < filterscripts.size()) {
            while (i < filterscripts.size() && filterscripts[i] == ' ') {
                ++i;
            }
            const std::size_t start = i;
            while (i < filterscripts.size() && filterscripts[i] != ' ') {
                ++i;
            }
            const std::string name = filterscripts.substr(start, i - start);
            if (name.empty()) {
                continue;
            }
            server.print("  Loading filterscript '" + name + ".amx'...");
            auto script=std::make_unique<samp::pawn::PawnVm>();
            const std::string path="filterscripts/"+name+".amx";
            script->path_=path;
            std::ifstream file(path,std::ios::binary);
            bool loaded=false;
            if(!file) {
                script->ok_=false;
                script->error_="cannot open "+path;
            } else {
                std::vector<std::uint8_t> bytes;
                bytes.assign(std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>());
                samp::pawn::AmxImage image;
                if(!samp::pawn::AmxImage::load_from_memory(bytes.data(),bytes.size(),image)) {
                    script->ok_=false;
                    script->error_=image.error_;
                } else {
                    script->ok_=false;script->error_.clear();script->last_error_=0;
                    script->sleeping_=false;script->string_buffers_.clear();
                    script->image_=image.data_;script->header_=image.header_;
                    script->publics_=image.publics_;script->natives_=image.natives_;
                    script->frm_=0;
                    script->stk_=script->header_.stp-script->header_.dat-4;
                    script->hea_=script->header_.hea-script->header_.dat;
                    script->hlw_=script->header_.hea-script->header_.dat;
                    script->cip_=script->header_.cip;script->pri_=0;script->alt_=0;
                    script->amx_=samp::amx::Amx{};
                    script->amx_.base=script->image_.data();script->amx_.data=nullptr;
                    script->amx_.hea=script->hea_;script->amx_.hlw=script->hlw_;
                    script->amx_.stp=script->stk_;script->amx_.stk=script->stk_;
                    script->amx_.flags=0x8000;script->amx_.sysreq_d=0x87;
                    script->ok_=true;
                    loaded=true;
                }
            }
            if(loaded) {
                samp::pawn::register_server_natives(*script,game_layer);
                samp::amx::cell result=0;
                static_cast<void>(script->execute("OnFilterScriptInit",{},result));
                game_layer.filterscripts_.push_back(std::move(script));
                ++loaded_filterscripts;
            } else {
                server.print("  Failed to load the filterscript '"+name+".amx'.");
            }
        }
    }
    if (loaded_filterscripts > 0) {
        server.print(" Loaded " + std::to_string(loaded_filterscripts) + " filterscripts.\n");
    }

    // Step 8: the game mode.  The "gamemode0" variable names the script in
    // the "gamemodes" directory; the optional second word is how many times
    // the script is loaded (the shipped server repeats the list), so only the
    // first word is the file name.
    const std::string gamemode_value = server.config_.get("gamemode0");
    const std::string gamemode = gamemode_value.substr(0, gamemode_value.find_first_of(" \t"));
    {
        std::istringstream entry(gamemode_value);std::string name;std::uint32_t repetitions=0;
        entry>>name>>repetitions;game_layer.gamemode_repetitions_=repetitions-1u;
        game_layer.next_gamemode_=gamemode;
    }
    if (!gamemode.empty()) {
        const std::string path = "gamemodes/" + gamemode + ".amx";
        auto& vm=game_layer.vm_;
        vm.path_=path;
        std::ifstream file(path,std::ios::binary);
        bool gamemode_loaded=false;
        if(!file) {
            vm.ok_=false;vm.error_="cannot open "+path;
        } else {
            std::vector<std::uint8_t> bytes;
            bytes.assign(std::istreambuf_iterator<char>(file),std::istreambuf_iterator<char>());
            samp::pawn::AmxImage image;
            if(!samp::pawn::AmxImage::load_from_memory(bytes.data(),bytes.size(),image)) {
                vm.ok_=false;vm.error_=image.error_;
            } else {
                vm.ok_=false;vm.error_.clear();vm.last_error_=0;
                vm.sleeping_=false;vm.string_buffers_.clear();
                vm.image_=image.data_;vm.header_=image.header_;
                vm.publics_=image.publics_;vm.natives_=image.natives_;
                vm.frm_=0;vm.stk_=vm.header_.stp-vm.header_.dat-4;
                vm.hea_=vm.header_.hea-vm.header_.dat;vm.hlw_=vm.header_.hea-vm.header_.dat;
                vm.cip_=vm.header_.cip;vm.pri_=0;vm.alt_=0;
                vm.amx_=samp::amx::Amx{};vm.amx_.base=vm.image_.data();vm.amx_.data=nullptr;
                vm.amx_.hea=vm.hea_;vm.amx_.hlw=vm.hlw_;vm.amx_.stp=vm.stk_;vm.amx_.stk=vm.stk_;
                vm.amx_.flags=0x8000;vm.amx_.sysreq_d=0x87;
                vm.ok_=true;gamemode_loaded=true;
            }
        }
        if(gamemode_loaded) samp::pawn::register_server_natives(game_layer.vm_,game_layer);
        if (gamemode_loaded) {
            server.print("  Loading gamemode '" + gamemode + ".amx'...");
            game_layer.start_gamemode();
            // The game mode sets the text with SetGameModeText(), which the
            // info query publishes.
            const std::string text = server.config_.get("gamemodetext");
            if (!text.empty() && text != "Unknown") {
                server.state_.gamemode = text;
            }
        } else {
            server.print("  Failed to load the gamemode '" + gamemode + ".amx'.");
        }
    }


    // The query listener.
    const socket_t sock = ::socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
    if (sock == kInvalidSocket) {
        std::cerr << "Could not create the UDP socket\n";
        return 1;
    }
    sockaddr_in address{};
    address.sin_family = AF_INET;
    address.sin_addr.s_addr = htonl(INADDR_ANY);
    address.sin_port = htons(port);
    if (::bind(sock, reinterpret_cast<const sockaddr*>(&address), sizeof(address)) != 0) {
        std::cerr << "Could not bind to port " << port << "\n";
#if defined(_WIN32)
        ::closesocket(sock);
#else
        ::close(sock);
#endif
        return 1;
    }

    Console console{&server,&game_layer,&server.config_,&server.running_,false};
    network.handler_ = &game_layer;

    bool console_closed = false;
    std::string console_line;
    auto last_timer_tick=std::chrono::steady_clock::now();
    while (server.running_) {

        // Poll the socket and the console together.
        fd_set read_set;
        FD_ZERO(&read_set);
        FD_SET(sock, &read_set);

        timeval timeout{};
        timeout.tv_sec = 0;
        timeout.tv_usec = std::max(0,server.config_.getInt("sleep",5))*1000;
        timeout.tv_sec = timeout.tv_usec/1000000;
        timeout.tv_usec %= 1000000;

#if defined(_WIN32)
        const int ready = ::select(0, &read_set, nullptr, nullptr, &timeout);
#else
        const int ready = ::select(sock + 1, &read_set, nullptr, nullptr, &timeout);
#endif
        if (ready > 0) {
            std::uint8_t buffer[2048];
            sockaddr_in from{};
            socklen_t from_len = sizeof(from);
#if defined(_WIN32)
            const int received = ::recvfrom(sock, reinterpret_cast<char*>(buffer),
                                           static_cast<int>(sizeof(buffer)), 0,
                                           reinterpret_cast<sockaddr*>(&from), &from_len);
#else
            const ssize_t received = ::recvfrom(sock, reinterpret_cast<char*>(buffer),
                                                sizeof(buffer), 0,
                                                reinterpret_cast<sockaddr*>(&from), &from_len);
#endif
            if (received > 0) {
                // The query dialect is recognised by its magic and is never
                // obfuscated; everything else is game traffic.
                const bool is_query = received >= 4 && std::memcmp(buffer, "SAMP", 4) == 0;
                if (is_query) {
                    // FUN_0049e480's 576-byte cap belongs only to queries.
                    // Game datagrams carry full-MTU reliability fragments.
                    if (static_cast<std::size_t>(received)>kMaxQueryDatagramSize || received<11) continue;
                    QueryRequest request;
                    request.ipv4_network_order = (static_cast<std::uint32_t>(buffer[4]) << 24) |
                        (static_cast<std::uint32_t>(buffer[5]) << 16) |
                        (static_cast<std::uint32_t>(buffer[6]) << 8) |
                        static_cast<std::uint32_t>(buffer[7]);
                    request.port = static_cast<std::uint16_t>(static_cast<std::uint16_t>(buffer[8]) |
                        (static_cast<std::uint16_t>(buffer[9]) << 8));
                    request.type = static_cast<QueryType>(buffer[10]);
                    request.payload.assign(buffer + 11,
                                           buffer + static_cast<std::size_t>(received));
                    for (const auto& response : handle_query(server, request)) {
#if defined(_WIN32)
                        static_cast<void>(::sendto(sock, reinterpret_cast<const char*>(response.data()),
                            static_cast<int>(response.size()), 0,
                            reinterpret_cast<const sockaddr*>(&from), sizeof(from)));
#else
                        static_cast<void>(::sendto(sock, response.data(), response.size(), 0,
                            reinterpret_cast<const sockaddr*>(&from), sizeof(from)));
#endif
                    }
                } else {
                    network.handle_datagram(from.sin_addr.s_addr, ntohs(from.sin_port),
                                            std::span<const std::uint8_t>(
                                                buffer, static_cast<std::size_t>(received)));
                }
            }

        }
        std::vector<std::string> console_lines;
        for (unsigned budget = 0; budget < 4096 && !console_closed; ++budget) {
            char ch = 0;
#if defined(_WIN32)
            const HANDLE input = GetStdHandle(STD_INPUT_HANDLE);
            if (!input || input == INVALID_HANDLE_VALUE) { console_closed = true; break; }
            const auto type = GetFileType(input);
            if (type == FILE_TYPE_CHAR) {
                DWORD count = 0;
                if (!GetNumberOfConsoleInputEvents(input, &count)) { console_closed = true; break; }
                if (!count) break;
                INPUT_RECORD record{};
                if (!ReadConsoleInputA(input, &record, 1, &count)) { console_closed = true; break; }
                if (record.EventType != KEY_EVENT || !record.Event.KeyEvent.bKeyDown) continue;
                ch = record.Event.KeyEvent.uChar.AsciiChar;
                if (!ch) continue;
            } else {
                if (type == FILE_TYPE_PIPE) {
                    DWORD available = 0;
                    if (!PeekNamedPipe(input, nullptr, 0, nullptr, &available, nullptr)) {
                        console_closed = true; break;
                    }
                    if (!available) break;
                } else if (type != FILE_TYPE_DISK) { console_closed = true; break; }
                DWORD count = 0;
                if (!ReadFile(input, &ch, 1, &count, nullptr) || !count) { console_closed = true; break; }
            }
#else
            fd_set readable; FD_ZERO(&readable); FD_SET(STDIN_FILENO, &readable);
            timeval console_timeout{};
            if (::select(STDIN_FILENO + 1, &readable, nullptr, nullptr, &console_timeout) <= 0) break;
            if (::read(STDIN_FILENO, &ch, 1) != 1) { console_closed = true; break; }
#endif
            if (ch == '\r' || ch == '\n') {
                if (!console_line.empty()) {
                    console_lines.push_back(std::move(console_line));
                    console_line.clear();
                }
            } else if (ch == '\b') {
                if (!console_line.empty()) console_line.pop_back();
            } else if (console_line.size() < 4096) {
                console_line += ch;
            }
        }
        if (console_closed && !console_line.empty()) {
            console_lines.push_back(std::move(console_line));
            console_line.clear();
        }
        for (const auto& line : console_lines) console.execute(line);

        const auto now=static_cast<std::uint64_t>(
            std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now().time_since_epoch()).count());
        const auto timer_tick=std::chrono::steady_clock::now();
        const auto elapsed_seconds=std::chrono::duration<float>(timer_tick-last_timer_tick).count();
        last_timer_tick=timer_tick;
        // Official game process496b05 passes truncated elapsed seconds*1000.
        if(game_layer.gamemode_exit_requested_) game_layer.begin_gamemode_restart();
        if(game_layer.gamemode_restarting_) {
            game_layer.gamemode_restart_elapsed_+=elapsed_seconds;
            // 496b2e compares strictly greater than12 seconds before reloading.
            if(game_layer.gamemode_restart_elapsed_>12.f) {
                game_layer.finish_gamemode_restart();server.state_.gamemode=server.config_.get("gamemodetext");
            }
        } else {
            game_layer.process_script_timers(static_cast<std::uint32_t>(elapsed_seconds*1000.f));
            game_layer.update_vehicles(now);game_layer.update_streaming();
        }
        for(auto& player:game_layer.players_) game_layer.process_model_download(player);
        network.tick(now);

        // Everything the transport queued (handshake replies, acknowledgements,
        // resends and the messages of the game layer) goes to the peer it
        // belongs to, not to whoever happened to send the last datagram.
        std::vector<samp::server::OutgoingDatagram> outgoing_datagrams;
        outgoing_datagrams.swap(network.outbox_);
        for (const samp::server::OutgoingDatagram& outgoing : outgoing_datagrams) {
            sockaddr_in destination{};
            destination.sin_family = AF_INET;
            destination.sin_addr.s_addr = outgoing.address;
            destination.sin_port = htons(outgoing.port);
#if defined(_WIN32)
            static_cast<void>(::sendto(sock, reinterpret_cast<const char*>(outgoing.data.data()),
                static_cast<int>(outgoing.data.size()), 0,
                reinterpret_cast<const sockaddr*>(&destination), sizeof(destination)));
#else
            static_cast<void>(::sendto(sock, outgoing.data.data(), outgoing.data.size(), 0,
                reinterpret_cast<const sockaddr*>(&destination), sizeof(destination)));
#endif
        }
    }


#if defined(_WIN32)
    ::closesocket(sock);
#else
    ::close(sock);
#endif
#if defined(_WIN32)
    WSACleanup();
#endif
    return 0;
}

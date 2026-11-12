// The console implementation.
//
// The command names and their order come from samp/server/config.hpp
// (kConsoleCommands), which mirrors the 0x107 stride table at .data 0xE43D8.
//
// Every output string below is the literal of the original, with the address
// it was read from (lane R17).

#include "samp/server/console.hpp"
#include "samp/server/game_layer.hpp"

#include <algorithm>
#include <cctype>
#include <cstdio>
#include <filesystem>
#include <fstream>
#include <sstream>

namespace samp::server {

namespace {

// The "exec" usage literal of the original (0x4B9378).  It is plain ASCII:
// "  exec <filename>" -- the bytes are 20 20 65 78 65 63 20 3c 66 69 6c
// 65 6e 61 6d 65 3e.  There is NO zero-width space (U+200B) in it, and no
// U+200B exists anywhere in .text/.rdata/.data of the shipped binary.
constexpr std::string_view kExecUsage = "  exec <filename>";

// Official: FUN_0048fd60 @ 0x0048fd60 (samp-server.exe)
bool parse_ipv4(std::string_view text, std::string& out) {
    int octets[4]{};
    std::size_t position = 0;
    for (int index = 0; index < 4; ++index) {
        if (position >= text.size() || text[position] < '0' || text[position] > '9') return false;
        int value = 0;
        while (position < text.size() && text[position] >= '0' && text[position] <= '9') {
            value = value * 10 + (text[position++] - '0');
            if (value > 255) return false;
        }
        octets[index] = value;
        if (index < 3) {
            if (position >= text.size() || text[position] != '.') return false;
            ++position;
        } else if (position != text.size()) {
            return false;
        }
    }
    out = std::to_string(octets[0]) + "." + std::to_string(octets[1]) + "." +
          std::to_string(octets[2]) + "." + std::to_string(octets[3]);
    return true;
}

}  // namespace

// Official: FUN_00490200 @ 0x00490200 (samp-server.exe)
void Console::command_list() {
    host_->print("Console Commands:");
    for (const auto command : kConsoleCommands) {
        host_->print(std::string("  ") + std::string(command));
    }
    host_->print("");
}

// Official: FUN_004905e0 @ 0x004905e0 (samp-server.exe)
void Console::variable_list() {
    const Config& config = *config_;
    host_->print("Console Variables:");
    for (const std::string& name : config.ordered_names_) {
        const auto value_it=config.values_.find(name);
        if(value_it==config.values_.end()) continue;
        const std::string& value=value_it->second;
        const auto type_it=config.types_.find(name);
        const ConfigValueType type=type_it==config.types_.end()?ConfigValueType::String:type_it->second;
        std::string line = "  " + name + "\t";
        if (name.size() < 6) line += '\t';
        line += "= ";
        switch (type) {
            case ConfigValueType::Int:
                line += std::to_string(config.getInt(name, 0)) + "  (int)";
                break;
            case ConfigValueType::Bool:
                line += std::to_string(config.getBool(name, false) ? 1 : 0) + "  (bool)";
                break;
            case ConfigValueType::Float: {
                char buffer[64];
                std::snprintf(buffer, sizeof(buffer), "%f",
                              static_cast<double>(config.getFloat(name, 0.0f)));
                line += std::string(buffer) + "  (float)";
                break;
            }
            case ConfigValueType::String:
                line += "\"" + value + "\"  (string)";
                break;
        }
        const auto flags_it=config.flags_.find(name);
        const unsigned flags=flags_it==config.flags_.end()?0u:flags_it->second;
        if ((flags & kVarFlagReadOnly) != 0u) line += " (read-only)";
        if ((flags & kVarFlagDebug) != 0u) line += " (debug)";
        if ((flags & kVarFlagRule) != 0u) line += " (rule)";
        host_->print(line);
    }
    host_->print("");
}

// Official: FUN_0048fbd0 @ 0x0048fbd0 (samp-server.exe)
void Console::command_echo(const ConsoleLine& line) {
    host_->print(line.rest);
}

// Official: FUN_00491150 @ 0x00491150 (samp-server.exe)
void Console::command_exec(const ConsoleLine& line) {
    if (line.args.empty()) {
        host_->print("Usage:");
        host_->print(kExecUsage);
        return;
    }
    std::string file=line.args[0];
    if (file.size()<4 || file.compare(file.size()-4,4,".cfg")!=0) file += ".cfg";
        Config& config=*config_;
    std::ifstream input(file,std::ios::binary);
    if (!input) {
        host_->print("Unable to exec file '"+file+"'.");
        return;
    }
    std::string text;
    while(std::getline(input,text)) {
        std::size_t begin=0;
        while(begin<text.size() && (text[begin]==' ' || text[begin]=='\t' ||
              text[begin]=='\r' || text[begin]=='\n')) ++begin;
        std::size_t end=text.size();
        while(end>begin && (text[end-1]==' ' || text[end-1]=='\t' ||
              text[end-1]=='\r' || text[end-1]=='\n')) --end;
        const std::string stripped=text.substr(begin,end-begin);
        if(stripped.empty() || stripped[0]==';' || stripped[0]=='#') continue;
        std::string key,value;
        const std::size_t equals=stripped.find('=');
        const std::size_t whitespace=stripped.find_first_of(" \t");
        if(equals!=std::string::npos &&
           (whitespace==std::string::npos || equals<whitespace)) {
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
        for(const ConfigKey& entry:kConfigKeys) {
            if(entry.is_config_key && entry.name==key) {registered=true;break;}
        }
        if(!registered && key.size()>8 && key.compare(0,8,"gamemode")==0) {
            const std::string_view tail=std::string_view(key).substr(8);
            if(!tail.empty() && tail.find_first_not_of("0123456789")==std::string_view::npos) {
                const int index=std::atoi(std::string(tail).c_str());
                registered=index>=0 && index<kGamemodeVariableCount;
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
            config.values_[key]=clamped;
            if(key=="lagcompmode")
                config.values_["lagcomp"]=(config.getInt("lagcompmode",1)>0)?"On":"Off";
        }
    }
}

// Official: FUN_0048fbc0 @ 0x0048fbc0 (samp-server.exe)
void Console::command_exit() {
    if(running_!=nullptr) *running_=false;
}

// Official: FUN_0048ff70 @ 0x0048ff70 (samp-server.exe)
void Console::command_players() {
    if(game_layer_==nullptr) return;
    const auto& players=game_layer_->players_;
    if(std::none_of(players.begin(),players.end(),[](const auto& player){return player.in_use;})) return;
    host_->print("ID\tName\tPing\tIP");
    for(const auto& player:players) {
        if(!player.in_use) continue;
        const auto* octets=reinterpret_cast<const std::uint8_t*>(&player.ipv4_address);
        const std::string ip=std::to_string(octets[0])+"."+std::to_string(octets[1])+"."+
                             std::to_string(octets[2])+"."+std::to_string(octets[3]);
        host_->print(std::to_string(player.id)+"\t"+player.name+"\t0\t"+ip);
    }
}

// Official: FUN_0048fc00 @ 0x0048fc00 (samp-server.exe)
void Console::command_kick(const ConsoleLine& line) {
    if(line.args.empty()) return;
    const int id=std::atoi(line.args[0].c_str());
    if(id<0 || id>=1000) return;
    if(game_layer_==nullptr) return;
    for(const auto& player:game_layer_->players_) {
        if(!player.in_use || player.id!=id) continue;
        const auto* octets=reinterpret_cast<const std::uint8_t*>(&player.ipv4_address);
        const std::string ip=std::to_string(octets[0])+"."+std::to_string(octets[1])+"."+
                             std::to_string(octets[2])+"."+std::to_string(octets[3]);
        game_layer_->kick_player(id);
        host_->print(player.name+" <#"+std::to_string(player.id)+" - "+ip+"> has been kicked.");
        return;
    }
}

// Official: FUN_0048fca0 @ 0x0048fca0 (samp-server.exe)
void Console::command_ban(const ConsoleLine& line) {
    if(line.args.empty()) return;
    const int id=std::atoi(line.args[0].c_str());
    if(id<0 || id>=1000) return;
    if(game_layer_==nullptr) return;
    for(const auto& player:game_layer_->players_) {
        if(!player.in_use || player.id!=id) continue;
        const auto* octets=reinterpret_cast<const std::uint8_t*>(&player.ipv4_address);
        const std::string ip=std::to_string(octets[0])+"."+std::to_string(octets[1])+"."+
                             std::to_string(octets[2])+"."+std::to_string(octets[3]);
        if(!ip.empty() &&
           std::find(game_layer_->banned_ips_.begin(),game_layer_->banned_ips_.end(),ip)==
               game_layer_->banned_ips_.end()) game_layer_->banned_ips_.push_back(ip);
        game_layer_->kick_player(id);
        host_->print(player.name+" <#"+std::to_string(player.id)+" - "+ip+"> has been banned.");
        return;
    }
}

// Official: FUN_0048fe10 @ 0x0048fe10 (samp-server.exe)
void Console::command_ban_ip(const ConsoleLine& line) {
    if(line.args.empty()) return;
    std::string ip;
    if(!parse_ipv4(line.args[0],ip)) return;
    if(game_layer_==nullptr) return;
    if(std::find(game_layer_->banned_ips_.begin(),game_layer_->banned_ips_.end(),ip)==
       game_layer_->banned_ips_.end()) game_layer_->banned_ips_.push_back(ip);
    for(const auto& player:game_layer_->players_) {
        if(!player.in_use) continue;
        const auto* octets=reinterpret_cast<const std::uint8_t*>(&player.ipv4_address);
        const std::string current_ip=std::to_string(octets[0])+"."+std::to_string(octets[1])+"."+
                                     std::to_string(octets[2])+"."+std::to_string(octets[3]);
        if(current_ip==ip) game_layer_->kick_player(player.id);
    }
    host_->print("IP "+ip+" has been banned.");
}

// Official: FUN_0048fe60 @ 0x0048fe60 (samp-server.exe)
void Console::command_unban_ip(const ConsoleLine& line) {
    if(line.args.empty() || game_layer_==nullptr) return;
    std::string ip;
    if(!parse_ipv4(line.args[0],ip)) return;
    std::erase(game_layer_->banned_ips_,ip);
}

// Official: FUN_0048ff60 @ 0x0048ff60 (samp-server.exe)
void Console::command_reload_log() {
    host_->print("");
    host_->print("----------");
    if(host_->reload_log()) host_->print("Reloaded log file: \"server_log.txt\".");
    else host_->print("Failed to load log file: \"server_log.txt\".");
    host_->print("----------");
}

// Official: FUN_00490020 @ 0x00490020 (samp-server.exe)
void Console::command_gravity(const ConsoleLine& line) {
    if(line.args.empty()) return;
    const float gravity=static_cast<float>(std::atof(line.args[0].c_str()));
    if(game_layer_!=nullptr) game_layer_->set_gravity(gravity);
    else config_->values_["gravity"]=std::to_string(gravity);
}

// Official: FUN_00490050 @ 0x00490050 (samp-server.exe)
void Console::command_weather(const ConsoleLine& line) {
    if(!line.args.empty() && game_layer_!=nullptr)
        game_layer_->set_weather(std::atoi(line.args[0].c_str()));
}

// Official: FUN_00490080 @ 0x00490080 (samp-server.exe)
void Console::command_load_filterscript(const ConsoleLine& line) {
    const std::string name=line.rest;
    const bool loaded=game_layer_!=nullptr && game_layer_->load_filterscript(name);
    if(loaded) host_->print("  Filterscript '"+name+".amx' loaded.");
    else host_->print("  Filterscript '"+name+".amx' load failed.");
}

// Official: FUN_00490190 @ 0x00490190 (samp-server.exe)
void Console::command_unload_filterscript(const ConsoleLine& line) {
    const std::string name=line.rest;
    bool unloaded=false;
    if(game_layer_!=nullptr) {
        const auto found=std::find_if(game_layer_->filterscripts_.begin(),game_layer_->filterscripts_.end(),
            [&name](const auto& script) {
                return std::filesystem::path(script->path_).filename().stem().string()==name;
            });
        if(found!=game_layer_->filterscripts_.end()) {
            samp::amx::cell result=0;
            static_cast<void>((*found)->execute("OnFilterScriptExit",{},result));
            // Original filterscript release46ad09 removes its timer owners.
            game_layer_->remove_script_timers(found->get());
            game_layer_->filterscripts_.erase(found);
            unloaded=true;
        }
    }
    if(unloaded) host_->print("  Filterscript '"+name+".amx' unloaded.");
    else host_->print("  Filterscript '"+name+".amx' unload failed.");
}

// Official: FUN_004900f0 @ 0x004900f0 (samp-server.exe)
void Console::command_reload_filterscript(const ConsoleLine& line) {
    command_unload_filterscript(line);
    command_load_filterscript(line);
}

// Official: FUN_00490ce0 @ 0x00490ce0 (samp-server.exe)
bool Console::execute(std::string_view input) {
    ConsoleLine parsed;
    std::size_t position=0;
    while(position<input.size() && (input[position]==' ' || input[position]=='\t')) ++position;
    const std::size_t command_begin=position;
    while(position<input.size() && input[position]!=' ' && input[position]!='\t') ++position;
    parsed.name=std::string(input.substr(command_begin,position-command_begin));
    while(position<input.size() && (input[position]==' ' || input[position]=='\t')) ++position;
    parsed.rest=std::string(input.substr(position));
    std::size_t argument_position=0;
    while(argument_position<parsed.rest.size()) {
        while(argument_position<parsed.rest.size() &&
              (parsed.rest[argument_position]==' ' || parsed.rest[argument_position]=='\t'))
            ++argument_position;
        const std::size_t argument_begin=argument_position;
        while(argument_position<parsed.rest.size() && parsed.rest[argument_position]!=' ' &&
              parsed.rest[argument_position]!='\t') ++argument_position;
        if(argument_position>argument_begin)
            parsed.args.push_back(parsed.rest.substr(argument_begin,argument_position-argument_begin));
    }
    if(parsed.name.empty()) return true;
    // Native490d56 compares registered names with case-insensitive4a12ff.
    std::transform(parsed.name.begin(),parsed.name.end(),parsed.name.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
    const std::string& name = parsed.name;

    if (name == "echo") {
        command_echo(parsed);
        return true;
    }
    if (name == "cmdlist") {
        command_list();
        return true;
    }
    if (name == "varlist") {
        variable_list();
        return true;
    }
    if (name == "exit") {
        command_exit();
        return true;
    }
    if (name == "exec") {
        command_exec(parsed);
        return true;
    }
    if (name == "players") {
        command_players();
        return true;
    }
    if (name == "say") {
        host_->say_to_players(parsed.rest);
        return true;
    }
    if (name == "kick") {
        command_kick(parsed);
        return true;
    }
    if (name == "ban") {
        command_ban(parsed);
        return true;
    }
    if (name == "banip") {
        command_ban_ip(parsed);
        return true;
    }
    if (name == "unbanip") {
        command_unban_ip(parsed);
        return true;
    }
    if (name == "loadfs" || name == "unloadfs" || name == "reloadfs") {
        if (name == "loadfs") {
            command_load_filterscript(parsed);
            return true;
        }
        if (name == "unloadfs") {
            command_unload_filterscript(parsed);
            return true;
        }
        command_reload_filterscript(parsed);
        return true;
    }
    if (name == "reloadlog") {
        command_reload_log();
        return true;
    }
    if (name == "gravity") {
        command_gravity(parsed);
        return true;
    }
    if (name == "weather") {
        command_weather(parsed);
        return true;
    }
    // 48fea0 explicitly takes the NEXT configured mode (493460), then
    // selects that name; it does not use GameModeExit's repetition path.
    if(name=="gmx") {
        if(game_layer_) {
            ++game_layer_->gamemode_index_;
            auto entry=config_->get("gamemode"+std::to_string(game_layer_->gamemode_index_));
            if(entry.empty()) {game_layer_->gamemode_index_=0;entry=config_->get("gamemode0");}
            std::istringstream fields(entry);std::string mode;
            if(fields>>mode && game_layer_->select_gamemode(mode)) game_layer_->gamemode_exit_requested_=true;
        }
        return true;
    }
    // Official callback48fed0 consumes the next space-delimited argument.
    if(name=="changemode") {
        if(game_layer_ && !parsed.args.empty() && game_layer_->select_gamemode(parsed.args.front()))
            game_layer_->gamemode_exit_requested_=true;
        return true;
    }
    if(name=="reloadbans") return true;
    Config& config=*config_;
    if(config.values_.find(parsed.name)!=config.values_.end()) {
        const auto flags_it=config.flags_.find(parsed.name);
        const unsigned flags=flags_it==config.flags_.end()?0u:flags_it->second;
        const bool read_only=(flags & kVarFlagReadOnly)!=0u;
        if(!parsed.args.empty() && !read_only) {
            std::string value=parsed.rest;
            if(parsed.name=="maxplayers") {
                const long number=std::strtol(value.c_str(),nullptr,10);
                if(number<0) value="0"; else if(number>1000) value="1000";
            } else if(parsed.name=="stream_rate") {
                const long number=std::strtol(value.c_str(),nullptr,10);
                if(number<500) value="500"; else if(number>5000) value="5000";
            } else if(parsed.name=="stream_distance") {
                const float number=std::strtof(value.c_str(),nullptr);
                if(number<50.0f) value="50.000000";
                else if(number>400.0f) value="400.000000";
            }
            config.values_[parsed.name]=std::move(value);
            if(parsed.name=="lagcompmode")
                config.values_["lagcomp"]=(config.getInt("lagcompmode",1)>0)?"On":"Off";
        } else {
            const std::string value=config.get(parsed.name);
            const std::string suffix=read_only?", read-only":std::string();
            std::string rendered;
            const auto type_it=config.types_.find(parsed.name);
            const ConfigValueType type=type_it==config.types_.end()?ConfigValueType::String:type_it->second;
            switch(type) {
                case ConfigValueType::Int:
                    rendered=std::to_string(config.getInt(parsed.name,0))+"  (int"+suffix+")";
                    break;
                case ConfigValueType::Bool:
                    rendered=std::to_string(config.getBool(parsed.name,false)?1:0)+"  (bool"+suffix+")";
                    break;
                case ConfigValueType::Float: {
                    char buffer[64];
                    std::snprintf(buffer,sizeof(buffer),"%f",
                                  static_cast<double>(config.getFloat(parsed.name,0.0f)));
                    rendered=std::string(buffer)+"  (float"+suffix+")";
                    break;
                }
                case ConfigValueType::String:
                    rendered="\""+value+"\"  (string"+suffix+")";
                    break;
            }
            host_->print(parsed.name+" = "+rendered);
        }
        return true;
    }
    if(game_layer_!=nullptr) {
        const auto call_rcon_command=[&input](samp::pawn::PawnVm& script) {
            if(!script.ok_ || std::none_of(script.publics_.begin(),script.publics_.end(),
                [](const samp::amx::AmxPublic& entry) { return entry.name=="OnRconCommand"; })) return;
            const std::int64_t cells=static_cast<std::int64_t>(input.size())+1;
            const std::int64_t bytes=cells*4;
            if(cells<=0 || script.stk_<0 || script.hea_<0 ||
               static_cast<std::int64_t>(script.stk_)-script.hea_-bytes<64) return;
            const std::int32_t address=script.hea_;
            script.hea_+=static_cast<std::int32_t>(bytes);
            script.amx_.hea=script.hea_;
            bool valid=true;
            for(std::size_t i=0;i<=input.size();++i) {
                const std::int32_t offset=address+static_cast<std::int32_t>(i*4u);
                if(offset<0 || offset>=script.amx_.stp ||
                   (offset>=script.amx_.hea && offset<script.amx_.stk)) {
                    valid=false;
                    break;
                }
                const std::size_t at=static_cast<std::size_t>(script.header_.dat+offset);
                if(at+4u>script.image_.size()) {valid=false;break;}
                auto* bytes_out=script.image_.data()+at;
                bytes_out[0]=i<input.size()?static_cast<std::uint8_t>(input[i]):0;
                bytes_out[1]=bytes_out[2]=bytes_out[3]=0;
            }
            if(valid) {
                const samp::amx::cell args[]{static_cast<samp::amx::cell>(address)};
                samp::amx::cell result=0;
                static_cast<void>(script.execute("OnRconCommand",args,result));
            }
            script.hea_=address;
            script.amx_.hea=address;
        };
        call_rcon_command(game_layer_->vm_);
        for(const auto& script:game_layer_->filterscripts_) call_rcon_command(*script);
    }
    return false;
}

}  // namespace samp::server

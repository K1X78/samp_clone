#include "samp/server/game_layer.hpp"
#include <algorithm>
#include <cctype>
#include <cstring>

namespace samp::server {
// Direct packet201 is independent of the spawned-player sync path.
// Official: FUN_00496450 @ 0x00496450 (samp-server.exe)
void GameLayer::handle_remote_console(RakNetPeer& peer,const samp::proto::BitStream& message) {
    auto player=std::find_if(players_.begin(),players_.end(),[&](const auto& p){return p.in_use && p.peer==&peer;});
    if(player==players_.end() || message.numberOfBitsUsed_<40) return;
    std::uint32_t size=0;std::memcpy(&size,message.data_.data()+1,4);
    if(!size || size>256 || message.numberOfBitsUsed_<40u+size*8u) return;
    std::string command(reinterpret_cast<const char*>(message.data_.data()+5),size);
    command.resize(command.find('\0')==std::string::npos?command.size():command.find('\0'));
    if(player->is_admin) {
        if(command.empty()) {send_client_message(player->id,-1,"You forgot the RCON command!");return;}
        if(log_message_) log_message_("RCON (In-Game): Player ["+player->name+"] sent command: "+command);
        if(execute_remote_console_) execute_remote_console_(player->id,command);
        return;
    }
    // Native strtok uses a space delimiter, not arbitrary whitespace.
    auto begin=command.find_first_not_of(' ');if(begin==std::string::npos) return;
    auto end=command.find(' ',begin);if(end==std::string::npos) return;
    auto verb=command.substr(begin,end-begin);
    std::transform(verb.begin(),verb.end(),verb.begin(),[](unsigned char c){return static_cast<char>(std::tolower(c));});
    if(verb!="login") return;
    begin=command.find_first_not_of(' ',end);if(begin==std::string::npos) return;
    end=command.find(' ',begin);const auto password=command.substr(begin,end-begin);
    const bool success=config_ && password==config_->get("rcon_password");
    const auto* ip_bytes=reinterpret_cast<const std::uint8_t*>(&player->ipv4_address);
    const std::string ip=std::to_string(ip_bytes[0])+"."+std::to_string(ip_bytes[1])+"."+std::to_string(ip_bytes[2])+"."+std::to_string(ip_bytes[3]);
    const auto attempt=[&](samp::pawn::PawnVm& script) {
        if(!script.ok_) return;
        const auto saved=script.hea_;
        const std::int64_t needed=static_cast<std::int64_t>(ip.size()+password.size()+2)*4;
        if(saved<0 || static_cast<std::int64_t>(script.stk_)-saved-needed<64 ||
           static_cast<std::int64_t>(script.header_.dat)+saved+needed>static_cast<std::int64_t>(script.image_.size())) return;
        const auto ip_address=script.hea_;const auto password_address=ip_address+static_cast<int>((ip.size()+1)*4);
        script.hea_+=static_cast<int>(needed);script.amx_.hea=script.hea_;
        for(const auto& [text,address]:{std::pair{std::string_view(ip),ip_address},std::pair{std::string_view(password),password_address}})
            for(std::size_t i=0;i<=text.size();++i) {
                const samp::amx::cell value=i<text.size()?static_cast<unsigned char>(text[i]):0;
                std::memcpy(script.image_.data()+script.header_.dat+address+i*4,&value,4);
            }
        const samp::amx::cell args[]{ip_address,password_address,success?1:0};samp::amx::cell result=0;
        script.execute("OnRconLoginAttempt",args,result);script.hea_=saved;script.amx_.hea=saved;
    };
    for(const auto& script:filterscripts_) attempt(*script);attempt(vm_);
    // Original writes the admin slot after callbacks, including callbacks that kick.
    if(success) player->is_admin=true;
    if(log_message_) log_message_("RCON (In-Game): Player #"+std::to_string(player->id)+" ("+player->name+") "+(success?"has logged in.":"failed login."));
    send_client_message(player->id,-1,success?"SERVER: You are logged in as admin.":"SERVER: Bad admin password. Repeated attempts will get you banned.");
}
}

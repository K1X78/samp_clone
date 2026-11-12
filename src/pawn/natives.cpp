#include "pawn/natives.hpp"

#include "pawn/db_natives.hpp"
#include "samp/proto/bitstream.hpp"
#include "pawn/core_natives.hpp"
#include "pawn/float_natives.hpp"
#include "pawn/property_natives.hpp"
#include "pawn/string_natives.hpp"
#include "pawn/time_natives.hpp"
#include "pawn/format_cells.hpp"
#include "pawn/file_natives.hpp"
#include "pawn/amx_memory_api.hpp"
#include "pawn/amx_set_string_api.hpp"

#include <chrono>
#include <cstdio>
#include <cstring>
#include <fstream>
#include <map>
#include <algorithm>
#include <bit>
#include <cstdlib>

namespace samp::pawn {

namespace {

using samp::amx::cell;

}  // namespace

// Official: FUN_0047a100 @ 0x0047a100 (samp-server.exe)
// This is the SA-MP native-table registration wrapper for the server AMX host.
void register_server_natives(PawnVm& vm, NativeHost& host) {
    const auto read_script_string = [&vm](std::int32_t address) -> const char* {
        const std::uint8_t* start = nullptr;
        if (vm.ok_ && address >= 0 && static_cast<std::int64_t>(address) < vm.amx_.stp &&
            !(address >= vm.amx_.hea && address < vm.amx_.stk)) {
            const std::size_t at = static_cast<std::size_t>(vm.header_.dat + address);
            if (at < vm.image_.size()) start = vm.image_.data() + at;
        }
        if (start == nullptr) return nullptr;
        const std::size_t available = static_cast<std::size_t>(vm.amx_.stp - address);
        if (available < sizeof(cell)) return nullptr;
        std::uint32_t first = 0;
        std::memcpy(&first, start, sizeof(first));
        const bool packed = first >= 0x1000000u;
        std::string text;
        for (std::size_t offset = 0; offset + sizeof(cell) <= available; offset += sizeof(cell)) {
            std::uint32_t value = 0;
            std::memcpy(&value, start + offset, sizeof(value));
            if (packed) {
                for (int shift = 24; shift >= 0; shift -= 8) {
                    const auto character = static_cast<unsigned char>(value >> shift);
                    if (character == 0) {
                        auto& buffer = vm.string_buffers_[address];
                        buffer = std::move(text);
                        return buffer.c_str();
                    }
                    text.push_back(static_cast<char>(character));
                }
            } else {
                if (value == 0) {
                    auto& buffer = vm.string_buffers_[address];
                    buffer = std::move(text);
                    return buffer.c_str();
                }
                text.push_back(static_cast<char>(value));
            }
        }
        return nullptr;
    };
    const auto data_pointer = [&vm](std::int32_t address) -> const std::uint8_t* {
        if (!vm.ok_ || address < 0 || static_cast<std::int64_t>(address) >= vm.amx_.stp ||
            (address >= vm.amx_.hea && address < vm.amx_.stk)) return nullptr;
        const std::size_t at = static_cast<std::size_t>(vm.header_.dat + address);
        return at < vm.image_.size() ? vm.image_.data() + at : nullptr;
    };
    const auto as_float = [](cell value) {
        float result = 0.0f;
        std::memcpy(&result, &value, sizeof(result));
        return result;
    };
    const auto as_cell = [](float value) {
        cell result = 0;
        std::memcpy(&result, &value, sizeof(result));
        return result;
    };
    const auto player_slot = [&host](cell id) -> PlayerNativeState* {
        const auto index = static_cast<std::uint16_t>(id);
        return index < 1000 && index < host.players_.size() && host.players_[index].in_use
            ? &host.players_[index] : nullptr;
    };
    const auto store_cell = [&vm, data_pointer](cell address, cell value) {
        if (address < 0 || std::int64_t(address) + 4 > vm.amx_.stp) return false;
        auto* destination = const_cast<std::uint8_t*>(data_pointer(address));
        if (!destination || std::uint64_t(vm.header_.dat) + address + 4 > vm.image_.size()) return false;
        std::memcpy(destination, &value, 4); return true;
    };
    // Official: FUN_00470bc0 @ 0x00470bc0 (samp-server.exe)
    vm.native_functions_["IsPlayerAdmin"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player && player->is_admin?1:0;
    };
    // Official: FUN_00472230 @ 0x00472230 (samp-server.exe)
    vm.native_functions_["EnablePlayerCameraTarget"]=[&host,player_slot](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;auto* player=player_slot(args[0]);if(!player || !player->peer) return 0;
        const bool enabled=args[1]!=0;
        if(enabled!=player->camera_targeting) {
            player->camera_targeting=enabled;if(!enabled) player->camera_targets.fill(0xffff);
            samp::proto::BitStream payload;if(enabled) payload.write1();else payload.write0();
            host.send_rpc(*player->peer,170,payload);
        }
        return 1;
    };
    // Official: FUN_004722a0 @ 0x004722a0 (samp-server.exe)
    vm.native_functions_["GetPlayerCameraTargetObject"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?player->camera_targets[0]:0xffff;
    };
    // Official: FUN_004722f0 @ 0x004722f0 (samp-server.exe)
    vm.native_functions_["GetPlayerCameraTargetVehicle"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?player->camera_targets[1]:0xffff;
    };
    // Official: FUN_00472340 @ 0x00472340 (samp-server.exe)
    vm.native_functions_["GetPlayerCameraTargetPlayer"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?player->camera_targets[2]:0xffff;
    };
    // Official: FUN_00472390 @ 0x00472390 (samp-server.exe)
    vm.native_functions_["GetPlayerCameraTargetActor"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?player->camera_targets[3]:0xffff;
    };
    // ------------------------------------------------------------- the core
    vm.native_functions_["print"] = [&vm, read_script_string](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const char* text = read_script_string(args[0]);
            std::fputs(text != nullptr ? text : "", stdout);
        }
        return 0;
    };
    // Official: FUN_00473110 @ 0x00473110 (samp-server.exe)
    vm.native_functions_["printf"] = [&vm,&host, data_pointer](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const auto* format=reinterpret_cast<const cell*>(data_pointer(args[0]));
            const auto text=format_cells(&vm.amx_,format,args.subspan(1));
            if(host.log_message_) host.log_message_(text);else std::puts(text.c_str());
        }
        return 0;
    };
    // Original473140 writes unpacked AMX output and returns1, not its length.
    // Official: FUN_00473140 @ 0x00473140 (samp-server.exe)
    vm.native_functions_["format"] = [&vm,data_pointer](std::span<const cell> args) -> cell {
        if(args.size()>=3) {
            auto* destination=const_cast<cell*>(reinterpret_cast<const cell*>(data_pointer(args[0])));
            const auto* format=reinterpret_cast<const cell*>(data_pointer(args[2]));
            if(!destination || !format || args[1]<=0 || std::int64_t(args[0])+std::int64_t(args[1])*4>vm.amx_.stp) return 0;
            const auto text=format_cells(&vm.amx_,format,args.subspan(3));
            amx_string::set_string(destination,text.c_str(),0,0,static_cast<std::uint32_t>(args[1]));
            return 1;
        }
        return 0;
    };
    // Official: FUN_00473190 @ 0x00473190 (samp-server.exe)
    vm.native_functions_["SetTimer"]=[&host,&vm,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<3) return 0;
        const auto* name=read_script_string(args[0]);if(!name) return 0;
        const auto id=++host.next_script_timer_;
        auto& timer=host.script_timers_[id];
        timer.owner=&vm;timer.callback=std::string(name).substr(0,255);
        timer.interval=timer.remaining=args[1];timer.repeat=args[2]!=0;timer.killed=false;
        return std::bit_cast<cell>(id);
    };
    // Official: FUN_00473c80 @ 0x00473c80 (samp-server.exe)
    vm.native_functions_["SetTimerEx"]=[&host,&vm,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<4 || args.size()>260) return 0;
        const auto* name=read_script_string(args[0]);if(!name) return 0;
        const auto* format=read_script_string(args[3]);if(!format) return 0;
        const auto format_length=std::strlen(format);
        if(args.size()<4+format_length) return 0;
        std::vector<cell> storage(format_length);
        bool valid=true;
        for(std::size_t remaining=format_length;remaining>0;--remaining) {
            const std::size_t index=remaining-1;
            const cell value=args[4+index];
            if(format[index]=='s') {
                const auto* text=read_script_string(value);
                if(!text) {valid=false;break;}
                const auto capacity=static_cast<int>(std::strlen(text)+1);
                cell address=0;samp::amx::cell* destination=nullptr;
                if(amx_memory::allot(&vm.amx_,capacity,&address,&destination)!=0 || !destination) {
                    valid=false;break;
                }
                amx_string::set_string(destination,text,0,0,static_cast<std::uint32_t>(capacity));
                storage[index]=address;
            } else if(format[index]=='a') {
                samp::amx::cell* source=nullptr;
                if(amx_memory::get_address(&vm.amx_,value,&source)!=0 || !source) {
                    valid=false;break;
                }
                if(index+1>=format_length) {valid=false;break;}
                samp::amx::cell* length_cell=nullptr;
                if(amx_memory::get_address(&vm.amx_,args[4+index+1],&length_cell)!=0 || !length_cell) {
                    valid=false;break;
                }
                const cell cells=*length_cell;
                if(cells<0 || static_cast<std::int64_t>(value)+static_cast<std::int64_t>(cells)*4>vm.amx_.stp) {valid=false;break;}
                cell address=0;samp::amx::cell* destination=nullptr;
                if(amx_memory::allot(&vm.amx_,static_cast<int>(cells),&address,&destination)!=0 || !destination) {
                    valid=false;break;
                }
                for(cell i=0;i<cells;++i) destination[i]=source[i];
                storage[index]=address;
            } else {
                samp::amx::cell* scalar=nullptr;
                if(amx_memory::get_address(&vm.amx_,value,&scalar)!=0 || !scalar) {
                    valid=false;break;
                }
                storage[index]=*scalar;
            }
        }
        if(!valid) return 0;
        const auto id=++host.next_script_timer_;
        auto& timer=host.script_timers_[id];
        timer.owner=&vm;timer.callback=std::string(name).substr(0,255);
        timer.interval=timer.remaining=args[1];timer.repeat=args[2]!=0;timer.killed=false;
        timer.arguments=std::move(storage);
        return std::bit_cast<cell>(id);
    };
    // Official: FUN_00473210 @ 0x00473210 (samp-server.exe)
    vm.native_functions_["KillTimer"]=[&host](std::span<const cell> args)->cell {
        if(!args.empty()) if(const auto timer=host.script_timers_.find(static_cast<std::uint32_t>(args[0]));timer!=host.script_timers_.end()) {
            timer->second.remaining=0;timer->second.repeat=false;timer->second.killed=true;
        }
        return 1;
    };
    for (const auto& [name, function] : core_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    for (const auto& [name, function] : property_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    for (const auto& [name, function] : time_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }
    vm.native_functions_["GetTickCount"] = [](std::span<const cell>) -> cell {
        using namespace std::chrono;
        return static_cast<cell>(
            duration_cast<milliseconds>(steady_clock::now().time_since_epoch()).count());
    };
    for (const auto& [name, function] : string_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the floats
    for (const auto& [name, function] : float_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the files
    for (const auto& [name, function] : file_natives::kNatives) {
        vm.native_functions_[std::string(name)] = [&vm, function](std::span<const cell> args) {
            return function(&vm.amx_, args);
        };
    }

    // ------------------------------------------------------------- the server
    vm.native_functions_["SetGameModeText"] = [&host, read_script_string](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            const char* text = read_script_string(args[0]);
            host.set_game_mode_text(text != nullptr ? text : "");
        }
        return 0;
    };
    // Official: FUN_0046feb0 @ 0x0046feb0 (samp-server.exe)
    vm.native_functions_["GameModeExit"]=[&host](std::span<const cell>)->cell {
        if(host.select_gamemode({})) host.gamemode_exit_requested_=true;
        else {
            constexpr auto message="The gamemode finished and I couldn't start another script.";
            if(host.log_message_) host.log_message_(message);else std::puts(message);
            std::fflush(nullptr);std::exit(1);
        }
        return 0;
    };
    vm.native_functions_["GetMaxPlayers"] = [&host](std::span<const cell>) -> cell {
        return host.max_players();
    };
    vm.native_functions_["GetPlayerPoolSize"] = [&host](std::span<const cell>) -> cell {
        return host.max_players();
    };
    // Official: FUN_00472f50 @ 0x00472f50 (samp-server.exe)
    vm.native_functions_["SetWorldTime"] = [&host](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            host.set_world_time(args[0]);
        }
        return 1;
    };
    // Official: FUN_00473f20 @ 0x00473f20 (samp-server.exe)
    vm.native_functions_["SetWeather"] = [&host](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            host.set_weather(args[0]);
        }
        return 1;
    };
    // Official: FUN_004740f0 @ 0x004740f0 (samp-server.exe)
    vm.native_functions_["SetGravity"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.empty()) return 0;
        host.set_gravity(as_float(args[0]));
        return 1;
    };
    // Official: FUN_00474b30 @ 0x00474b30 (samp-server.exe)
    vm.native_functions_["GetGravity"] = [&host,as_cell](std::span<const cell>) -> cell {
        return as_cell(host.gravity_);
    };
    // Official: FUN_00473460 @ 0x00473460 (samp-server.exe)
    vm.native_functions_["ShowNameTags"] = [&host](std::span<const cell> args) -> cell {
        if(args.empty()) return 0;host.show_name_tags_=args[0]!=0;return 1;
    };
    // Official: FUN_00473480 @ 0x00473480 (samp-server.exe)
    vm.native_functions_["ShowPlayerMarkers"] = [&host](std::span<const cell> args) -> cell {
        if(args.empty()) return 0;host.player_marker_mode_=args[0];return 1;
    };
    // Official: FUN_00475eb0 @ 0x00475eb0 (samp-server.exe)
    vm.native_functions_["EnableZoneNames"] = [&host](std::span<const cell>) -> cell {
        constexpr std::string_view warning="[warning] EnableZoneNames() is removed since 0.3";
        if(host.log_message_) host.log_message_(warning);else std::puts(std::string(warning).c_str());
        return 1;
    };
    // Official: FUN_004777f0 @ 0x004777f0 (samp-server.exe)
    vm.native_functions_["DisableInteriorEnterExits"] = [&host](std::span<const cell>) -> cell {
        host.interior_enter_exits_disabled_=true;
        return 1;
    };
    // Official: FUN_00477800 @ 0x00477800 (samp-server.exe)
    vm.native_functions_["SetNameTagDrawDistance"] = [&host,as_float](std::span<const cell> args) -> cell {
        if(args.empty()) return 0;
        host.name_tag_draw_distance_=as_float(args[0]);
        return 1;
    };
    // Official: FUN_00477640 @ 0x00477640 (samp-server.exe)
    vm.native_functions_["EnableStuntBonusForAll"] = [&host](std::span<const cell> args) -> cell {
        if(args.empty()) return 0;host.stunt_bonus_enabled_=args[0]==1;
        // The original normalizes the live argument cell as well.
        const_cast<cell&>(args[0])=host.stunt_bonus_enabled_?1:0;
        samp::proto::BitStream payload;if(host.stunt_bonus_enabled_) payload.write1();else payload.write0();
        for(const auto& player:host.players_) if(player.in_use && player.peer) host.send_rpc(*player.peer,104,payload);
        return 1;
    };
    const auto zone_valid=[&host](cell id) -> GangZoneNativeState* {
        const auto index=static_cast<std::uint16_t>(id);
        return index<host.gang_zones_.size() && host.gang_zones_[index].active
            ? &host.gang_zones_[index] : nullptr;
    };
    const auto bswap32=[](std::uint32_t value) -> std::uint32_t {
        return (value>>24)|((value>>8)&0x0000ff00u)|((value<<8)&0x00ff0000u)|(value<<24);
    };
    const auto send_zone_to=[&host](int player,std::uint8_t rpc_id,const samp::proto::BitStream& payload) -> bool {
        if(player<0 || static_cast<std::size_t>(player)>=host.players_.size()) return false;
        auto& p=host.players_[static_cast<std::size_t>(player)];
        if(!p.in_use || !p.peer) return false;
        host.send_rpc(*p.peer,rpc_id,payload);
        return true;
    };
    const auto send_zone_all=[&host](std::uint8_t rpc_id,const samp::proto::BitStream& payload) {
        for(const auto& player:host.players_)
            if(player.in_use && player.joined && player.peer)
                host.send_rpc(*player.peer,rpc_id,payload);
    };
    // Official: FUN_0047a230 @ 0x0047a230 (samp-server.exe)
    vm.native_functions_["SetPlayerWorldBounds"]=[&host,player_slot](std::span<const cell> args)->cell {
        if(args.size()<5) return 0;
        auto* p=player_slot(args[0]);if(!p || !p->peer) return 0;
        samp::proto::BitStream payload;
        payload.write(&args[1],4); // x_max
        payload.write(&args[2],4); // x_min
        payload.write(&args[3],4); // y_max
        payload.write(&args[4],4); // y_min
        host.send_rpc(*p->peer,17,payload);
        return 1;
    };
    // Official: FUN_0047d130 @ 0x0047d130 (samp-server.exe)
    vm.native_functions_["SetPlayerMapIcon"]=[&host,player_slot](std::span<const cell> args)->cell {
        if(args.size()<8) return 0;
        const std::uint8_t icon=static_cast<std::uint8_t>(args[1]);
        if(icon>=100) return 0;
        auto* p=player_slot(args[0]);if(!p || !p->peer) return 0;
        samp::proto::BitStream payload;
        payload.write(&icon,1);
        payload.write(&args[2],12); // x,y,z
        const std::uint8_t type=static_cast<std::uint8_t>(args[5]);
        payload.write(&type,1);
        payload.write(&args[6],4); // colour raw
        const std::uint8_t style=static_cast<std::uint8_t>(args[7]);
        payload.write(&style,1);
        host.send_rpc(*p->peer,56,payload);
        return 1;
    };
    // Official: FUN_0047d2c0 @ 0x0047d2c0 (samp-server.exe)
    vm.native_functions_["RemovePlayerMapIcon"]=[&host,player_slot](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        const std::uint8_t icon=static_cast<std::uint8_t>(args[1]);
        if(icon>=100) return 0;
        auto* p=player_slot(args[0]);if(!p || !p->peer) return 0;
        samp::proto::BitStream payload;
        payload.write(&icon,1);
        host.send_rpc(*p->peer,144,payload);
        return 1;
    };
    // Official: FUN_004771a0 @ 0x004771a0 (samp-server.exe)
    vm.native_functions_["GangZoneCreate"]=[&host,as_float](std::span<const cell> args)->cell {
        if(args.size()<4) return -1;
        for(std::size_t id=0;id<host.gang_zones_.size();++id) {
            if(!host.gang_zones_[id].active) {
                auto& z=host.gang_zones_[id];
                z.active=true;
                for(int i=0;i<4;++i) z.bounds[i]=as_float(args[i]);
                return static_cast<cell>(id);
            }
        }
        return -1; // 0xffffffff: no free slot
    };
    // Official: FUN_004771e0 @ 0x004771e0 (samp-server.exe)
    vm.native_functions_["GangZoneDestroy"]=[&host,zone_valid,send_zone_all](std::span<const cell> args)->cell {
        if(args.empty()) return 0;
        auto* z=zone_valid(args[0]);if(!z) return 0;
        z->active=false;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[0]);
        payload.write(&id,2);
        send_zone_all(120,payload); // hide-for-all
        return 1;
    };
    // Official: FUN_00477220 @ 0x00477220 (samp-server.exe)
    vm.native_functions_["GangZoneShowForPlayer"]=[&host,player_slot,zone_valid,bswap32](std::span<const cell> args)->cell {
        if(args.size()<3) return 0;
        auto* p=player_slot(args[0]);auto* z=zone_valid(args[1]);
        if(!p || !p->peer || !z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[1]);
        payload.write(&id,2);
        for(float value:z->bounds) payload.write(&value,4);
        const std::uint32_t colour=bswap32(static_cast<std::uint32_t>(args[2]));
        payload.write(&colour,4);
        host.send_rpc(*p->peer,108,payload);
        return 1;
    };
    // Official: FUN_00477290 @ 0x00477290 (samp-server.exe)
    vm.native_functions_["GangZoneShowForAll"]=[&host,zone_valid,bswap32,send_zone_all](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        auto* z=zone_valid(args[0]);if(!z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[0]);
        payload.write(&id,2);
        for(float value:z->bounds) payload.write(&value,4);
        const std::uint32_t colour=bswap32(static_cast<std::uint32_t>(args[1]));
        payload.write(&colour,4);
        send_zone_all(108,payload);
        return 1;
    };
    // Official: FUN_004772d0 @ 0x004772d0 (samp-server.exe)
    vm.native_functions_["GangZoneHideForPlayer"]=[&host,player_slot,zone_valid](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        auto* p=player_slot(args[0]);auto* z=zone_valid(args[1]);
        if(!p || !p->peer || !z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[1]);
        payload.write(&id,2);
        host.send_rpc(*p->peer,120,payload);
        return 1;
    };
    // Official: FUN_00477330 @ 0x00477330 (samp-server.exe)
    vm.native_functions_["GangZoneHideForAll"]=[&host,zone_valid,send_zone_all](std::span<const cell> args)->cell {
        if(args.empty()) return 0;
        auto* z=zone_valid(args[0]);if(!z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[0]);
        payload.write(&id,2);
        send_zone_all(120,payload);
        return 1;
    };
    // Official: FUN_00477370 @ 0x00477370 (samp-server.exe)
    vm.native_functions_["GangZoneFlashForPlayer"]=[&host,player_slot,zone_valid,bswap32](std::span<const cell> args)->cell {
        if(args.size()<3) return 0;
        auto* p=player_slot(args[0]);auto* z=zone_valid(args[1]);
        if(!p || !p->peer || !z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[1]);
        payload.write(&id,2);
        const std::uint32_t colour=bswap32(static_cast<std::uint32_t>(args[2]));
        payload.write(&colour,4);
        host.send_rpc(*p->peer,121,payload);
        return 1;
    };
    // Official: FUN_004773e0 @ 0x004773e0 (samp-server.exe)
    vm.native_functions_["GangZoneFlashForAll"]=[&host,zone_valid,bswap32,send_zone_all](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        auto* z=zone_valid(args[0]);if(!z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[0]);
        payload.write(&id,2);
        const std::uint32_t colour=bswap32(static_cast<std::uint32_t>(args[1]));
        payload.write(&colour,4);
        send_zone_all(121,payload);
        return 1;
    };
    // Official: FUN_00477420 @ 0x00477420 (samp-server.exe)
    vm.native_functions_["GangZoneStopFlashForPlayer"]=[&host,player_slot,zone_valid](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        auto* p=player_slot(args[0]);auto* z=zone_valid(args[1]);
        if(!p || !p->peer || !z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[1]);
        payload.write(&id,2);
        host.send_rpc(*p->peer,85,payload);
        return 1;
    };
    // Official: FUN_00477480 @ 0x00477480 (samp-server.exe)
    vm.native_functions_["GangZoneStopFlashForAll"]=[&host,zone_valid,send_zone_all](std::span<const cell> args)->cell {
        if(args.empty()) return 0;
        auto* z=zone_valid(args[0]);if(!z) return 0;
        samp::proto::BitStream payload;
        const std::uint16_t id=static_cast<std::uint16_t>(args[0]);
        payload.write(&id,2);
        send_zone_all(85,payload);
        return 1;
    };
    vm.native_functions_["SetPlayerInterior"] = [&host](std::span<const cell> args) -> cell {
        if (args.size() >= 2) {
            host.set_player_interior(args[0], args[1]);
        }
        return 1;
    };
    vm.native_functions_["SetPlayerPos"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() >= 4) {
            host.set_player_pos(args[0], as_float(args[1]), as_float(args[2]),
                                as_float(args[3]));
        }
        return 1;
    };
    vm.native_functions_["SetPlayerFacingAngle"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() >= 2) {
            host.set_player_facing_angle(args[0], as_float(args[1]));
        }
        return 1;
    };
    vm.native_functions_["SetPlayerCameraPos"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() >= 4) {
            host.set_camera_pos(args[0], as_float(args[1]), as_float(args[2]),
                                as_float(args[3]));
        }
        return 1;
    };
    vm.native_functions_["SetPlayerCameraLookAt"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() >= 4) {
            // The fifth argument is the transition of the camera, CAMERA_CUT
            // (2) when the script leaves it out.
            const int cut = args.size() >= 5 ? args[4] : 2;
            host.set_camera_look_at(args[0], as_float(args[1]), as_float(args[2]),
                                    as_float(args[3]), cut);
        }
        return 1;
    };
    vm.native_functions_["TogglePlayerClock"] = [&host](std::span<const cell> args) -> cell {
        if (args.size() >= 2) {
            host.toggle_player_clock(args[0], args[1] != 0);
        }
        return 1;
    };
    vm.native_functions_["TogglePlayerSpectating"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["AllowAdminTeleport"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["PlayerPlaySound"] = [](std::span<const cell>) -> cell { return 0; };
    // Official: FUN_0047b970 @ 0x0047b970 (samp-server.exe)
    vm.native_functions_["GameTextForPlayer"] = [&host,player_slot,read_script_string](std::span<const cell> args) -> cell {
        if (args.size() < 4) return 0;
        auto* player = player_slot(args[0]);
        if (!player || !player->peer) return 0;
        const auto* text = read_script_string(args[1]);
        if (!text || !*text) return 0;
        const auto length = static_cast<std::uint32_t>(std::strlen(text));
        samp::proto::BitStream payload;
        payload.write(&args[3],4);
        payload.write(&args[2],4);
        payload.write(&length,4);
        payload.write(text,length);
        host.send_rpc(*player->peer,73,payload);
        return 1;
    };
    // Native owners: GetPlayerState 0x00472e00, GetPlayerWeapon 0x00473c40.
    vm.native_functions_["GetPlayerState"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p ? p->state : 0;
    };
    vm.native_functions_["GetPlayerWeapon"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p ? p->weapon & 0x3f : -1;
    };
    // Native owner: GetPlayerMoney 0x00472b40; money arithmetic wraps cells.
    vm.native_functions_["GetPlayerMoney"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p ? p->money : 0;
    };
    // Official: FUN_00471370 @ 0x00471370 (samp-server.exe)
    vm.native_functions_["GetPlayerName"]=[player_slot,store_cell](std::span<const cell> args)->cell {
        const auto* player=args.size()<3?nullptr:player_slot(args[0]);if(!player) return 0;
        const auto capacity=static_cast<std::uint32_t>(args[2]);
        const auto count=capacity?std::min<std::size_t>(player->name.size(),capacity-1u):0;
        for(std::size_t i=0;i<=count;++i) {
            const auto address=std::int64_t(args[1])+static_cast<std::int64_t>(i)*4;
            if(address<0 || address>INT32_MAX || !store_cell(static_cast<cell>(address),
                i<count?static_cast<signed char>(player->name[i]):0)) return 0;
        }
        return static_cast<cell>(count);
    };
    // Official: FUN_00472ad0 @ 0x00472ad0 (samp-server.exe)
    vm.native_functions_["SetPlayerScore"]=[player_slot](std::span<const cell> args)->cell {
        auto* player=args.size()<2?nullptr:player_slot(args[0]);if(!player) return 0;
        player->score=args[1];return 1;
    };
    // Official: FUN_00472b10 @ 0x00472b10 (samp-server.exe)
    vm.native_functions_["GetPlayerScore"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?player->score:0;
    };
    // Native owner: GetPlayerKeys 0x00473e30, valid only in states 1/2/3/9.
    vm.native_functions_["GetPlayerKeys"] = [player_slot, store_cell](std::span<const cell> args) -> cell {
        auto* p = args.size() < 4 ? nullptr : player_slot(args[0]);
        if (!p || (p->state != 1 && p->state != 2 && p->state != 3 && p->state != 9)) return 0;
        return store_cell(args[1], std::bit_cast<cell>(p->keys)) &&
               store_cell(args[2], p->up_down) && store_cell(args[3], p->left_right);
    };
    // Native owners: ResetPlayerMoney 0x00472b70, GivePlayerMoney 0x0047c710.
    vm.native_functions_["ResetPlayerMoney"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.empty() ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        p->money = 0; samp::proto::BitStream payload; host.send_rpc(*p->peer, 20, payload); return 1;
    };
    vm.native_functions_["GivePlayerMoney"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.size() < 2 ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        p->money = std::bit_cast<cell>(static_cast<std::uint32_t>(p->money) + static_cast<std::uint32_t>(args[1]));
        samp::proto::BitStream payload; payload.write(&args[1], 4); host.send_rpc(*p->peer, 18, payload); return 1;
    };
    // Native owners: GivePlayerWeapon 0x0047ca00, SetPlayerArmedWeapon
    // 0x0047caf0 and ResetPlayerWeapons 0x00472e90. These send commands; cached
    // weapon state remains the last synchronization reported by the client.
    vm.native_functions_["GivePlayerWeapon"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.size() < 3 ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        samp::proto::BitStream payload; payload.write(&args[1], 4); payload.write(&args[2], 4);
        host.send_rpc(*p->peer, 22, payload); return 1;
    };
    vm.native_functions_["SetPlayerArmedWeapon"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.size() < 2 ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        samp::proto::BitStream payload; payload.write(&args[1], 4); host.send_rpc(*p->peer, 67, payload); return 1;
    };
    vm.native_functions_["ResetPlayerWeapons"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.empty() ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        samp::proto::BitStream payload; host.send_rpc(*p->peer, 21, payload); return 1;
    };
    // Native owners: SetPlayerHealth 0x0047b090 / GetPlayerHealth 0x004711b0.
    vm.native_functions_["SetPlayerHealth"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.size() < 2 ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        samp::proto::BitStream payload; payload.write(&args[1], 4); host.send_rpc(*p->peer, 14, payload); return 1;
    };
    vm.native_functions_["GetPlayerHealth"] = [player_slot, store_cell, as_cell](std::span<const cell> args) -> cell {
        const auto* p = args.size() < 2 ? nullptr : player_slot(args[0]);
        return p && store_cell(args[1], as_cell(p->health));
    };
    // Native owners: SetPlayerArmour 0x0047cf30 / GetPlayerArmour 0x00473dd0.
    vm.native_functions_["SetPlayerArmour"] = [&host, player_slot](std::span<const cell> args) -> cell {
        auto* p = args.size() < 2 ? nullptr : player_slot(args[0]); if (!p || !p->peer) return 0;
        samp::proto::BitStream payload; payload.write(&args[1], 4); host.send_rpc(*p->peer, 66, payload); return 1;
    };
    vm.native_functions_["GetPlayerArmour"] = [player_slot, store_cell, as_cell](std::span<const cell> args) -> cell {
        const auto* p = args.size() < 2 ? nullptr : player_slot(args[0]);
        return p && store_cell(args[1], as_cell(p->armour));
    };
    // Native owners: GetPlayerPos 0x00470ff0 / GetPlayerFacingAngle 0x00472e30.
    vm.native_functions_["GetPlayerPos"] = [player_slot, store_cell, as_cell](std::span<const cell> args) -> cell {
        const auto* p = args.size() < 4 ? nullptr : player_slot(args[0]); if (!p) return 0;
        return store_cell(args[1], as_cell(p->x)) && store_cell(args[2], as_cell(p->y)) && store_cell(args[3], as_cell(p->z));
    };
    vm.native_functions_["GetPlayerFacingAngle"] = [player_slot, store_cell, as_cell](std::span<const cell> args) -> cell {
        const auto* p = args.size() < 2 ? nullptr : player_slot(args[0]); return p && store_cell(args[1], as_cell(p->angle));
    };
    // Native owner: GetPlayerVelocity 0x00477830 writes zeroes and returns 0
    // outside the on-foot state (including invalid players).
    vm.native_functions_["GetPlayerVelocity"] = [player_slot, store_cell, as_cell](std::span<const cell> args) -> cell {
        if (args.size() < 4) return 0;
        const auto* p = player_slot(args[0]); const bool valid = p && p->state == 1;
        const bool stored = store_cell(args[1], as_cell(valid ? p->vx : 0)) &&
            store_cell(args[2], as_cell(valid ? p->vy : 0)) && store_cell(args[3], as_cell(valid ? p->vz : 0));
        return valid && stored;
    };
    vm.native_functions_["IsPlayerNPC"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p && p->is_npc;
    };
    vm.native_functions_["IsPlayerConnected"] = [&host](std::span<const cell> args) -> cell {
        return !args.empty() && host.is_player_connected(args[0]);
    };
    vm.native_functions_["GetPlayerInterior"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p ? p->interior : 0;
    };
    vm.native_functions_["GetPlayerVirtualWorld"] = [player_slot](std::span<const cell> args) -> cell {
        const auto* p = args.empty() ? nullptr : player_slot(args[0]); return p ? p->virtual_world : 0;
    };
    vm.native_functions_["Kick"] = [&host](std::span<const cell> args) -> cell {
        if (!args.empty()) {
            host.kick_player(args[0]);
        }
        return 0;
    };
    // 00471b70 returns1 after sending to a connected ushort player slot.
    vm.native_functions_["SendClientMessage"] = [&host, read_script_string,player_slot](std::span<const cell> args) -> cell {
        if(args.size()<3 || !player_slot(args[0])) return 0;
        const char* text=read_script_string(args[2]);if(!text) return 0;
        host.send_client_message(static_cast<std::uint16_t>(args[0]),args[1],text);
        return 1;
    };
    // Official: FUN_00471c40 @ 0x00471c40 (samp-server.exe)
    vm.native_functions_["SendClientMessageToAll"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;
        const char* text=read_script_string(args[1]);
        for(const auto& player:host.players_) if(player.in_use && player.peer)
            host.send_client_message(player.id,args[0],text?text:"");
        return 1;
    };
    // Official: FUN_0047b650 @ 0x0047b650 (samp-server.exe)
    vm.native_functions_["SendDeathMessage"]=[&host](std::span<const cell> args)->cell {
        if(args.size()<3) return 0;
        const auto killer=static_cast<std::uint16_t>(args[0]),victim=static_cast<std::uint16_t>(args[1]);
        const auto weapon=static_cast<std::uint8_t>(args[2]);samp::proto::BitStream payload;
        payload.write(&killer,2);payload.write(&victim,2);payload.write(&weapon,1);
        for(const auto& player:host.players_) if(player.in_use && player.peer) host.send_rpc(*player.peer,55,payload);
        return 1;
    };
    // Official: FUN_004707e0 @ 0x004707e0 (samp-server.exe)
    vm.native_functions_["AddStaticPickup"]=[&host,as_float](std::span<const cell> args)->cell {
        if(args.size()<5) return 0;
        for(auto& pickup:host.pickups_) if(!pickup.active) {
            pickup.active=true;pickup.model=args[0];pickup.type=args[1];pickup.world=args.size()>5?args[5]:0;
            for(unsigned i=0;i<3;++i) pickup.position[i]=as_float(args[2+i]);
            return 1; // AddStaticPickup exposes success, not the allocated slot.
        }
        return 0;
    };
    // ------------------------------------------------------- the class list
    //
    // AddPlayerClass(modelid, Float:x, Float:y, Float:z, Float:angle,
    //                weapon1, weapon1_ammo, weapon2, weapon2_ammo,
    //                weapon3, weapon3_ammo)
    vm.native_functions_["AddPlayerClass"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() < 11) {
            return 0;
        }
        PlayerClassSpec spec;
        spec.model = args[0];
        spec.x = as_float(args[1]);
        spec.y = as_float(args[2]);
        spec.z = as_float(args[3]);
        spec.angle = as_float(args[4]);
        for (int i = 0; i < 3; ++i) {
            spec.weapon[i] = args[5 + i * 2];
            spec.ammunition[i] = args[6 + i * 2];
        }
        host.add_player_class(spec);
        return 1;
    };
    // AddPlayerClassEx(teamid, modelid, Float:x, ...): the same with a team.
    vm.native_functions_["AddPlayerClassEx"] = [&host, as_float](std::span<const cell> args) -> cell {
        if (args.size() < 12) {
            return 0;
        }
        PlayerClassSpec spec;
        spec.team = args[0];
        spec.model = args[1];
        spec.x = as_float(args[2]);
        spec.y = as_float(args[3]);
        spec.z = as_float(args[4]);
        spec.angle = as_float(args[5]);
        for (int i = 0; i < 3; ++i) {
            spec.weapon[i] = args[6 + i * 2];
            spec.ammunition[i] = args[7 + i * 2];
        }
        host.add_player_class(spec);
        return 1;
    };
    // 00467530: vehicle IDs 1..1999, models 400..611; no slot returns 0xffff.
    const auto vehicle_slot = [&host](cell id) -> VehicleNativeState* {
        const auto index=static_cast<std::uint16_t>(id);
        return index<host.vehicles_.size() && host.vehicles_[index].active?&host.vehicles_[index]:nullptr;
    };
    const auto create_vehicle = [&host,as_float](std::span<const cell> args, bool dynamic) -> cell {
        if(args.size()<7) return 0xffff;
        if(dynamic && (args[0]==537 || args[0]==538)) return 0;
        if(args[0]<400 || args[0]>611) return 0xffff;
        auto make=[&](int model,cell delay,bool siren) -> cell {
            for(std::size_t id=1;id<host.vehicles_.size();++id) {
                if(host.vehicles_[id].active) continue;
                auto& v=host.vehicles_[id];v=VehicleNativeState{};
                v.active=true;v.id=static_cast<std::uint16_t>(id);v.model=model;
                v.x=v.spawn_x=as_float(args[1]);v.y=v.spawn_y=as_float(args[2]);v.z=v.spawn_z=as_float(args[3]);
                v.angle=v.spawn_angle=as_float(args[4]);v.colour1=args[5];v.colour2=args[6];
                v.respawn_delay=delay;v.siren=siren;
                v.respawn_x=v.x;v.respawn_y=v.y;v.respawn_z=v.z;v.respawn_angle=v.angle;
                v.created_ms=v.last_occupied_ms=static_cast<std::uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
                    std::chrono::steady_clock::now().time_since_epoch()).count());
                return static_cast<cell>(id);
            }
            return 0xffff;
        };
        const cell delay=args.size()>7?args[7]:120;
        const auto first=make(args[0],delay,args.size()>8 && args[8]!=0);
        if(!dynamic && (args[0]==537 || args[0]==538))
            for(int i=0;i<3;++i) make(args[0]==537?569:570,-1,false);
        return first;
    };
    // Native owners: 004717e0, 00470070 and 004701c0.
    vm.native_functions_["CreateVehicle"]=[create_vehicle](auto args)->cell{return create_vehicle(args,true);};
    vm.native_functions_["AddStaticVehicle"]=[create_vehicle](auto args)->cell{return create_vehicle(args,false);};
    vm.native_functions_["AddStaticVehicleEx"]=[create_vehicle](auto args)->cell{return create_vehicle(args,false);};
    // 004718b0 -> 004677d0 broadcasts removal and frees all per-player holds.
    vm.native_functions_["DestroyVehicle"]=[&host,vehicle_slot](std::span<const cell> args)->cell {
        auto* v=args.empty()?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        const auto id=v->id;samp::proto::BitStream payload;payload.write(&id,2);
        for(auto& p:host.players_) {
            if(p.in_use && p.peer && id<p.streamed_vehicles.size() && p.streamed_vehicles[id]) {
                host.send_rpc(*p.peer,165,payload);p.streamed_vehicles[id]=0;
                if(p.streamed_vehicle_count) --p.streamed_vehicle_count;
            }
            if(p.vehicle_id==id) {p.vehicle_id=0;p.vehicle_seat=0;}
        }
        *v=VehicleNativeState{};return 1;
    };
    // Native owners: 004718f0, 00474180 and 00470fb0.
    vm.native_functions_["GetVehiclePos"]=[vehicle_slot,store_cell,as_cell](std::span<const cell> args)->cell {
        const auto* v=args.size()<4?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        return store_cell(args[1],as_cell(v->x)) && store_cell(args[2],as_cell(v->y)) && store_cell(args[3],as_cell(v->z));
    };
    vm.native_functions_["GetVehicleHealth"]=[vehicle_slot,store_cell,as_cell](std::span<const cell> args)->cell {
        const auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);return v && store_cell(args[1],as_cell(v->health));
    };
    vm.native_functions_["GetVehicleVirtualWorld"]=[vehicle_slot](std::span<const cell> args)->cell {
        const auto* v=args.empty()?nullptr:vehicle_slot(args[0]);return v?v->virtual_world:0;
    };
    vm.native_functions_["SetVehicleVirtualWorld"]=[vehicle_slot](std::span<const cell> args)->cell {
        auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);if(!v) return 0;v->virtual_world=args[1];return 1;
    };
    // 00474110 -> 00489c40: update observed vehicle health and streamed clients.
    vm.native_functions_["SetVehicleHealth"]=[&host,vehicle_slot,as_float](std::span<const cell> args)->cell {
        auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        v->health=as_float(args[1]);samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&args[1],4);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id])
            host.send_rpc(*p.peer,147,payload);
        return 1;
    };
    // 00471980 / 00489d10: position changes the spawn/current position together.
    vm.native_functions_["SetVehiclePos"]=[&host,vehicle_slot,as_float](std::span<const cell> args)->cell {
        auto* v=args.size()<4?nullptr:vehicle_slot(args[0]);if(!v) return 0;
        v->x=v->spawn_x=as_float(args[1]);v->y=v->spawn_y=as_float(args[2]);v->z=v->spawn_z=as_float(args[3]);
        samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&args[1],12);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id]) {
            host.send_rpc(*p.peer,159,payload);
            if(v->driver==p.id) {p.x=v->x;p.y=v->y;p.z=v->z;}
        }
        return 1;
    };
    // Native owner 0047a120: interior is metadata/engine placement, not a world visibility filter.
    vm.native_functions_["LinkVehicleToInterior"]=[&host,vehicle_slot](std::span<const cell> args)->cell {
        auto* v=args.size()<2?nullptr:vehicle_slot(args[0]);if(!v) return 0;v->interior=static_cast<std::uint8_t>(args[1]);
        samp::proto::BitStream payload;payload.write(&v->id,2);payload.write(&v->interior,1);
        for(auto& p:host.players_) if(p.in_use && p.peer && v->id<p.streamed_vehicles.size() && p.streamed_vehicles[v->id])
            host.send_rpc(*p.peer,65,payload);
        return 1;
    };
    // 0047b180 ensures the vehicle is streamed before the targeted RPC 70.
    vm.native_functions_["PutPlayerInVehicle"]=[&host,player_slot,vehicle_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<3?nullptr:player_slot(args[0]);auto* v=args.size()<3?nullptr:vehicle_slot(args[1]);
        if(!p || !v || !p->peer) return 0;
        host.send_vehicle_stream_in(*p,*v);
        p->vehicle_id=v->id;p->x=v->x;p->y=v->y;p->z=v->z;
        if(args[2]==0) v->driver=p->id;
        samp::proto::BitStream payload;payload.write(&v->id,2);const auto seat=static_cast<std::uint8_t>(args[2]);payload.write(&seat,1);
        host.send_rpc(*p->peer,70,payload);return 1;
    };
    // Native owner 00471210 sends a command; state changes on subsequent sync.
    vm.native_functions_["RemovePlayerFromVehicle"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.empty()?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        samp::proto::BitStream payload;host.send_rpc(*p->peer,71,payload);return 1;
    };
    vm.native_functions_["GetPlayerVehicleID"]=[player_slot](std::span<const cell> args)->cell {
        const auto* p=args.empty()?nullptr:player_slot(args[0]);return p?p->vehicle_id:0;
    };
    vm.native_functions_["GetPlayerVehicleSeat"]=[player_slot](std::span<const cell> args)->cell {
        const auto* p=args.empty()?nullptr:player_slot(args[0]);return p && (p->state==2 || p->state==3)?p->vehicle_seat:-1;
    };
    // 00470ee0 -> 00466a20: the RPC is sent only for a changed virtual world.
    vm.native_functions_["SetPlayerVirtualWorld"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<2?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        if(p->virtual_world!=args[1]) {
            if(host.artwork_enabled_ && args[1]!=0) p->models_ready=false;
            p->virtual_world=args[1];samp::proto::BitStream payload;payload.write(&args[1],4);host.send_rpc(*p->peer,48,payload);
        }
        return 1;
    };
    // 00472d30 returns the signed low 16 bits of ammunition.
    vm.native_functions_["GetPlayerWeaponData"]=[player_slot,store_cell](std::span<const cell> args)->cell {
        auto* p=args.size()<4?nullptr:player_slot(args[0]);const auto slot=args.size()<2?255:static_cast<std::uint8_t>(args[1]);
        return p && slot<13 && store_cell(args[2],p->weapons[slot]) && store_cell(args[3],static_cast<std::int16_t>(p->ammunition[slot]));
    };


    // The text draws are not implemented yet; the natives exist so that the
    // stock scripts load.
    vm.native_functions_["TextDrawCreate"] = [](std::span<const cell>) -> cell { return -1; };
    vm.native_functions_["TextDrawSetString"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawLetterSize"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawTextSize"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawAlignment"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawColor"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawUseBox"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawBoxColor"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawSetShadow"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawSetOutline"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawBackgroundColor"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawFont"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawShowForPlayer"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawHideForPlayer"] = [](std::span<const cell>) -> cell { return 0; };
    vm.native_functions_["TextDrawDestroy"] = [](std::span<const cell>) -> cell { return 0; };

    // 00472c50 delegates slot selection to the original 004841a0 table.
    vm.native_functions_["GetPlayerAmmo"]=[player_slot](std::span<const cell> args)->cell {
        const auto* p=args.empty()?nullptr:player_slot(args[0]);if(!p) return 0;
        constexpr int slots[]{0,0,1,1,1,1,1,1,1,1,10,10,10,10,10,10,8,8,8,-1,-1,-1,
            2,2,2,3,3,3,4,4,5,5,4,6,6,7,7,7,7,8,12,9,9,9,11,11,11};
        const auto weapon=p->weapon&0x3f;
        if(weapon>=std::size(slots) || slots[weapon]<0) return 0;
        return static_cast<std::int16_t>(p->ammunition[slots[weapon]]);
    };
    // 00470c00 stores spawn info, authorizes the spawn, then sends RPC 68.
    vm.native_functions_["SetSpawnInfo"]=[&host,player_slot,as_float](std::span<const cell> args)->cell {
        auto* p=args.size()<13?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        auto& spec=p->spawn_info;spec.team=args[1];spec.model=args[2];spec.custom_model=0;
        // 00470c67..00470c9e: resolve a registered custom skin's stock base.
        if(host.artwork_enabled_ && spec.model>20000) for(const auto& entry:host.models_) {
            if(entry.spec.new_id==spec.model) {
                spec.custom_model=static_cast<std::uint32_t>(spec.model);spec.model=entry.spec.base_id;break;
            }
        }
        p->team=static_cast<std::uint8_t>(spec.team);p->skin=spec.model;p->custom_model=spec.custom_model;
        spec.x=as_float(args[3]);spec.y=as_float(args[4]);spec.z=as_float(args[5]);spec.angle=as_float(args[6]);
        for(int i=0;i<3;++i) {spec.weapon[i]=args[7+i*2];spec.ammunition[i]=args[8+i*2];}
        p->has_spawn_info=p->spawn_authorized=true;
        samp::proto::BitStream payload;const auto team=static_cast<std::uint8_t>(spec.team);
        const auto custom=spec.custom_model;const std::uint8_t extra=0;
        payload.write(&team,1);payload.write(&spec.model,4);payload.write(&custom,4);payload.write(&extra,1);
        payload.write(&spec.x,4);payload.write(&spec.y,4);payload.write(&spec.z,4);payload.write(&spec.angle,4);
        payload.write(spec.weapon,12);payload.write(spec.ammunition,12);host.send_rpc(*p->peer,68,payload);return 1;
    };

    // 0047a380 authorizes a forced spawn and sends RPC129's DWORD answer2.
    vm.native_functions_["SpawnPlayer"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.empty()?nullptr:player_slot(args[0]);if(!p || !p->peer) return 0;
        p->spawn_authorized=true;
        const std::uint32_t forced=2;samp::proto::BitStream payload;payload.write(&forced,4);
        host.send_rpc(*p->peer,129,payload);return 1;
    };

    // Official native wrappers 00479bf0 / 00479cf0 / 00479df0 delegate
    // registration to 00497170. Character entries are global; object entries
    // retain the supplied virtual world. Timed values narrow to bytes.
    vm.native_functions_["AddCharModel"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<4 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[2]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=1;spec.virtual_world=-1;spec.base_id=args[0];spec.new_id=args[1];spec.model_file=dff;
        const auto* txd=read_script_string(args[3]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        return host.add_custom_model(spec);
    };
    vm.native_functions_["AddSimpleModel"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<5 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[3]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=2;spec.virtual_world=args[0];spec.base_id=args[1];spec.new_id=args[2];spec.model_file=dff;
        const auto* txd=read_script_string(args[4]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        return host.add_custom_model(spec);
    };
    vm.native_functions_["AddSimpleModelTimed"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<7 || !host.artwork_enabled_) return 0;
        const auto* dff=read_script_string(args[3]);if(!dff || !*dff) return 0;
        CustomModelSpec spec;spec.kind=2;spec.virtual_world=args[0];spec.base_id=args[1];spec.new_id=args[2];spec.model_file=dff;
        const auto* txd=read_script_string(args[4]);if(!txd || !*txd) return 0;spec.texture_file=txd;
        spec.time_on=static_cast<std::uint8_t>(args[5]);spec.time_off=static_cast<std::uint8_t>(args[6]);
        return host.add_custom_model(spec);
    };
    const auto filename_from_crc=[&host,store_cell](std::span<const cell> args,bool texture)->cell {
        if(args.size()<3 || !host.artwork_enabled_) return 0;
        const auto crc=static_cast<std::uint32_t>(args[0]);
        const auto found=std::find_if(host.models_.begin(),host.models_.end(),[=](const auto& model){
            return (texture?model.texture_crc:model.model_crc)==crc;
        });
        if(found==host.models_.end()) return 0;
        const auto& name=texture?found->spec.texture_file:found->spec.model_file;
        if(args[2]<=0) return 1;
        const auto count=std::min<std::size_t>(name.size(),static_cast<std::uint32_t>(args[2])-1u);
        for(std::size_t i=0;i<=count;++i) {
            const auto address=std::int64_t(args[1])+static_cast<std::int64_t>(i)*4;
            if(address<0 || address>INT32_MAX || !store_cell(static_cast<cell>(address),i<count?static_cast<unsigned char>(name[i]):0)) return 0;
        }
        return 1;
    };
    // 00479f10 / 00479f70 find the first CRC match and write unpacked cells.
    vm.native_functions_["FindModelFileNameFromCRC"]=[filename_from_crc](auto args)->cell{return filename_from_crc(args,false);};
    vm.native_functions_["FindTextureFileNameFromCRC"]=[filename_from_crc](auto args)->cell{return filename_from_crc(args,true);};
    // 00479fe0 / 0047a0c0: live player checks, URL redirect and custom-skin query.
    vm.native_functions_["RedirectDownload"]=[&host,read_script_string](std::span<const cell> args)->cell {
        if(args.size()<2) return 0;const auto* url=read_script_string(args[1]);
        return url && *url && host.redirect_download(static_cast<std::uint16_t>(args[0]),url);
    };
    vm.native_functions_["GetPlayerCustomSkin"]=[player_slot](std::span<const cell> args)->cell {
        const auto* player=args.empty()?nullptr:player_slot(args[0]);return player?static_cast<cell>(player->custom_model):0;
    };

    // 0047a6b0 resolves the skin, updates the authoritative spawn slot,
    // sends RPC153 to the player and its stream observers, then RPC68 locally.
    vm.native_functions_["SetPlayerSkin"]=[&host,player_slot](std::span<const cell> args)->cell {
        auto* p=args.size()<2?nullptr:player_slot(args[0]);if(!p) return 0;
        p->skin=static_cast<std::uint32_t>(args[1]);p->custom_model=0;
        if(host.artwork_enabled_ && args[1]>20000) for(const auto& entry:host.models_) {
            if(entry.spec.new_id==args[1]) {p->skin=entry.spec.base_id;p->custom_model=args[1];break;}
        }
        p->spawn_info.model=static_cast<int>(p->skin);p->spawn_info.custom_model=p->custom_model;
        if(!p->has_spawn_info) return 1;
        samp::proto::BitStream payload;const auto id=static_cast<std::uint16_t>(p->id);
        payload.write(&id,2);payload.write(&p->skin,4);payload.write(&p->custom_model,4);
        for(auto& receiver:host.players_) if(receiver.in_use && receiver.peer &&
            (receiver.id==p->id || (id<receiver.streamed_to.size() && receiver.streamed_to[id])))
            host.send_rpc(*receiver.peer,153,payload);
        if(p->peer) {
            const auto& spec=p->spawn_info;const auto team=static_cast<std::uint8_t>(spec.team);const std::uint8_t extra=0;
            samp::proto::BitStream info;info.write(&team,1);info.write(&spec.model,4);info.write(&spec.custom_model,4);info.write(&extra,1);
            info.write(&spec.x,4);info.write(&spec.y,4);info.write(&spec.z,4);info.write(&spec.angle,4);
            info.write(spec.weapon,12);info.write(spec.ammunition,12);host.send_rpc(*p->peer,68,info);
        }
        return 1;
    };
    // 00470ea0 reads the stock/base model from the authoritative spawn slot.
    vm.native_functions_["GetPlayerSkin"]=[player_slot](std::span<const cell> args)->cell {
        const auto* p=args.empty()?nullptr:player_slot(args[0]);return p?static_cast<cell>(p->skin):0;
    };

    // Essential global objects are needed to exercise AddSimpleModel through
    // real Pawn callers. Allocation465380 searches slots1..1999;474b40 sends44.
    const auto object_slot=[&host](cell id)->ObjectNativeState* {
        const auto index=static_cast<std::uint16_t>(id);
        return index<host.objects_.size() && host.objects_[index].active?&host.objects_[index]:nullptr;
    };
    vm.native_functions_["CreateObject"]=[&host,as_float](std::span<const cell> args)->cell {
        if(args.size()<8) return 0xffff;
        for(std::size_t id=1;id<host.objects_.size();++id) if(!host.objects_[id].active) {
            auto& object=host.objects_[id];object={};object.active=true;object.id=static_cast<std::uint16_t>(id);object.model=args[0];
            for(int i=0;i<3;++i) {object.position[i]=as_float(args[1+i]);object.rotation[i]=as_float(args[4+i]);}
            object.draw_distance=as_float(args[7]);
            for(auto& player:host.players_) if(player.in_use && player.peer) host.send_object(player,object);
            return static_cast<cell>(id);
        }
        return 0xffff;
    };
    // 0047dd60 broadcasts destroy47 after releasing the authoritative slot.
    vm.native_functions_["DestroyObject"]=[&host,object_slot](std::span<const cell> args)->cell {
        auto* object=args.empty()?nullptr:object_slot(args[0]);if(!object) return 0;
        const auto id=object->id;object->active=false;samp::proto::BitStream payload;payload.write(&id,2);
        for(auto& player:host.players_) if(player.in_use && player.peer) {
            host.send_rpc(*player.peer,47,payload);
            if(id<player.streamed_objects.size()) player.streamed_objects[id]=0;
        }
        return 1;
    };
    // 00475460 /00475390 preserve invalid-object results0 /-1.
    vm.native_functions_["IsValidObject"]=[object_slot](std::span<const cell> args)->cell {return !args.empty() && object_slot(args[0]);};
    vm.native_functions_["GetObjectModel"]=[object_slot](std::span<const cell> args)->cell {
        const auto* object=args.empty()?nullptr:object_slot(args[0]);return object?object->model:-1;
    };
    // 0047dab0 /0047dc10 update the stored transform and broadcast45/46.
    const auto set_object_transform=[&host,object_slot,as_float](std::span<const cell> args,bool rotation)->cell {
        auto* object=args.size()<4?nullptr:object_slot(args[0]);if(!object) return 1;
        auto& values=rotation?object->rotation:object->position;
        for(int i=0;i<3;++i) values[i]=as_float(args[1+i]);
        samp::proto::BitStream payload;payload.write(&object->id,2);payload.write(values.data(),12);
        for(auto& player:host.players_) if(player.in_use && player.peer) host.send_rpc(*player.peer,rotation?46:45,payload);
        return 1;
    };
    vm.native_functions_["SetObjectPos"]=[set_object_transform](auto args)->cell{return set_object_transform(args,false);};
    vm.native_functions_["SetObjectRot"]=[set_object_transform](auto args)->cell{return set_object_transform(args,true);};
    // 00475260 /004752f0 write unpacked float cells through AMX references.
    const auto get_object_transform=[object_slot,store_cell](std::span<const cell> args,bool rotation)->cell {
        const auto* object=args.size()<4?nullptr:object_slot(args[0]);if(!object) return 0;
        const auto& values=rotation?object->rotation:object->position;
        for(int i=0;i<3;++i) if(!store_cell(args[1+i],std::bit_cast<cell>(values[i]))) return 0;
        return 1;
    };
    vm.native_functions_["GetObjectPos"]=[get_object_transform](auto args)->cell{return get_object_transform(args,false);};
    vm.native_functions_["GetObjectRot"]=[get_object_transform](auto args)->cell{return get_object_transform(args,true);};

    // ------------------------------------------------------------- the db
    // The 18 SQLite natives of a_sampdb.inc (backed by the vendored 3.7.0).
    register_db_natives(vm);
}

}  // namespace samp::pawn

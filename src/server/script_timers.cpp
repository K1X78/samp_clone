#include "samp/server/game_layer.hpp"
#include <bit>
#include <optional>

namespace samp::server {

// Official: FUN_00483320 @ 0x00483320 (samp-server.exe)
void GameLayer::process_script_timers(std::uint32_t elapsed_ms) {
    for(auto cursor=script_timers_.begin();cursor!=script_timers_.end();) {
        const auto id=cursor->first;auto next=cursor;++next;
        const std::optional<std::uint32_t> next_id=next==script_timers_.end()?std::nullopt:std::optional{next->first};
        auto current=script_timers_.find(id);
        auto& timer=current->second;
        timer.remaining=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(timer.remaining)-elapsed_ms);
        if(timer.remaining<=0) {
        if(!timer.killed && timer.owner) {
            const auto callback=timer.callback;auto* owner=timer.owner;
            const auto arguments=timer.arguments;
            samp::amx::cell result=0;owner->execute(callback,arguments,result);
        }
        // Callbacks may cancel timers or remove their owning script.
        current=script_timers_.find(id);
        if(current!=script_timers_.end()) {
            if(current->second.repeat) current->second.remaining=current->second.interval;
            else script_timers_.erase(current);
        }
        }
        cursor=next_id?script_timers_.lower_bound(*next_id):script_timers_.end();
    }
}

// Official: FUN_00482ec0 @ 0x00482ec0 (samp-server.exe)
void GameLayer::remove_script_timers(samp::pawn::PawnVm* script) {
    for(auto current=script_timers_.begin();current!=script_timers_.end();)
        if(current->second.owner==script) current=script_timers_.erase(current);
        else ++current;
}
}

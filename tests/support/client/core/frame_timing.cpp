#include "samp/client/frame_timing.hpp"
#include <bit>

namespace samp::client {
// source adapter only; no established separate native entry
// Includes the called9fe50 rotation and9fed0 delay operations. The limiter's
// special task test is the exact AC8F0 predicate, not a vehicle-mode guess.
void process_frame_timing(FrameTimingState& state,FrameTimingHost& host) {
    const auto now=host.milliseconds();
    if(!state.rate_start) {
        state.time_step=1.f;state.scaled_time_step=3.f;
        state.rate_start=state.last_frame=host.milliseconds();
        host.apply(state.time_step,state.scaled_time_step,0xff,true);return;
    }
    const auto rotation_now=host.milliseconds();
    const bool rotate_initialized=state.rotation_start!=0;
    if(!state.rotation_start) state.rotation_start=rotation_now;
    else if(std::bit_cast<std::int32_t>(rotation_now-state.rotation_start)>30) {
        state.rotation=static_cast<std::uint8_t>((state.rotation+1)%5);state.rotation_start=rotation_now;
    }
    ++state.frames;
    const bool update_step=std::bit_cast<std::int32_t>(now-state.rate_start)>250;
    if(update_step) {
        const auto rate=std::bit_cast<std::int32_t>((state.frames-1u)*4u);
        state.time_step=rate>16?50.f/static_cast<float>(rate):3.f;
        state.scaled_time_step=state.time_step*3.f;
        state.rate_start=host.milliseconds();state.frames=0;
    }
    host.apply(state.time_step,state.scaled_time_step,rotate_initialized?state.rotation:0xff,update_step);
    const auto elapsed=std::bit_cast<std::int32_t>(now-state.last_frame);
    const bool enabled=host.frame_limiter();
    if(host.special_task_268()) {
        if(enabled && static_cast<unsigned>(state.limit)<=45u) {
            if(elapsed && state.limit && elapsed<1000/state.limit)
                host.sleep(static_cast<std::uint32_t>(1000/state.limit-elapsed-1));
        } else if(elapsed && elapsed<22) host.sleep(static_cast<std::uint32_t>(21-elapsed));
    } else if(enabled) {
        if(elapsed && state.limit && elapsed<1000/state.limit)
            host.sleep(static_cast<std::uint32_t>(1000/state.limit-elapsed-1));
    } else if(elapsed && elapsed<11) host.sleep(static_cast<std::uint32_t>(10-elapsed));
    state.last_frame=host.milliseconds();
}
}

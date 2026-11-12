#pragma once
#include <cstdint>
#include <functional>

namespace samp::client {
struct FrameTimingState {
    std::uint32_t rate_start=0,last_frame=0,frames=0,rotation_start=0;
    std::uint8_t rotation=0;
    int limit=90;
    float time_step=1.f,scaled_time_step=3.f;
};
struct FrameTimingHost {
    std::function<std::uint32_t()> milliseconds;
    std::function<void(std::uint32_t)> sleep;
    std::function<void(float,float,std::uint8_t,bool)> apply;
    std::function<bool()> frame_limiter,special_task_268;
};
void process_frame_timing(FrameTimingState&,FrameTimingHost&);
}

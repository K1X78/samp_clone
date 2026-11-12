#include "samp/client/render/gui_scrollbar.hpp"

#include <bit>

namespace samp::client::render {
// Official: FUN_10084da0 @ 0x10084da0 (samp.dll)
void update_gui_scrollbar_thumb(GuiScrollbar& bar) {
    const auto range = std::bit_cast<std::int32_t>(
        static_cast<std::uint32_t>(bar.maximum) - static_cast<std::uint32_t>(bar.minimum));
    if(bar.page_size<range) {
        const auto track_height = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bar.track.bottom) -
            static_cast<std::uint32_t>(bar.track.top));
        const auto scaled = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(track_height) *
            static_cast<std::uint32_t>(bar.page_size)) / range;
        const auto thumb_height=scaled<9?8:scaled;
        bar.thumb_visible=1;
        const auto available_height = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(track_height) -
            static_cast<std::uint32_t>(thumb_height));
        const auto position_offset = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bar.position) -
            static_cast<std::uint32_t>(bar.minimum));
        const auto scaled_offset = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(available_height) *
            static_cast<std::uint32_t>(position_offset));
        const auto scrollable_range = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(range) -
            static_cast<std::uint32_t>(bar.page_size));
        const auto fraction = scaled_offset / scrollable_range;
        bar.thumb.top = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(fraction) +
            static_cast<std::uint32_t>(bar.track.top));
        bar.thumb.bottom = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bar.thumb.top) +
            static_cast<std::uint32_t>(thumb_height));
    } else {
        bar.thumb_visible=0;
        bar.thumb.bottom=bar.thumb.top;
    }
}
// Official: FUN_10084e30 @ 0x10084e30 (samp.dll)
void show_gui_scrollbar_item(GuiScrollbar& bar,std::int32_t item) {
    if(item<0) item=0;
    if(item>=bar.maximum) item=std::bit_cast<std::int32_t>(
        static_cast<std::uint32_t>(bar.maximum) + static_cast<std::uint32_t>(-1));
    if(item<bar.position) bar.position=item;
    else if(item>=std::bit_cast<std::int32_t>(
                static_cast<std::uint32_t>(bar.position) +
                static_cast<std::uint32_t>(bar.page_size))) {
        const auto before_page = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(item) - static_cast<std::uint32_t>(bar.page_size));
        bar.position = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(before_page) + 1u);
    }
    update_gui_scrollbar_thumb(bar);
}
// Official: FUN_10084e80 @ 0x10084e80 (samp.dll)
void clamp_gui_scrollbar_position(GuiScrollbar& bar) {
    const auto range = std::bit_cast<std::int32_t>(
        static_cast<std::uint32_t>(bar.maximum) - static_cast<std::uint32_t>(bar.minimum));
    if(bar.position>=bar.minimum && bar.page_size<range) {
        if(std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(bar.page_size) +
                                       static_cast<std::uint32_t>(bar.position)) <= bar.maximum) return;
        bar.position = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bar.maximum) - static_cast<std::uint32_t>(bar.page_size));
    } else bar.position=bar.minimum;
}
} // namespace samp::client::render

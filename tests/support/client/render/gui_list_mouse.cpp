#include "samp/client/render/gui_list_mouse.hpp"

#include <algorithm>
#include <bit>

namespace samp::client::render {
// Official: FUN_1008a6e0 @ 0x1008a6e0 (samp.dll)
bool gui_list_mouse(GuiListMouse& state,std::uint32_t message,std::int32_t x,std::int32_t y,
                    std::uint32_t buttons,std::uint32_t parameter,GuiListMouseHost& host) {
    if(!state.enabled || !state.visible) return false;
    if(message==0x201 && !state.focused) host.focus(state.parent,state);
    if(host.scrollbar_mouse(state,message,x,y,buttons,parameter)) return true;
    const auto count=[&] {return static_cast<std::int32_t>(state.items.size());};
    if(message==0x201 || message==0x203) {
        const bool inside=x>=state.hit_rectangle.left && x<state.hit_rectangle.right &&
                          y>=state.hit_rectangle.top && y<state.hit_rectangle.bottom;
        if(count()<=0 || !inside) return false;
        const auto relative_y=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(y)-static_cast<std::uint32_t>(state.text_top));
        const auto row=state.row_height?std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(relative_y/state.row_height)+
            static_cast<std::uint32_t>(state.scrollbar.position)):-1;
        const auto position=state.scrollbar.position;
        const auto page_end=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(position)+static_cast<std::uint32_t>(state.scrollbar.page_size));
        if(row<position || row>=count() || row>=page_end) return true;
        host.capture(host.main_window());
        if(message==0x203) {
            host.event(state.parent,0x701,true,state);
            return true;
        }
        state.selected=row;
        if(!(buttons&4)) state.anchor=row;
        if(state.flags&1) {
            switch(buttons&0xc) {
            case 8:
                (*state.items[static_cast<std::size_t>(row)]).selected=
                    (*state.items[static_cast<std::size_t>(row)]).selected?0:1;
                host.event(state.parent,0x702,true,state);
                return true;
            case 4: {
                const auto first=std::min(state.anchor,row),last=std::max(state.anchor,row);
                for(std::int32_t index=0;index<first;++index)
                    (*state.items[static_cast<std::size_t>(index)]).selected=0;
                for(auto index=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(last)+1u);
                    index<count();++index)
                    (*state.items[static_cast<std::size_t>(index)]).selected=0;
                for(auto index=first;index<=last;++index)
                    (*state.items[static_cast<std::size_t>(index)]).selected=1;
                host.event(state.parent,0x702,true,state);
                return true;
            }
            case 0xc: {
                const auto first=std::min(state.anchor,row),last=std::max(state.anchor,row);
                const auto anchor_selected=(*state.items[static_cast<std::size_t>(state.anchor)]).selected;
                for(auto index=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(first)+1u);
                    index<last;++index)
                    (*state.items[static_cast<std::size_t>(index)]).selected=anchor_selected;
                (*state.items[static_cast<std::size_t>(row)]).selected=1;
                state.selected=state.anchor;
                host.event(state.parent,0x702,true,state);
                return true;
            }
            default:
                for(auto* entry:state.items) entry->selected=0;
                (*state.items[static_cast<std::size_t>(row)]).selected=1;
                break;
            }
        }
        host.event(state.parent,0x702,true,state);
        return true;
    }
    if(message==0x202) {
        host.release_capture();
        state.dragging=0;
        if(state.selected>=count() || state.selected==-1) return false;
        const auto first=std::min(state.anchor,state.selected),last=std::max(state.anchor,state.selected);
        for(auto index=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(first)+1u);
            index<last;++index)
            (*state.items[static_cast<std::size_t>(index)]).selected=
                (*state.items[static_cast<std::size_t>(state.anchor)]).selected;
        (*state.items[static_cast<std::size_t>(state.selected)]).selected=
            (*state.items[static_cast<std::size_t>(state.anchor)]).selected;
        if(state.anchor!=state.selected) host.event(state.parent,0x702,true,state);
        return false;
    }
    if(message==0x200 && state.dragging) {
        const auto relative_y=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(y)-static_cast<std::uint32_t>(state.text_top));
        const auto row=state.row_height?std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(relative_y/state.row_height)+
            static_cast<std::uint32_t>(state.scrollbar.position)):-1;
        const auto position=state.scrollbar.position;
        const auto page_end=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(position)+static_cast<std::uint32_t>(state.scrollbar.page_size));
        if(row>=position && row<count() && row<page_end) {
            state.selected=row;
            host.event(state.parent,0x702,true,state);
        } else if(row<position) {
            host.scroll_by(state,-1);
            state.selected=state.scrollbar.position;
            host.event(state.parent,0x702,true,state);
        } else if(row>=page_end) {
            host.scroll_by(state,1);
            const auto visible_end=std::bit_cast<std::int32_t>(
                static_cast<std::uint32_t>(state.scrollbar.position)+
                static_cast<std::uint32_t>(state.scrollbar.page_size));
            const auto last_visible=std::min(visible_end,count());
            state.selected=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(last_visible)-1u);
            host.event(state.parent,0x702,true,state);
        }
        return false;
    }
    if(message==0x20a) {
        // The native API output aliases the message argument. A failing
        // SystemParametersInfo call leaves 0x20a as the line-count multiplier.
        auto lines=message;
        host.wheel_scroll_lines(lines);
        const auto wheel=std::bit_cast<std::int16_t>(static_cast<std::uint16_t>(buttons>>16));
        const auto notches=-(static_cast<std::int32_t>(wheel)/120);
        const auto delta=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(notches)*lines);
        host.scroll_by(state,delta);
        return true;
    }
    return false;
}
} // namespace samp::client::render

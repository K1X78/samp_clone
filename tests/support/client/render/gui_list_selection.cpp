#include "samp/client/render/gui_list_selection.hpp"

#include <algorithm>
#include <bit>

namespace samp::client::render {
// Official: FUN_100888f0 @ 0x100888f0 (samp.dll)
std::int32_t gui_list_selected_index(const GuiListSelection& state,std::int32_t start) {
    if(start < -1) return -1;
    if(!(state.flags&1)) return state.selected;
    const auto count=static_cast<std::int32_t>(state.items.size());
    for(auto index=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(start)+1u);index<count;++index)
        if(state.items[static_cast<std::size_t>(index)]->selected) return index;
    return -1;
}
// Official: FUN_1008a470 @ 0x1008a470 (samp.dll)
void set_gui_list_selected_index(GuiListSelection& state,std::int32_t index,GuiListSelectionHost& host) {
    if(state.items.empty()) return;
    const auto previous=state.selected;
    state.selected=std::clamp(index,0,static_cast<std::int32_t>(state.items.size())-1);
    if(previous!=state.selected) {
        if(state.flags&1) state.items[static_cast<std::size_t>(state.selected)]->selected=1;
        state.anchor=state.selected;
        show_gui_scrollbar_item(state.scrollbar,state.selected);
    }
    // Unlike the keyboard handler, the setter notifies even when unchanged.
    host.event(state.parent,0x702,true,state);
}
// Official: FUN_1008a500 @ 0x1008a500 (samp.dll)
bool gui_list_keyboard(GuiListSelection& state,std::uint32_t message,std::uint32_t key,
                       std::uint32_t parameter,GuiListSelectionHost& host) {
    if(!state.enabled || !state.visible) return false;
    if(host.scrollbar_keyboard(state,message,key,parameter)) return true;
    if(message!=0x100) return false;
    switch(key) {
    case 0x21:case 0x22:case 0x23:case 0x24:case 0x26:case 0x28:break;
    default:return false;
    }
    if(state.items.empty()) return true;
    const auto previous=state.selected;
    switch(key) {
    case 0x21: {
        const auto page_start=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(state.selected)-
            static_cast<std::uint32_t>(state.scrollbar.page_size));
        state.selected=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(page_start)+1u);
        break;
    }
    case 0x22: {
        const auto page_end=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(state.selected)+
            static_cast<std::uint32_t>(state.scrollbar.page_size));
        state.selected=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(page_end)-1u);
        break;
    }
    case 0x23:state.selected=static_cast<std::int32_t>(state.items.size())-1;break;
    case 0x24:state.selected=0;break;
    case 0x26:state.selected=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(state.selected)-1u);break;
    case 0x28:state.selected=std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(state.selected)+1u);break;
    }
    state.selected=std::clamp(state.selected,0,static_cast<std::int32_t>(state.items.size())-1);
    if(previous==state.selected) return true;
    if(state.flags&1) {
        for(auto* item:state.items) item->selected=0;
        if(host.key_state(0x10)<0) {
            const auto first=std::min(state.anchor,state.selected),last=std::max(state.anchor,state.selected);
            for(auto index=first;index<=last;++index) state.items[static_cast<std::size_t>(index)]->selected=1;
        } else {
            state.items[static_cast<std::size_t>(state.selected)]->selected=1;
            state.anchor=state.selected;
        }
    } else state.anchor=state.selected;
    show_gui_scrollbar_item(state.scrollbar,state.selected);
    host.event(state.parent,0x702,true,state);
    return true;
}
} // namespace samp::client::render

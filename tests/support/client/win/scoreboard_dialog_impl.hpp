#pragma once

#include "scoreboard_dialog.hpp"
#include "samp/client/render/gui_list_mouse.hpp"
#include "samp/client/render/gui_list_selection.hpp"
#include "samp/client/render/scoreboard_layout.hpp"
#include "samp/client/render/scoreboard_list.hpp"

#include <algorithm>
#include <array>
#include <bit>
#include <cstdint>
#include <string>
#include <vector>

namespace samp::client {

struct ScoreboardDialog::Impl final {
    struct Item {
        std::uint32_t id{}, colour{};
        std::string id_text;
        std::array<std::string, 3> cells;
    };

    render::ScoreboardLayout layout;
    render::ScoreboardListState state;
    render::ScoreboardListHost list_host;
    render::ScoreboardLayoutHost layout_host;
    render::ScoreboardPlayers pool;
    render::ScoreboardListContext context{true,&pool};
    std::array<render::ScoreboardParticipant,1005> records;
    std::array<std::string,1005> names;
    std::array<std::uint32_t,1005> colours{};
    std::vector<Item> items;
    std::array<render::GuiListSelectionItem,1005> selection_items{};
    std::array<render::GuiListSelectionItem*,1005> selection_item_ptrs{};
    std::size_t selection_item_count{};
    render::GuiListMouse input;
    render::GuiListSelectionHost selection_host;
    render::GuiListMouseHost mouse_host;
    std::uint64_t model_hash{};
    bool model_ready{};
    std::int32_t selected{-1}, top{}, page{1};
    int client_width{},client_height{},row_height{18};
    render::ScoreboardRect bounds{},text_bounds{};
    HMODULE library{};
    void* font{};
    void* sprite{};
    IDirect3DTexture9* texture{};

    // Official: FUN_10088700 @ 0x10088700 (samp.dll)
    void update_layout(int width,int height) {
        client_width=width;client_height=height;
        layout.device=nullptr;
        layout.dialog=layout.list=nullptr;
        layout.state_3c=0;
        layout.sort_mode=0;
        layout.cached_player_count=0;
        if(width>800) {layout.width=800.0f;layout.height=600.0f;}
        else {layout.width=640.0f;layout.height=480.0f;}
        layout.inset_1c=60.0f;
        layout.columns={0.0f,std::bit_cast<float>(0x3dae147bu),
                        std::bit_cast<float>(0x3e880000u),std::bit_cast<float>(0x3ee00000u)};
        render::ScoreboardRect client_rectangle{};
        layout_host.client_rectangle(client_rectangle);
        layout.scale=1.0f;
        layout.x=static_cast<float>(static_cast<double>(client_rectangle.right)*0.5-
                                    static_cast<double>(layout.width)*0.5);
        layout.y=static_cast<float>(static_cast<double>(client_rectangle.bottom)*0.5-
                                    static_cast<double>(layout.height)*0.5);
        layout.visible=0;
        bounds.left=render::truncate_coordinate(layout.x);
        bounds.right=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bounds.left)+
            static_cast<std::uint32_t>(render::truncate_coordinate(layout.width)));
        bounds.top=render::truncate_coordinate(layout.y);
        bounds.bottom=std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(bounds.top)+
            static_cast<std::uint32_t>(render::truncate_coordinate(layout.height)));
        // 0x10088700: reserve 16px for the scrollbar, inset6, then text inset5.
        text_bounds={bounds.left+11,bounds.top+66,bounds.right-27,bounds.bottom-6};
        page=std::max(1,(text_bounds.bottom-text_bounds.top)/row_height);
        list_host.clamp_scrollbar(this);
    }
};

}  // namespace samp::client

#pragma once

#include <array>
#include <cstddef>
#include <cstdint>
#include <functional>

namespace samp::client::render {

struct ScoreboardParticipant {
    std::int32_t score{}, npc{};
    void* player{};
    std::uint32_t ping{};
};
struct ScoreboardPlayers {
    std::uint16_t local_id{};
    const char* local_name{};
    void* local_player{};
    std::int32_t local_score{};
    std::uint32_t local_ping{};
    std::array<ScoreboardParticipant*, 1005> participants{};
    std::array<std::int32_t, 1004> connected{};
};
struct ScoreboardListContext {
    bool network_present{};
    ScoreboardPlayers* players{};
};
#pragma pack(push, 1)
struct ScoreboardRow {
    std::uint32_t colour{};
    char name[29]{};
    std::uint32_t id{};
    std::int32_t score{};
    std::uint32_t ping{};
};
struct ScoreboardListState {
    std::int32_t visible{}, cached_player_count{};
    std::array<std::byte, 0x2c> geometry_and_device{};
    void* dialog{};
    void* list{};
    std::uint32_t state_3c{};
    std::int32_t sort_mode{}; // 0: id order, 1: name ascending, 2: score descending
};
#pragma pack(pop)
static_assert(sizeof(ScoreboardRow) == 0x2d);
static_assert(offsetof(ScoreboardRow, id) == 0x21);
static_assert(sizeof(void*) != 4 || offsetof(ScoreboardListState, sort_mode) == 0x40);
static_assert(sizeof(void*) != 4 || sizeof(ScoreboardListState) == 0x44);

struct ScoreboardListHost {
    std::function<std::int32_t(void*)> selected_index;
    std::function<void*(void*)> scrollbar;
    std::function<std::int32_t(void*)> scroll_position;
    std::function<void(void*)> clear_list;
    std::function<std::uint32_t(void*)> local_colour;
    std::function<const char*(std::uint16_t)> player_name;
    std::function<std::uint32_t(void*)> remote_colour;
    std::function<void(void*,const char*,std::uint32_t,std::uint32_t)> add_row;
    std::function<bool(void*,std::int32_t)> row_exists;
    std::function<void(void*,std::int32_t,std::int32_t,const char*)> set_cell;
    std::function<void(void*,std::int32_t)> select_index;
    std::function<void(void*,std::int32_t)> set_scroll_position;
    std::function<void(void*)> clamp_scrollbar;
    std::function<void(void*)> update_scrollbar;
    std::function<void(void*,bool)> set_dialog_visible;
    std::function<void(void*,bool)> set_list_visible;
    std::function<void(void*,bool)> set_list_enabled;
    std::function<void(void*)> update_list_geometry;
    std::function<void(std::int32_t,std::int32_t)> cursor_mode;
};

// Compatibility adapter; the native CScoreboard::Update owner at 0x1006e760
// is already implemented in scoreboard.cpp. A connected slot must have a
// participant record when excluding NPCs.
void refresh_scoreboard_rows(ScoreboardListState&, ScoreboardListContext&, ScoreboardListHost&);

} // namespace samp::client::render

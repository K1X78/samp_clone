#include "samp/client/render/scoreboard_list.hpp"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <utility>

namespace samp::client::render {

// source adapter only; no established separate native entry
void refresh_scoreboard_rows(ScoreboardListState& state, ScoreboardListContext& context, ScoreboardListHost& host) {
    if (!context.network_present || !context.players || !state.visible || !state.dialog) return;
    const auto selected = host.selected_index(state.list);
    auto* const scrollbar = host.scrollbar(state.list);
    const auto scroll = host.scroll_position(scrollbar);
    host.clear_list(state.list);
    auto& players = *context.players;
    std::size_t player_count = 1;
    for (std::size_t id = 0; id < players.connected.size(); ++id) {
        if (players.connected[id] == 1 && players.participants[id]->npc == 0) ++player_count;
    }
    const auto count = player_count;
    const auto local_id = players.local_id;
    auto* rows = static_cast<ScoreboardRow*>(std::calloc(count, sizeof(ScoreboardRow)));
    std::strcpy(rows[0].name, players.local_name);
    rows[0].colour = host.local_colour(players.local_player);
    rows[0].score = players.local_score;
    rows[0].ping = players.local_ping;
    rows[0].id = players.local_id;
    std::size_t next = 1;
    for (std::uint16_t id = 0; id < players.connected.size(); ++id) {
        if (players.connected[id] != 1 || id == local_id || players.participants[id]->npc != 0) continue;
        auto& row = rows[next++];
        row.ping = players.participants[id]->ping;
        std::strcpy(row.name, host.player_name(id));
        row.score = players.participants[id]->score;
        row.colour = host.remote_colour(players.participants[id]->player);
        row.id = id;
    }
    if (state.sort_mode == 1 || state.sort_mode == 2) {
        // This stable bubble sort is inside FUN_1006e760. It swaps a full
        // 0x2d-byte row only for strict key comparisons.
        for (std::size_t remaining = count; remaining > 1; --remaining) {
            for (std::size_t i = 0; i + 1 < remaining; ++i) {
                const bool should_swap = state.sort_mode == 1 ?
                    std::strcmp(rows[i + 1].name, rows[i].name) < 0 :
                    rows[i + 1].score > rows[i].score;
                if (should_swap) std::swap(rows[i], rows[i + 1]);
            }
        }
    }
    char text[260];
    for (std::size_t i = 0; i < count; ++i) {
        const auto& row = rows[i];
        std::snprintf(text, sizeof(text), "%u", row.id);
        host.add_row(state.list, text, row.id, row.colour);
        if (host.row_exists(state.list, static_cast<std::int32_t>(i)) && row.name[0]) {
            host.set_cell(state.list, static_cast<std::int32_t>(i), 0, row.name);
            std::snprintf(text, sizeof(text), "%d", row.score);
            host.set_cell(state.list, static_cast<std::int32_t>(i), 1, text);
            std::snprintf(text, sizeof(text), "%u", row.ping);
            host.set_cell(state.list, static_cast<std::int32_t>(i), 2, text);
        }
    }
    host.select_index(state.list, selected < 0 ? -1 : selected);
    std::free(rows);
    host.set_scroll_position(scrollbar, scroll);
    host.clamp_scrollbar(scrollbar);
    host.update_scrollbar(scrollbar);
}

} // namespace samp::client::render

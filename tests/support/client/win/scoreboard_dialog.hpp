#pragma once

#include <windows.h>
#include <d3d9.h>
#include <cstdint>
#include <memory>
#include <span>
#include <string_view>

HRESULT WINAPI samp_d3d_reset(IDirect3DDevice9* device, D3DPRESENT_PARAMETERS* parameters);

namespace samp::client::render { struct FontDrawState; }
namespace samp::client {

struct ScoreboardPlayerView {
    std::uint16_t id{};
    std::string_view name;
    // ARGB, as passed to the native list's row-colour field.
    std::uint32_t colour{};
    std::int32_t score{};
    std::uint32_t ping{};
    bool npc{};
};

// Injected adapter over the recovered layout/population helpers. Native GUI
// atlas assets are reused; this adapter is not a GPU pixel-parity claim.
class ScoreboardDialog {
public:
    friend class ChatHook;
    friend HRESULT WINAPI ::samp_d3d_reset(IDirect3DDevice9*, D3DPRESENT_PARAMETERS*);
    ScoreboardDialog();
    ~ScoreboardDialog();
    ScoreboardDialog(const ScoreboardDialog&) = delete;
    ScoreboardDialog& operator=(const ScoreboardDialog&) = delete;
    bool visible_{};
    void draw(IDirect3DDevice9* device, std::string_view server_name, std::uint16_t local_id,
              std::span<const ScoreboardPlayerView> players, int width, int height,
              render::FontDrawState* fonts);
private:
    struct Impl;
    std::unique_ptr<Impl> impl_;
};
} // namespace samp::client

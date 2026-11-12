#include "samp/client/render/font_resources.hpp"

namespace samp::client::render {

// Shipped 0.3.DL 0x1006abc0 / 0x1006ac00. Each pointer is read immediately
// before its call, so callbacks may replace resources still to be processed.
// source adapter only; no established separate native entry
void font_resources_lost(FontDrawState& state, FontResourceHost& host) {
    for (std::size_t i = 0; i < 4; ++i) host.font_lost(state.fonts[i]);
    host.sprite_lost(state.sprite);
    host.font_lost(state.fonts[4]);
}

// source adapter only; no established separate native entry
void font_resources_reset(FontDrawState& state, FontResourceHost& host) {
    for (std::size_t i = 0; i < 4; ++i) host.font_reset(state.fonts[i]);
    host.sprite_reset(state.sprite);
    host.font_reset(state.fonts[4]);
}

// 0x1006b320. Font ordering and fixed parameters come from fresh native bytes.
// source adapter only; no established separate native entry
void recreate_font_resources(FontDrawState& state, FontResourceHost& host) {
    if (state.device == nullptr) return;
    release_font_resources(state, host);
    const auto height = host.configured_height();
    const auto smaller = host.configured_small_height();
    const auto weight = host.configured_weight();
    const auto face = host.configured_face();
    FontSpecification specification;
    specification.height = height;
    specification.weight = weight;
    specification.face = face;
    void* font;
    host.create_font(state.device, specification, &font);
    state.fonts[0] = host.wrap_font(font);
    host.create_font(state.device, specification, &state.fonts[2]);
    specification.height = smaller;
    host.create_font(state.device, specification, &font);
    state.fonts[1] = host.wrap_font(font);
    host.create_font(state.device, specification, &state.fonts[3]);
    host.create_sprite(state.device, &state.sprite);
    state.scratch = host.allocate_zeroed_scratch(100001);
    specification.height = 38;
    specification.width = 10;
    specification.weight = 700;
    specification.face = "Arial";
    host.create_font(state.device, specification, &state.fonts[4]);
    state.fonts[4] = host.wrap_font(state.fonts[4]);
    TextExtent extent;
    measure_primary_text(state, host, &extent, "Y", 0);
    state.main_height = extent.height;
    measure_small_text(state, host, &extent, "Y", 0);
    state.small_height = extent.height;
}

// source adapter only; no established separate native entry
FontDrawState* initialize_font_resources(FontDrawState& state, FontResourceHost& host, void* device) {
    state.device = device;
    state.fonts[0] = nullptr;
    state.fonts[1] = nullptr;
    state.fonts[2] = nullptr;
    state.fonts[3] = nullptr;
    state.sprite = nullptr;
    state.fonts[4] = nullptr;
    recreate_font_resources(state, host);
    return &state;
}

}  // namespace samp::client::render

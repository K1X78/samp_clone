#include "samp/client/render/death_window.hpp"

#include <bit>
#include <cstring>

namespace samp::client::render {
namespace {
constexpr std::uint32_t black = 0xff000000u;
} // namespace

// source adapter only; no established separate native entry
// The native CDeathWindow::Draw owner is already in deathwindow.cpp.
void render_death_window(DeathWindow& window, DeathWindowHost& host,
                        std::int32_t screen_width, std::int32_t screen_height) {
    const auto add=[](std::int32_t a,std::int32_t b) {
        return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(a)+static_cast<std::uint32_t>(b));
    };
    const auto subtract=[](std::int32_t a,std::int32_t b) {
        return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(a)-static_cast<std::uint32_t>(b));
    };
    auto top = static_cast<std::int32_t>(screen_height * static_cast<double>(0.3f));
    auto left = static_cast<std::int32_t>(screen_width * 0.75);
    const auto total_width = add(window.icon_width, add(window.longest_name_width, window.longest_name_width));
    if (add(left, total_width) > screen_width) left = subtract(screen_width, total_width);
    if (!window.name_font || !window.weapon_font || !window.visible) return;
    host.begin(window.sprite, 0x10);
    auto bottom = add(top, 30);
    for (const auto& entry : window.entries) {
        // Inline the official 0x10069890 glyph lookup, already owned by
        // CDeathWindow::GetWeaponSpriteId in the legacy client.
        const char* weapon_glyph;
        switch (entry.reason) {
        case 0: weapon_glyph = "%"; break;
        case 1: weapon_glyph = "B"; break;
        case 2: weapon_glyph = ">"; break;
        case 3: weapon_glyph = "("; break;
        case 4: weapon_glyph = "C"; break;
        case 5: weapon_glyph = "?"; break;
        case 6: weapon_glyph = "&"; break;
        case 7: weapon_glyph = "\""; break;
        case 8: weapon_glyph = "!"; break;
        case 9: weapon_glyph = "1"; break;
        case 10: case 11: case 12: case 13: weapon_glyph = "E"; break;
        case 14: weapon_glyph = "$"; break;
        case 15: weapon_glyph = "#"; break;
        case 16: weapon_glyph = "@"; break;
        case 17: weapon_glyph = "D"; break;
        case 22: weapon_glyph = "6"; break;
        case 23: weapon_glyph = "2"; break;
        case 24: weapon_glyph = "3"; break;
        case 25: weapon_glyph = "="; break;
        case 26: weapon_glyph = "0"; break;
        case 27: weapon_glyph = "+"; break;
        case 28: weapon_glyph = "I"; break;
        case 29: weapon_glyph = "8"; break;
        case 30: weapon_glyph = "H"; break;
        case 31: weapon_glyph = "5"; break;
        case 32: weapon_glyph = "7"; break;
        case 33: weapon_glyph = "."; break;
        case 34: weapon_glyph = "A"; break;
        case 35: weapon_glyph = "4"; break;
        case 36: weapon_glyph = ")"; break;
        case 37: weapon_glyph = "P"; break;
        case 38: weapon_glyph = "F"; break;
        case 39: weapon_glyph = "<"; break;
        case 40: weapon_glyph = ";"; break;
        case 41: weapon_glyph = "/"; break;
        case 42: weapon_glyph = ","; break;
        case 46: weapon_glyph = ":"; break;
        case 49: weapon_glyph = "L"; break;
        case 50: weapon_glyph = "R"; break;
        case 51: weapon_glyph = "Q"; break;
        case 54: weapon_glyph = "K"; break;
        case 200: case 201: weapon_glyph = "N"; break;
        default: weapon_glyph = "J"; break;
        }
        if (entry.killer[0] && entry.victim[0]) {
            DeathRect measured{};
            host.draw(window.name_font, nullptr, entry.killer, -1, measured, 0x400, 0xffffffffu);
            DeathRect killer_rect{
                add(add(subtract(measured.left, measured.right), left), window.longest_name_width),
                top, add(left, 60), bottom};
            killer_rect.top = add(killer_rect.top, -1);
            host.draw(window.name_font, window.sprite, entry.killer, -1, killer_rect, 0x100, black);
            killer_rect.top = add(killer_rect.top, 2);
            host.draw(window.name_font, window.sprite, entry.killer, -1, killer_rect, 0x100, black);
            killer_rect.top = add(killer_rect.top, -1);
            killer_rect.left = add(killer_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.killer, -1, killer_rect, 0x100, black);
            killer_rect.left = add(killer_rect.left, 2);
            host.draw(window.name_font, window.sprite, entry.killer, -1, killer_rect, 0x100, black);
            killer_rect.left = add(killer_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.killer, -1, killer_rect, 0x100, entry.killer_colour);
            const auto icon_left = add(add(left, window.longest_name_width), 3);
            const auto icon_right = add(icon_left, 35);
            DeathRect weapon_rect{icon_left, top, icon_right, bottom};
            weapon_rect.top = add(weapon_rect.top, -5);
            host.draw(window.outline_font, window.sprite, "G", -1, weapon_rect, 0x100, black);
            host.draw(window.outline_font, window.sprite, "G", -1, weapon_rect, 0x500, black);
            host.draw(window.weapon_font, window.sprite, weapon_glyph, -1, weapon_rect, 0x105, 0xffffffffu);
            DeathRect victim_rect{add(icon_left, window.icon_width), top,
                                  add(icon_right, window.icon_width), bottom};
            victim_rect.top = add(victim_rect.top, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.top = add(victim_rect.top, 2);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.top = add(victim_rect.top, -1);
            victim_rect.left = add(victim_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.left = add(victim_rect.left, 2);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.left = add(victim_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, entry.victim_colour);
        } else if (!entry.killer[0] && entry.victim[0]) {
            DeathRect measured{};
            host.draw(window.name_font, nullptr, entry.victim, -1, measured, 0x400, black);
            DeathRect victim_rect{
                add(add(subtract(measured.left, measured.right), left), window.longest_name_width),
                top, add(left, 60), bottom};
            victim_rect.top = add(victim_rect.top, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.top = add(victim_rect.top, 2);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.top = add(victim_rect.top, -1);
            victim_rect.left = add(victim_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.left = add(victim_rect.left, 2);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, black);
            victim_rect.left = add(victim_rect.left, -1);
            host.draw(window.name_font, window.sprite, entry.victim, -1, victim_rect, 0x100, entry.victim_colour);
            const auto icon_left = add(add(left, window.longest_name_width), 3);
            const auto icon_right = add(icon_left, 35);
            const auto colour = entry.reason == 200 ? 0xff1111aau :
                                entry.reason == 201 ? 0xffaa1111u : 0xffffffffu;
            DeathRect weapon_rect{icon_left, top, icon_right, bottom};
            weapon_rect.top = add(weapon_rect.top, -5);
            host.draw(window.outline_font, window.sprite, "G", -1, weapon_rect, 0x100, black);
            host.draw(window.outline_font, window.sprite, "G", -1, weapon_rect, 0x500, black);
            host.draw(window.weapon_font, window.sprite, weapon_glyph, -1, weapon_rect, 0x105, colour);
        }
        // Empty and killer-only rows still occupy their place in the list.
        top = add(top, add(window.icon_height, 5));
        bottom = add(bottom, add(window.icon_height, 5));
    }
    host.end(window.sprite);
}

// source adapter only; no established separate native entry
// The native CDeathWindow constructor owner is already in deathwindow.cpp.
void initialize_death_window(DeathWindow& window, DeathWindowHost& host, void* device) {
    window.name_font = window.weapon_font = window.outline_font = window.sprite = nullptr;
    window.auxiliary_created = 0;
    window.auxiliary_font = window.auxiliary_outline_font = nullptr;
    window.visible = 1;
    window.device = device;
    if (window.device) {
        // Keep the official ResetFonts sequence inside this construction path;
        // the legacy client owns ResetFonts at 0x10069b90.
        if (window.name_font) { host.release(window.name_font); window.name_font = nullptr; }
        if (window.weapon_font) { host.release(window.weapon_font); window.weapon_font = nullptr; }
        if (window.outline_font) { host.release(window.outline_font); window.outline_font = nullptr; }
        if (window.sprite) { host.release(window.sprite); window.sprite = nullptr; }
        const auto add=[](std::int32_t a,std::int32_t b) {
            return std::bit_cast<std::int32_t>(static_cast<std::uint32_t>(a)+static_cast<std::uint32_t>(b));
        };
        const auto height = host.configured_height();
        host.create_sprite(window.device, window.sprite);
        const auto* face = host.configured_face();
        const auto weight = host.configured_weight();
        const DeathFont name{height, 0, weight, 1, 0, 1, 0, 0, 0, face};
        host.create_font(window.device, name, window.name_font);
        DeathRect longest{};
        if (window.name_font)
            host.draw(window.name_font, nullptr, "LONGESTNICKNICK_NICKNICK", -1, longest, 0x400, black);
        window.longest_name_width = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(longest.right)-static_cast<std::uint32_t>(longest.left));
        host.create_font(window.device, DeathFont{add(height,8),0,400,1,0,2,0,0,0,"GTAWEAPON3"},window.weapon_font);
        host.create_font(window.device, DeathFont{add(height,12),0,400,1,0,2,0,0,0,"GTAWEAPON3"},window.outline_font);
        DeathRect width_rect{0, 0, 100, 100};
        if (window.outline_font)
            host.draw(window.outline_font, nullptr, "G", -1, width_rect, 0x504, black);
        window.icon_width = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(width_rect.right)-static_cast<std::uint32_t>(width_rect.left));
        DeathRect height_rect{0, 0, 100, 100};
        if (window.outline_font)
            host.draw(window.outline_font, nullptr, "G", -1, height_rect, 0x504, black);
        window.icon_height = std::bit_cast<std::int32_t>(
            static_cast<std::uint32_t>(height_rect.bottom)-static_cast<std::uint32_t>(height_rect.top));
    }
    std::memset(window.entries.data(), 0, sizeof(window.entries));
}

} // namespace samp::client::render

#pragma once

#include <cstddef>
#include <cstdint>
#include <functional>

namespace samp::client::render {

struct TextRect {
    std::int32_t left, top, right, bottom;
};
static_assert(sizeof(TextRect) == 16);

struct TextExtent { std::int32_t width, height; };

// The resource prefix read by samp.dll 0.3.DL 0x1006af20.
struct FontDrawState {
    void* fonts[5]{};
    void* sprite = nullptr;
    void* device = nullptr;
    char* scratch = nullptr;  // At least 100001 writable bytes.
    std::int32_t main_height = 0;
    std::int32_t small_height = 0;
};
#if INTPTR_MAX == INT32_MAX
static_assert(offsetof(FontDrawState, sprite) == 0x14);
static_assert(offsetof(FontDrawState, scratch) == 0x1c);
static_assert(offsetof(FontDrawState, main_height) == 0x20);
static_assert(offsetof(FontDrawState, small_height) == 0x24);
#endif

class FontDrawHost {
public:
    virtual ~FontDrawHost() = default;
#if defined(_WIN32)
    std::function<void(void*,std::uint32_t)> begin=[](void* sprite,std::uint32_t flags) {
        using Method=std::int32_t (__stdcall*)(void*,std::uint32_t);
        reinterpret_cast<Method>((*static_cast<void***>(sprite))[8])(sprite,flags);
    };
    std::function<void(void*)> end=[](void* sprite) {
        using Method=std::int32_t (__stdcall*)(void*);
        reinterpret_cast<Method>((*static_cast<void***>(sprite))[11])(sprite);
    };
    std::function<void(void*)> release=[](void* resource) {
        using Method=std::uint32_t (__stdcall*)(void*);
        reinterpret_cast<Method>((*static_cast<void***>(resource))[2])(resource);
    };
    std::function<void(void*,void*,const char*,int,TextRect&,std::uint32_t,std::uint32_t)> draw=
        [](void* font,void* sprite,const char* text,int count,TextRect& rect,
           std::uint32_t flags,std::uint32_t colour) {
            using Method=int (__stdcall*)(void*,void*,const char*,int,TextRect*,std::uint32_t,std::uint32_t);
            reinterpret_cast<Method>((*static_cast<void***>(font))[14])(
                font,sprite,text,count,&rect,flags,colour);
        };
#else
    std::function<void(void*,std::uint32_t)> begin;
    std::function<void(void*)> end;
    std::function<void(void*)> release;
    std::function<void(void*,void*,const char*,int,TextRect&,std::uint32_t,std::uint32_t)> draw;
#endif
};

// Compatibility adapter for CFonts::DrawLittleText, the native owner at
// 0x1006af20 in fontrender.cpp. The
// rectangle is passed by value in the official routine, and remains mutable
// across all five DrawTextA calls (including font-side mutations).
void draw_text(FontDrawState& state, FontDrawHost& host, void* sprite, const char* text,
               TextRect rect, std::uint32_t flags, std::uint32_t colour, bool outline);

// Compatibility adapter for CFonts::DrawText at 0x1006ada0 in fontrender.cpp.
void draw_primary_text(FontDrawState& state, FontDrawHost& host, void* sprite, const char* text,
                       TextRect rect, std::uint32_t colour, bool outline);

// Compatibility adapter for CFonts::~CFonts at 0x1006ab40 in fontrender.cpp.
// Device and
// scratch are not released or cleared by this function.
void release_font_resources(FontDrawState& state, FontDrawHost& host);

// Compatibility adapters for CFonts::GetTextScreenSize/GetLittleTextScreenSize
// at 0x1006ac40 / 0x1006acf0 in fontrender.cpp. They strip color tags, use a null sprite and count -1,
// add DT_CALCRECT (0x400), and return the rectangle differences with x86 wrap.
// A string longer than 100000 bytes returns a zero extent without drawing.
TextExtent* measure_primary_text(FontDrawState& state, FontDrawHost& host, TextExtent* result,
                                 const char* text, std::uint32_t flags);
TextExtent* measure_small_text(FontDrawState& state, FontDrawHost& host, TextExtent* result,
                               const char* text, std::uint32_t flags);

#if defined(_WIN32)
// The default Windows callbacks forward to the original D3DX COM slots.
using D3DXFontDrawHost = FontDrawHost;
#endif

}  // namespace samp::client::render

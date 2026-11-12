#include "samp/client/render/colour_font.hpp"

// Manual recovery of the shipped 0.3.DL x86 instructions and vtables;
// fresh REA observations and native execution scope: colour-font-dl.md/json
// under docs/re/verification. No GPU pixel-parity claim is made here.

#if defined(_WIN32)
#include <cstring>
#include "../runutil.h"

namespace samp::client::render {
namespace {
ColourTextState shared_text;
ColourSpriteProxy shared_sprite;
}  // namespace

// 0.3.DL 0x10073440. The count excludes NUL; the initial clearing supplies it.
// source adapter only; no established separate native entry
void convert_colour_text(const char* text, char16_t* destination, std::uint32_t capacity) {
    std::memset(destination, 0, static_cast<std::uint32_t>(capacity * 2u));
    const int needed = MultiByteToWideChar(CP_ACP, 0, text,
        static_cast<int>(std::strlen(text)), nullptr, 0);
    if (needed < static_cast<std::int32_t>(capacity)) {
        MultiByteToWideChar(CP_ACP, 0, text, static_cast<int>(std::strlen(text)),
                            reinterpret_cast<wchar_t*>(destination), needed);
    }
}

// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::QueryInterface(const void* iid, void** object) {
    using Method = HRESULT (__stdcall*)(void*, const void*, void**);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[0])(font_, iid, object);
}
// source adapter only; no established separate native entry
ULONG __stdcall ColourFontProxy::AddRef() {
    using Method = ULONG (__stdcall*)(void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[1])(font_);
}
// source adapter only; no established separate native entry
ULONG __stdcall ColourFontProxy::Release() {
    using Method = ULONG (__stdcall*)(void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[2])(font_);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::GetDevice(void** device) {
    using Method = HRESULT (__stdcall*)(void*, void**);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[3])(font_, device);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::GetDescA(void* description) {
    using Method = HRESULT (__stdcall*)(void*, void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[4])(font_, description);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::GetDescW(void* description) {
    using Method = HRESULT (__stdcall*)(void*, void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[5])(font_, description);
}
// source adapter only; no established separate native entry
BOOL __stdcall ColourFontProxy::GetTextMetricsA(void* metrics) {
    using Method = BOOL (__stdcall*)(void*, void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[6])(font_, metrics);
}
// source adapter only; no established separate native entry
BOOL __stdcall ColourFontProxy::GetTextMetricsW(void* metrics) {
    using Method = BOOL (__stdcall*)(void*, void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[7])(font_, metrics);
}
// source adapter only; no established separate native entry
HDC __stdcall ColourFontProxy::GetDC() {
    using Method = HDC (__stdcall*)(void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[8])(font_);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::GetGlyphData(UINT glyph, void** texture, void* rect, void* cell) {
    using Method = HRESULT (__stdcall*)(void*, UINT, void**, void*, void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[9])(
        font_, glyph, texture, rect, cell);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::PreloadCharacters(UINT first, UINT last) {
    using Method = HRESULT (__stdcall*)(void*, UINT, UINT);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[10])(font_, first, last);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::PreloadGlyphs(UINT first, UINT last) {
    using Method = HRESULT (__stdcall*)(void*, UINT, UINT);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[11])(font_, first, last);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::PreloadTextA(const char* text, int count) {
    using Method = HRESULT (__stdcall*)(void*, const char*, int);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[12])(font_, text, count);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::PreloadTextW(const char16_t* text, int count) {
    using Method = HRESULT (__stdcall*)(void*, const char16_t*, int);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[13])(font_, text, count);
}

// 0x10073680. The supplied count is ignored on the sprite path: the native
// wrapper copies the complete C string, then draws the complete stripped text.
// source adapter only; no established separate native entry
int __stdcall ColourFontProxy::DrawTextA(void* sprite, const char* text, int count,
                                       TextRect* rect, DWORD format, DWORD colour) {
    if (sprite == nullptr) {
        using Method = int (__stdcall*)(void*, void*, const char*, int, TextRect*, DWORD, DWORD);
        return reinterpret_cast<Method>((*static_cast<void***>(font_))[14])(
            font_, sprite, text, count, rect, format, colour);
    }
    auto& state = shared_text;
    state.sprite = sprite;
    state.glyph.colour = colour;
    state.glyph.cursor = 0;
    if (std::strlen(text) > 100000) return 0;
    std::strcpy(state.original.data(), text);
    std::strcpy(state.stripped.data(), text);
    convert_colour_text(state.original.data(), state.wide.data(), 20000);
    ChatStripColorTags(state.stripped.data());
    using Method = int (__stdcall*)(void*, void*, const char*, int, TextRect*, DWORD, DWORD);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[14])(
        font_, static_cast<void*>(&shared_sprite), static_cast<const char*>(state.stripped.data()),
        static_cast<int>(std::strlen(state.stripped.data())), rect, format, colour);
}

// 0x10073850: wide draws bypass colour preprocessing entirely.
// source adapter only; no established separate native entry
int __stdcall ColourFontProxy::DrawTextW(void* sprite, const char16_t* text, int count,
                                       TextRect* rect, DWORD format, DWORD colour) {
    using Method = int (__stdcall*)(void*, void*, const char16_t*, int, TextRect*, DWORD, DWORD);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[15])(
        font_, sprite, text, count, rect, format, colour);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::OnLostDevice() {
    using Method = HRESULT (__stdcall*)(void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[16])(font_);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourFontProxy::OnResetDevice() {
    using Method = HRESULT (__stdcall*)(void*);
    return reinterpret_cast<Method>((*static_cast<void***>(font_))[17])(font_);
}

// source adapter only; no established separate native entry
ColourSpriteProxy::ColourSpriteProxy() = default;

// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::QueryInterface(const void* iid, void** object) {
    using Method = HRESULT (__stdcall*)(void*, const void*, void**);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[0])(sprite, iid, object);
}
// source adapter only; no established separate native entry
ULONG __stdcall ColourSpriteProxy::AddRef() {
    using Method = ULONG (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[1])(sprite);
}
// source adapter only; no established separate native entry
ULONG __stdcall ColourSpriteProxy::Release() {
    using Method = ULONG (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[2])(sprite);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::GetDevice(void** device) {
    using Method = HRESULT (__stdcall*)(void*, void**);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[3])(sprite, device);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::GetTransform(void* transform) {
    using Method = HRESULT (__stdcall*)(void*, void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[4])(sprite, transform);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::SetTransform(const void* transform) {
    using Method = HRESULT (__stdcall*)(void*, const void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[5])(sprite, transform);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::SetWorldViewRH(const void* world, const void* view) {
    using Method = HRESULT (__stdcall*)(void*, const void*, const void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[6])(sprite, world, view);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::SetWorldViewLH(const void* world, const void* view) {
    using Method = HRESULT (__stdcall*)(void*, const void*, const void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[7])(sprite, world, view);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::Begin(DWORD flags) {
    using Method = HRESULT (__stdcall*)(void*, DWORD);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[8])(sprite, flags);
}

// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::Draw(void* texture, const void* rect, const void* centre,
                                         const void* position, DWORD) {
    advance_glyph_colour(shared_text.glyph);
    using Method = HRESULT (__stdcall*)(void*, void*, const void*, const void*, const void*, DWORD);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[9])(
        sprite, texture, rect, centre, position, static_cast<DWORD>(shared_text.glyph.colour));
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::Flush() {
    using Method = HRESULT (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[10])(sprite);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::End() {
    using Method = HRESULT (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[11])(sprite);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::OnLostDevice() {
    using Method = HRESULT (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[12])(sprite);
}
// source adapter only; no established separate native entry
HRESULT __stdcall ColourSpriteProxy::OnResetDevice() {
    using Method = HRESULT (__stdcall*)(void*);
    void* sprite = shared_text.sprite;
    return reinterpret_cast<Method>((*static_cast<void***>(sprite))[13])(sprite);
}

}  // namespace samp::client::render
#endif

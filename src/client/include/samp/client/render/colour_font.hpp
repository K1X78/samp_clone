#pragma once

#if defined(_WIN32)
#include <windows.h>
#include <array>
#include <cstdint>

#include "samp/client/render/font_draw.hpp"
#include "samp/client/render/glyph_colour.hpp"

namespace samp::client::render {

// The original keeps one shared conversion buffer and glyph cursor for all
// wrapped fonts. DrawTextW bypasses this state, as does DrawTextA without a sprite.
struct ColourTextState {
    std::array<char, 100001> original{};
    std::array<char, 100001> stripped{};
    std::array<char16_t, 20000> wide{};
    void* sprite = nullptr;
    GlyphColourState glyph{original.data(), wide.data(), 0, 0};
};
// 0x10073440: clear capacity UTF-16 units, query CP_ACP conversion length,
// and convert only when that length is strictly less than capacity.
void convert_colour_text(const char* text, char16_t* destination, std::uint32_t capacity);

// ID3DXFont's 18 COM slots, in their shipped order (0x1011c438).
// Release only forwards; it neither deletes the wrapper nor clears its pointer.
// There is deliberately no virtual destructor, which would change the COM ABI.
class ColourFontProxy {
public:
    virtual HRESULT __stdcall QueryInterface(const void* iid, void** object);
    virtual ULONG __stdcall AddRef();
    virtual ULONG __stdcall Release();
    virtual HRESULT __stdcall GetDevice(void** device);
    virtual HRESULT __stdcall GetDescA(void* description);
    virtual HRESULT __stdcall GetDescW(void* description);
    virtual BOOL __stdcall GetTextMetricsA(void* metrics);
    virtual BOOL __stdcall GetTextMetricsW(void* metrics);
    virtual HDC __stdcall GetDC();
    virtual HRESULT __stdcall GetGlyphData(UINT glyph, void** texture, void* rect, void* cell);
    virtual HRESULT __stdcall PreloadCharacters(UINT first, UINT last);
    virtual HRESULT __stdcall PreloadGlyphs(UINT first, UINT last);
    virtual HRESULT __stdcall PreloadTextA(const char* text, int count);
    virtual HRESULT __stdcall PreloadTextW(const char16_t* text, int count);
    virtual int __stdcall DrawTextA(void* sprite, const char* text, int count,
                                   TextRect* rect, DWORD format, DWORD colour);
    virtual int __stdcall DrawTextW(void* sprite, const char16_t* text, int count,
                                   TextRect* rect, DWORD format, DWORD colour);
    virtual HRESULT __stdcall OnLostDevice();
    virtual HRESULT __stdcall OnResetDevice();

    void* font_ = nullptr;
};

// ID3DXSprite's 14 COM slots (0x1011c76c). Every slot reads the shared
// current sprite, even when invoked through a different proxy instance.
class ColourSpriteProxy {
public:
    ColourSpriteProxy();
    virtual HRESULT __stdcall QueryInterface(const void* iid, void** object);
    virtual ULONG __stdcall AddRef();
    virtual ULONG __stdcall Release();
    virtual HRESULT __stdcall GetDevice(void** device);
    virtual HRESULT __stdcall GetTransform(void* transform);
    virtual HRESULT __stdcall SetTransform(const void* transform);
    virtual HRESULT __stdcall SetWorldViewRH(const void* world, const void* view);
    virtual HRESULT __stdcall SetWorldViewLH(const void* world, const void* view);
    virtual HRESULT __stdcall Begin(DWORD flags);
    virtual HRESULT __stdcall Draw(void* texture, const void* rect, const void* centre,
                                   const void* position, DWORD colour);
    virtual HRESULT __stdcall Flush();
    virtual HRESULT __stdcall End();
    virtual HRESULT __stdcall OnLostDevice();
    virtual HRESULT __stdcall OnResetDevice();
};

#if INTPTR_MAX == INT32_MAX
static_assert(sizeof(ColourFontProxy) == 8);
static_assert(sizeof(ColourSpriteProxy) == 4);
#endif

}  // namespace samp::client::render
#endif

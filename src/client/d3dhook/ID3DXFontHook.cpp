#include "d3dhook/ID3DXFontHook.h"
#include "cmdwindow.h"
#include "runutil.h"
#include "../include/samp/client/render/colour_tags.hpp"
#include <DXUTgui.h>
#include <string.h>

// 0x0006b310
// Official: FUN_1006b310 @ 0x1006b310 (samp.dll)
CFontWrapper::CFontWrapper() {}

// 0x00073770
// Official: FUN_10073770 @ 0x10073770 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::QueryInterface(REFIID iid, void** output)
{
    return font->QueryInterface(iid, output);
}

// 0x00073780
// Official: FUN_10073780 @ 0x10073780 (samp.dll)
ULONG STDMETHODCALLTYPE CFontWrapper::AddRef()
{
    return font->AddRef();
}

// 0x00073790
// Official: FUN_10073790 @ 0x10073790 (samp.dll)
ULONG STDMETHODCALLTYPE CFontWrapper::Release()
{
    return font->Release();
}

// 0x000737a0
// Official: FUN_100737a0 @ 0x100737a0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::GetDevice(IDirect3DDevice9** device)
{
    return font->GetDevice(device);
}

// 0x000737b0
// Official: FUN_100737b0 @ 0x100737b0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::GetDescA(D3DXFONT_DESCA* desc)
{
    return font->GetDescA(desc);
}

// 0x000737c0
// Official: FUN_100737c0 @ 0x100737c0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::GetDescW(D3DXFONT_DESCW* desc)
{
    return font->GetDescW(desc);
}

// 0x000737d0
// Official: FUN_100737d0 @ 0x100737d0 (samp.dll)
BOOL STDMETHODCALLTYPE CFontWrapper::GetTextMetricsA(TEXTMETRICA* metrics)
{
    return font->GetTextMetricsA(metrics);
}

// 0x000737e0
// Official: FUN_100737e0 @ 0x100737e0 (samp.dll)
BOOL STDMETHODCALLTYPE CFontWrapper::GetTextMetricsW(TEXTMETRICW* metrics)
{
    return font->GetTextMetricsW(metrics);
}

// 0x000737f0
// Official: FUN_100737f0 @ 0x100737f0 (samp.dll)
HDC STDMETHODCALLTYPE CFontWrapper::GetDC()
{
    return font->GetDC();
}

// 0x00073800
// Official: FUN_10073800 @ 0x10073800 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::GetGlyphData(UINT glyph, IDirect3DTexture9** texture, RECT* box, POINT* increment)
{
    return font->GetGlyphData(glyph, texture, box, increment);
}

// 0x00073810
// Official: FUN_10073810 @ 0x10073810 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::PreloadCharacters(UINT first, UINT last)
{
    return font->PreloadCharacters(first, last);
}

// 0x00073820
// Official: FUN_10073820 @ 0x10073820 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::PreloadGlyphs(UINT first, UINT last)
{
    return font->PreloadGlyphs(first, last);
}

// 0x00073830
// Official: FUN_10073830 @ 0x10073830 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::PreloadTextA(const char* text, INT count)
{
    return font->PreloadTextA(text, count);
}

// 0x00073840
// Official: FUN_10073840 @ 0x10073840 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::PreloadTextW(const wchar_t* text, INT count)
{
    return font->PreloadTextW(text, count);
}

// 0x00073680
// Official: FUN_10073680 @ 0x10073680 (samp.dll)
INT STDMETHODCALLTYPE CFontWrapper::DrawTextA(ID3DXSprite* sprite, const char* text, INT count, RECT* rect, DWORD format, D3DCOLOR color)
{
    if (!sprite)
        return font->DrawTextA(0, text, count, rect, format, color);
    g_fontRealSprite = sprite;
    g_fontGlyphColor = color;
    g_fontGlyphCursor = 0;
    if (strlen(text) >= 100001)
        return 0;
    strcpy(g_fontOriginalText, text);
    strcpy(g_fontStrippedText, text);
    FontAnsiToWide(g_fontOriginalText, g_fontWideText, 20000);
    ChatStripColorTags(g_fontStrippedText);
    return font->DrawTextA(FontColorSprite(), g_fontStrippedText, (INT)strlen(g_fontStrippedText), rect, format, color);
}

// 0x00073850
// Official: FUN_10073850 @ 0x10073850 (samp.dll)
INT STDMETHODCALLTYPE CFontWrapper::DrawTextW(ID3DXSprite* sprite, const wchar_t* text, INT count, RECT* rect, DWORD format, D3DCOLOR color)
{
    return font->DrawTextW(sprite, text, count, rect, format, color);
}

// 0x00073860
// Official: FUN_10073860 @ 0x10073860 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::OnLostDevice()
{
    return font->OnLostDevice();
}

// 0x00073870
// Official: FUN_10073870 @ 0x10073870 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontWrapper::OnResetDevice()
{
    return font->OnResetDevice();
}

#include <stdlib.h>
#include <wchar.h>
// 0x0017e97c
char* g_fontOriginalText;
// 0x0017e980
char* g_fontStrippedText;
// 0x00174d38
wchar_t g_fontWideText[20000];
// 0x00174d30
ID3DXSprite* g_fontRealSprite;
// 0x00174d20
D3DCOLOR g_fontGlyphColor;
// 0x00174d34
int g_fontGlyphCursor;

// 0x00073440
// Official: FUN_10073440 @ 0x10073440 (samp.dll)
void FontAnsiToWide(const char* text, wchar_t* output, int capacity)
{
    memset(output, 0, capacity * sizeof(wchar_t));
    int length = MultiByteToWideChar(CP_ACP, 0, text, (int)strlen(text), 0, 0);
    if (length < capacity)
        MultiByteToWideChar(CP_ACP, 0, text, (int)strlen(text), output, length);
}

// 0x000734b0
// Official: FUN_100734b0 @ 0x100734b0 (samp.dll)
void FontNextAnsiGlyphColor()
{
    char ch = g_fontOriginalText[g_fontGlyphCursor];
    while (ch && (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r'))
        ch = g_fontOriginalText[++g_fontGlyphCursor];
    unsigned long color = ChatParseColorTag(g_fontOriginalText + g_fontGlyphCursor);
    while (color != 0xffffffff)
    {
        g_fontGlyphColor = color | 0xff000000;
        g_fontGlyphCursor += 8;
        ch = g_fontOriginalText[g_fontGlyphCursor];
        while (ch && (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\r'))
            ch = g_fontOriginalText[++g_fontGlyphCursor];
        color = ChatParseColorTag(g_fontOriginalText + g_fontGlyphCursor);
    }
    if (g_fontOriginalText[g_fontGlyphCursor])
    {
        int length = mblen(g_fontOriginalText + g_fontGlyphCursor, MB_CUR_MAX);
        if (length < 0)
            ++g_fontGlyphCursor;
        else
            g_fontGlyphCursor += length;
    }
}

// 0x00073580
// Official: FUN_10073580 @ 0x10073580 (samp.dll)
void FontNextGlyphColor()
{
    wchar_t ch = g_fontWideText[g_fontGlyphCursor];
    while (ch && (ch == L' ' || ch == L'\t' || ch == L'\n' || ch == L'\r'))
        ch = g_fontWideText[++g_fontGlyphCursor];
    unsigned long color = samp::client::render::parse_colour_tag(
        g_fontWideText + g_fontGlyphCursor);
    while (color != 0xffffffff)
    {
        g_fontGlyphColor = color | 0xff000000;
        g_fontGlyphCursor += 8;
        ch = g_fontWideText[g_fontGlyphCursor];
        while (ch && (ch == L' ' || ch == L'\t' || ch == L'\n' || ch == L'\r'))
            ch = g_fontWideText[++g_fontGlyphCursor];
        color = samp::client::render::parse_colour_tag(
            g_fontWideText + g_fontGlyphCursor);
    }
    // Native code checks the ANSI buffer with the same index used for UTF-16.
    if (g_fontOriginalText[g_fontGlyphCursor])
        ++g_fontGlyphCursor;
}

// Native vtable RVA 0x0011c76c. State is shared, as in the DLL.
class CFontColorSprite : public ID3DXSprite
{
public:
    // 0x00073960
    CFontColorSprite();
    // 0x00073880
    virtual HRESULT STDMETHODCALLTYPE QueryInterface(REFIID iid, void** output);
    // 0x00073890
    virtual ULONG STDMETHODCALLTYPE AddRef();
    // 0x000738a0
    virtual ULONG STDMETHODCALLTYPE Release();
    // 0x000738b0
    virtual HRESULT STDMETHODCALLTYPE GetDevice(IDirect3DDevice9** device);
    // 0x000738c0
    virtual HRESULT STDMETHODCALLTYPE GetTransform(D3DXMATRIX* transform);
    // 0x000738d0
    virtual HRESULT STDMETHODCALLTYPE SetTransform(const D3DXMATRIX* transform);
    // 0x000738e0
    virtual HRESULT STDMETHODCALLTYPE SetWorldViewRH(const D3DXMATRIX* world, const D3DXMATRIX* view);
    // 0x000738f0
    virtual HRESULT STDMETHODCALLTYPE SetWorldViewLH(const D3DXMATRIX* world, const D3DXMATRIX* view);
    // 0x00073900
    virtual HRESULT STDMETHODCALLTYPE Begin(DWORD flags);
    // 0x00073660
    virtual HRESULT STDMETHODCALLTYPE Draw(IDirect3DTexture9* texture, const RECT* rect, const D3DXVECTOR3* center, const D3DXVECTOR3* position, D3DCOLOR color);
    // 0x00073910
    virtual HRESULT STDMETHODCALLTYPE Flush();
    // 0x00073920
    virtual HRESULT STDMETHODCALLTYPE End();
    // 0x00073930
    virtual HRESULT STDMETHODCALLTYPE OnLostDevice();
    // 0x00073940
    virtual HRESULT STDMETHODCALLTYPE OnResetDevice();
};
// 0x00073960
// Official: FUN_10073960 @ 0x10073960 (samp.dll)
CFontColorSprite::CFontColorSprite() {}

typedef char FontColorSpriteSize[(sizeof(CFontColorSprite) == 4) ? 1 : -1];
// 0x00140bd8
static CFontColorSprite g_fontColorSprite;

// samp.dll RVA: unknown (recovery accessor for static sprite object RVA 0x00140bd8)
ID3DXSprite* FontColorSprite()
{
    return &g_fontColorSprite;
}

// 0x00073880
// Official: FUN_10073880 @ 0x10073880 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::QueryInterface(REFIID iid, void** output)
{
    return g_fontRealSprite->QueryInterface(iid, output);
}

// 0x00073890
// Official: FUN_10073890 @ 0x10073890 (samp.dll)
ULONG STDMETHODCALLTYPE CFontColorSprite::AddRef()
{
    return g_fontRealSprite->AddRef();
}

// 0x000738a0
// Official: FUN_100738a0 @ 0x100738a0 (samp.dll)
ULONG STDMETHODCALLTYPE CFontColorSprite::Release()
{
    return g_fontRealSprite->Release();
}

// 0x000738b0
// Official: FUN_100738b0 @ 0x100738b0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::GetDevice(IDirect3DDevice9** device)
{
    return g_fontRealSprite->GetDevice(device);
}

// 0x000738c0
// Official: FUN_100738c0 @ 0x100738c0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::GetTransform(D3DXMATRIX* transform)
{
    return g_fontRealSprite->GetTransform(transform);
}

// 0x000738d0
// Official: FUN_100738d0 @ 0x100738d0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::SetTransform(const D3DXMATRIX* transform)
{
    return g_fontRealSprite->SetTransform(transform);
}

// 0x000738e0
// Official: FUN_100738e0 @ 0x100738e0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::SetWorldViewRH(const D3DXMATRIX* world, const D3DXMATRIX* view)
{
    return g_fontRealSprite->SetWorldViewRH(world, view);
}

// 0x000738f0
// Official: FUN_100738f0 @ 0x100738f0 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::SetWorldViewLH(const D3DXMATRIX* world, const D3DXMATRIX* view)
{
    return g_fontRealSprite->SetWorldViewLH(world, view);
}

// 0x00073900
// Official: FUN_10073900 @ 0x10073900 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::Begin(DWORD flags)
{
    return g_fontRealSprite->Begin(flags);
}

// 0x00073660
// Official: FUN_10073660 @ 0x10073660 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::Draw(IDirect3DTexture9* texture, const RECT* rect, const D3DXVECTOR3* center, const D3DXVECTOR3* position, D3DCOLOR color)
{
    FontNextGlyphColor();
    return g_fontRealSprite->Draw(texture, rect, center, position, g_fontGlyphColor);
}

// 0x00073910
// Official: FUN_10073910 @ 0x10073910 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::Flush()
{
    return g_fontRealSprite->Flush();
}

// 0x00073920
// Official: FUN_10073920 @ 0x10073920 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::End()
{
    return g_fontRealSprite->End();
}

// 0x00073930
// Official: FUN_10073930 @ 0x10073930 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::OnLostDevice()
{
    return g_fontRealSprite->OnLostDevice();
}

// 0x00073940
// Official: FUN_10073940 @ 0x10073940 (samp.dll)
HRESULT STDMETHODCALLTYPE CFontColorSprite::OnResetDevice()
{
    return g_fontRealSprite->OnResetDevice();
}

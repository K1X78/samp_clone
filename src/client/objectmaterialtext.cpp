#include "objectmaterialtext.h"
#include "ArchiveFS.h"
#include "chatwindow.h"
#include "d3dhook/ID3DXFontHook.h"
#include "game/entity.h"
#include "game/textdraw.h"
#include "gui.h"
#include "main.h"
#include <new>
#include <string.h>
// 0x00070340
// Official: FUN_10070340 @ 0x10070340 (samp.dll)
CObjectMaterialText::~CObjectMaterialText()
{
    OnLostDevice();
}

// 0x000702d0
// Official: FUN_100702d0 @ 0x100702d0 (samp.dll)
void CObjectMaterialText::OnLostDevice()
{
    if (second)
    {
        second->Release();
        second = 0;
    }
    if (first)
    {
        first->Release();
        first = 0;
    }
}

// 0x00070300
// Official: FUN_10070300 @ 0x10070300 (samp.dll)
void CObjectMaterialText::OnResetDevice()
{
    D3DXCreateSprite(device, &first);
    D3DXCreateSprite(device, &second);
}

// 0x00070320
// Official: FUN_10070320 @ 0x10070320 (samp.dll)
CObjectMaterialText::CObjectMaterialText(IDirect3DDevice9* value)
{
    device = value;
    first = 0;
    second = 0;
    OnResetDevice();
}

// 0x00070350
// Official: FUN_10070350 @ 0x10070350 (samp.dll)
IDirect3DTexture9* CObjectMaterialText::Create(const char* text, const char* face, unsigned fontSize, int width, int height, D3DCOLOR color, D3DCOLOR background, BOOL bold,
                                               BYTE alignment)
{
    if (!device || !g_deviceFonts)
        return 0;
    D3DDISPLAYMODE display;
    device->GetDisplayMode(0, &display);
    IDirect3DTexture9* created;
    D3DFORMAT format = background ? D3DFMT_X8R8G8B8 : D3DFMT_A8R8G8B8;
    if (FAILED(D3DXCreateTexture(device, width, height, 1, D3DUSAGE_RENDERTARGET, format, D3DPOOL_DEFAULT, &created)))
        return 0;
    IDirect3DSurface9* surface;
    created->GetSurfaceLevel(0, &surface);
    D3DSURFACE_DESC desc;
    surface->GetDesc(&desc);
    ID3DXRenderToSurface* renderer;
    if (FAILED(D3DXCreateRenderToSurface(device, desc.Width, desc.Height, desc.Format, TRUE, D3DFMT_D16, &renderer)))
        return 0;
    DWORD flags = 0;
    if ((BYTE)alignment == 1)
        flags = DT_CENTER | DT_VCENTER;
    else if ((BYTE)alignment == 2)
        flags = DT_RIGHT;
    ID3DXFont* rawFont;
    if (FAILED(D3DXCreateFontA(device, fontSize, 0, bold ? 700 : 400, 1, FALSE, 1, 0, 0, 0, face, &rawFont)))
    {
        g_pChat->AddDebugMessage("SignText: Can't create font %s", face);
        return 0;
    }
    // Native leaks this eight-byte proxy; Release forwards to the underlying font.
    CFontWrapper* font = new CFontWrapper;
    font->font = rawFont;
    renderer->BeginScene(surface, 0);
    device->Clear(0, 0, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, background, 0.0f, 0);
    first->Begin(D3DXSPRITE_ALPHABLEND);
    if (!background)
        device->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_BLENDFACTOR);
    RECT rect = {0, 0, width, height};
    font->DrawTextA(first, text, -1, &rect, flags | DT_NOCLIP, color);
    // Capture the current sprite before End; subsequent calls use captured resources.
    ID3DXSprite* sprite = first;
    sprite->End();
    renderer->EndScene(0);
    font->Release();
    if (surface)
    {
        surface->Release();
        surface = 0;
    }
    if (renderer)
        renderer->Release();
    return created;
}

#include "d3dhook/IDirect3DDevice9Hook.h"
#include "game/game.h"
#include "game/hooks.h"
#include "main.h"
#include "net/vehiclepool.h"
#include <string.h>
// 0x000c5e60
// Official: FUN_100c5e60 @ 0x100c5e60 (samp.dll)
IDirect3DDevice9Hook::IDirect3DDevice9Hook() {}
// 0x0017ec00
D3DMATRIX g_deviceViewMatrix;
// 0x0017ec40
D3DMATRIX g_deviceProjectionMatrix;
// 0x0017ec80
D3DMATRIX g_deviceWorldMatrix;
// 0x00073f60
// Official: FUN_10073f60 @ 0x10073f60 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::QueryInterface(REFIID riid, void** ppvObj)
{
    return g_gameD3DDevice->QueryInterface(riid, ppvObj);
}
// 0x00073f70
// Official: FUN_10073f70 @ 0x10073f70 (samp.dll)
ULONG __stdcall IDirect3DDevice9Hook::AddRef()
{
    return g_gameD3DDevice->AddRef();
}
// 0x00073f80
// Official: FUN_10073f80 @ 0x10073f80 (samp.dll)
ULONG __stdcall IDirect3DDevice9Hook::Release()
{
    return g_gameD3DDevice->Release();
}
// 0x00073f90
// Official: FUN_10073f90 @ 0x10073f90 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::TestCooperativeLevel()
{
    return g_gameD3DDevice->TestCooperativeLevel();
}
// 0x00073fa0
// Official: FUN_10073fa0 @ 0x10073fa0 (samp.dll)
UINT __stdcall IDirect3DDevice9Hook::GetAvailableTextureMem()
{
    return g_gameD3DDevice->GetAvailableTextureMem();
}
// 0x00073fb0
// Official: FUN_10073fb0 @ 0x10073fb0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::EvictManagedResources()
{
    return g_gameD3DDevice->EvictManagedResources();
}
// 0x00073fc0
// Official: FUN_10073fc0 @ 0x10073fc0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetDirect3D(IDirect3D9** ppD3D9)
{
    return g_gameD3DDevice->GetDirect3D(ppD3D9);
}
// 0x00073fd0
// Official: FUN_10073fd0 @ 0x10073fd0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetDeviceCaps(D3DCAPS9* pCaps)
{
    return g_gameD3DDevice->GetDeviceCaps(pCaps);
}
// 0x00073fe0
// Official: FUN_10073fe0 @ 0x10073fe0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetDisplayMode(UINT iSwapChain, D3DDISPLAYMODE* pMode)
{
    return g_gameD3DDevice->GetDisplayMode(iSwapChain, pMode);
}
// 0x00073ff0
// Official: FUN_10073ff0 @ 0x10073ff0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetCreationParameters(D3DDEVICE_CREATION_PARAMETERS* pParameters)
{
    return g_gameD3DDevice->GetCreationParameters(pParameters);
}
// 0x00074000
// Official: FUN_10074000 @ 0x10074000 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetCursorProperties(UINT XHotSpot, UINT YHotSpot, IDirect3DSurface9* pCursorBitmap)
{
    return g_gameD3DDevice->SetCursorProperties(XHotSpot, YHotSpot, pCursorBitmap);
}
// 0x00074010
// Official: FUN_10074010 @ 0x10074010 (samp.dll)
void __stdcall IDirect3DDevice9Hook::SetCursorPosition(int X, int Y, DWORD Flags)
{
    g_gameD3DDevice->SetCursorPosition(X, Y, Flags);
}
// 0x00074020
// Official: FUN_10074020 @ 0x10074020 (samp.dll)
BOOL __stdcall IDirect3DDevice9Hook::ShowCursor(BOOL bShow)
{
    return g_gameD3DDevice->ShowCursor(bShow);
}
// 0x00074030
// Official: FUN_10074030 @ 0x10074030 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateAdditionalSwapChain(D3DPRESENT_PARAMETERS* pPresentationParameters, IDirect3DSwapChain9** pSwapChain)
{
    return g_gameD3DDevice->CreateAdditionalSwapChain(pPresentationParameters, pSwapChain);
}
// 0x00074040
// Official: FUN_10074040 @ 0x10074040 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetSwapChain(UINT iSwapChain, IDirect3DSwapChain9** pSwapChain)
{
    return g_gameD3DDevice->GetSwapChain(iSwapChain, pSwapChain);
}
// 0x00074050
// Official: FUN_10074050 @ 0x10074050 (samp.dll)
UINT __stdcall IDirect3DDevice9Hook::GetNumberOfSwapChains()
{
    return g_gameD3DDevice->GetNumberOfSwapChains();
}
// 0x00074060
// Official: FUN_10074060 @ 0x10074060 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::Reset(D3DPRESENT_PARAMETERS* pPresentationParameters)
{
    ClientDeviceObjectsLost();
    HRESULT result = g_gameD3DDevice->Reset(pPresentationParameters);
    if (SUCCEEDED(result))
        ClientDeviceObjectsReset();
    return result;
}
// 0x00074090
// Official: FUN_10074090 @ 0x10074090 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetBackBuffer(UINT iSwapChain, UINT iBackBuffer, D3DBACKBUFFER_TYPE Type, IDirect3DSurface9** ppBackBuffer)
{
    return g_gameD3DDevice->GetBackBuffer(iSwapChain, iBackBuffer, Type, ppBackBuffer);
}
// 0x000740a0
// Official: FUN_100740a0 @ 0x100740a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetRasterStatus(UINT iSwapChain, D3DRASTER_STATUS* pRasterStatus)
{
    return g_gameD3DDevice->GetRasterStatus(iSwapChain, pRasterStatus);
}
// 0x000740b0
// Official: FUN_100740b0 @ 0x100740b0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetDialogBoxMode(BOOL bEnableDialogs)
{
    return g_gameD3DDevice->SetDialogBoxMode(bEnableDialogs);
}
// 0x000740c0
// Official: FUN_100740c0 @ 0x100740c0 (samp.dll)
void __stdcall IDirect3DDevice9Hook::SetGammaRamp(UINT iSwapChain, DWORD Flags, CONST D3DGAMMARAMP* pRamp)
{
    g_gameD3DDevice->SetGammaRamp(iSwapChain, Flags, pRamp);
}
// 0x000740d0
// Official: FUN_100740d0 @ 0x100740d0 (samp.dll)
void __stdcall IDirect3DDevice9Hook::GetGammaRamp(UINT iSwapChain, D3DGAMMARAMP* pRamp)
{
    g_gameD3DDevice->GetGammaRamp(iSwapChain, pRamp);
}
// 0x000740e0
// Official: FUN_100740e0 @ 0x100740e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateTexture(UINT Width, UINT Height, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DTexture9** ppTexture,
                                                      HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateTexture(Width, Height, Levels, Usage, Format, Pool, ppTexture, pSharedHandle);
}
// 0x000740f0
// Official: FUN_100740f0 @ 0x100740f0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateVolumeTexture(UINT Width, UINT Height, UINT Depth, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool,
                                                            IDirect3DVolumeTexture9** ppVolumeTexture, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateVolumeTexture(Width, Height, Depth, Levels, Usage, Format, Pool, ppVolumeTexture, pSharedHandle);
}
// 0x00074100
// Official: FUN_10074100 @ 0x10074100 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateCubeTexture(UINT EdgeLength, UINT Levels, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DCubeTexture9** ppCubeTexture,
                                                          HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateCubeTexture(EdgeLength, Levels, Usage, Format, Pool, ppCubeTexture, pSharedHandle);
}
// 0x00074110
// Official: FUN_10074110 @ 0x10074110 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateVertexBuffer(UINT Length, DWORD Usage, DWORD FVF, D3DPOOL Pool, IDirect3DVertexBuffer9** ppVertexBuffer, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateVertexBuffer(Length, Usage, FVF, Pool, ppVertexBuffer, pSharedHandle);
}
// 0x00074120
// Official: FUN_10074120 @ 0x10074120 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateIndexBuffer(UINT Length, DWORD Usage, D3DFORMAT Format, D3DPOOL Pool, IDirect3DIndexBuffer9** ppIndexBuffer, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateIndexBuffer(Length, Usage, Format, Pool, ppIndexBuffer, pSharedHandle);
}
// 0x00074130
// Official: FUN_10074130 @ 0x10074130 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateRenderTarget(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality, BOOL Lockable,
                                                           IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateRenderTarget(Width, Height, Format, MultiSample, MultisampleQuality, Lockable, ppSurface, pSharedHandle);
}
// 0x00074140
// Official: FUN_10074140 @ 0x10074140 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateDepthStencilSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DMULTISAMPLE_TYPE MultiSample, DWORD MultisampleQuality,
                                                                  BOOL Discard, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateDepthStencilSurface(Width, Height, Format, D3DMULTISAMPLE_NONE, MultisampleQuality, Discard, ppSurface, pSharedHandle);
}
// 0x00074160
// Official: FUN_10074160 @ 0x10074160 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::UpdateSurface(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestinationSurface, CONST POINT* pDestPoint)
{
    return g_gameD3DDevice->UpdateSurface(pSourceSurface, pSourceRect, pDestinationSurface, pDestPoint);
}
// 0x00074170
// Official: FUN_10074170 @ 0x10074170 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::UpdateTexture(IDirect3DBaseTexture9* pSourceTexture, IDirect3DBaseTexture9* pDestinationTexture)
{
    return g_gameD3DDevice->UpdateTexture(pSourceTexture, pDestinationTexture);
}
// 0x00074180
// Official: FUN_10074180 @ 0x10074180 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetRenderTargetData(IDirect3DSurface9* pRenderTarget, IDirect3DSurface9* pDestSurface)
{
    return g_gameD3DDevice->GetRenderTargetData(pRenderTarget, pDestSurface);
}
// 0x000741a0
// Official: FUN_100741a0 @ 0x100741a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetFrontBufferData(UINT iSwapChain, IDirect3DSurface9* pDestSurface)
{
    return g_gameD3DDevice->GetFrontBufferData(iSwapChain, pDestSurface);
}
// 0x000741c0
// Official: FUN_100741c0 @ 0x100741c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::StretchRect(IDirect3DSurface9* pSourceSurface, CONST RECT* pSourceRect, IDirect3DSurface9* pDestSurface, CONST RECT* pDestRect,
                                                    D3DTEXTUREFILTERTYPE Filter)
{
    return g_gameD3DDevice->StretchRect(pSourceSurface, pSourceRect, pDestSurface, pDestRect, Filter);
}
// 0x000741e0
// Official: FUN_100741e0 @ 0x100741e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::ColorFill(IDirect3DSurface9* pSurface, CONST RECT* pRect, D3DCOLOR color)
{
    return g_gameD3DDevice->ColorFill(pSurface, pRect, color);
}
// 0x00074200
// Official: FUN_10074200 @ 0x10074200 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateOffscreenPlainSurface(UINT Width, UINT Height, D3DFORMAT Format, D3DPOOL Pool, IDirect3DSurface9** ppSurface, HANDLE* pSharedHandle)
{
    return g_gameD3DDevice->CreateOffscreenPlainSurface(Width, Height, Format, Pool, ppSurface, pSharedHandle);
}
// 0x00074220
// Official: FUN_10074220 @ 0x10074220 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9* pRenderTarget)
{
    return g_gameD3DDevice->SetRenderTarget(RenderTargetIndex, pRenderTarget);
}
// 0x00074240
// Official: FUN_10074240 @ 0x10074240 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetRenderTarget(DWORD RenderTargetIndex, IDirect3DSurface9** ppRenderTarget)
{
    return g_gameD3DDevice->GetRenderTarget(RenderTargetIndex, ppRenderTarget);
}
// 0x00074260
// Official: FUN_10074260 @ 0x10074260 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetDepthStencilSurface(IDirect3DSurface9* pNewZStencil)
{
    return g_gameD3DDevice->SetDepthStencilSurface(pNewZStencil);
}
// 0x00074280
// Official: FUN_10074280 @ 0x10074280 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetDepthStencilSurface(IDirect3DSurface9** ppZStencilSurface)
{
    return g_gameD3DDevice->GetDepthStencilSurface(ppZStencilSurface);
}
// 0x000742a0
// Official: FUN_100742a0 @ 0x100742a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::BeginScene()
{
    return g_gameD3DDevice->BeginScene();
}
// 0x000742c0
// Official: FUN_100742c0 @ 0x100742c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::EndScene()
{
    GameDeviceIntegrityCycle();
    HRESULT result = g_gameD3DDevice->EndScene();
    GameDeviceIntegrityCycle();
    return result;
}
// 0x000742f0
// Official: FUN_100742f0 @ 0x100742f0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::Clear(DWORD Count, CONST D3DRECT* pRects, DWORD Flags, D3DCOLOR Color, float Z, DWORD Stencil)
{
    return g_gameD3DDevice->Clear(Count, pRects, Flags, Color, Z, Stencil);
}
// 0x00074310
// Official: FUN_10074310 @ 0x10074310 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetTransform(D3DTRANSFORMSTATETYPE State, CONST D3DMATRIX* mat)
{
    if (State == D3DTS_VIEW)
        memcpy(&g_deviceViewMatrix, mat, 64);
    else if (State == D3DTS_PROJECTION)
        memcpy(&g_deviceProjectionMatrix, mat, 64);
    else if (State == D3DTS_WORLD)
        memcpy(&g_deviceWorldMatrix, mat, 64);
    return g_gameD3DDevice->SetTransform(State, mat);
}
// 0x00074360
// Official: FUN_10074360 @ 0x10074360 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetTransform(D3DTRANSFORMSTATETYPE State, D3DMATRIX* mat)
{
    return g_gameD3DDevice->GetTransform(State, mat);
}
// 0x00074380
// Official: FUN_10074380 @ 0x10074380 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::MultiplyTransform(D3DTRANSFORMSTATETYPE argument0, CONST D3DMATRIX* argument1)
{
    return g_gameD3DDevice->MultiplyTransform(argument0, argument1);
}
// 0x000743a0
// Official: FUN_100743a0 @ 0x100743a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetViewport(CONST D3DVIEWPORT9* pViewport)
{
    return g_gameD3DDevice->SetViewport(pViewport);
}
// 0x000743c0
// Official: FUN_100743c0 @ 0x100743c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetViewport(D3DVIEWPORT9* pViewport)
{
    return g_gameD3DDevice->GetViewport(pViewport);
}
// 0x000743e0
// Official: FUN_100743e0 @ 0x100743e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetMaterial(CONST D3DMATERIAL9* pMaterial)
{
    return g_gameD3DDevice->SetMaterial(pMaterial);
}
// 0x00074400
// Official: FUN_10074400 @ 0x10074400 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetMaterial(D3DMATERIAL9* pMaterial)
{
    return g_gameD3DDevice->GetMaterial(pMaterial);
}
// 0x00074420
// Official: FUN_10074420 @ 0x10074420 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetLight(DWORD Index, CONST D3DLIGHT9* argument1)
{
    return g_gameD3DDevice->SetLight(Index, argument1);
}
// 0x00074440
// Official: FUN_10074440 @ 0x10074440 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetLight(DWORD Index, D3DLIGHT9* argument1)
{
    return g_gameD3DDevice->GetLight(Index, argument1);
}
// 0x00074460
// Official: FUN_10074460 @ 0x10074460 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::LightEnable(DWORD Index, BOOL Enable)
{
    return g_gameD3DDevice->LightEnable(Index, Enable);
}
// 0x00074480
// Official: FUN_10074480 @ 0x10074480 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetLightEnable(DWORD Index, BOOL* pEnable)
{
    return g_gameD3DDevice->GetLightEnable(Index, pEnable);
}
// 0x000744a0
// Official: FUN_100744a0 @ 0x100744a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetClipPlane(DWORD Index, CONST float* pPlane)
{
    return g_gameD3DDevice->SetClipPlane(Index, pPlane);
}
// 0x000744c0
// Official: FUN_100744c0 @ 0x100744c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetClipPlane(DWORD Index, float* pPlane)
{
    return g_gameD3DDevice->GetClipPlane(Index, pPlane);
}
// 0x000744e0
// Official: FUN_100744e0 @ 0x100744e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetRenderState(D3DRENDERSTATETYPE State, DWORD Value)
{
    return g_gameD3DDevice->SetRenderState(State, Value);
}
// 0x00074500
// Official: FUN_10074500 @ 0x10074500 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetRenderState(D3DRENDERSTATETYPE State, DWORD* pValue)
{
    return g_gameD3DDevice->GetRenderState(State, pValue);
}
// 0x00074520
// Official: FUN_10074520 @ 0x10074520 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateStateBlock(D3DSTATEBLOCKTYPE Type, IDirect3DStateBlock9** ppSB)
{
    return g_gameD3DDevice->CreateStateBlock(Type, ppSB);
}
// 0x00074540
// Official: FUN_10074540 @ 0x10074540 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::BeginStateBlock()
{
    return g_gameD3DDevice->BeginStateBlock();
}
// 0x00074560
// Official: FUN_10074560 @ 0x10074560 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::EndStateBlock(IDirect3DStateBlock9** ppSB)
{
    return g_gameD3DDevice->EndStateBlock(ppSB);
}
// 0x00074580
// Official: FUN_10074580 @ 0x10074580 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetClipStatus(CONST D3DCLIPSTATUS9* pClipStatus)
{
    return g_gameD3DDevice->SetClipStatus(pClipStatus);
}
// 0x000745a0
// Official: FUN_100745a0 @ 0x100745a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetClipStatus(D3DCLIPSTATUS9* pClipStatus)
{
    return g_gameD3DDevice->GetClipStatus(pClipStatus);
}
// 0x000745c0
// Official: FUN_100745c0 @ 0x100745c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetTexture(DWORD Stage, IDirect3DBaseTexture9** ppTexture)
{
    return g_gameD3DDevice->GetTexture(Stage, ppTexture);
}
// 0x000745e0
// Official: FUN_100745e0 @ 0x100745e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetTexture(DWORD Stage, IDirect3DBaseTexture9* pTexture)
{
    if (g_deviceMaterialOverrideEnabled && g_deviceMaterialOverrides)
    {
        for (g_deviceMaterialIndex = 0; g_deviceMaterialIndex != 16; ++g_deviceMaterialIndex)
        {
            DWORD index = g_deviceMaterialIndex;
            if (*(IDirect3DBaseTexture9**)(g_deviceMaterialOverrides + 0x110b + index * 4) == pTexture && *(DWORD*)(g_deviceMaterialOverrides + 0x114b + index * 4))
                return g_gameD3DDevice->SetTexture(Stage, *(IDirect3DBaseTexture9**)(g_deviceMaterialOverrides + 0x114b + index * 4));
        }
    }
    void* plate = GameGetVehiclePlateTexture();
    if (plate && plate == pTexture && g_pNetGame)
    {
        CVehiclePool* pool = *(CVehiclePool**)(*(BYTE**)((BYTE*)g_pNetGame + 0x3de) + 0xc);
        if (pool)
        {
            BYTE* vehicle = (BYTE*)pool->Get(pool->Find((void*)g_hookSavedEsi));
            // Additional observed texture field; the full vehicle layout is open.
            if (vehicle && *(DWORD*)(vehicle + 0x8f))
            {
                ClientSetRenderState(9, 2);
                return g_gameD3DDevice->SetTexture(Stage, *(IDirect3DBaseTexture9**)(vehicle + 0x8f));
            }
            if (*(DWORD*)(g_devicePlateManager + 0x20))
            {
                ClientSetRenderState(9, 2);
                return g_gameD3DDevice->SetTexture(Stage, *(IDirect3DBaseTexture9**)(g_devicePlateManager + 0x20));
            }
        }
    }
    return g_gameD3DDevice->SetTexture(Stage, pTexture);
}
// 0x00074720
// Official: FUN_10074720 @ 0x10074720 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD* pValue)
{
    return g_gameD3DDevice->GetTextureStageState(Stage, Type, pValue);
}
// 0x00074740
// Official: FUN_10074740 @ 0x10074740 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetTextureStageState(DWORD Stage, D3DTEXTURESTAGESTATETYPE Type, DWORD Value)
{
    return g_gameD3DDevice->SetTextureStageState(Stage, Type, Value);
}
// 0x00074760
// Official: FUN_10074760 @ 0x10074760 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD* pValue)
{
    return g_gameD3DDevice->GetSamplerState(Sampler, Type, pValue);
}
// 0x00074780
// Official: FUN_10074780 @ 0x10074780 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetSamplerState(DWORD Sampler, D3DSAMPLERSTATETYPE Type, DWORD Value)
{
    return g_gameD3DDevice->SetSamplerState(Sampler, Type, Value);
}
// 0x000747a0
// Official: FUN_100747a0 @ 0x100747a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::ValidateDevice(DWORD* pNumPasses)
{
    return g_gameD3DDevice->ValidateDevice(pNumPasses);
}
// 0x000747c0
// Official: FUN_100747c0 @ 0x100747c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetPaletteEntries(UINT PaletteNumber, CONST PALETTEENTRY* pEntries)
{
    return g_gameD3DDevice->SetPaletteEntries(PaletteNumber, pEntries);
}
// 0x000747e0
// Official: FUN_100747e0 @ 0x100747e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetPaletteEntries(UINT PaletteNumber, PALETTEENTRY* pEntries)
{
    return g_gameD3DDevice->GetPaletteEntries(PaletteNumber, pEntries);
}
// 0x00074800
// Official: FUN_10074800 @ 0x10074800 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetCurrentTexturePalette(UINT PaletteNumber)
{
    return g_gameD3DDevice->SetCurrentTexturePalette(PaletteNumber);
}
// 0x00074820
// Official: FUN_10074820 @ 0x10074820 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetCurrentTexturePalette(UINT* PaletteNumber)
{
    return g_gameD3DDevice->GetCurrentTexturePalette(PaletteNumber);
}
// 0x00074840
// Official: FUN_10074840 @ 0x10074840 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetScissorRect(CONST RECT* pRect)
{
    return g_gameD3DDevice->SetScissorRect(pRect);
}
// 0x00074860
// Official: FUN_10074860 @ 0x10074860 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetScissorRect(RECT* pRect)
{
    return g_gameD3DDevice->GetScissorRect(pRect);
}
// 0x00074880
// Official: FUN_10074880 @ 0x10074880 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetSoftwareVertexProcessing(BOOL bSoftware)
{
    return g_gameD3DDevice->SetSoftwareVertexProcessing(bSoftware);
}
// 0x000748a0
// Official: FUN_100748a0 @ 0x100748a0 (samp.dll)
BOOL __stdcall IDirect3DDevice9Hook::GetSoftwareVertexProcessing()
{
    return g_gameD3DDevice->GetSoftwareVertexProcessing();
}
// 0x000748c0
// Official: FUN_100748c0 @ 0x100748c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetNPatchMode(float nSegments)
{
    return g_gameD3DDevice->SetNPatchMode(nSegments);
}
// 0x000748e0
// Official: FUN_100748e0 @ 0x100748e0 (samp.dll)
float __stdcall IDirect3DDevice9Hook::GetNPatchMode()
{
    return g_gameD3DDevice->GetNPatchMode();
}
// 0x00074900
// Official: FUN_10074900 @ 0x10074900 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawPrimitive(D3DPRIMITIVETYPE PrimitiveType, UINT StartVertex, UINT PrimitiveCount)
{
    return g_gameD3DDevice->DrawPrimitive(PrimitiveType, StartVertex, PrimitiveCount);
}
// 0x00074920
// Official: FUN_10074920 @ 0x10074920 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawIndexedPrimitive(D3DPRIMITIVETYPE argument0, INT BaseVertexIndex, UINT MinVertexIndex, UINT NumVertices, UINT startIndex,
                                                             UINT primCount)
{
    return g_gameD3DDevice->DrawIndexedPrimitive(argument0, BaseVertexIndex, MinVertexIndex, NumVertices, startIndex, primCount);
}
// 0x00074940
// Official: FUN_10074940 @ 0x10074940 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT PrimitiveCount, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
    return g_gameD3DDevice->DrawPrimitiveUP(PrimitiveType, PrimitiveCount, pVertexStreamZeroData, VertexStreamZeroStride);
}
// 0x00074960
// Official: FUN_10074960 @ 0x10074960 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawIndexedPrimitiveUP(D3DPRIMITIVETYPE PrimitiveType, UINT MinVertexIndex, UINT NumVertices, UINT PrimitiveCount, CONST void* pIndexData,
                                                               D3DFORMAT IndexDataFormat, CONST void* pVertexStreamZeroData, UINT VertexStreamZeroStride)
{
    return g_gameD3DDevice->DrawIndexedPrimitiveUP(PrimitiveType, MinVertexIndex, NumVertices, PrimitiveCount, pIndexData, IndexDataFormat, pVertexStreamZeroData,
                                                   VertexStreamZeroStride);
}
// 0x00074980
// Official: FUN_10074980 @ 0x10074980 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::ProcessVertices(UINT SrcStartIndex, UINT DestIndex, UINT VertexCount, IDirect3DVertexBuffer9* pDestBuffer,
                                                        IDirect3DVertexDeclaration9* pVertexDecl, DWORD Flags)
{
    return g_gameD3DDevice->ProcessVertices(SrcStartIndex, DestIndex, VertexCount, pDestBuffer, pVertexDecl, Flags);
}
// 0x000749a0
// Official: FUN_100749a0 @ 0x100749a0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateVertexDeclaration(CONST D3DVERTEXELEMENT9* pVertexElements, IDirect3DVertexDeclaration9** ppDecl)
{
    return g_gameD3DDevice->CreateVertexDeclaration(pVertexElements, ppDecl);
}
// 0x000749c0
// Official: FUN_100749c0 @ 0x100749c0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetVertexDeclaration(IDirect3DVertexDeclaration9* pDecl)
{
    return g_gameD3DDevice->SetVertexDeclaration(pDecl);
}
// 0x000749e0
// Official: FUN_100749e0 @ 0x100749e0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetVertexDeclaration(IDirect3DVertexDeclaration9** ppDecl)
{
    return g_gameD3DDevice->GetVertexDeclaration(ppDecl);
}
// 0x00074a00
// Official: FUN_10074a00 @ 0x10074a00 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetFVF(DWORD FVF)
{
    return g_gameD3DDevice->SetFVF(FVF);
}
// 0x00074a20
// Official: FUN_10074a20 @ 0x10074a20 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetFVF(DWORD* pFVF)
{
    return g_gameD3DDevice->GetFVF(pFVF);
}
// 0x00074a40
// Official: FUN_10074a40 @ 0x10074a40 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateVertexShader(CONST DWORD* pFunction, IDirect3DVertexShader9** ppShader)
{
    return g_gameD3DDevice->CreateVertexShader(pFunction, ppShader);
}
// 0x00074a60
// Official: FUN_10074a60 @ 0x10074a60 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetVertexShader(IDirect3DVertexShader9* pShader)
{
    return g_gameD3DDevice->SetVertexShader(pShader);
}
// 0x00074a80
// Official: FUN_10074a80 @ 0x10074a80 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetVertexShader(IDirect3DVertexShader9** ppShader)
{
    return g_gameD3DDevice->GetVertexShader(ppShader);
}
// 0x00074aa0
// Official: FUN_10074aa0 @ 0x10074aa0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetVertexShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount)
{
    return g_gameD3DDevice->SetVertexShaderConstantF(StartRegister, pConstantData, Vector4fCount);
}
// 0x00074ac0
// Official: FUN_10074ac0 @ 0x10074ac0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetVertexShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount)
{
    return g_gameD3DDevice->GetVertexShaderConstantF(StartRegister, pConstantData, Vector4fCount);
}
// 0x00074ae0
// Official: FUN_10074ae0 @ 0x10074ae0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetVertexShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount)
{
    return g_gameD3DDevice->SetVertexShaderConstantI(StartRegister, pConstantData, Vector4iCount);
}
// 0x00074b00
// Official: FUN_10074b00 @ 0x10074b00 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetVertexShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount)
{
    return g_gameD3DDevice->GetVertexShaderConstantI(StartRegister, pConstantData, Vector4iCount);
}
// 0x00074b20
// Official: FUN_10074b20 @ 0x10074b20 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetVertexShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT BoolCount)
{
    return g_gameD3DDevice->SetVertexShaderConstantB(StartRegister, pConstantData, BoolCount);
}
// 0x00074b40
// Official: FUN_10074b40 @ 0x10074b40 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetVertexShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount)
{
    return g_gameD3DDevice->GetVertexShaderConstantB(StartRegister, pConstantData, BoolCount);
}
// 0x00074b60
// Official: FUN_10074b60 @ 0x10074b60 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9* pStreamData, UINT OffsetInBytes, UINT Stride)
{
    return g_gameD3DDevice->SetStreamSource(StreamNumber, pStreamData, OffsetInBytes, Stride);
}
// 0x00074b80
// Official: FUN_10074b80 @ 0x10074b80 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetStreamSource(UINT StreamNumber, IDirect3DVertexBuffer9** ppStreamData, UINT* OffsetInBytes, UINT* pStride)
{
    return g_gameD3DDevice->GetStreamSource(StreamNumber, ppStreamData, OffsetInBytes, pStride);
}
// 0x00074ba0
// Official: FUN_10074ba0 @ 0x10074ba0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetStreamSourceFreq(UINT StreamNumber, UINT Divider)
{
    return g_gameD3DDevice->SetStreamSourceFreq(StreamNumber, Divider);
}
// 0x00074bc0
// Official: FUN_10074bc0 @ 0x10074bc0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetStreamSourceFreq(UINT StreamNumber, UINT* Divider)
{
    return g_gameD3DDevice->GetStreamSourceFreq(StreamNumber, Divider);
}
// 0x00074be0
// Official: FUN_10074be0 @ 0x10074be0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetIndices(IDirect3DIndexBuffer9* pIndexData)
{
    return g_gameD3DDevice->SetIndices(pIndexData);
}
// 0x00074c00
// Official: FUN_10074c00 @ 0x10074c00 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetIndices(IDirect3DIndexBuffer9** ppIndexData)
{
    return g_gameD3DDevice->GetIndices(ppIndexData);
}
// 0x00074c20
// Official: FUN_10074c20 @ 0x10074c20 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreatePixelShader(CONST DWORD* pFunction, IDirect3DPixelShader9** ppShader)
{
    return g_gameD3DDevice->CreatePixelShader(pFunction, ppShader);
}
// 0x00074c40
// Official: FUN_10074c40 @ 0x10074c40 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetPixelShader(IDirect3DPixelShader9* pShader)
{
    return g_gameD3DDevice->SetPixelShader(pShader);
}
// 0x00074c60
// Official: FUN_10074c60 @ 0x10074c60 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetPixelShader(IDirect3DPixelShader9** ppShader)
{
    return g_gameD3DDevice->GetPixelShader(ppShader);
}
// 0x00074c80
// Official: FUN_10074c80 @ 0x10074c80 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetPixelShaderConstantF(UINT StartRegister, CONST float* pConstantData, UINT Vector4fCount)
{
    return g_gameD3DDevice->SetPixelShaderConstantF(StartRegister, pConstantData, Vector4fCount);
}
// 0x00074ca0
// Official: FUN_10074ca0 @ 0x10074ca0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetPixelShaderConstantF(UINT StartRegister, float* pConstantData, UINT Vector4fCount)
{
    return g_gameD3DDevice->GetPixelShaderConstantF(StartRegister, pConstantData, Vector4fCount);
}
// 0x00074cc0
// Official: FUN_10074cc0 @ 0x10074cc0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetPixelShaderConstantI(UINT StartRegister, CONST int* pConstantData, UINT Vector4iCount)
{
    return g_gameD3DDevice->SetPixelShaderConstantI(StartRegister, pConstantData, Vector4iCount);
}
// 0x00074ce0
// Official: FUN_10074ce0 @ 0x10074ce0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetPixelShaderConstantI(UINT StartRegister, int* pConstantData, UINT Vector4iCount)
{
    return g_gameD3DDevice->GetPixelShaderConstantI(StartRegister, pConstantData, Vector4iCount);
}
// 0x00074d00
// Official: FUN_10074d00 @ 0x10074d00 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::SetPixelShaderConstantB(UINT StartRegister, CONST BOOL* pConstantData, UINT BoolCount)
{
    return g_gameD3DDevice->SetPixelShaderConstantB(StartRegister, pConstantData, BoolCount);
}
// 0x00074d20
// Official: FUN_10074d20 @ 0x10074d20 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::GetPixelShaderConstantB(UINT StartRegister, BOOL* pConstantData, UINT BoolCount)
{
    return g_gameD3DDevice->GetPixelShaderConstantB(StartRegister, pConstantData, BoolCount);
}
// 0x00074d40
// Official: FUN_10074d40 @ 0x10074d40 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawRectPatch(UINT Handle, CONST float* pNumSegs, CONST D3DRECTPATCH_INFO* pRectPatchInfo)
{
    return g_gameD3DDevice->DrawRectPatch(Handle, pNumSegs, pRectPatchInfo);
}
// 0x00074d60
// Official: FUN_10074d60 @ 0x10074d60 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DrawTriPatch(UINT Handle, CONST float* pNumSegs, CONST D3DTRIPATCH_INFO* pTriPatchInfo)
{
    return g_gameD3DDevice->DrawTriPatch(Handle, pNumSegs, pTriPatchInfo);
}
// 0x00074d80
// Official: FUN_10074d80 @ 0x10074d80 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::DeletePatch(UINT Handle)
{
    return g_gameD3DDevice->DeletePatch(Handle);
}
// 0x00074da0
// Official: FUN_10074da0 @ 0x10074da0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::CreateQuery(D3DQUERYTYPE Type, IDirect3DQuery9** ppQuery)
{
    return g_gameD3DDevice->CreateQuery(Type, ppQuery);
}

// 0x001e0490
BOOL g_deviceMaterialOverrideEnabled;
// 0x001e0494
BYTE* g_deviceMaterialOverrides;
// 0x0017ebf0
DWORD g_deviceMaterialIndex;
// 0x0018f564
void* g_devicePlateTexture;
// 0x002aca30
BYTE* g_devicePlateManager;
// 0x000a41d0
// Official: FUN_100a41d0 @ 0x100a41d0 (samp.dll)
void* GameGetVehiclePlateTexture()
{
    if (g_hookCachedBuffer)
    {
        g_devicePlateTexture = *(void**)((BYTE*)g_hookCachedBuffer + 0x34);
        return *(void**)((BYTE*)g_hookCachedBuffer + 0x34);
    }
    return 0;
}
// 0x000c54f0
// Official: FUN_100c54f0 @ 0x100c54f0 (samp.dll)
void ClientSetRenderState(DWORD state, DWORD value)
{
    // GTA SA virtual address: RenderWare engine pointer, outside samp.dll.
    ((void(__cdecl*)(DWORD, DWORD))(*(DWORD**)(*(DWORD*)0xc97b24 + 0x20)))(state, value);
}

#include "BitStream.h"
#include "RakClientInterface.h"
#include "anticheat.h"
#include "chatwindow.h"
#include "cmdwindow.h"
#include "game/playerped.h"
#include "game/vehicle.h"
#include "gui.h"
#include <DXUT.h>
#include <DXUTgui.h>
#include <stdio.h>
// 0x002aca1c
CAudioStream* g_renderAudioStream;
// 0x002aca08
CChatBubble* g_renderChatBubble;
// 0x002ac9e0
CDialog* g_renderDialog;
// 0x002ac9e4
CRenderPanel* g_renderPanel;
// 0x002ac9e8
CDownloadWindow* g_renderDownloadWindow;
// 0x002ac9f4
CObjectSelection* g_renderObjectSelection;
// 0x002ac9f8
CTextDrawSelection* g_renderTextDrawSelection;
// 0x002ac9fc
CNetStats* g_renderNetStats;
// 0x002aca00
CSrvNetStats* g_renderServerNetStats;
// 0x002aca04
CHelpDialog* g_renderHelp;
// 0x002acab4
CDXUTDialog* g_renderFirstDialog;
// 0x002acabc
CDXUTDialog* g_renderSecondDialog;
// 0x0016be7c
DWORD g_renderScreenshotRequested;
// 0x002aca48
BYTE g_renderShowVehicleInfo;
// 0x00140bdc
GroundHeightFunction g_renderGroundHeight = (GroundHeightFunction)0x569660; // GTA SA virtual address.
// 0x0011bbd4
int g_renderMapClickRpc = 119;
// 0x000751b0
// Official: FUN_100751b0 @ 0x100751b0 (samp.dll)
HRESULT __stdcall IDirect3DDevice9Hook::Present(CONST RECT* source, CONST RECT* dest, HWND window, CONST RGNDATA* dirty)
{
    if (g_renderScreenshotRequested)
        ClientCaptureScreenshot();
    ClientProcessMenuTransition();
    if (g_pGame->IsMenuVisible())
    {
        if (g_pGame->IsMenuVisible() && g_pNetGame && *(DWORD*)0xba6774 && (GetAsyncKeyState(VK_RBUTTON) & 1) && !*(BYTE*)0xba8298)
        {
            // Native leaves both coordinates uninitialized if no marker matches.
            // No deterministic behavior is claimed for that invalid-marker path.
            float x, y;
            for (int i = 0; i < 175; i++)
            {
                BYTE* marker = (BYTE*)(0xba873d + i * 40);
                if (*(WORD*)marker == 0x1203)
                {
                    memcpy(&x, marker - 0x1d, 4);
                    memcpy(&y, marker - 0x19, 4);
                }
            }
            RakNet::BitStream stream;
            stream.Write(x);
            stream.Write(y);
            float z = g_renderGroundHeight(x, y) + 2.0f;
            stream.Write(z);
            (*(RakClientInterface**)((BYTE*)g_pNetGame + 0x2c))->RPC(&g_renderMapClickRpc, &stream, HIGH_PRIORITY, RELIABLE, 0, false);
        }
        goto present;
    }
    if (g_pNetGame)
    {
        BYTE* vehicles = *(BYTE**)(*(BYTE**)((BYTE*)g_pNetGame + 0x3de) + 0xc);
        ClientDrawPlayerTags();
        ClientDrawLabels();
        if (g_renderAudioStream)
            g_renderAudioStream->DrawInfo();
        if (g_renderShowVehicleInfo)
        {
            if (g_deviceLabel)
                g_deviceLabel->Begin();
            for (int i = 0; i < 2000; i++)
            {
                if (*(DWORD*)(vehicles + 0x3074 + i * 4) != 1)
                    continue;
                CVehicle* vehicle = *(CVehicle**)(vehicles + 0x1134 + i * 4);
                if (!vehicle)
                    continue;
                CEntity* entity = (CEntity*)vehicle;
                if (entity->GetDistanceToLocalPlayer() <= 20.0f)
                {
                    CMatrix matrix;
                    entity->GetMatrix(&matrix);
                    CVector position = matrix.position;
                    CVector* sync = (CVector*)(vehicles + 0x11ad4 + i * 12);
                    // Native promotes these six values before the following getters.
                    double cx = position.x, cy = position.y, cz = position.z, sx = sync->x, sy = sync->y, sz = sync->z;
                    unsigned seats = vehicle->GetMaxPassengers();
                    double distance = entity->GetDistanceToLocalPlayer();
                    int preloadModel = entity->GetModelIndex();
                    unsigned preloaded = *((BYTE*)g_pGame + preloadModel - 0x122);
                    double health = vehicle->GetHealth();
                    int subtype = vehicle->GetSubtype();
                    int model = entity->GetModelIndex();
                    char text[256];
                    sprintf(text, "[id: %d, type: %d subtype: %d Health: %.1f preloaded: %u]\nDistance: %.2fm\nPassengerSeats: %u\ncPos: %.3f,%.3f,%.3f\nsPos: %.3f,%.3f,%.3f", i,
                            model, subtype, health, preloaded, distance, seats, cx, cy, cz, sx, sy, sz);
                    g_deviceLabel->Draw(&position, text, 0xff358bd4, TRUE, FALSE);
                }
            }
            if (g_deviceLabel)
                g_deviceLabel->End();
        }
        if (g_pNetGame)
        {
            if (*(DWORD*)g_deviceScoreboard)
            {
                g_pGame->EnableHUD(FALSE);
                g_deviceScoreboard->Draw();
                goto present;
            }
            SHORT key = GetAsyncKeyState(VK_F5);
            if (key && *(DWORD*)((BYTE*)g_pNetGame + 0x3cd) == 5)
            {
                g_pGame->EnableHUD(FALSE);
                if (g_renderNetStats)
                    g_renderNetStats->Draw();
                goto present;
            }
            if (g_pNetGame)
            {
                key = GetAsyncKeyState(VK_F10);
                if (key)
                {
                    g_pGame->EnableHUD(FALSE);
                    if (g_renderServerNetStats)
                        g_renderServerNetStats->Draw();
                    goto present;
                }
                if (g_pNetGame && GetAsyncKeyState(VK_F1) && g_renderHelp)
                    g_renderHelp->Show();
            }
        }
    }
    g_pGame->EnableHUD(g_pChat->m_nMode != 0);
    if (g_pGame && g_pGame->GetPlayerPed() && (int)g_pGame->GetPlayerPed()->GetDrunkLevel() > 5000)
        g_pGame->EnableHUD(FALSE);
    if (g_renderChatBubble)
        g_renderChatBubble->Draw();
    if (g_pNetGame && *(DWORD*)(*(BYTE**)((BYTE*)g_pNetGame + 0x3de) + 0x1c))
        (*(CLabelPool**)(*(BYTE**)((BYTE*)g_pNetGame + 0x3de) + 0x1c))->Draw();
    if (g_pChat)
        g_pChat->Draw();
    if (g_pInput)
        g_pInput->EnableCursor();
    if (g_deviceDeathWindow)
        ((CDeathWindow*)g_deviceDeathWindow)->Draw();
    if (g_pNetGame)
    {
        if (g_renderDialog)
            g_renderDialog->Draw();
        if (g_pNetGame)
        {
            if (g_renderPanel)
                g_renderPanel->Draw();
            if (g_pNetGame && g_renderDownloadWindow)
                g_renderDownloadWindow->Draw();
        }
    }
    if (g_renderFirstDialog)
        g_renderFirstDialog->OnRender(10.0f);
    if (g_renderSecondDialog)
        g_renderSecondDialog->OnRender(10.0f);
    if (g_deviceObjectEdit)
        ((CObjectEdit*)g_deviceObjectEdit)->Render();
    if (g_renderObjectSelection)
        g_renderObjectSelection->Draw();
    if (g_renderTextDrawSelection)
        g_renderTextDrawSelection->Process();
present:
    if (g_clientSettings.debug)
        GameDebugDraw();
    GameDeviceIntegrityCycle();
    HRESULT result = g_gameD3DDevice->Present(source, dest, window, dirty);
    GameDeviceIntegrityCycle();
    return result;
}

#include "main.h"
// Reconstructed from 0.3.DL-R1 machine code; 0.2x is structural context only.
// Build with the pinned VC++ 2003 flags. See analysis/chat-build-v51-O2-Ob2.json.
#include "chatwindow.h"
// 0x00068e00
// Official: FUN_10068e00 @ 0x10068e00 (samp.dll)
LONG CChat::GetChatWindowBottom()
{
    return m_nWindowBottom;
}
// 0x00067f20
// Official: FUN_10067f20 @ 0x10067f20 (samp.dll)
void CChat::SetTimestamps(BYTE enabled)
{
    *((BYTE*)this + offsetof(CChat, m_bTimestamps)) = enabled;
    m_bRedraw = TRUE;
}
// 0x00067f40
// Official: FUN_10067f40 @ 0x10067f40 (samp.dll)
BYTE CChat::GetTimestamps()
{
    return *((BYTE*)this + offsetof(CChat, m_bTimestamps));
}
#include "cmdwindow.h"
#include "runutil.h"
#include <DXUT.h>
#include <DXUTgui.h>
#include <DXUTmisc.h>
#include <assert.h>
#include <new>
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
#include <time.h>

// Unresolved native dependencies, with explicit VA bindings in the build report.
// These declarations do not call back into the original DLL.
#include "config.h"
// 0x002aca3c
extern CGame* g_pGame;
// 0x002aca14
extern CInput* g_pInput;

// 0x00060d30
// Official: FUN_10060d30 @ 0x10060d30 (samp.dll)
int CChat::GetMode()
{
    return m_nMode;
}

// 0x00060d40
// Official: FUN_10060d40 @ 0x10060d40 (samp.dll)
void CChat::SwitchMode()
{
    int mode = m_nMode;
    m_bRedraw = TRUE;
    if (mode == DISPLAY_MODE_OFF)
    {
        m_nMode = DISPLAY_MODE_NORMAL;
        return;
    }
    if (mode == DISPLAY_MODE_NOSHADOW)
    {
        m_nMode = DISPLAY_MODE_OFF;
        return;
    }
    if (mode == DISPLAY_MODE_NORMAL)
        m_nMode = DISPLAY_MODE_NOSHADOW;
}

// 0x00066b90
// Official: FUN_10066b90 @ 0x10066b90 (samp.dll)
void CChat::RecalcFontSize()
{
    RECT rect;
    m_pFontRenderer->m_pFont->DrawTextA(0, "Y", -1, &rect, DT_CALCRECT | DT_SINGLELINE, 0xff000000);
    m_nCharHeight = rect.bottom - rect.top;
    m_pFontRenderer->m_pFont->DrawTextA(0, "[19:58:34]", -1, &rect, DT_CALCRECT | DT_SINGLELINE, 0xff000000);
    m_nTimestampWidth = rect.right - rect.left;
}

// 0x00066c10
// Official: FUN_10066c10 @ 0x10066c10 (samp.dll)
void CChat::OnLostDevice()
{
    if (m_pSurface)
    {
        m_pSurface->Release();
        m_pSurface = 0;
    }
    if (m_pTexture)
    {
        m_pTexture->Release();
        m_pTexture = 0;
    }
    if (m_pRenderToSurface)
    {
        m_pRenderToSurface->Release();
        m_pRenderToSurface = 0;
    }
}

// 0x00066c70
// Official: FUN_10066c70 @ 0x10066c70 (samp.dll)
void CChat::UpdateScrollbar()
{
    if (m_pScrollbar)
    {
        m_pScrollbar->SetLocation(10, 40);
        m_pScrollbar->SetSize(20, (m_nCharHeight + 1) * m_nPageSize - 60);
        m_pScrollbar->SetTrackRange(1, 100);
        m_pScrollbar->SetPageSize(m_nPageSize);
        m_pScrollbar->SetTrackPos(100 - m_nPageSize);
    }
}

// 0x00066d10
// Official: FUN_10066d10 @ 0x10066d10 (samp.dll)
void CChat::SetPageSize(int size)
{
    if (size >= 10 && size <= 100)
    {
        m_nPageSize = size;
        UpdateScrollbar();
        m_bRedraw = TRUE;
    }
}

// 0x00066d40
// Official: FUN_10066d40 @ 0x10066d40 (samp.dll)
void CChat::PageUp()
{
    if (m_nMode && m_pScrollbar && !g_pGame->IsMenuVisible() && !g_pInput->IsActive())
    {
        int pos = m_pScrollbar->GetTrackPos() - m_nPageSize;
        if (pos < 1)
            pos = 1;
        m_pScrollbar->SetTrackPos(pos);
    }
}

// 0x00066da0
// Official: FUN_10066da0 @ 0x10066da0 (samp.dll)
void CChat::PageDown()
{
    if (m_nMode && m_pScrollbar && !g_pGame->IsMenuVisible() && !g_pInput->IsActive())
    {
        int pos = m_pScrollbar->GetTrackPos();
        if (pos == 1)
            pos = m_nPageSize;
        else
            pos += m_nPageSize;
        if (pos > 100)
            pos = 100;
        m_pScrollbar->SetTrackPos(pos);
    }
}

// 0x00066e00
// Official: FUN_10066e00 @ 0x10066e00 (samp.dll)
void CChat::ScrollToBottom()
{
    if (m_pScrollbar)
        m_pScrollbar->SetTrackPos(90);
}

// 0x00066e30
// Official: FUN_10066e30 @ 0x10066e30 (samp.dll)
void CChat::Scroll(int delta)
{
    if (m_nMode && m_pScrollbar)
    {
        unsigned int lines;
        SystemParametersInfoA(0x68, 0, &lines, 0);
        m_pScrollbar->Scroll(-(lines * delta));
    }
}

// 0x00066e90
// Official: FUN_10066e90 @ 0x10066e90 (samp.dll)
void CChat::FilterOutInvalidChars(char* text)
{
    while (*text)
    {
        if (*text > 0 && *text < ' ')
            *text = ' ';
        ++text;
    }
}

// 0x00066ec0
// Official: FUN_10066ec0 @ 0x10066ec0 (samp.dll)
void CChat::PushBack()
{
    // Native quirk: forward REP MOVSD copies 100 entries, reading one entry
    // past the history, including 180 bytes beyond this object. Do not shorten
    // to 99. This preserves target behavior, not portable memcpy semantics.
    // Group the address expressions to preserve VC++ 2003 instruction ordering.
    struct CopyAddresses
    {
        void* destination;
        void* source;
    } copy = {m_entry, m_entry + 1};
    memcpy(copy.destination, copy.source, sizeof(m_entry));
}

// 0x00067240
// Official: FUN_10067240 @ 0x10067240 (samp.dll)
void CChat::Log(int type, const char* text, const char* prefix)
{
    time_t now = time(0);
    char stamp[65];
    if (m_bDoesLogExist)
    {
        FILE* file = fopen(m_szLogPath, "a");
        if (file)
        {
            strftime(stamp, 64, "[%H:%M:%S]", localtime(&now));
            switch (type)
            {
                case ENTRY_TYPE_CHAT:
                    fprintf(file, "%s <%s> %s\r\n", stamp, prefix, text);
                    break;
                case ENTRY_TYPE_INFO:
                case ENTRY_TYPE_DEBUG:
                    fprintf(file, "%s %s\r\n", stamp, text);
                    break;
            }
            fclose(file);
        }
    }
}

// 0x00067310
// Official: FUN_10067310 @ 0x10067310 (samp.dll)
void CChat::ResetDialogControls(CDXUTDialog* dialog)
{
    m_pGameUi = dialog;
    if (dialog)
    {
        m_pScrollbar = new CDXUTScrollBar(dialog);
        dialog->AddControl(m_pScrollbar);
        m_pScrollbar->SetVisible(true);
        m_pScrollbar->SetEnabled(true);
        UpdateScrollbar();
    }
}

// 0x00067650
// Official: FUN_10067650 @ 0x10067650 (samp.dll)
void CChat::AddEntry(int type, const char* text, const char* prefix, D3DCOLOR color, D3DCOLOR prefixColor)
{
    int split = 0;
    PushBack();
    if (prefix && strlen(prefix) > 24)
        return;
    ChatEntry& entry = m_entry[99];
    entry.type = type;
    entry.textColor = color;
    entry.prefixColor = prefixColor;
    entry.timestamp = time(0);
    if (prefix)
    {
        strcpy(entry.prefix, prefix);
        strcat(entry.prefix, ":");
    }
    else
        entry.prefix[0] = 0;
    Log(type, text, prefix);
    if (entry.type == ENTRY_TYPE_CHAT && strlen(text) > MAX_LINE_LENGTH)
    {
        split = MAX_LINE_LENGTH;
        while (text[split] != ' ' && split)
            --split;
        if (MAX_LINE_LENGTH - split > 12)
        {
            strncpy(entry.text, text, MAX_LINE_LENGTH);
            entry.text[MAX_LINE_LENGTH] = 0;
            PushBack();
            entry.type = type;
            entry.textColor = color;
            entry.prefixColor = prefixColor;
            entry.prefix[0] = 0;
            strcpy(entry.text, text + MAX_LINE_LENGTH);
        }
        else
        {
            strncpy(entry.text, text, split);
            entry.text[split] = 0;
            PushBack();
            entry.type = type;
            entry.textColor = color;
            entry.prefixColor = prefixColor;
            entry.prefix[0] = 0;
            strcpy(entry.text, text + split + 1);
        }
    }
    else
    {
        strncpy(entry.text, text, MAX_MESSAGE_LENGTH);
        entry.text[MAX_MESSAGE_LENGTH] = 0;
    }
    m_bRedraw = TRUE;
}

// 0x00067a90
// Official: FUN_10067a90 @ 0x10067a90 (samp.dll)
void CChat::AddChatMessage(const char* prefix, D3DCOLOR prefixColor, char* text)
{
    FilterOutInvalidChars(text);
    AddEntry(ENTRY_TYPE_CHAT, text, prefix, m_textColor, prefixColor);
}

// 0x00067be0
// Official: FUN_10067be0 @ 0x10067be0 (samp.dll)
void CChat::AddMessage(D3DCOLOR color, char* text)
{
    if (strlen(text) <= MAX_MESSAGE_LENGTH)
    {
        ChatPrepareMessage(text, 255);
        FilterOutInvalidChars(text);
        AddEntry(ENTRY_TYPE_INFO, text, 0, (color >> 8) | 0xff000000, 0);
    }
}

// 0x00067ae0
// Official: FUN_10067ae0 @ 0x10067ae0 (samp.dll)
void CChat::AddInfoMessage(const char* format, ...)
{
    char text[512];
    memset(text, 0, sizeof(text));
    va_list args;
    va_start(args, format);
    vsprintf(text, format, args);
    va_end(args);
    FilterOutInvalidChars(text);
    AddEntry(ENTRY_TYPE_INFO, text, 0, m_infoColor, 0);
}

// 0x00067b60
// Official: FUN_10067b60 @ 0x10067b60 (samp.dll)
void CChat::AddDebugMessage(const char* format, ...)
{
    char text[512];
    memset(text, 0, sizeof(text));
    va_list args;
    va_start(args, format);
    vsprintf(text, format, args);
    va_end(args);
    FilterOutInvalidChars(text);
    AddEntry(ENTRY_TYPE_DEBUG, text, 0, m_debugColor, 0);
}

// 0x00067df0
// Official: FUN_10067df0 @ 0x10067df0 (samp.dll)
CChat::CChat(IDirect3DDevice9* device, CFonts* fonts, const char* path)
{
    m_pDevice = device;
    m_pFontRenderer = fonts;
    m_nMode = DISPLAY_MODE_NORMAL;
    D3DXCreateSprite(device, &m_pTextSprite);
    D3DXCreateSprite(device, &m_pSprite);
    // As with CopyAddresses, this groups recovered operations, not original names.
    struct ClearRange
    {
        void* destination;
        size_t length;
    } clear = {m_entry, sizeof(m_entry)};
    memset(clear.destination, 0, clear.length);
    m_textColor = 0xffffffff;
    m_infoColor = 0xff88aa62;
    m_debugColor = 0xffa9c4e4;
    m_nPageSize = 10;
    m_bTimestamps = false;
    if (path && strlen(path))
    {
        memset(m_szLogPath, 0, sizeof(m_szLogPath));
        strncpy(m_szLogPath, path, 260);
        FILE* file = fopen(m_szLogPath, "w");
        if (file)
        {
            m_bDoesLogExist = TRUE;
            fclose(file);
        }
    }
    m_pSurface = 0;
    m_pTexture = 0;
    m_pRenderToSurface = 0;
    m_lastSurfaceUpdate = GetTickCount();
    m_nScrollbarPos = 1;
    m_pScrollbar = 0;
    m_pGameUi = 0;
    m_pEditbox = 0;
    OnResetDevice();
}

// 0x00067870
// Official: FUN_10067870 @ 0x10067870 (samp.dll)
void CChat::Draw()
{
    if (m_pScrollbar)
    {
        if (m_nMode == 0 || (m_pScrollbar->GetTrackPos() == 100 - m_nPageSize && !g_pInput->m_bEnabled))
            m_pScrollbar->SetVisible(false);
        else
            m_pScrollbar->SetVisible(true);
        if (m_nMode)
        {
            if (m_bRenderToSurface && m_bSurfaceValid)
            {
                m_pSprite->Begin(D3DXSPRITE_ALPHABLEND);
                m_pSprite->Draw(m_pTexture, 0, 0, 0, 0xffffffff);
                m_pSprite->End();
                return;
            }
            m_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);
            Render();
            m_pTextSprite->End();
        }
    }
}

// 0x00067940
// Official: FUN_10067940 @ 0x10067940 (samp.dll)
void CChat::RenderToSurface()
{
    if (m_bRenderToSurface && m_pDevice && m_pRenderToSurface && m_pTexture && m_pSurface && m_pFontRenderer->m_pFont)
    {
        if (g_pGame->IsMenuVisible())
        {
            m_bSurfaceValid = FALSE;
            m_bRedraw = TRUE;
            return;
        }
        if (m_nMode && (m_bRedraw || m_nScrollbarPos != m_pScrollbar->GetTrackPos()))
        {
            m_pRenderToSurface->BeginScene(m_pSurface, 0);
            m_pDevice->Clear(0, 0, D3DCLEAR_TARGET | D3DCLEAR_ZBUFFER, 0, 0.0f, 0);
            m_pTextSprite->Begin(D3DXSPRITE_ALPHABLEND);
            m_pDevice->SetRenderState(D3DRS_DESTBLEND, D3DBLEND_BLENDFACTOR);
            Render();
            m_pTextSprite->End();
            m_pRenderToSurface->EndScene(0);
            m_bRedraw = FALSE;
            m_bSurfaceValid = TRUE;
            m_lastSurfaceUpdate = GetTickCount();
            m_nScrollbarPos = m_pScrollbar->GetTrackPos();
        }
    }
}

// 0x00067c40
// Official: FUN_10067c40 @ 0x10067c40 (samp.dll)
void CChat::OnResetDevice()
{
    m_bRenderToSurface = TRUE;
    if (m_pSurface)
    {
        m_pSurface->Release();
        m_pSurface = 0;
    }
    if (m_pTexture)
    {
        m_pTexture->Release();
        m_pTexture = 0;
    }
    if (m_pRenderToSurface)
    {
        m_pRenderToSurface->Release();
        m_pRenderToSurface = 0;
    }
    m_pDevice->GetDisplayMode(0, &m_displayMode);
    if (g_pConfig->GetIntValue("directmode"))
    {
        AddDebugMessage("ChatWindow: Using direct drawing mode.");
        RecalcFontSize();
        m_bRenderToSurface = FALSE;
        return;
    }
    HRESULT result;
    if (m_displayMode.Width <= 1024)
        result = D3DXCreateTexture(m_pDevice, 1024, 512, 1, D3DUSAGE_RENDERTARGET, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &m_pTexture);
    else
        result = D3DXCreateTexture(m_pDevice, 2048, 1024, 1, D3DUSAGE_RENDERTARGET, D3DFMT_A8R8G8B8, D3DPOOL_DEFAULT, &m_pTexture);
    if (FAILED(result))
    {
        AddDebugMessage("ChatWindow: Can't create a render surface texture. Will use direct mode.");
        m_bRenderToSurface = FALSE;
        return;
    }
    m_pTexture->GetSurfaceLevel(0, &m_pSurface);
    D3DSURFACE_DESC desc;
    m_pSurface->GetDesc(&desc);
    result = D3DXCreateRenderToSurface(m_pDevice, desc.Width, desc.Height, desc.Format, TRUE, D3DFMT_D16, &m_pRenderToSurface);
    if (FAILED(result))
    {
        AddDebugMessage("ChatWindow: Can't create a render to surface. Will use direct mode.");
        RecalcFontSize();
        m_bRenderToSurface = FALSE;
        return;
    }
    RecalcFontSize();
    m_bSurfaceValid = FALSE;
    m_bRedraw = TRUE;
}

// 0x000673b0
// Official: FUN_100673b0 @ 0x100673b0 (samp.dll)
void CChat::Render()
{
    RECT rect, measure;
    // Keep the two native cursor slots in order for the VC++ 2003 stack layout.
    // This groups recovered locals; it does not assert their original names.
    struct Cursor
    {
        int line;
        int length;
    } cursor;
    cursor.line = 0;
    char stamp[65];
    memset(stamp, 0, 64);
    rect.top = 10;
    rect.left = 45;
    rect.bottom = 110;
    rect.right = 550;
    if (m_pScrollbar->GetTrackPos() < 1)
        m_pScrollbar->SetTrackPos(1);
    int pos = m_pScrollbar->GetTrackPos();
    if (pos < 1)
        pos = 1;
    while (cursor.line != m_nPageSize)
    {
        ChatEntry& entry = m_entry[pos];
        if (m_bTimestamps)
        {
            // The chat entry keeps a 32-bit Unix stamp, matching the field the
            // compiler that built this tree originally had (time_t was a long
            // then).  Read it back through the 32-bit entry point so the value
            // is not re-widened by the current <time.h>.
            tm* timeInfo = _localtime32(reinterpret_cast<const __time32_t*>(&entry.timestamp));
            memset(stamp, 0, 64);
            if (timeInfo)
                strftime(stamp, 64, "[%H:%M:%S]", timeInfo);
        }
        switch (entry.type)
        {
            case ENTRY_TYPE_CHAT:
                if (m_bTimestamps && (cursor.length = strlen(stamp)) && entry.prefix[0])
                {
                    RenderEntry(stamp, rect, entry.textColor);
                    rect.left = m_nTimestampWidth + 50;
                }
                cursor.length = strlen(entry.prefix);
                if (cursor.length)
                {
                    m_pFontRenderer->m_pFont->DrawTextA(0, entry.prefix, -1, &measure, DT_CALCRECT, 0xff000000);
                    RenderEntry(entry.prefix, rect, entry.prefixColor);
                    rect.left += measure.right - measure.left + 5;
                }
                RenderEntry(entry.text, rect, entry.textColor);
                break;
            case ENTRY_TYPE_INFO:
            case ENTRY_TYPE_DEBUG:
                if (m_bTimestamps && (cursor.length = strlen(stamp)))
                {
                    RenderEntry(stamp, rect, entry.textColor);
                    rect.left = m_nTimestampWidth + 50;
                }
                RenderEntry(entry.text, rect, entry.textColor);
                break;
        }
        rect.top += m_nCharHeight + 1;
        rect.bottom = rect.top + m_nCharHeight + 1;
        rect.left = 45;
        ++pos;
        ++cursor.line;
    }
    m_nWindowBottom = rect.bottom;
}

// 0x00066ee0
// Official: FUN_10066ee0 @ 0x10066ee0 (samp.dll)
void CChat::RenderEntry(const char* text, RECT rect, D3DCOLOR color)
{
    ID3DXFont* shadow = m_pFontRenderer->m_pShadow;
    ID3DXFont* font = m_pFontRenderer->m_pFont;
    int length = strlen(text);
    if (m_nMode == DISPLAY_MODE_NORMAL)
    {
        char plain[512] = {0};
        strncpy(plain, text, 511);
        ChatStripColorTags(plain);
        int plainLength = strlen(plain);
        if (g_chatScreenWidth > 1280)
        {
            rect.top -= 2;
            rect.bottom -= 2;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            ++rect.top;
            ++rect.bottom;
            --rect.left;
            --rect.right;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            ++rect.left;
            ++rect.right;
            ++rect.left;
            ++rect.right;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            --rect.left;
            --rect.right;
            ++rect.top;
            ++rect.bottom;
            rect.top += 2;
            rect.bottom += 2;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            --rect.top;
            --rect.bottom;
            --rect.left;
            --rect.right;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            ++rect.left;
            ++rect.right;
            ++rect.left;
            ++rect.right;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            --rect.left;
            --rect.right;
            --rect.top;
            --rect.bottom;
            rect.left -= 2;
            rect.right -= 2;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            rect.left += 2;
            rect.right += 2;
            rect.left += 2;
            rect.right += 2;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            rect.left -= 2;
            rect.right -= 2;
        }
        else
        {
            --rect.top;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            ++rect.top;
            ++rect.top;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            --rect.top;
            --rect.left;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            rect.left += 2;
            shadow->DrawTextA(m_pTextSprite, plain, plainLength, (RECT*)&rect, 0x120, 0xff000000);
            --rect.left;
        }
    }
    font->DrawTextA(m_pTextSprite, text, length, (RECT*)&rect, 0x120, color | 0xff000000);
}

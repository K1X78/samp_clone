#include "game/font.h"
// 0x0009fc80
// Official: FUN_1009fc80 @ 0x1009fc80 (samp.dll)
void Font_PrintString(float x, float y, char* text)
{
    ((void(__cdecl*)(float, float, char*))0x71a700)(x, y, text);
}
// 0x0009fca0
// Official: FUN_1009fca0 @ 0x1009fca0 (samp.dll)
__declspec(naked) void Font_SetColor(DWORD color)
{
    // clang-format off
    __asm mov eax,0x719430 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fcb0
// Official: FUN_1009fcb0 @ 0x1009fcb0 (samp.dll)
__declspec(naked) void Font_SetDropColor(DWORD color)
{
    // clang-format off
    __asm mov eax,0x719510 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fcc0
// Official: FUN_1009fcc0 @ 0x1009fcc0 (samp.dll)
__declspec(naked) void Font_SetOutline(int outline)
{
    // clang-format off
    __asm mov eax,0x719590 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fcd0
// Official: FUN_1009fcd0 @ 0x1009fcd0 (samp.dll)
__declspec(naked) void Font_Unk12(int value)
{
    // clang-format off
    __asm mov eax,0x719600 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fce0
// Official: FUN_1009fce0 @ 0x1009fce0 (samp.dll)
__declspec(naked) void Font_SetScale(float x, float y)
{
    // clang-format off
    __asm mov eax,0x719380 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fcf0
// Official: FUN_1009fcf0 @ 0x1009fcf0 (samp.dll)
__declspec(naked) void Font_SetJustify(int justify)
{
    // clang-format off
    __asm mov eax,0x719610 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd00
// Official: FUN_1009fd00 @ 0x1009fd00 (samp.dll)
__declspec(naked) void Font_SetFontStyle(int style)
{
    // clang-format off
    __asm mov eax,0x719490 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd10
// Official: FUN_1009fd10 @ 0x1009fd10 (samp.dll)
__declspec(naked) void Font_SetProportional(int proportional)
{
    // clang-format off
    __asm mov eax,0x7195b0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd20
// Official: FUN_1009fd20 @ 0x1009fd20 (samp.dll)
__declspec(naked) void Font_SetRightJustifyWrap(float wrap)
{
    // clang-format off
    __asm mov eax,0x7194f0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd30
// Official: FUN_1009fd30 @ 0x1009fd30 (samp.dll)
__declspec(naked) void Font_UseBox(int use, int unknown)
{
    // clang-format off
    __asm mov eax,0x7195c0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd40
// Official: FUN_1009fd40 @ 0x1009fd40 (samp.dll)
__declspec(naked) void Font_UseBoxColor(DWORD color)
{
    // clang-format off
    __asm mov eax,0x7195e0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd50
// Official: FUN_1009fd50 @ 0x1009fd50 (samp.dll)
__declspec(naked) void Font_SetLineWidth(float width)
{
    // clang-format off
    __asm mov eax,0x7194d0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd60
// Official: FUN_1009fd60 @ 0x1009fd60 (samp.dll)
__declspec(naked) void Font_SetLineHeight(float height)
{
    // clang-format off
    __asm mov eax,0x7194e0 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd70
// Official: FUN_1009fd70 @ 0x1009fd70 (samp.dll)
__declspec(naked) void Font_SetShadow(int shadow)
{
    // clang-format off
    __asm mov eax,0x719570 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
}
// 0x0009fd90
// Official: FUN_1009fd90 @ 0x1009fd90 (samp.dll)
__declspec(naked) void Font_UnkConv2(char* text){
    // clang-format off
    __asm mov eax,0x69e160 // GTA SA virtual address.
    __asm jmp eax
    // clang-format on
} // Native returns this GTA address without calling it.
// 0x0009fd80
// Official: FUN_1009fd80 @ 0x1009fd80 (samp.dll)
DWORD Font_UnkConv(char* text, int a, int b, int c, int d, int e, int f, char* output)
{
    return 0x69de90;
}

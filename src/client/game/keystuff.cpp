#include "game/keystuff.h"
#include <string.h>
// 0x00152ac0
KeyPad* g_keysInternal = (KeyPad*)0xb73458;
// 0x00152ac4
BYTE* g_keysDriveLeft = (BYTE*)0xb6f1a4;
// 0x00152ac8
BYTE* g_keysDriveRight = (BYTE*)0xb6f1a5;
// 0x00190660
KeyPad g_keysLocal;
// 0x00190798
KeyPad g_keysPlayers[210];
// 0x001a0440
BYTE g_keysSavedDriveLeft;
// 0x001a0441
BYTE g_keysSavedDriveRight;
// 0x000a6fe0
// Official: FUN_100a6fe0 @ 0x100a6fe0 (samp.dll)
void KeyStuff::Initialize()
{
    memset(&g_keysLocal, 0, sizeof(g_keysLocal));
    memset(g_keysPlayers, 0, sizeof(g_keysPlayers));
}
// 0x000a7000
// Official: FUN_100a7000 @ 0x100a7000 (samp.dll)
void KeyStuff::UpdateKeys()
{
    memcpy(&g_keysLocal, g_keysInternal, sizeof(KeyPad));
    g_keysSavedDriveLeft = *g_keysDriveLeft;
    g_keysSavedDriveRight = *g_keysDriveRight;
}
// 0x000a7040
// Official: FUN_100a7040 @ 0x100a7040 (samp.dll)
void KeyStuff::ApplyLocalKeys()
{
    memcpy(g_keysInternal, &g_keysLocal, sizeof(KeyPad));
    *g_keysDriveLeft = g_keysSavedDriveLeft;
    *g_keysDriveRight = g_keysSavedDriveRight;
}
// 0x000a7080
// Official: FUN_100a7080 @ 0x100a7080 (samp.dll)
void KeyStuff::SetKeys(int player, const KeyPad* keys)
{
    memcpy(&g_keysPlayers[player], keys, sizeof(KeyPad));
}
// 0x000a70a0
// Official: FUN_100a70a0 @ 0x100a70a0 (samp.dll)
void KeyStuff::ApplyPlayerKeys(int player)
{
    memcpy(g_keysInternal, &g_keysPlayers[player], sizeof(KeyPad));
    *g_keysDriveLeft = g_keysPlayers[player].keys1[5] != 0;
    *g_keysDriveRight = g_keysPlayers[player].keys1[7] != 0;
}
// 0x000a70f0
// Official: FUN_100a70f0 @ 0x100a70f0 (samp.dll)
KeyPad* KeyStuff::GetInternalKeys()
{
    return g_keysInternal;
}
// 0x000a7100
// Official: FUN_100a7100 @ 0x100a7100 (samp.dll)
KeyPad* KeyStuff::GetLocalKeys()
{
    return &g_keysLocal;
}
// 0x000a7110
// Official: FUN_100a7110 @ 0x100a7110 (samp.dll)
KeyPad* KeyStuff::GetPlayerKeys(int player)
{
    return &g_keysPlayers[player];
}
// 0x000a7120
// Official: FUN_100a7120 @ 0x100a7120 (samp.dll)
void KeyStuff::ResetKeys(int player)
{
    memset(&g_keysPlayers[player], 0, sizeof(KeyPad));
}
// 0x000a7140
// Official: FUN_100a7140 @ 0x100a7140 (samp.dll)
void KeyStuff::ResetInternalKeys()
{
    memset(g_keysInternal, 0, 96);
}

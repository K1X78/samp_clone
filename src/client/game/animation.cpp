#include "game/animation.h"
#include "runutil.h"
#include <stdio.h>
#include <string.h>
// 0x001419d0
char g_animationNames[1812][36] = {
#include "game/animation_names.inc"
};
// 0x001871a8
DWORD g_animationKeys[1812];
// 0x0009c870
// Official: FUN_1009c870 @ 0x1009c870 (samp.dll)
WORD GameFindAnimation(const char* library, const char* name)
{
    if (!library || !name)
        return 0xffff;
    if (strlen(library) + strlen(name) > 36)
        return 0xffff;
    char combined[40];
    sprintf(combined, "%s:%s", library, name);
    Util_strupr(combined);
    for (int i = 0; i < 1812; i++)
        if (!strcmp(combined, g_animationNames[i]))
            return (WORD)(i + 1);
    return 0xffff;
}
// 0x0009c950
// Official: FUN_1009c950 @ 0x1009c950 (samp.dll)
char* GameGetAnimationName(short index)
{
    return index > 0 && index < 1813 ? g_animationNames[index - 1] : 0;
}
// 0x000b4080
// Official: FUN_100b4080 @ 0x100b4080 (samp.dll)
DWORD __stdcall GameAnimationKey(const char* name)
{
    return ((DWORD(__cdecl*)(const char*))0x53cf30)(name);
}
// 0x0009c980
// Official: FUN_1009c980 @ 0x1009c980 (samp.dll)
void GameInitializeAnimationKeys()
{
    for (int i = 0; i < 1812; i++)
    {
        char library[32] = {0}, name[32] = {0};
        char* separator = strchr(g_animationNames[i], ':');
        if (separator)
        {
            strncpy(library, g_animationNames[i], separator - g_animationNames[i]);
            strcpy(name, separator + 1);
            g_animationKeys[i] = GameAnimationKey(name);
        }
    }
}

// 0x0009ca50
// Official: FUN_1009ca50 @ 0x1009ca50 (samp.dll)
WORD GameFindAnimationByKey(DWORD key)
{
    for (int i = 0; i < 1812; i++)
        if (g_animationKeys[i] == key)
            return (WORD)(i + 1);
    return 0xffff;
}
// 0x000b4030
// Official: FUN_100b4030 @ 0x100b4030 (samp.dll)
DWORD __stdcall GameGetAnimationGroupKey(int group, int animation)
{
    // GTA SA virtual address: lookup returns an opaque association descriptor.
    BYTE* entry = ((BYTE * (__cdecl*)(int, int))0x4d3a60)(group, animation);
    return entry ? **(DWORD**)(entry + 0x10) : 0;
}

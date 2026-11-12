#include "svrnetstats.h"
#include <string.h>
// 0x0016c7f8
DWORD g_srvNetStatsHistory[74];
// 0x00070cc0
// Official: FUN_10070cc0 @ 0x10070cc0 (samp.dll)
CSrvNetStats::CSrvNetStats(IDirect3DDevice9* device)
{
    DWORD* state = (DWORD*)nativeState;
    state[2] = GetTickCount();
    state[1] = 0;
    state[0] = 0;
    state[4] = 0;
    state[3] = 0;
    state[5] = (DWORD)device;
    memset(g_srvNetStatsHistory, 0, sizeof(g_srvNetStatsHistory));
}

// The original DL function is RET. This is native disabled behavior,
// not a stand-in for an unrecovered renderer.
// 0x00070d00
// Official: FUN_10070d00 @ 0x10070d00 (samp.dll)
void CSrvNetStats::Draw() {}

#include "net/playerinfo.h"
#include <string.h>
// 0x0006e270
// Official: FUN_1006e270 @ 0x1006e270 (samp.dll)
int CPlayerInfo::GetScore()
{
    return score;
}
// 0x0006e280
// Official: FUN_1006e280 @ 0x1006e280 (samp.dll)
DWORD CPlayerInfo::GetPing()
{
    return ping;
}
// 0x0006e300
// Official: FUN_1006e300 @ 0x1006e300 (samp.dll)
DWORD CPlayerInfo::GetNameLength()
{
    return (DWORD)name.size();
}
// 0x000170c0
// Official: FUN_100170c0 @ 0x100170c0 (samp.dll)
const char* CPlayerInfo::GetName()
{
    return name.c_str();
}
// 0x0001da20
// Official: FUN_1001da20 @ 0x1001da20 (samp.dll)
void CPlayerInfo::SetName(const char* text)
{
    name.assign(text, strlen(text));
}
#include "net/remoteplayer.h"
#include <string.h>
// 0x00014060
// Official: FUN_10014060 @ 0x10014060 (samp.dll)
CPlayerInfo::CPlayerInfo(const char* text, DWORD isNpc)
{
    npc = isNpc;
    ping = 0;
    score = 0;
    name.assign(text, strlen(text));
    remote = new CRemotePlayer;
}
// 0x00013e10
// Official: FUN_10013e10 @ 0x10013e10 (samp.dll)
CPlayerInfo::~CPlayerInfo()
{
    if (remote)
    {
        delete remote;
        remote = 0;
    }
}

// 0x0000e2d0
// Official: FUN_1000e2d0 @ 0x1000e2d0 (samp.dll)
DWORD CPlayerInfo::GetNpcFlag()
{
    return npc;
}
// 0x0000e2e0
// Official: FUN_1000e2e0 @ 0x1000e2e0 (samp.dll)
void CPlayerInfo::SetScore(int value)
{
    score = value;
}
// 0x0000e2f0
// Official: FUN_1000e2f0 @ 0x1000e2f0 (samp.dll)
void CPlayerInfo::SetPing(DWORD value)
{
    ping = value;
}

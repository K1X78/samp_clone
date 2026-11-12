#include "game/actor.h"
#include "game/game.h"
#include "game/playerped.h"
#include "game/scripting.h"
#include "game/util.h"
#include "main.h"
#include <string.h>
// 0x0011e2d0
const Scripting::OpcodeInfo g_actorKillCommand = {0x321, "i"};
// 0x0011e294
const Scripting::OpcodeInfo g_actorImmunityCommand = {0x2ab, "iiiiii"};
// 0x0009c030
// Official: FUN_1009c030 @ 0x1009c030 (samp.dll)
float CActor::GetHealth()
{
    if (!actorBackend)
        return 0.0f;
    return actorBackend->health;
}
// 0x0009c050
// Official: FUN_1009c050 @ 0x1009c050 (samp.dll)
void CActor::SetHealth(float health)
{
    if (!actorBackend)
        return;
    memcpy(&actorBackend->health, &health, 4);
    if (actorBackend->health <= 0.0f)
        Scripting::ProcessCommand(&g_actorKillCommand, m_nHandle);
}
// 0x0009c090
// Official: FUN_1009c090 @ 0x1009c090 (samp.dll)
float CActor::GetArmour()
{
    if (!actorBackend)
        return 0.0f;
    return actorBackend->armour;
}
// 0x0009c0b0
// Official: FUN_1009c0b0 @ 0x1009c0b0 (samp.dll)
void CActor::SetArmour(float armour)
{
    if (actorBackend)
        memcpy(&actorBackend->armour, &armour, 4);
}
// 0x0009c0d0
// Official: FUN_1009c0d0 @ 0x1009c0d0 (samp.dll)
DWORD CActor::GetBackendFlags()
{
    if (!actorBackend)
        return 0;
    return actorBackend->flags;
}
// 0x0009c0e0
// Official: FUN_1009c0e0 @ 0x1009c0e0 (samp.dll)
void CActor::SetBackendFlags(DWORD flags)
{
    if (actorBackend)
        actorBackend->flags = flags;
}
// 0x0009c100
// Official: FUN_1009c100 @ 0x1009c100 (samp.dll)
BOOL CActor::IsDead()
{
    return !actorBackend || !(actorBackend->health > 0.0f);
}
// 0x0009c130
// Official: FUN_1009c130 @ 0x1009c130 (samp.dll)
BYTE CActor::GetBackendByte530()
{
    return *(BYTE*)&actorBackend->state530;
}
// 0x0009c140
// Official: FUN_1009c140 @ 0x1009c140 (samp.dll)
void CActor::SetBackendByte530(BYTE value)
{
    if (actorBackend)
        actorBackend->state530 = value;
}
// 0x0009c160
// Official: FUN_1009c160 @ 0x1009c160 (samp.dll)
DWORD CActor::HasBackendFlag100()
{
    if (!actorBackend)
        return 0;
    return (actorBackend->flags >> 8) & 1;
}
// 0x0009c180
// Official: FUN_1009c180 @ 0x1009c180 (samp.dll)
void CActor::SetInvulnerable(BYTE enabled)
{
    if (!actorBackend)
        return;
    invulnerable = enabled;
    if (enabled)
        Scripting::ProcessCommand(&g_actorImmunityCommand, m_nHandle, 1, 1, 1, 1, 1);
    else
        Scripting::ProcessCommand(&g_actorImmunityCommand, m_nHandle, 0, 0, 0, 1, 0);
}

// 0x0009be80
// Official: FUN_1009be80 @ 0x1009be80 (samp.dll)
void CActor::Destroy()
{
    void* saved = actorBackend;
    // GTA SA virtual address: excluded backend vtable.
    if (saved && GamePoolPedGetAt(m_nHandle) && *(DWORD*)actorBackend != 0x863c40)
    {
        // clang-format off
        __asm {mov ecx,saved}
        __asm {mov ebx,[ecx]}
        __asm {push 1}
        __asm {call dword ptr [ebx]} // clang-format on
        actorBackend = 0;
        m_pGameEntity = 0;
        return;
    }
    m_nHandle = 0;
    actorBackend = 0;
    m_pGameEntity = 0;
}
// 0x0009bff0
// Official: FUN_1009bff0 @ 0x1009bff0 (samp.dll)
void CActor::SetRotation(float heading)
{
    if (!actorBackend || !GamePoolPedGetAt(m_nHandle))
        return;
    float radians = GameHeadingToRadians(heading);
    actorBackend->heading = radians;
}
// 0x0009c1d0
// Official: FUN_1009c1d0 @ 0x1009c1d0 (samp.dll)
CActor::~CActor()
{
    Destroy();
}

// 0x0011e2e4
const Scripting::OpcodeInfo g_actorAnimationCommand = {0x812, "issfiiiii"};
// 0x0009bee0
// Official: FUN_1009bee0 @ 0x1009bee0 (samp.dll)
void CActor::PerformAnimation(const char* name, const char* library, float speed, DWORD loop, DWORD lockX, DWORD lockY, DWORD freeze, int time)
{
    int attempts = 0;
    if (!actorBackend || !GamePoolPedGetAt(m_nHandle))
        return;
    if (_stricmp(library, g_pedBlockedAnimationLibrary) == 0)
        return;
    if (!g_pGame->IsAnimationLoaded(library))
    {
        g_pGame->RequestAnimation(library);
        if (!g_pGame->IsAnimationLoaded(library))
        {
            do
            {
                ::Sleep(1);
                if (++attempts == 15)
                    return;
            }
            while (!g_pGame->IsAnimationLoaded(library));
        }
    }
    Scripting::ProcessCommand(&g_actorAnimationCommand, m_nHandle, name, library, (double)speed, loop, lockX, lockY, freeze, time);
}
// 0x00181e5c
void* g_actorTaskBackend;
// 0x0009bfb0
// Official: FUN_1009bfb0 @ 0x1009bfb0 (samp.dll)
DWORD GameClearActorTasks()
{
    // GTA SA virtual address: task clearing backend, thiscall with argument1.
    // clang-format off
    __asm {
        mov edx,g_actorTaskBackend
        mov ecx,[edx+0x47c]
        push 1
        mov eax,0x601640
        call eax
    }
    // clang-format on
    return 1;
}
// 0x0009bfd0
// Official: FUN_1009bfd0 @ 0x1009bfd0 (samp.dll)
void CActor::ClearTasks()
{
    g_actorTaskBackend = actorBackend;
    if (g_actorTaskBackend)
        GameClearActorTasks();
}

// 0x0011e280
const Scripting::OpcodeInfo g_actorCreateCommand = {0x9a, "iifffv"};
// 0x0011e2bc
const Scripting::OpcodeInfo g_actorHeadingCommand = {0x173, "if"};
// 0x0011e2a8
const Scripting::OpcodeInfo g_actorConfigurationCommand = {0x446, "ii"};
// 0x0011e2f8
const Scripting::OpcodeInfo g_actorTaskFlagsCommand = {0x60b, "ii"};
// 0x0009bd30
// Official: FUN_1009bd30 @ 0x1009bd30 (samp.dll)
CActor::CActor(int model, float x, float y, float z, float heading)
{
    actorBackend = 0;
    m_nHandle = 0;
    invulnerable = 0;
    DWORD handle = 0;
    if (!g_pGame->IsModelAvailable(model))
    {
        g_pGame->RequestModel(model, 2);
        g_pGame->LoadRequestedModels();
        if (!g_pGame->IsModelAvailable(model))
        {
            do
            {
                ::Sleep(1);
            }
            while (!g_pGame->IsModelAvailable(model));
        }
    }
    Scripting::ProcessCommand(&g_actorCreateCommand, 5, model, (double)x, (double)y, (double)(z - 1.0f), &handle);
    Scripting::ProcessCommand(&g_actorHeadingCommand, handle, (double)heading);
    m_nHandle = handle;
    actorBackend = (ActorBackendPrefix*)GamePoolPedGetAt(handle);
    m_pGameEntity = actorBackend;
    Scripting::ProcessCommand(&g_actorConfigurationCommand, m_nHandle, 0);
    Scripting::ProcessCommand(&g_actorTaskFlagsCommand, m_nHandle, 0x10006);
}

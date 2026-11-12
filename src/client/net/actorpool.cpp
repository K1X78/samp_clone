#include "net/actorpool.h"
#include "chatwindow.h"
#include "game/actor.h"
#include "game/custommodels.h"
#include "main.h"
// 0x00001610
// Official: FUN_10001610 @ 0x10001610 (samp.dll)
CActor* CActorPool::Get(WORD id)
{
    return id < 1000 && active[id] ? actors[id] : 0;
}
// 0x00001640
// Official: FUN_10001640 @ 0x10001640 (samp.dll)
BOOL CActorPool::DoesExist(WORD id)
{
    if (id >= 1000)
        return FALSE;
    return active[id];
}
// 0x00001660
// Official: FUN_10001660 @ 0x10001660 (samp.dll)
void CActorPool::UpdateLargestId()
{
    int largest = 0;
    for (int i = 0; i < 1000; ++i)
        if (active[i])
            largest = i;
    largestId = largest;
}
// 0x000016c0
// Official: FUN_100016c0 @ 0x100016c0 (samp.dll)
CActorPool::CActorPool()
{
    for (int i = 0; i < 1000; ++i)
    {
        active[i] = 0;
        actors[i] = 0;
        peds[i] = 0;
    }
    largestId = 0;
}
// 0x000016f0
// Official: FUN_100016f0 @ 0x100016f0 (samp.dll)
BOOL CActorPool::Delete(WORD id)
{
    if (id >= 1000 || !active[id] || !actors[id])
        return FALSE;
    CActor* actor = actors[id];
    active[id] = 0;
    delete actor;
    actors[id] = 0;
    peds[id] = 0;
    UpdateLargestId();
    return TRUE;
}
// 0x000018e0
// Official: FUN_100018e0 @ 0x100018e0 (samp.dll)
CActorPool::~CActorPool()
{
    for (WORD i = 0; i < 1000; ++i)
        Delete(i);
}
// 0x000018b0
// Official: FUN_100018b0 @ 0x100018b0 (samp.dll)
WORD CActorPool::Find(void* ped)
{
    int limit = largestId;
    DWORD actor = 0;
    if (limit >= 0)
    {
        do
        {
            if (ped == peds[actor])
                return actor;
        }
        while ((LONG)++actor <= limit);
    }
    // Native OR AX,FFFF preserves the high half of the terminating counter.
    return 0xffff;
}

// 0x00001900
// Official: FUN_10001900 @ 0x10001900 (samp.dll)
BOOL CActorPool::Create(const ActorCreateInfo* info)
{
    // Native deliberately performs no ID bounds check.
    if (actors[info->id])
    {
        g_pChat->AddDebugMessage("Warning: actor %u was not deleted", (unsigned)info->id);
        Delete(info->id);
    }
    actors[info->id] = new CActor(info->model, info->position.x, info->position.y, info->position.z, info->heading);
    if (actors[info->id])
    {
        // Actor backend is distinct from the base CEntity pointer.
        peds[info->id] = actors[info->id]->actorBackend;
        active[info->id] = 1;
        actors[info->id]->SetHealth(info->health);
        if (info->invulnerable)
            actors[info->id]->SetInvulnerable(1);
        else
            actors[info->id]->SetInvulnerable(0);
        state2ee4[info->id] = 1;
        state3e84[info->id] = 0;
        UpdateLargestId();
        if (g_customModels && info->customModel > 20000)
        {
            if (GameIsPedModel(info->customModel))
                actors[info->id]->SetModelIndex(info->customModel);
            else if (g_customModels->DoesExist(info->customModel))
                actors[info->id]->SetModelIndex(info->customModel);
        }
        return TRUE;
    }
    return FALSE;
}

// 0x00001770
// Official: FUN_10001770 @ 0x10001770 (samp.dll)
WORD CActorPool::FindInRay(float maxCameraDistance, const CVector* origin, const CVector* end, float rayValue)
{
    struct RayPoint
    {
        CVector point;
        float value;
        DWORD unknown10;
    };
    typedef char NativeActorRayPointExtent[(sizeof(RayPoint) == 20) ? 1 : -1];
    RayPoint from, to;
    from.point.x = origin->x;
    from.point.y = origin->y;
    from.point.z = origin->z;
    from.value = rayValue;
    to.point.x = end->x;
    to.point.y = end->y;
    to.point.z = end->z;
    to.value = rayValue;
    // Neither unknown10 word is initialized by native code.
    float closest = 100000.0f;
    DWORD selected = 0xffff;
    for (int i = 0; i <= largestId; ++i)
    {
        WORD id = (WORD)i;
        if (!active[i] || id >= 1000 || !active[id] || !actors[id])
            continue;
        CActor* actor = actors[id];
        if (!actor->DoesExist())
            continue;
        if (!(actor->GetDistanceToCamera() < maxCameraDistance))
            continue;
        CVector centre;
        actor->GetBoundCentre(&centre);
        if (!GameTestEntityLineSphere(&from.point, &to.point, actor->m_pGameEntity, &centre, 1.5f, 1))
            continue;
        float distance = actor->GetDistanceToPoint(origin->x, origin->y, origin->z);
        if (distance < closest)
        {
            closest = distance;
            selected = i;
        }
    }
    return selected;
}

#include "net/objectpool.h"
#include "main.h"
#include <GetTime.h>
#include <string.h>
// 0x00012700
// Official: FUN_10012700 @ 0x10012700 (samp.dll)
CObjectPool::CObjectPool()
{
    for (int i = 0; i < 2100; ++i)
    {
        active[i] = 0;
        objects[i] = 0;
    }
    largestId = 0;
}
// 0x000126a0
// Official: FUN_100126a0 @ 0x100126a0 (samp.dll)
void CObjectPool::UpdateLargestId()
{
    int largest = 0;
    for (int i = 0; i < 2100; ++i)
        if (active[i])
            largest = i;
    largestId = largest;
}
// 0x00012730
// Official: FUN_10012730 @ 0x10012730 (samp.dll)
int CObjectPool::GetCount()
{
    int count = 0;
    for (int i = 0; i < 2100; ++i)
        if (active[i])
            ++count;
    return count;
}
// 0x00012750
// Official: FUN_10012750 @ 0x10012750 (samp.dll)
BOOL CObjectPool::Delete(WORD id)
{
    BYTE* state = (BYTE*)this;
    if (id > 2100 || !*(DWORD*)(state + 4 + id * 4) || !*(CObject**)(state + 0x20d4 + id * 4))
        return FALSE;
    CObject* object = *(CObject**)(state + 0x20d4 + id * 4);
    CCamera* camera = g_pGame->m_pCamera;
    if (camera->m_pAttachedTo == object)
        camera->Attach(0);
    object = *(CObject**)(state + 0x20d4 + id * 4);
    *(DWORD*)(state + 4 + id * 4) = 0;
    delete object;
    *(CObject**)(state + 0x20d4 + id * 4) = 0;
    UpdateLargestId();
    return TRUE;
}
// 0x00013060
// Official: FUN_10013060 @ 0x10013060 (samp.dll)
CObjectPool::~CObjectPool()
{
    for (WORD i = 0; i < 2100; ++i)
        Delete(i);
}
// 0x000128d0
// Official: FUN_100128d0 @ 0x100128d0 (samp.dll)
CObject* CObjectPool::Find(void* backend)
{
    int largest = largestId;
    for (int i = 1; i <= largest; ++i)
        if (objects[i] && objects[i]->m_pGameEntity == backend)
            return objects[i];
    return 0;
}
// 0x00012910
// Official: FUN_10012910 @ 0x10012910 (samp.dll)
WORD CObjectPool::GetId(void* backend)
{
    int largest = largestId;
    for (int i = 1; i <= largest; ++i)
        if (objects[i] && objects[i]->m_pGameEntity == backend)
            return (WORD)i;
    return 0xffff;
}
// 0x00002e10
// Official: FUN_10002e10 @ 0x10002e10 (samp.dll)
CEntity* CObjectPool::Get(WORD id)
{
    BYTE* state = (BYTE*)this;
    if (id < 2101 && *(DWORD*)(state + 4 + id * 4))
        return *(CEntity**)(state + 0x20d4 + id * 4);
    return 0;
}
// 0x00156b74
DWORD g_objectPoolLastTick;
// 0x00118130
const float g_objectPoolSecondsPerTick = 0.001f;

// 0x00012950
// Official: FUN_10012950 @ 0x10012950 (samp.dll)
void CObjectPool::Process()
{
    if (!g_objectPoolLastTick)
        g_objectPoolLastTick = RakNet::GetTime();
    DWORD now = RakNet::GetTime();
    LONG delta = (LONG)(now - g_objectPoolLastTick);
    float seconds;
    // clang-format off
    __asm {
        fild delta
        fmul g_objectPoolSecondsPerTick
        fstp seconds
    }
    // clang-format on
    if (largestId >= 0)
    {
        DWORD i = 0;
        do
        {
            if (active[i])
                (objects[i])->Process(seconds);
        }
        while ((LONG)++i <= largestId);
    }
    g_objectPoolLastTick = now;
}
// 0x00012a10
// Official: FUN_10012a10 @ 0x10012a10 (samp.dll)
void CObjectPool::ConstructMaterials()
{
    if (largestId >= 0)
    {
        DWORD i = 0;
        do
        {
            if (active[i])
            {
                CObject* object = objects[i];
                if (object->hasMaterials)
                    object->ConstructMaterialText();
            }
        }
        while ((LONG)++i <= largestId);
    }
}
// 0x00012a50
// Official: FUN_10012a50 @ 0x10012a50 (samp.dll)
void CObjectPool::ShutdownMaterials()
{
    if (largestId >= 0)
    {
        DWORD i = 0;
        do
        {
            if (active[i])
            {
                CObject* object = objects[i];
                if (object->hasMaterials)
                    object->ShutdownMaterialText();
            }
        }
        while ((LONG)++i <= largestId);
    }
}

#include "game/custommodels.h"
// 0x000127d0
// Official: FUN_100127d0 @ 0x100127d0 (samp.dll)
BOOL CObjectPool::Create(WORD id, int model, CVector position, CVector rotation, float drawDistance)
{
    BYTE* state = (BYTE*)this;
    if (*(CObject**)(state + 0x20d4 + id * 4))
        Delete(id);
    BYTE firstHour = 0, lastHour = 0;
    if (model < 0 && g_customModels && g_customModels->IsObjectEntry(model))
    {
        firstHour = g_customModels->GetObjectFirstHour(model);
        lastHour = g_customModels->GetObjectLastHour(model);
        if (!g_customModels->GetLoadedFlag(model) && !g_customModels->LoadObjectEntry(model))
            model = 18631;
    }
    CObject* object = g_pGame->NewObject(model, position.x, position.y, position.z, rotation, drawDistance, firstHour, lastHour);
    *(CObject**)(state + 0x20d4 + id * 4) = object;
    if (!object)
        return FALSE;
    *(DWORD*)(state + 4 + id * 4) = 1;
    UpdateLargestId();
    return TRUE;
}

// 0x00012a90
// Official: FUN_10012a90 @ 0x10012a90 (samp.dll)
void CObjectPool::Draw()
{
    for (int i = 0; i <= largestId; ++i)
        if (active[i])
        {
            CObject* object = objects[i];
            if (object->renderReady && !object->drawLast)
                object->Draw();
        }
}
// 0x00012ad0
// Official: FUN_10012ad0 @ 0x10012ad0 (samp.dll)
void CObjectPool::DrawLast()
{
    float distances[1000] = {0};
    CObject* ordered[1000] = {0};
    int count = 0;
    for (int i = 0; i <= largestId; ++i)
        if (active[i] && count < 1000)
        {
            CObject* object = objects[i];
            if (object->renderReady && object->drawLast)
            {
                ordered[count] = object;
                distances[count] = object->GetDistanceToCamera();
                ++count;
            }
        }
    // Stable descending bubble pass; unordered pairs do not exchange places.
    for (int end = count - 1; end > 0; --end)
        for (int i = 0; i < end; ++i)
            if (distances[i + 1] > distances[i])
            {
                float distance = distances[i];
                distances[i] = distances[i + 1];
                distances[i + 1] = distance;
                CObject* object = ordered[i];
                ordered[i] = ordered[i + 1];
                ordered[i + 1] = object;
            }
    for (int j = 0; j < count; ++j)
        if (ordered[j])
            ordered[j]->Draw();
}

// 0x00012ce0
// Official: FUN_10012ce0 @ 0x10012ce0 (samp.dll)
bool CObjectPool::TestCollisionShapes(const GameEntityCollisionShape* first, const GameEntityCollisionShape* second)
{
    const float limit = 200.0f;
    for (int i = 0; i <= largestId; ++i)
        if (active[i])
        {
            CObject* object = objects[i];
            if (!object || !object->IsAdded() || object->cameraCollisionDisabled)
                continue;
            // Compare extended ST0 directly; rounding to float can change this gate.
            BYTE nearby;
            // clang-format off
        __asm {
            mov ecx,object
            call CEntity::GetDistanceToCamera
            fcomp limit
            fnstsw ax
            test ah,5
            setnp nearby
        }
            // clang-format on
            if (!nearby || object->IsIgnored()) continue;
            if (object->CEntity::TestCollisionShapes(first, second, 1))
                return true;
        }
    return false;
}

// 0x00156b5c
GameEntityCollisionShape g_objectPoolRayOrigin;
// 0x00156b48
GameEntityCollisionShape g_objectPoolRayEnd;
// 0x00156b70
CObject* g_objectPoolRayDebugObject;

// 0x00012d70
// Official: FUN_10012d70 @ 0x10012d70 (samp.dll)
WORD CObjectPool::FindInRay(float maxDistance, const CVector* origin, const CVector* end)
{
    GameEntityCollisionShape from, to;
    memcpy(from.words, origin, 12);
    from.words[3] = 0x3e800000;
    memcpy(to.words, end, 12);
    to.words[3] = 0x3e800000;
    // Neither native fifth word is written. Copy the opaque representations,
    // including those stack bytes, rather than inventing a zero/default value.
    memcpy(&g_objectPoolRayOrigin, &from, sizeof(from));
    memcpy(&g_objectPoolRayEnd, &to, sizeof(to));
    WORD selected = 0xffff;
    float closest = maxDistance;
    for (int i = 0; i <= largestId; ++i)
        if (active[i])
        {
            CObject* object = objects[i];
            float distance;
            // clang-format off
        // Native calls the distance method even before checking a null object.
        // It also stores ST0 to float before the later comparison.
        __asm {
            mov eax,origin
            push dword ptr [eax+8]
            push dword ptr [eax+4]
            push dword ptr [eax]
            mov ecx,object
            call CEntity::GetDistanceToPoint
            fstp distance
        }
            // clang-format on
            if (!object || !object->IsAdded() || object->GetModelIndex() == 19300 || !(distance < closest)) continue;
            BYTE* collision = (BYTE*)GameGetModelCollision(object->GetModelIndex());
            if (!collision)
                continue;
            DWORD collisionEnabled;
            // clang-format off
        __asm {
            mov ecx,object
            call CEntity::GetCollisionFlag
            mov collisionEnabled,eax
        }
            // clang-format on
            BYTE hit;
            if (collisionEnabled && *(DWORD*)(collision + 0x2c))
                hit = object->CEntity::TestCollisionShapes(&from, &to, 0);
            else
            {
                CVector centre;
                object->GetBoundCentre(&centre);
                hit = GameTestEntityLineSphere((const CVector*)from.words, (const CVector*)to.words, object->m_pGameEntity, &centre, 1.0f, 1);
            }
            if (hit)
            {
                closest = distance;
                selected = (WORD)i;
            }
        }
    return selected;
}

#include "gui.h"
#include "label.h"
// 0x0011813c
const char g_objectPoolRayOriginText[8] = "Sphere1";
// 0x00118134
const char g_objectPoolRayEndText[8] = "Sphere2";

// 0x00012f50
// Official: FUN_10012f50 @ 0x10012f50 (samp.dll)
void DrawObjectPoolCollisionDebug()
{
    if (!g_deviceLabel)
        return;
    CVector origin, end;
    memcpy(&origin, g_objectPoolRayOrigin.words, 12);
    memcpy(&end, g_objectPoolRayEnd.words, 12);
    g_deviceLabel->Draw(&origin, g_objectPoolRayOriginText, 0xffffffff, TRUE, FALSE);
    g_deviceLabel->Draw(&end, g_objectPoolRayEndText, 0xffffffff, TRUE, FALSE);
    if (!g_objectPoolRayDebugObject)
    {
        CVector rotation = {0, 0, 0};
        g_objectPoolRayDebugObject = g_pGame->NewObject(3065, 0, 0, 0, rotation, 200.0f, 0, 0);
        g_objectPoolRayDebugObject->SetCollisionFlag(FALSE);
        g_objectPoolRayDebugObject->Add();
    }
    CVector position;
    memcpy(&position, g_objectPoolRayEnd.words, 12);
    g_objectPoolRayDebugObject->Teleport(position);
}

// 0x00012670
// Official: FUN_10012670 @ 0x10012670 (samp.dll)
int CObjectPool::GetLargestId()
{
    return largestId;
}
// 0x00012680
// Official: FUN_10012680 @ 0x10012680 (samp.dll)
DWORD CObjectPool::IsActive(WORD id)
{
    return id <= 2100 ? active[id] : 0;
}
// 0x000129d0
// Official: FUN_100129d0 @ 0x100129d0 (samp.dll)
void CObjectPool::UpdateAttachedObjectRotations()
{
    if (largestId < 0)
        return;
    DWORD i = 0;
    do
    {
        if (active[i])
            (objects[i])->UpdateAttachedObjectRotation();
    }
    while ((LONG)++i <= largestId);
}

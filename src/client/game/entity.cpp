#include "game/entity.h"
#include "game/game.h"
#include "game/scripting.h"
#include "main.h"
#include <string.h>
// 0x0009e950
// Official: FUN_1009e950 @ 0x1009e950 (samp.dll)
void CEntity::GetMatrix(CMatrix* matrix)
{
    if (!m_pEntity || !m_pEntity->matrix)
        return;
    matrix->right.x = m_pEntity->matrix->right.x;
    matrix->right.y = m_pEntity->matrix->right.y;
    matrix->right.z = m_pEntity->matrix->right.z;
    matrix->up.x = m_pEntity->matrix->up.x;
    matrix->up.y = m_pEntity->matrix->up.y;
    matrix->up.z = m_pEntity->matrix->up.z;
    matrix->at.x = m_pEntity->matrix->at.x;
    matrix->at.y = m_pEntity->matrix->at.y;
    matrix->at.z = m_pEntity->matrix->at.z;
    matrix->position.x = m_pEntity->matrix->position.x;
    matrix->position.y = m_pEntity->matrix->position.y;
    matrix->position.z = m_pEntity->matrix->position.z;
}
// 0x0009ee80
// Official: FUN_1009ee80 @ 0x1009ee80 (samp.dll)
void CEntity::Teleport(float x, float y, float z)
{
    void* entity = m_pGameEntity;
    if (entity && *(DWORD*)entity != 0x863c40)
    {
        short model = *(short*)((BYTE*)entity + 0x22);
        if (model == 0x21a || model == 0x219 || model == 0x1c1)
            Scripting::ProcessCommand(&g_entityTeleportCommand, m_nHandle, (double)x, (double)y, (double)z);
        else
        {
            // clang-format off
            __asm {
                mov ecx,entity
                mov edx,[ecx]
                push 0
                push z
                push y
                push x
                call dword ptr [edx+0x38]
            }
            // clang-format on
        }
    }
}
// 0x0009f140
// Official: FUN_1009f140 @ 0x1009f140 (samp.dll)
void CEntity::Add()
{
    if (m_pGameEntity && *(DWORD*)m_pGameEntity != 0x863c40 && !*(DWORD*)((BYTE*)m_pGameEntity + 0xb4))
    {
        CVector zero = {0.0f, 0.0f, 0.0f};
        SetSpeed(zero);
        SetTurnSpeed(zero);
        GameWorldAdd(m_pGameEntity);
        CMatrix matrix;
        GetMatrix(&matrix);
        Teleport(matrix.position.x, matrix.position.y, matrix.position.z);
    }
}
// 0x0009f240
// Official: FUN_1009f240 @ 0x1009f240 (samp.dll)
void CEntity::Remove()
{
    if (m_pGameEntity && *(DWORD*)m_pGameEntity != 0x863c40 && *(DWORD*)((BYTE*)m_pGameEntity + 0xb4))
        GameWorldRemove(m_pGameEntity);
}

// 0x001181b8
extern const float g_entityRadiansToDegrees = 57.2957763671875f;
// 0x0011c660
extern const float g_entityEulerSign = -1.0f;
// 0x0011b31c
extern const float g_entityBoundaryLift = 0.03999999910593033f;
// 0x0009ea00
// Official: FUN_1009ea00 @ 0x1009ea00 (samp.dll)
void CEntity::SetMatrix(CMatrix matrix)
{
    if (!m_pEntity || !m_pEntity->matrix)
        return;
    m_pEntity->matrix->right.x = matrix.right.x;
    m_pEntity->matrix->right.y = matrix.right.y;
    m_pEntity->matrix->right.z = matrix.right.z;
    m_pEntity->matrix->up.x = matrix.up.x;
    m_pEntity->matrix->up.y = matrix.up.y;
    m_pEntity->matrix->up.z = matrix.up.z;
    m_pEntity->matrix->at.x = matrix.at.x;
    m_pEntity->matrix->at.y = matrix.at.y;
    m_pEntity->matrix->at.z = matrix.at.z;
    m_pEntity->matrix->position.x = matrix.position.x;
    m_pEntity->matrix->position.y = matrix.position.y;
    m_pEntity->matrix->position.z = matrix.position.z;
}
// 0x0009eb20
// Official: FUN_1009eb20 @ 0x1009eb20 (samp.dll)
void CEntity::GetSpeed(CVector* speed)
{
    speed->x = m_pEntity->speed.x;
    speed->y = m_pEntity->speed.y;
    speed->z = m_pEntity->speed.z;
}
// 0x0009eb50
// Official: FUN_1009eb50 @ 0x1009eb50 (samp.dll)
void CEntity::SetSpeed(CVector speed)
{
    m_pEntity->speed.x = speed.x;
    m_pEntity->speed.y = speed.y;
    m_pEntity->speed.z = speed.z;
}
// 0x0009ec70
// Official: FUN_1009ec70 @ 0x1009ec70 (samp.dll)
void CEntity::GetTurnSpeed(CVector* speed)
{
    speed->x = m_pEntity->turnSpeed.x;
    speed->y = m_pEntity->turnSpeed.y;
    speed->z = m_pEntity->turnSpeed.z;
}
// 0x0009eca0
// Official: FUN_1009eca0 @ 0x1009eca0 (samp.dll)
void CEntity::SetTurnSpeed(CVector speed)
{
    m_pEntity->turnSpeed.x = speed.x;
    m_pEntity->turnSpeed.y = speed.y;
    m_pEntity->turnSpeed.z = speed.z;
}
// 0x0009ecd0
// Official: FUN_1009ecd0 @ 0x1009ecd0 (samp.dll)
void CEntity::ApplyTurnSpeed()
{
    void* entity = m_pGameEntity;
    if (!entity)
        return;
    // GTA SA virtual address: ECX thiscall am_backend.
    // clang-format off
    __asm {
        mov ecx,entity
        mov eax,0x542e20
        call eax
    }
    // clang-format on
}
// GTA returns raw float bits in EAX, not an ST0 float result.
// 0x0009ecf0
// Official: FUN_1009ecf0 @ 0x1009ecf0 (samp.dll)
float CEntity::GetDistanceFromCentreOfMassToBaseOfModel()
{
    void* entity = m_pGameEntity;
    float distance = 0.0f;
    if (!entity)
        return 0.0f;
    // GTA SA virtual address: result is raw float bits in EAX.
    // clang-format off
    __asm {
        mov ecx,entity
        mov edx,0x536be0
        call edx
        mov distance,eax
    }
    // clang-format on
    return distance;
}
// 0x0009ed30
// Official: FUN_1009ed30 @ 0x1009ed30 (samp.dll)
void CEntity::GetBoundCentre(CVector* centre)
{
    void* entity = m_pGameEntity;
    if (!entity)
        return;
    // GTA SA virtual address: ECX entity, one callee-popped pointer.
    // clang-format off
    __asm {
        push centre
        mov ecx,entity
        mov edx,0x534250
        call edx
    }
    // clang-format on
}
// 0x0009ee70
// Official: FUN_1009ee70 @ 0x1009ee70 (samp.dll)
int CEntity::GetModelIndex()
{
    return (int)*(short*)((BYTE*)m_pGameEntity + 0x22);
}
// 0x0009f210
// Official: FUN_1009f210 @ 0x1009f210 (samp.dll)
BOOL CEntity::DoesExist()
{
    return m_pGameEntity && *(DWORD*)m_pGameEntity != 0x863c40 && *(DWORD*)((BYTE*)m_pGameEntity + 0xb4) ? TRUE : FALSE;
}
// 0x0009f260
// Official: FUN_1009f260 @ 0x1009f260 (samp.dll)
BOOL CEntity::EnforceWorldBoundries(float positiveX, float negativeX, float positiveY, float negativeY)
{
    if (!m_pEntity)
        return FALSE;
    CMatrix matrix;
    CVector speed;
    GetMatrix(&matrix);
    GetSpeed(&speed);
    if (matrix.position.x > positiveX)
    {
        if (speed.x != 0.0f)
        {
            speed.x = -0.2f;
            speed.z = 0.1f;
        }
        SetSpeed(speed);
        matrix.position.z += g_entityBoundaryLift;
        SetMatrix(matrix);
        return TRUE;
    }
    else if (matrix.position.x < negativeX)
    {
        if (speed.x != 0.0f)
        {
            speed.x = 0.2f;
            speed.z = 0.1f;
        }
        SetSpeed(speed);
        matrix.position.z += g_entityBoundaryLift;
        SetMatrix(matrix);
        return TRUE;
    }
    else if (matrix.position.y > positiveY)
    {
        if (speed.y != 0.0f)
        {
            speed.y = -0.2f;
            speed.z = 0.1f;
        }
        SetSpeed(speed);
        matrix.position.z += g_entityBoundaryLift;
        SetMatrix(matrix);
        return TRUE;
    }
    else if (matrix.position.y < negativeY)
    {
        if (speed.y != 0.0f)
        {
            speed.y = 0.2f;
            speed.z = 0.1f;
        }
        SetSpeed(speed);
        matrix.position.z += g_entityBoundaryLift;
        SetMatrix(matrix);
        return TRUE;
    }
    return FALSE;
}
// 0x0009f400
// Official: FUN_1009f400 @ 0x1009f400 (samp.dll)
BOOL CEntity::HasExceededWorldBoundries(float positiveX, float negativeX, float positiveY, float negativeY)
{
    if (!m_pEntity)
        return FALSE;
    CMatrix matrix;
    GetMatrix(&matrix);
    if (matrix.position.x > positiveX)
        return TRUE;
    else if (matrix.position.x < negativeX)
        return TRUE;
    else if (matrix.position.y > positiveY)
        return TRUE;
    else if (matrix.position.y < negativeY)
        return TRUE;
    return FALSE;
}
// 0x0009f4a0
// Official: FUN_1009f4a0 @ 0x1009f4a0 (samp.dll)
DWORD CEntity::GetCollisionFlag()
{
    if (!m_pEntity || (DWORD)m_pEntity->vtable == 0x863c40)
        return 1;
    return *(BYTE*)&m_pEntity->flags & 1;
}
// 0x0009f470
// Official: FUN_1009f470 @ 0x1009f470 (samp.dll)
void CEntity::SetCollisionFlag(BOOL enabled)
{
    if (m_pEntity && (DWORD)m_pEntity->vtable != 0x863c40)
    {
        if (enabled)
            m_pEntity->flags |= 1;
        else
            m_pEntity->flags &= ~1u;
    }
}
// 0x0009f4c0
// Official: FUN_1009f4c0 @ 0x1009f4c0 (samp.dll)
void CEntity::SetCollisionProcessed(BOOL processed)
{
    if (m_pEntity && (DWORD)m_pEntity->vtable != 0x863c40)
    {
        if (processed)
            m_pEntity->flags &= 0x7ffffffd;
        else
            m_pEntity->flags |= 0x80000002;
    }
}
// 0x0009f730
// Official: FUN_1009f730 @ 0x1009f730 (samp.dll)
void CEntity::GetEulerInverted(float* x, float* y, float* z)
{
    if (m_pGameEntity)
    {
        void* matrix = *(void**)((BYTE*)m_pGameEntity + 0x14);
        if (matrix)
        {
            // GTA SA virtual address: ECX matrix and four callee-popped words.
            // clang-format off
            __asm {
                push 0x15
                push z
                push y
                push x
                mov ecx,matrix
                mov eax,0x59a840
                call eax
            }
            // clang-format on
        }
        // clang-format off
        // Keep the two native x87 multiplies and the store only at the end.
        __asm {
            mov eax,x
            fld dword ptr [eax]
            fmul g_entityRadiansToDegrees
            fmul g_entityEulerSign
            fstp dword ptr [eax]
            mov eax,y
            fld dword ptr [eax]
            fmul g_entityRadiansToDegrees
            fmul g_entityEulerSign
            fstp dword ptr [eax]
            mov eax,z
            fld dword ptr [eax]
            fmul g_entityRadiansToDegrees
            fmul g_entityEulerSign
            fstp dword ptr [eax]
        }
        // clang-format on
    }
}
// 0x0009f8a0
// Official: FUN_1009f8a0 @ 0x1009f8a0 (samp.dll)
DWORD* CEntity::GetRwObject()
{
    if (!m_pEntity)
        return 0;
    return m_pEntity->rwObject;
}
// 0x0009f9f0
// Official: FUN_1009f9f0 @ 0x1009f9f0 (samp.dll)
void CEntity::DeleteRwObject()
{
    if (m_pEntity && m_pEntity->rwObject)
    {
        void* entity = m_pGameEntity;
        // GTA SA vtable slot8, ECX entity.
        // clang-format off
        __asm {
            mov ecx,entity
            mov eax,[ecx]
            call dword ptr [eax+0x20]
        }
        // clang-format on
    }
}
// 0x0009fb20
// Official: FUN_1009fb20 @ 0x1009fb20 (samp.dll)
bool CEntity::IsIgnored()
{
    if (m_pGameEntity && m_pGameEntity == *(void**)0xb7cd68)
        return true;
    return false;
}
// 0x0009fc20
// Official: FUN_1009fc20 @ 0x1009fc20 (samp.dll)
BOOL CEntity::IsStationary()
{
    if (!DoesExist())
        return FALSE;
    if (m_pEntity->speed.x == 0.0f && m_pEntity->speed.y == 0.0f && m_pEntity->speed.z == 0.0f)
        return TRUE;
    return FALSE;
}
// 0x0009eac0
// Official: FUN_1009eac0 @ 0x1009eac0 (samp.dll)
void CEntity::UpdateRwFrame()
{
    if (m_pEntity && (DWORD)m_pEntity->vtable != 0x863c40)
    {
        void* object = m_pEntity->rwObject;
        CMatrix* matrix = m_pEntity->matrix;
        void* entity = m_pGameEntity;
        if (!entity || !object || !matrix)
            return;
        // GTA SA virtual addresses: matrix copy and am_backend frame update.
        // clang-format off
        __asm {
            mov edx,object
            mov eax,[edx+4]
            add eax,0x10
            push eax
            mov ecx,matrix
            mov edx,0x59ad70
            call edx
            mov ecx,entity
            mov edx,0x532b00
            call edx
        }
        // clang-format on
    }
}

#include <math.h>
// clang-format off
// 0x0009fb40
// The frame offsets this naked routine encodes in its push/call sequence.  They
// are spelled out at namespace scope rather than inside the function: a naked
// body has no prologue, so it cannot own a local object, and the assembler
// needs these names as compile-time constants.
namespace {
enum {
    am_backend = offsetof(CEntity, m_pGameEntity),
    am_matrix = offsetof(EntityBackendPrefix, matrix),
    am_matrix_bytes = sizeof(CMatrix), am_matrix_words = sizeof(CMatrix) / sizeof(DWORD),
    am_frame_bytes = 8, am_table_local = 8, am_entity_local = 4,
    am_slot3 = 3 * sizeof(DWORD), am_slot2 = 2 * sizeof(DWORD)
};
}

// Official: FUN_1009fb40 @ 0x1009fb40 (samp.dll)
__declspec(naked) void CEntity::ApplyMatrix(CMatrix matrix)
{
    __asm {
        push ebp
        mov ebp,esp
        sub esp,am_frame_bytes
        push ebx
        mov ebx,ecx
        mov eax,[ebx+am_backend]
        test eax,eax
        push esi
        push edi
        jz matrix_done
        mov ecx,[eax+am_matrix]
        test ecx,ecx
        jz matrix_done
        mov ecx,eax
        mov edx,[ecx]
        mov [ebp-am_table_local],edx
        mov [ebp-am_entity_local],eax
        mov eax,[ebp-am_table_local]
        mov ecx,[ebp-am_entity_local]
        call dword ptr [eax+am_slot3]
        sub esp,am_matrix_bytes
        mov edi,esp
        mov ecx,am_matrix_words
        lea esi,[ebp+8]
        rep movsd
        mov ecx,ebx
        call CEntity::SetMatrix
        mov ecx,ebx
        call CEntity::UpdateRwFrame
        mov eax,[ebp-am_table_local]
        mov ecx,[ebp-am_entity_local]
        call dword ptr [eax+am_slot2]
    matrix_done:
        pop edi
        pop esi
        pop ebx
        mov esp,ebp
        pop ebp
        ret am_matrix_bytes
    }
}
// clang-format on
// 0x0009f0f0
// Official: FUN_1009f0f0 @ 0x1009f0f0 (samp.dll)
float CEntity::GetDistanceToPoint(float x, float y, float z)
{
    CMatrix matrix;
    GetMatrix(&matrix);
    float dz = matrix.position.z - z;
    float dy = matrix.position.y - y;
    float dx = matrix.position.x - x;
    return (float)sqrt(dx * dx + dy * dy + dz * dz);
}

// 0x0009f5c0
// Official: FUN_1009f5c0 @ 0x1009f5c0 (samp.dll)
void CEntity::ClearBackendFlag8()
{
    if (m_pGameEntity)
        *(DWORD*)((BYTE*)m_pGameEntity + 0x40) &= 0xfffffff7;
}

#include "chatwindow.h"
#include "game/game.h"
// 0x0009ed90
// Official: FUN_1009ed90 @ 0x1009ed90 (samp.dll)
BOOL CEntity::SetModelIndex(int model)
{
    if (!m_pGameEntity)
        return FALSE;
    BOOL loaded = FALSE;
    int polls = 0;
    if (!g_pGame->IsModelAvailable(model) && !GameGetModelData1c(model))
    {
        g_pGame->RequestModel(model, 2);
        g_pGame->LoadRequestedModels();
        while (!g_pGame->IsModelAvailable(model))
        {
            Sleep(1);
            if (++polls > 200)
            {
                if (g_pChat)
                    g_pChat->AddDebugMessage(g_gameModelTimeoutWarning, model);
                return FALSE;
            }
        }
        loaded = TRUE;
    }
    void* entity = m_pGameEntity;
    // GTA SA virtual slots8/5. Native retains the entity and model through both.
    // clang-format off
    __asm {
        mov esi,entity
        mov edi,model
        mov edx,[esi]
        mov ecx,esi
        call dword ptr [edx+0x20]
        mov eax,[esi]
        mov edx,edi
        push edi
        mov ecx,esi
        mov word ptr [esi+0x22],dx
        call dword ptr [eax+0x14]
    }
    // clang-format on
    return loaded;
}

// GTA SA virtual address: 0x00403EC0; ECX is the opaque GTA entity.
// Native forwards the complete argument word; am_backend reads its low model WORD.
// 0x000b3990
// Official: FUN_100b3990 @ 0x100b3990 (samp.dll)
void GameChangeBackendEntityModel(void* entity, DWORD model)
{
    // clang-format off
    __asm {
        push model
        mov ecx,entity
        mov edx,0x403ec0
        call edx
    }
    // clang-format on
}
// Caller context/semantic object type is not established; raw first DWORD only.
// 0x000b4120
// Official: FUN_100b4120 @ 0x100b4120 (samp.dll)
DWORD __stdcall GameReadBackendDword(const void* am_backend)
{
    return *(const DWORD*)am_backend;
}

#include "game/camera.h"

// 0x0011e644
const float g_entityUnavailableDistance = 100000.0f;

// Native thiscall; preserve uninitialized GetMatrix outputs and extended ST0.
// 0x0009ef00
// Official: FUN_1009ef00 @ 0x1009ef00 (samp.dll)
__declspec(naked) float CEntity::GetDistanceToLocalPlayer()
{
    // clang-format off
    __asm {
        sub esp,0x80
        push esi
        mov esi,ecx
        mov ecx,dword ptr g_pGame
        push edi
        call CGame::GetPlayerPed
        mov edi,eax
        test edi,edi
        jnz branch_1009ef2a
        fld float ptr g_entityUnavailableDistance
        pop edi
        pop esi
        add esp,0x80
        ret
    branch_1009ef2a:
        lea eax,[esp + 0x48]
        push eax
        mov ecx,esi
        call CEntity::GetMatrix
        mov eax,g_pNetGame
        test eax,eax
        jz branch_1009ef7f
        mov ecx,dword ptr [eax + 0x3de]
        mov edx,dword ptr [ecx + 0x8]
        mov eax,dword ptr [edx + 0x1e]
        test eax,eax
        jz branch_1009ef78
        mov ecx,dword ptr [eax + 0x12c]
        test ecx,ecx
        jnz branch_1009ef63
        mov ecx,dword ptr [eax + 0x1d4]
        test ecx,ecx
        jz branch_1009ef78
    branch_1009ef63:
        mov ecx,dword ptr g_pGame
        mov ecx,dword ptr [ecx + 0x4]
        lea eax,[esp + 0x8]
        push eax
        call CCamera::GetMatrix
        jmp branch_1009ef8b
    branch_1009ef78:
        lea edx,[esp + 0x8]
        push edx
        jmp branch_1009ef84
    branch_1009ef7f:
        lea eax,[esp + 0x8]
        push eax
    branch_1009ef84:
        mov ecx,edi
        call CEntity::GetMatrix
    branch_1009ef8b:
        fld float ptr [esp + 0x80]
        pop edi
        fsub float ptr [esp + 0x3c]
        pop esi
        fld float ptr [esp + 0x74]
        fsub float ptr [esp + 0x34]
        fld float ptr [esp + 0x70]
        fsub float ptr [esp + 0x30]
        fld st(0)
        fmul st(0),st(1)
        fld st(2)
        fmul st(0),st(3)
        faddp st(1),st(0)
        fld st(3)
        fmul st(0),st(4)
        faddp st(1),st(0)
        fsqrt
        fstp st(3)
        fstp st(0)
        fstp st(0)
        add esp,0x80
        ret
    }
    // clang-format on
}

// Native thiscall; preserve uninitialized GetMatrix outputs and extended ST0.
// 0x0009efd0
// Official: FUN_1009efd0 @ 0x1009efd0 (samp.dll)
float CEntity::GetDistanceToCamera()
{
    if (!m_pEntity || (DWORD)m_pEntity->vtable == 0x863c40)
        return g_entityUnavailableDistance;
    CMatrix matrix;
    GetMatrix(&matrix);
    // GTA SA camera position; native reads Z, Y, X.
    float z = matrix.position.z - *(const float*)0xb6f9d4;
    float y = matrix.position.y - *(const float*)0xb6f9d0;
    float x = matrix.position.x - *(const float*)0xb6f9cc;
    return (float)sqrt(x * x + y * y + z * z);
}

// Native thiscall; preserve uninitialized GetMatrix outputs and extended ST0.
// 0x0009f030
// Official: FUN_1009f030 @ 0x1009f030 (samp.dll)
__declspec(naked) float CEntity::GetDistanceToLocalPlayerNoHeight()
{
    // clang-format off
    __asm {
        sub esp,0x80
        push esi
        mov esi,ecx
        mov ecx,dword ptr g_pGame
        push edi
        call CGame::GetPlayerPed
        mov edi,eax
        test edi,edi
        jnz branch_1009f05a
        fld float ptr g_entityUnavailableDistance
        pop edi
        pop esi
        add esp,0x80
        ret
    branch_1009f05a:
        lea eax,[esp + 0x48]
        push eax
        mov ecx,esi
        call CEntity::GetMatrix
        mov eax,g_pNetGame
        test eax,eax
        jz branch_1009f0af
        mov ecx,dword ptr [eax + 0x3de]
        mov edx,dword ptr [ecx + 0x8]
        mov eax,dword ptr [edx + 0x1e]
        test eax,eax
        jz branch_1009f0a8
        mov ecx,dword ptr [eax + 0x12c]
        test ecx,ecx
        jnz branch_1009f093
        mov ecx,dword ptr [eax + 0x1d4]
        test ecx,ecx
        jz branch_1009f0a8
    branch_1009f093:
        mov ecx,dword ptr g_pGame
        mov ecx,dword ptr [ecx + 0x4]
        lea eax,[esp + 0x8]
        push eax
        call CCamera::GetMatrix
        jmp branch_1009f0bb
    branch_1009f0a8:
        lea edx,[esp + 0x8]
        push edx
        jmp branch_1009f0b4
    branch_1009f0af:
        lea eax,[esp + 0x8]
        push eax
    branch_1009f0b4:
        mov ecx,edi
        call CEntity::GetMatrix
    branch_1009f0bb:
        fld float ptr [esp + 0x7c]
        pop edi
        fsub float ptr [esp + 0x38]
        pop esi
        fld float ptr [esp + 0x70]
        fsub float ptr [esp + 0x30]
        fld st(0)
        fmul st(0),st(1)
        fld st(2)
        fmul st(0),st(3)
        faddp st(1),st(0)
        fsqrt
        fstp st(2)
        fstp st(0)
        add esp,0x80
        ret
    }
    // clang-format on
}

// Descriptive name: native only establishes setting am_backend +1C bit 31.
// 0x0009f560
// Official: FUN_1009f560 @ 0x1009f560 (samp.dll)
void CEntity::SetBackendHighFlag()
{
    DWORD* am_backend = (DWORD*)m_pGameEntity;
    if (am_backend && *am_backend != 0x863c40)
        am_backend[7] |= 0x80000000;
}
// GTA vtable slot 10 (+28), ProcessControl. Native does not check am_backend.
// 0x0009fa20
// Official: FUN_1009fa20 @ 0x1009fa20 (samp.dll)
void CEntity::ProcessControl()
{
    DWORD vtable = m_pEntity->vtable;
    void* entity = m_pGameEntity;
    // GTA SA vtable slot10; no null check in native.
    // clang-format off
    __asm {
        mov eax,vtable
        mov ecx,entity
        call dword ptr [eax+0x28]
    }
    // clang-format on
}

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// 0x0009ed60
// Official: FUN_1009ed60 @ 0x1009ed60 (samp.dll)
void CEntity::Native009ed60(DWORD argument)
{
    void* entity = m_pGameEntity;
    if (!entity)
        return;
    // clang-format off
    // GTA SA virtual address: 0x00534120; ECX=entity, one callee-popped word.
    __asm {
        push argument
        mov ecx,entity
        mov edx,0x534120
        call edx
    }
    // clang-format on
}

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// 0x0009f5d0
// Official: FUN_1009f5d0 @ 0x1009f5d0 (samp.dll)
void CEntity::Native009f5d0(DWORD argument)
{
    if (!m_pEntity || !m_pEntity->rwObject || (DWORD)m_pEntity->vtable == 0x863c40)
        return;
    void* entity = m_pGameEntity;
    // GTA SA virtual addresses: 0x00863C40 sentinel; 0x00732B00 cdecl am_backend.
    // Native reloads the render pointer after its presence/sentinel checks.
    // clang-format off
    __asm {
        mov eax,entity
        mov edx,[eax+0x18]
        push argument
        push edx
        mov eax,0x732b00
        call eax
        pop edx
        pop edx
    }
    // clang-format on
}

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// 0x0009f810
// Official: FUN_1009f810 @ 0x1009f810 (samp.dll)
void CEntity::Native009f810(DWORD a1, DWORD a2, DWORD a3, DWORD a4, DWORD a5, DWORD a6)
{
    void* entity = m_pGameEntity;
    if (!entity)
        return;
    // clang-format off
    // GTA SA virtual address: 0x00542A50; six raw words, callee pops 24 bytes.
    __asm {
        push a6
        push a5
        push a4
        push a3
        push a2
        push a1
        mov eax,0x542a50
        mov ecx,entity
        call eax
    }
    // clang-format on
}

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// 0x0009f840
// Official: FUN_1009f840 @ 0x1009f840 (samp.dll)
void CEntity::Native009f840(DWORD argument)
{
    void* entity = m_pGameEntity;
    if (!entity)
        return;
    // GTA SA virtual address: ECX subobject, two callee-popped words.
    // clang-format off
    __asm {
        push 0
        push argument
        mov edx,entity
        lea ecx,[edx+0x138]
        mov edx,0x4f6420
        call edx
    }
    // clang-format on
}

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// clang-format off
// 0x0009f960
namespace {
enum {
    rn_backend = offsetof(CEntity, m_pGameEntity),
    rn_object = offsetof(EntityBackendPrefix, rwObject),
    rn_model = offsetof(EntityBackendPrefix, model),
    rn_frame = 12, rn_table = 12, rn_local = 8, rn_entity = 4,
    rn_slot17 = 17 * sizeof(DWORD), rn_first_vehicle = 400, rn_last_vehicle = 611,
    rn_backend_733160 = 0x733160, rn_backend_553260 = 0x553260
};
}

// Official: FUN_1009f960 @ 0x1009f960 (samp.dll)
__declspec(naked) void CEntity::Native009f960()
{
    // A naked body has no prologue, so these frame constants live at namespace
    // scope and the assembler sees them as plain compile-time names.
    // Preserve native signed model tests and captured pointers across GTA calls.
    __asm {
        push ebp
        mov ebp,esp
        sub esp,rn_frame
        push esi
        mov esi,ecx
        mov eax,[esi+rn_backend]
        mov ecx,[eax]
        mov [ebp-rn_table],ecx
        mov ecx,eax
        test ecx,ecx
        push edi
        mov [ebp-rn_entity],ecx
        jnz render_have_backend
        xor edi,edi
        jmp render_have_object
    render_have_backend:
        mov edi,[eax+rn_object]
    render_have_object:
        mov ax,[eax+rn_model]
        cmp ax,rn_first_vehicle
        mov [ebp-rn_local],edi
        jl render_prepare
        cmp ax,rn_last_vehicle
        jg render_prepare
        test edi,edi
        jz render_prepare
        push dword ptr [ebp-rn_local]
        mov edx,rn_backend_733160
        call edx
        pop edx
    render_prepare:
        mov eax,[ebp-rn_table]
        mov ecx,[ebp-rn_entity]
        call dword ptr [eax+rn_slot17]
        mov edx,[esi+rn_backend]
        mov ax,[edx+rn_model]
        cmp ax,rn_first_vehicle
        jl render_other_model
        cmp ax,rn_last_vehicle
        jg render_other_model
        test edi,edi
        jz render_done
        push dword ptr [ebp-rn_entity]
        mov edx,rn_backend_553260
        call edx
        pop edx
        pop edi
        pop esi
        mov esp,ebp
        pop ebp
        ret
    render_other_model:
        test edi,edi
        jz render_done
        push dword ptr [ebp-rn_entity]
        mov edx,rn_backend_553260
        call edx
        pop edx
    render_done:
        pop edi
        pop esi
        mov esp,ebp
        pop ebp
        ret
    }
}
// clang-format on

// Observed CEntity am_backend wrapper; semantic name/raw argument types remain provisional.
// GTA callees use their original ECX/stack ABI.
// 0x0009fba0
// Official: FUN_1009fba0 @ 0x1009fba0 (samp.dll)
void CEntity::ApplyLinearSpeed()
{
    if (m_pEntity)
    {
        // GTA SA timestep VA. Capture before GetMatrix, as in native.
        float timeStep = *(const float*)0xb7cb5c;
        CMatrix matrix;
        GetMatrix(&matrix);
        matrix.position.x += timeStep * m_pEntity->speed.x;
        matrix.position.y += timeStep * m_pEntity->speed.y;
        matrix.position.z += timeStep * m_pEntity->speed.z;
        ApplyMatrix(matrix);
    }
}

#include "game/util.h"

// 0x0018de60
GameEntityCollisionShape g_entityCollisionShapeA;
// 0x0018de4c
GameEntityCollisionShape g_entityCollisionShapeB;
// 0x0018de7c
void* g_entityCollisionEntity;
// 0x00155404
GameEntityCollisionBackend g_entityCollisionBackend = (GameEntityCollisionBackend)0x419f00; // GTA SA virtual address.
// 0x00155408
void** g_entityCollisionContextSlot = (void**)0x9655cc; // GTA SA virtual address.
// 0x002abe5c
void* g_entityCollisionSavedContext;
// 0x002abe60
BYTE g_entityCollisionResult;

// 0x0009fa40
// Official: FUN_1009fa40 @ 0x1009fa40 (samp.dll)
__declspec(naked) bool CEntity::TestCollisionShapes(const GameEntityCollisionShape* first, const GameEntityCollisionShape* second, BYTE mode)
{
    // clang-format off
    __asm {
        push esi
        mov esi,ecx
        mov eax,dword ptr [esi + 0x40]
        test eax,eax
        jz branch_1009fb0e
        cmp dword ptr [eax],0x863c40
        jz branch_1009fb0e
        movsx eax,word ptr [eax + 0x22]
        push eax
        call GameGetModelCollisionRadius
        fcomp float ptr g_objectScaleLowerBound
        add esp,0x4
        fnstsw ax
        test ah,0x41
        jnp branch_1009fb0e
        mov ecx,dword ptr [esp + 0x8]
        mov edx,dword ptr [ecx]
        mov dword ptr g_entityCollisionShapeA,edx
        mov eax,dword ptr [ecx + 0x4]
        mov [g_entityCollisionShapeA+4],eax
        mov edx,dword ptr [ecx + 0x8]
        mov dword ptr [g_entityCollisionShapeA+8],edx
        mov eax,dword ptr [ecx + 0xc]
        mov edx,dword ptr [esp + 0xc]
        mov [g_entityCollisionShapeA+12],eax
        mov ecx,dword ptr [ecx + 0x10]
        mov dword ptr [g_entityCollisionShapeA+16],ecx
        mov eax,dword ptr [edx]
        mov g_entityCollisionShapeB,eax
        mov ecx,dword ptr [edx + 0x4]
        mov dword ptr [g_entityCollisionShapeB+4],ecx
        mov eax,dword ptr [edx + 0x8]
        mov [g_entityCollisionShapeB+8],eax
        mov ecx,dword ptr [edx + 0xc]
        mov al,byte ptr [esp + 0x10]
        test al,al
        mov dword ptr [g_entityCollisionShapeB+12],ecx
        mov edx,dword ptr [edx + 0x10]
        mov dword ptr [g_entityCollisionShapeB+16],edx
        mov esi,dword ptr [esi + 0x40]
        push esi
        push offset g_entityCollisionShapeB
        mov dword ptr g_entityCollisionEntity,esi
        push offset g_entityCollisionShapeA
        jz branch_1009faff
        call GameEntityCollisionQueryDirect
        test al,al
        jz branch_1009fb0e
        mov al,0x1
        pop esi
        ret 0xc
    branch_1009faff:
        call GameEntityCollisionQueryScoped
        test al,al
        jz branch_1009fb0e
        mov al,0x1
        pop esi
        ret 0xc
    branch_1009fb0e:
        xor al,al
        pop esi
        ret 0xc
    }
    // clang-format on
}

// 0x000b5ea0
// Official: FUN_100b5ea0 @ 0x100b5ea0 (samp.dll)
__declspec(naked) float __cdecl GameGetModelCollisionRadius(int model)
{
    // clang-format off
    __asm {
        sub esp,0x8
        push esi
        mov esi,dword ptr [esp + 0x10]
        push esi
        call GameGetModelInfo
        test eax,eax
        jz branch_100b5ed7
        push esi
        call GameGetModelInfo
        mov dword ptr [esp + 0x8],eax
        mov dword ptr [esp + 0x4],0x0
        mov eax,dword ptr [esp + 0x8]
        mov edx,dword ptr [eax + 0x14]
        mov dword ptr [esp + 0x4],edx
        mov eax,dword ptr [esp + 0x4]
        test eax,eax
        jnz branch_100b5ee2
    branch_100b5ed7:
        fld float ptr g_objectScaleLowerBound
        pop esi
        add esp,0x8
        ret
    branch_100b5ee2:
        fld float ptr [eax + 0x24]
        pop esi
        add esp,0x8
        ret
    }
    // clang-format on
}

// 0x000b6070
// Official: FUN_100b6070 @ 0x100b6070 (samp.dll)
__declspec(naked) bool __stdcall GameEntityCollisionQueryDirect(const GameEntityCollisionShape* first, const GameEntityCollisionShape* second, void* entity)
{
    // clang-format off
    __asm {
        mov eax,dword ptr [esp + 0xc]
        mov ecx,dword ptr [esp + 0x8]
        mov edx,dword ptr [esp + 0x4]
        push eax
        push ecx
        push edx
        call dword ptr g_entityCollisionBackend
        add esp,0xc
        ret 0xc
    }
    // clang-format on
}

// 0x000b6090
// Official: FUN_100b6090 @ 0x100b6090 (samp.dll)
__declspec(naked) bool __stdcall GameEntityCollisionQueryScoped(const GameEntityCollisionShape* first, const GameEntityCollisionShape* second, void* entity)
{
    // clang-format off
    __asm {
        mov eax,g_entityCollisionContextSlot
        mov ecx,dword ptr [eax]
        mov edx,dword ptr [esp + 0xc]
        mov dword ptr g_entityCollisionSavedContext,ecx
        mov ecx,dword ptr [esp + 0x4]
        mov dword ptr [eax],offset g_entityCollisionScratch
        mov eax,dword ptr [esp + 0x8]
        push edx
        push eax
        push ecx
        call dword ptr g_entityCollisionBackend
        mov edx,dword ptr g_entityCollisionSavedContext
        mov g_entityCollisionResult,al
        mov eax,g_entityCollisionContextSlot
        mov dword ptr [eax],edx
        mov al,g_entityCollisionResult
        add esp,0xc
        ret 0xc
    }
    // clang-format on
}

// GTA SA virtual address: 0x00411E70; exactly two cdecl arguments.
// 0x000b60e0
// Official: FUN_100b60e0 @ 0x100b60e0 (samp.dll)
BOOL GameTestCollisionSpheres(const GameCollisionSphere* first, const GameCollisionSphere* second)
{
    return ((BOOL(__cdecl*)(const GameCollisionSphere*, const GameCollisionSphere*))0x411e70)(first, second);
}

// GTA SA virtual address: 0x00410CE0; exact query semantics remain unresolved.
// Native forwards the input pointer plus a literal zero and returns raw AL.
// 0x000b43f0
// Official: FUN_100b43f0 @ 0x100b43f0 (samp.dll)
BYTE GameQueryBackend410ce0(const void* data)
{
    return ((BYTE(__cdecl*)(const void*, DWORD))0x410ce0)(data, 0);
}

// GTA SA virtual address: 0x0056BA00. Native is a transparent tail bridge:
// preserve caller argument copies and the am_backend's raw AL return.
// 0x000b3710
// Official: FUN_100b3710 @ 0x100b3710 (samp.dll)
__declspec(naked) BYTE GameProcessLineOfSightRaw(const CVector* origin, const CVector* target, void* colPoint, void** entity, DWORD buildings, DWORD vehicles, DWORD peds,
                                                 DWORD objects, DWORD dummies, DWORD seeThrough, DWORD cameraIgnore, DWORD shootThrough)
{
    // clang-format off
    __asm {
        mov eax,0x56ba00
        jmp eax
    }
    // clang-format on
}

// 0x0009f500
// Official: FUN_1009f500 @ 0x1009f500 (samp.dll)
void CEntity::SetBackendFlag40000(BOOL enabled)
{
    if (!m_pGameEntity || *(DWORD*)m_pGameEntity == 0x863c40)
        return;
    if (enabled)
        *(DWORD*)((BYTE*)m_pGameEntity + 0x1c) |= 0x40000;
    else
    {
        *(DWORD*)((BYTE*)m_pGameEntity + 0x1c) &= ~0x40000u;
        Add();
    }
}
// 0x0009f540
// Official: FUN_1009f540 @ 0x1009f540 (samp.dll)
void CEntity::SetBackendFlags80400()
{
    if (m_pGameEntity && *(DWORD*)m_pGameEntity != 0x863c40)
        *(DWORD*)((BYTE*)m_pGameEntity + 0x1c) |= 0x80400;
}
// 0x0009f580
// Official: FUN_1009f580 @ 0x1009f580 (samp.dll)
void CEntity::SetBackendFlag2000(BOOL clear)
{
    if (!m_pEntity || (DWORD)m_pEntity->vtable == 0x863c40)
        return;
    DWORD entity = (DWORD)m_pEntity;
    // Observed raw physical DWORD bit13; semantic name remains unconfirmed.
    // clang-format off
    if (!clear)
    {
        __asm mov edx,entity
        __asm mov eax,[edx+0x40]
        __asm or ah,0x20
        __asm mov [edx+0x40],eax
    }
    else
    {
        __asm mov edx,entity
        __asm mov eax,[edx+0x40]
        __asm and ah,0xdf
        __asm mov [edx+0x40],eax
    }
    // clang-format on
}
// 0x0009f610
// Official: FUN_1009f610 @ 0x1009f610 (samp.dll)
DWORD CEntity::GetRwObjectWord38()
{
    void* am_backend = m_pGameEntity;
    if (!am_backend)
        return 0;
    BYTE* object = *(BYTE**)((BYTE*)am_backend + 0x18);
    if (!object || *(DWORD*)am_backend == 0x863c40)
        return 0;
    return *(DWORD*)(object + 0x38);
}
// 0x0009f7a0
// Official: FUN_1009f7a0 @ 0x1009f7a0 (samp.dll)
void CEntity::GetRwMatrixAngles(float* x, float* y, float* z)
{
    if (!m_pGameEntity)
        return;
    CMatrix* matrix = *(CMatrix**)((BYTE*)m_pGameEntity + 0x14);
    if (!matrix)
        return;
    float angle = 0;
    GameQueryRwMatrixAngle(matrix, 0, &angle);
    *x = angle;
    GameQueryRwMatrixAngle(matrix, 1, &angle);
    *y = angle;
    GameQueryRwMatrixAngle(matrix, 2, &angle);
    *z = angle;
}
// 0x0009f870
// Official: FUN_1009f870 @ 0x1009f870 (samp.dll)
int CEntity::GetModelAtomicCount()
{
    if (m_pEntity)
    {
        DWORD clump = GameGetModelData1c(m_pEntity->model);
        if (clump)
            return GameRwCountClumpAtomics((void*)clump);
    }
    return -1;
}

// Native x87 precision/spill boundaries and repeated am_backend loads are significant.
// History moves from last toward first in place: overlapping copies deliberately cascade.
// 0x0009eb80
// Official: FUN_1009eb80 @ 0x1009eb80 (samp.dll)
__declspec(naked) void CEntity::SetAveragedSpeed(CVector speed)
{
    // clang-format off
    __asm {
        push esi
        lea esi, [ecx + 0x28]
        push edi
        mov eax, esi
        mov edx, 4
        align 16
    native_0009eb90:
        mov edi, dword ptr [eax + 0xc]
        mov dword ptr [eax], edi
        mov edi, dword ptr [eax + 0x10]
        mov dword ptr [eax + 4], edi
        mov edi, dword ptr [eax + 0x14]
        mov dword ptr [eax + 8], edi
        sub eax, 0xc
        dec edx
        jne native_0009eb90
        mov eax, dword ptr [esp + 0xc]
        mov edx, dword ptr [esp + 0x10]
        mov dword ptr [ecx + 0x34], eax
        mov eax, dword ptr [esp + 0x14]
        mov dword ptr [ecx + 0x3c], eax
        mov dword ptr [ecx + 0x38], edx
        fld dword ptr [ecx + 4]
        fld dword ptr [ecx + 8]
        mov edx, dword ptr [ecx + 0xc]
        fxch st(1)
        mov dword ptr [esp + 0x14], edx
        fadd dword ptr [ecx + 0x10]
        mov eax, dword ptr [ecx + 0x40]
        pop edi
        fstp dword ptr [esp + 8]
        fadd dword ptr [ecx + 0x14]
        fld dword ptr [esp + 0x10]
        fadd dword ptr [ecx + 0x18]
        fld dword ptr [esp + 8]
        fadd dword ptr [ecx + 0x1c]
        fstp dword ptr [esp + 8]
        fxch st(1)
        fadd dword ptr [ecx + 0x20]
        fstp dword ptr [esp + 0xc]
        fadd dword ptr [ecx + 0x24]
        fld dword ptr [esp + 8]
        fadd dword ptr [esi]
        pop esi
        fld dword ptr [esp + 8]
        fadd dword ptr [ecx + 0x2c]
        fstp dword ptr [esp + 8]
        fxch st(1)
        fadd dword ptr [ecx + 0x30]
        fstp dword ptr [esp + 0xc]
        fadd dword ptr [ecx + 0x34]
        fld dword ptr [esp + 8]
        fadd dword ptr [ecx + 0x38]
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0xc]
        fadd dword ptr [ecx + 0x3c]
        fstp dword ptr [esp + 0xc]
        fmul g_chatBubbleHeightLift
        fld dword ptr [esp + 8]
        fmul g_chatBubbleHeightLift
        fld dword ptr [esp + 0xc]
        fmul g_chatBubbleHeightLift
        fstp dword ptr [esp + 0xc]
        fxch st(1)
        fstp dword ptr [eax + 0x44]
        mov edx, dword ptr [ecx + 0x40]
        fstp dword ptr [edx + 0x48]
        mov eax, dword ptr [ecx + 0x40]
        mov ecx, dword ptr [esp + 0xc]
        mov dword ptr [eax + 0x4c], ecx
        ret 0xc
    }
    // clang-format on
}
// Native x87 precision/spill boundaries and repeated am_backend loads are significant.
// 0x0009f630
// Official: FUN_1009f630 @ 0x1009f630 (samp.dll)
__declspec(naked) void CEntity::SetEulerRotation(float x, float y, float z)
{
    // clang-format off
    __asm {
        fld dword ptr [esp + 4]
        mov eax, dword ptr [ecx + 0x40]
        fmul g_objectDegreesToRadians
        mov edx, dword ptr [eax + 0x14]
        fld dword ptr [esp + 8]
        fmul g_objectDegreesToRadians
        fstp dword ptr [esp + 8]
        fld dword ptr [esp + 0xc]
        fmul g_objectDegreesToRadians
        fstp dword ptr [esp + 0xc]
        fld st(0)
        fcos
        fstp dword ptr [esp + 4]
        fsin
        fld dword ptr [esp + 8]
        fcos
        fld dword ptr [esp + 8]
        fsin
        fld dword ptr [esp + 0xc]
        fcos
        fld dword ptr [esp + 0xc]
        fsin
        fst dword ptr [esp + 8]
        fmul st,st(4)
        fld st(1)
        fmul st,st(5)
        fstp dword ptr [esp + 0xc]
        fld st(1)
        fmul st,st(4)
        fld st(1)
        fmul st,st(4)
        fsubp st(1),st
        fstp dword ptr [edx]
        mov eax, dword ptr [ecx + 0x40]
        fld dword ptr [esp + 0xc]
        mov edx, dword ptr [eax + 0x14]
        fmul st,st(3)
        fld dword ptr [esp + 8]
        fmul st,st(5)
        faddp st(1),st
        fstp dword ptr [edx + 4]
        mov eax, dword ptr [ecx + 0x40]
        mov edx, dword ptr [eax + 0x14]
        fld st(2)
        fmul dword ptr [esp + 4]
        fchs
        fstp dword ptr [edx + 8]
        mov eax, dword ptr [ecx + 0x40]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 0x14]
        fmul dword ptr [esp + 4]
        fchs
        fstp dword ptr [edx + 0x10]
        mov eax, dword ptr [ecx + 0x40]
        mov edx, dword ptr [eax + 0x14]
        fld st(1)
        fmul dword ptr [esp + 4]
        fstp dword ptr [edx + 0x14]
        mov eax, dword ptr [ecx + 0x40]
        mov edx, dword ptr [eax + 0x14]
        fxch st(4)
        fstp dword ptr [edx + 0x18]
        fxch st(3)
        fmul st,st(2)
        fxch st(3)
        fmul st,st(1)
        faddp st(3),st
        mov eax, dword ptr [ecx + 0x40]
        fxch st(2)
        mov edx, dword ptr [eax + 0x14]
        fstp dword ptr [edx + 0x20]
        mov eax, dword ptr [ecx + 0x40]
        fld dword ptr [esp + 8]
        mov edx, dword ptr [eax + 0x14]
        fmul st,st(2)
        fld dword ptr [esp + 0xc]
        fmul st,st(2)
        fsubp st(1),st
        fstp dword ptr [edx + 0x24]
        mov eax, dword ptr [ecx + 0x40]
        mov ecx, dword ptr [eax + 0x14]
        fstp st(1)
        fmul dword ptr [esp + 4]
        fstp dword ptr [ecx + 0x28]
        ret 0xc
    }
    // clang-format on
}

// 0x0011e64c
const char g_entityDetachExceptionLabel[5] = "s113";
// Incoming ECX is unused; original owner/name is not established.
// GTA SA virtual addresses: 0x00733160 and 0x00553260.
// 0x0009f8b0
// Official: FUN_1009f8b0 @ 0x1009f8b0 (samp.dll)
void __cdecl GameDetachBackendRwObject(void* entity, void* object)
{
    if (!entity || !object)
        return;
    __try
    {
        BYTE* vtable = *(BYTE**)entity;
        short model = *(short*)((BYTE*)entity + 0x22);
        if (model >= 400 && model <= 611)
            ((void(__cdecl*)(void*))0x733160)(object);
        // clang-format off
        __asm {
            mov ecx,entity
            mov eax,vtable
            call dword ptr [eax+0x44]
            mov ecx,entity
            mov eax,vtable
            call dword ptr [eax+0x48]
        }
        // clang-format on
        ((void(__cdecl*)(void*))0x553260)(entity);
    }
    __except (GameExceptionFilter(GetExceptionCode(), GetExceptionInformation(), g_entityDetachExceptionLabel))
    {}
}

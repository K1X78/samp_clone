#include "game/vehicle.h"
#include "main.h"
// 0x0000e290
// Official: FUN_1000e290 @ 0x1000e290 (samp.dll)
void CVehicle::SetObjective(BYTE objective)
{
    m_byteObjective = objective;
}
// 0x000b37d0
// Official: FUN_100b37d0 @ 0x100b37d0 (samp.dll)
void* __stdcall GamePoolVehicleGetAt(int handle)
{
    void* result;
    // clang-format off
    __asm {
        mov ecx,dword ptr ds:[0xb74494]
        push handle
        mov eax,0x4048e0
        call eax
        mov result,eax
    }
    // clang-format on
    return result;
}
// 0x000b6e20
// Official: FUN_100b6e20 @ 0x100b6e20 (samp.dll)
void CVehicle::SetColor(BYTE primary, BYTE secondary)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        ((BYTE*)m_pGameVehicle)[0x434] = primary;
        ((BYTE*)m_pGameVehicle)[0x435] = secondary;
    }
    m_nSecondaryColor = secondary;
    m_nPrimaryColor = primary;
    m_bColorChanged = TRUE;
}

#include "game/game.h"
#include "game/scripting.h"

// 0x000b8420
// Official: FUN_100b8420 @ 0x100b8420 (samp.dll)
CVehicle::~CVehicle()
{
    m_pGameVehicle = GamePoolVehicleGetAt(m_nHandle);
    if (m_pGameVehicle)
    {
        DWORD* marker = &m_dwMarker;
        if (*marker)
        {
            Scripting::ProcessCommand(&g_vehicleDestroyMarkerCommand, *marker);
            *marker = 0;
        }
        RemovePassengers();
        if (m_pTrailer)
        {
            DetachTrailer();
            m_pTrailer = 0;
        }
        ShutdownLicensePlate();
        short model = *(short*)((BYTE*)m_pGameVehicle + 0x22);
        if (model == 0x21a || model == 0x219)
        {
            Scripting::ProcessCommand(&g_vehicleDestroyTrainCommand, m_nHandle);
        }
        else
        {
            int modelSnapshot = model;
            Scripting::ProcessCommand(&g_vehicleDestroyCommand, m_nHandle);
            if (GameGetModelReferenceCount(modelSnapshot) == 0 && !m_dwKeepLoaded && g_pGame->CountBackendVehicleModelRecords() > 80 && g_pGame->IsModelAvailable(modelSnapshot))
            {
                ((void(__cdecl*)(int))0x4089a0)(modelSnapshot);
            }
        }
    }
}

// Preserve base qualification and virtual dispatch to an existing trailer.
// 0x000b8540
// Official: FUN_100b8540 @ 0x100b8540 (samp.dll)
void CVehicle::Add()
{
    if (!CEntity::DoesExist())
    {
        CEntity::Add();
        CVehicle* trailer = GetTrailer();
        if (trailer)
            trailer->Add();
    }
}

// Trailer is removed before the qualified base vehicle removal.
// 0x000b8570
// Official: FUN_100b8570 @ 0x100b8570 (samp.dll)
void CVehicle::Remove()
{
    if (CEntity::DoesExist())
    {
        CVehicle* trailer = GetTrailer();
        if (trailer)
            trailer->Remove();
        CEntity::Remove();
    }
}

#include "chatwindow.h"
#include "game/hooks.h"
#include "game/util.h"
#include <string.h>

// 0x002abe64
void* g_vehicleTrainCursor;
// 0x002abe68
DWORD g_vehicleLastCreatedHandle;
// 0x0011e33c
const float g_vehicleCreationLift = 0.25f;
// 0x0011f7e0
const char g_vehicleBadCarriageWarning[29] = "Warning: bad train carriages";
// 0x0011f800
const char g_vehicleCreationWarning[42] = "Warning: couldn't create vehicle type: %u";

// Preserve base construction, untouched early-return bytes and native global reloads.
// 0x000b7f00
// Official: FUN_100b7f00 @ 0x100b7f00 (samp.dll)
CVehicle::CVehicle(int model, float x, float y, float z, float rotation, DWORD keepLoaded, BOOL siren)
{
    DWORD handle = 0;
    m_pGameVehicle = 0;
    m_nHandle = 0;
    m_pTrailer = 0;
    if (model != 0x21a && model != 0x219 && model != 0x23a && model != 0x239 && model != 0x1c1)
    {
        if (!g_pGame->IsModelAvailable(model))
        {
            g_pGame->RequestModel(model, 2);
            g_pGame->LoadRequestedModels();
            if (!g_pGame->IsModelAvailable(model))
            {
                // Keep the resolved Sleep target for the entire native wait loop.
                void(WINAPI* volatile sleep)(DWORD) = Sleep;
                do
                {
                    sleep(0);
                }
                while (!g_pGame->IsModelAvailable(model));
            }
        }
        if (siren)
        {
            g_hookSirenOnce = 1;
            m_dwSiren = 1;
        }
        else
            m_dwSiren = 0;
        Scripting::ProcessCommand(&g_vehicleCreateCommand, model, (double)x, (double)y, (double)z, &handle);
        Scripting::ProcessCommand(&g_vehicleRotationCommand, handle, (double)rotation);
        Scripting::ProcessCommand(&g_vehicleGasTankExplosionCommand, handle, 0);
        Scripting::ProcessCommand(&g_vehicleHydraulicsCommand, handle, 0);
        Scripting::ProcessCommand(&g_vehicleDamageableCommand, handle, 0);
        m_pGameVehicle = GamePoolVehicleGetAt(handle);
        m_pGameEntity = m_pGameVehicle;
        m_nHandle = handle;
        if (!m_pGameVehicle)
        {
            g_pChat->AddDebugMessage(g_vehicleCreationWarning, (unsigned int)model);
            return;
        }
        g_vehicleLastCreatedHandle = handle;
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x4f8) = 0;
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x4b0) = 0;
        m_dwUnknown5c = 0;
        CMatrix matrix;
        GetMatrix(&matrix);
        BOOL lift = GetSubtype() != 2 && GetSubtype() != 6;
        DWORD finalZ;
        // clang-format off
        __asm {
            fld z
            cmp lift,0
            je noLift
            fadd dword ptr [g_vehicleCreationLift]
noLift:
            fstp dword ptr finalZ
        }
        // clang-format on
        *(DWORD*)&matrix.position.x = *(DWORD*)&x;
        *(DWORD*)&matrix.position.y = *(DWORD*)&y;
        *(DWORD*)&matrix.position.z = finalZ;
        SetMatrix(matrix);
        m_dwKeepLoaded = keepLoaded;
    }
    else if (model == 0x23a || model == 0x239)
    {
        if (g_vehicleTrainCursor)
        {
            m_pGameVehicle = *(void**)((BYTE*)g_vehicleTrainCursor + 0x5d4);
            if (!m_pGameVehicle)
            {
                g_pChat->AddDebugMessage(g_vehicleBadCarriageWarning);
            }
            else
            {
                handle = GamePoolVehicleGetIndex(m_pGameVehicle);
                m_nHandle = handle;
                m_pGameEntity = m_pGameVehicle;
                g_vehicleLastCreatedHandle = handle;
                g_vehicleTrainCursor = m_pGameVehicle;
                goto initialized;
            }
        }
        m_pGameEntity = 0;
        m_pGameVehicle = 0;
        g_vehicleTrainCursor = 0;
        return;
    }
    else
    {
        int trainType = model == 0x21a ? 5 : model == 0x219 ? 3 : 9;
        DWORD direction;
        // clang-format off
        __asm {
            mov direction,0
            fld rotation
            fcomp dword ptr [g_angleUpperBound]
            fnstsw ax
            test ah,0x41
            jnz directionDone
            mov direction,1
 directionDone:
        }
        // clang-format on
        g_pGame->RequestModel(0x21a, 2);
        g_pGame->RequestModel(0x23a, 2);
        g_pGame->RequestModel(0x219, 2);
        g_pGame->RequestModel(0x239, 2);
        g_pGame->RequestModel(0x1c1, 2);
        g_pGame->LoadRequestedModels();
        BOOL available = g_pGame->IsModelAvailable(0x21a);
        // The five train waits share one resolved Sleep target.
        void(WINAPI* volatile sleep)(DWORD) = Sleep;
        while (!available)
        {
            sleep(0);
            available = g_pGame->IsModelAvailable(0x21a);
        }
        while (!g_pGame->IsModelAvailable(0x23a))
            sleep(0);
        while (!g_pGame->IsModelAvailable(0x219))
            sleep(0);
        while (!g_pGame->IsModelAvailable(0x239))
            sleep(0);
        while (!g_pGame->IsModelAvailable(0x1c1))
            sleep(0);
        Scripting::ProcessCommand(&g_vehicleCreateTrainCommand, trainType, (double)x, (double)y, (double)z, direction, &handle);
        m_pGameVehicle = GamePoolVehicleGetAt(handle);
        m_pGameEntity = m_pGameVehicle;
        m_nHandle = handle;
        g_vehicleLastCreatedHandle = handle;
        g_vehicleTrainCursor = m_pGameVehicle;
        GameRemoveDriverByState598(m_pGameVehicle);
    }
initialized:
    m_dwInvulnerable = 0;
    m_byteObjective = 0;
    m_dwObjectiveMarker = 0;
    m_dwMarker = 0;
    m_dwHasBeenDriven = 0;
    m_dwLastDrivenTime = GetTickCount();
    m_dwField50 = 0xffffffff;
    m_dwField54 = 0xffffffff;
    m_dwLocked = 0;
    m_bColorChanged = FALSE;
    m_bInModShop = FALSE;
    m_dwEngineOverride75 = 0;
    m_pLicensePlateTexture = 0;
    memset(m_szLicensePlateText, 0, 33);
}

// 0x000b7940
// Official: FUN_100b7940 @ 0x100b7940 (samp.dll)
BOOL CVehicle::IsRC()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        short model = *(short*)((BYTE*)m_pGameVehicle + 0x22);
        return model == 0x1b9 || model == 0x1d0 || model == 0x1d1 || model == 0x252 || model == 0x1f5 || model == 0x234;
    }
    return FALSE;
}
// 0x000b7e60
// Official: FUN_100b7e60 @ 0x100b7e60 (samp.dll)
BOOL CVehicle::HasSiren()
{
    return m_dwSiren != 0;
}
// 0x000b7e70
// Official: FUN_100b7e70 @ 0x100b7e70 (samp.dll)
BYTE CVehicle::GetMaxPassengers()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
        return *((BYTE*)m_pGameVehicle + 0x488);
    return 0;
}
// 0x000b6de0
// Official: FUN_100b6de0 @ 0x100b6de0 (samp.dll)
float CVehicle::GetHealth()
{
    return m_pGameVehicle ? *(float*)((BYTE*)m_pGameVehicle + 0x4c0) : g_objectScaleLowerBound;
}
// 0x000b6ed0
// Official: FUN_100b6ed0 @ 0x100b6ed0 (samp.dll)
int CVehicle::GetSubtype()
{
    return m_pGameVehicle ? GameGetVehicleSubtype(m_pGameVehicle) : 0;
}
// 0x000b5d20
// Official: FUN_100b5d20 @ 0x100b5d20 (samp.dll)
int GameGetVehicleSubtype(void* vehicle)
{
    if (!vehicle)
        return 0;
    // GTA SA vtable virtual addresses, not samp.dll addresses.
    switch (*(DWORD*)vehicle)
    {
        case 0x871120:
            return 1;
        case 0x8721a0:
            return 4;
        case 0x871360:
            return 2;
        case 0x871948:
            return 5;
        case 0x871680:
            return 3;
        case 0x871528:
            return 6;
        case 0x872370:
            return 7;
    }
    return 0;
}

#include "game/playerped.h"

// 0x000b6c00
// Official: FUN_100b6c00 @ 0x100b6c00 (samp.dll)
void CVehicle::ResetPointers()
{
    if (m_pGameVehicle)
    {
        m_pGameVehicle = GamePoolVehicleGetAt(m_nHandle);
        m_pGameEntity = m_pGameVehicle;
    }
}

// 0x000b6c20
// Official: FUN_100b6c20 @ 0x100b6c20 (samp.dll)
BOOL CVehicle::HasDriver()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) && m_pGameVehicle)
    {
        BYTE* driver = *(BYTE**)((BYTE*)m_pGameVehicle + 0x460);
        if (driver && (*(DWORD*)(driver + 0x46c) & 0x100) && !*(DWORD*)(driver + 0x598))
            return TRUE;
    }
    return FALSE;
}

// 0x000b6c70
// Official: FUN_100b6c70 @ 0x100b6c70 (samp.dll)
BOOL CVehicle::IsOccupied()
{
    BYTE* vehicle = (BYTE*)m_pGameVehicle;
    if (vehicle)
    {
        for (int slot = 0; slot < 8; ++slot)
            if (*(void**)(vehicle + 0x460 + slot * 4))
                return TRUE;
    }
    return FALSE;
}

// 0x000b6e00
// Official: FUN_100b6e00 @ 0x100b6e00 (samp.dll)
void CVehicle::SetHealth(float health)
{
    if (m_pGameVehicle)
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x4c0) = *(DWORD*)&health;
}

// 0x000b6f30
// Official: FUN_100b6f30 @ 0x100b6f30 (samp.dll)
BOOL CVehicle::DriverIsPlayerPed()
{
    if (m_pGameVehicle)
    {
        void* ped = GameFindLocalPed();
        if (*(void**)((BYTE*)m_pGameVehicle + 0x460) == ped)
            return TRUE;
    }
    return FALSE;
}

// 0x000b6f60
// Official: FUN_100b6f60 @ 0x100b6f60 (samp.dll)
BOOL CVehicle::HasPlayerPed()
{
    if (m_pGameVehicle)
    {
        BYTE* ped = (BYTE*)GameFindLocalPed();
        if (ped && (*(DWORD*)(ped + 0x46c) & 0x100) && m_pGameVehicle == *(void**)(ped + 0x58c))
            return TRUE;
    }
    return FALSE;
}

// 0x000b7080
// Official: FUN_100b7080 @ 0x100b7080 (samp.dll)
void CVehicle::EnableSiren(BYTE enabled)
{
    BYTE* flags = (BYTE*)m_pGameVehicle + 0x42d;
    *flags = (BYTE)((*flags & 0x7f) | (enabled << 7));
}

// 0x000b70a0
// Official: FUN_100b70a0 @ 0x100b70a0 (samp.dll)
BOOL CVehicle::SirenEnabled()
{
    return (*(BYTE*)((BYTE*)m_pGameVehicle + 0x42d) & 0x80) != 0;
}

// 0x000b70c0
// Official: FUN_100b70c0 @ 0x100b70c0 (samp.dll)
void CVehicle::SetBackendWord45c(WORD value)
{
    *(WORD*)((BYTE*)m_pGameVehicle + 0x45c) = value;
}

// 0x000b71e0
// Official: FUN_100b71e0 @ 0x100b71e0 (samp.dll)
void CVehicle::SetHydraThrusters(DWORD value)
{
    if (m_pGameVehicle)
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x86c) = value;
}

// 0x000b7200
// Official: FUN_100b7200 @ 0x100b7200 (samp.dll)
DWORD CVehicle::GetHydraThrusters()
{
    return m_pGameVehicle ? *(DWORD*)((BYTE*)m_pGameVehicle + 0x86c) : 0;
}

// 0x000b7420
// Official: FUN_100b7420 @ 0x100b7420 (samp.dll)
float CVehicle::GetTrainSpeed()
{
    return m_pGameVehicle ? *(float*)((BYTE*)m_pGameVehicle + 0x5a4) : g_objectScaleLowerBound;
}

// 0x000b76c0
// Official: FUN_100b76c0 @ 0x100b76c0 (samp.dll)
DWORD CVehicle::GetPanelsDamage()
{
    return m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1 ? *(DWORD*)((BYTE*)m_pGameVehicle + 0x5b4) : 0;
}

// 0x000b76f0
// Official: FUN_100b76f0 @ 0x100b76f0 (samp.dll)
DWORD CVehicle::GetDoorsDamage()
{
    return m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1 ? *(DWORD*)((BYTE*)m_pGameVehicle + 0x5a9) : 0;
}

// 0x000b7720
// Official: FUN_100b7720 @ 0x100b7720 (samp.dll)
BYTE CVehicle::GetLightsDamage()
{
    return m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1 ? *(BYTE*)((BYTE*)m_pGameVehicle + 0x5b0) : 0;
}

// 0x000b77c0
// Official: FUN_100b77c0 @ 0x100b77c0 (samp.dll)
void CVehicle::SetTrailer(CVehicle* trailer)
{
    m_pTrailer = trailer;
}

// 0x000b7910
// Official: FUN_100b7910 @ 0x100b7910 (samp.dll)
bool CVehicle::IsTowtruck()
{
    return m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) && *(short*)((BYTE*)m_pGameVehicle + 0x22) == 0x20d;
}

// 0x000b7c70
// Official: FUN_100b7c70 @ 0x100b7c70 (samp.dll)
bool CVehicle::DoesExist()
{
    return GamePoolVehicleGetAt(m_nHandle) != 0;
}

// 0x000b7d40
// Official: FUN_100b7d40 @ 0x100b7d40 (samp.dll)
void CVehicle::SetField50(DWORD value)
{
    m_dwField50 = value;
}

// 0x000b7d50
// Official: FUN_100b7d50 @ 0x100b7d50 (samp.dll)
DWORD CVehicle::GetField50()
{
    return m_dwField50;
}

// 0x000b7d60
// Official: FUN_100b7d60 @ 0x100b7d60 (samp.dll)
void CVehicle::SetField54(DWORD value)
{
    m_dwField54 = value;
}

// 0x000b7d70
// Official: FUN_100b7d70 @ 0x100b7d70 (samp.dll)
DWORD CVehicle::GetField54()
{
    return m_dwField54;
}

#include "game/entity.h"

// 0x0018f5dc
DWORD g_vehicleDetachingTrailer;

// 0x000b6bd0
// Official: FUN_100b6bd0 @ 0x100b6bd0 (samp.dll)
void CVehicle::ChangeInterior(int interior)
{
    if (GamePoolVehicleGetAt(m_nHandle))
        Scripting::ProcessCommand(&g_vehicleChangeInteriorCommand, m_nHandle, interior);
}

// 0x000b6e70
// Official: FUN_100b6e70 @ 0x100b6e70 (samp.dll)
void CVehicle::UpdateColor()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) && m_bColorChanged && !m_bInModShop)
    {
        if (m_nPrimaryColor != *((BYTE*)m_pGameVehicle + 0x434) || m_nSecondaryColor != *((BYTE*)m_pGameVehicle + 0x435))
        {
            *((BYTE*)m_pGameVehicle + 0x434) = m_nPrimaryColor;
            *((BYTE*)m_pGameVehicle + 0x435) = m_nSecondaryColor;
        }
    }
}

// 0x000b6ef0
// Official: FUN_100b6ef0 @ 0x100b6ef0 (samp.dll)
DWORD CVehicle::IsSunk()
{
    return m_pGameVehicle ? Scripting::ProcessCommand(&g_vehicleIsSunkCommand, m_nHandle) : 0;
}

// 0x000b6fe0
// Official: FUN_100b6fe0 @ 0x100b6fe0 (samp.dll)
BOOL CVehicle::HasTurret()
{
    int model = ((CEntity*)this)->GetModelIndex();
    return model == 0x1b0 || model == 0x234 || model == 0x197 || model == 0x259;
}

// 0x000b7010
// Official: FUN_100b7010 @ 0x100b7010 (samp.dll)
void CVehicle::SetBackendBytes1f6And514(BYTE value)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 4)
            return;
        if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 5)
            return;
        if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 3)
            return;
        *((BYTE*)m_pGameVehicle + 0x1f6) = value;
        *((BYTE*)m_pGameVehicle + 0x514) = value;
    }
}

// 0x000b7380
// Official: FUN_100b7380 @ 0x100b7380 (samp.dll)
void CVehicle::Lock(BOOL locked)
{
    if (locked)
    {
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x4f8) = 2;
        m_dwLocked = 1;
    }
    else
    {
        *(DWORD*)((BYTE*)m_pGameVehicle + 0x4f8) = 0;
        m_dwLocked = 0;
    }
}

// 0x000b73b0
// Official: FUN_100b73b0 @ 0x100b73b0 (samp.dll)
BOOL CVehicle::UpdateLastDrivenTime()
{
    if (m_pGameVehicle && *(void**)((BYTE*)m_pGameVehicle + 0x460))
    {
        m_dwHasBeenDriven = 1;
        m_dwLastDrivenTime = GetTickCount();
        return TRUE;
    }
    return FALSE;
}

// 0x000b7750
// Official: FUN_100b7750 @ 0x100b7750 (samp.dll)
void CVehicle::AttachTrailer()
{
    CVehicle* trailer = m_pTrailer;
    if (trailer)
        Scripting::ProcessCommand(&g_vehicleAttachTrailerCommand, trailer->m_nHandle, m_nHandle);
}

// 0x000b7770
// Official: FUN_100b7770 @ 0x100b7770 (samp.dll)
void CVehicle::DetachTrailer()
{
    g_vehicleDetachingTrailer = 1;
    if (m_pTrailer && m_pTrailer->m_nHandle && GamePoolVehicleGetAt(m_pTrailer->m_nHandle) && m_pTrailer->m_pGameVehicle)
    {
        Scripting::ProcessCommand(&g_vehicleDetachTrailerCommand, m_pTrailer->m_nHandle, m_nHandle);
    }
    g_vehicleDetachingTrailer = 0;
}

// 0x000b7990
// Official: FUN_100b7990 @ 0x100b7990 (samp.dll)
void CVehicle::EnableLights(BYTE enabled)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        if (enabled)
        {
            *((BYTE*)m_pGameVehicle + 0x4a8) &= 0xf7;
            *((BYTE*)m_pGameVehicle + 0x428) |= 0x40;
        }
        else
        {
            *((BYTE*)m_pGameVehicle + 0x4a8) |= 8;
            *((BYTE*)m_pGameVehicle + 0x428) &= 0xbf;
        }
    }
}

// 0x000b79f0
// Official: FUN_100b79f0 @ 0x100b79f0 (samp.dll)
BYTE CVehicle::GetBackendLightsDisabledFlag()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
        return (*((BYTE*)m_pGameVehicle + 0x4a8) >> 3) & 1;
    return 1;
}

// 0x000b7be0
// Official: FUN_100b7be0 @ 0x100b7be0 (samp.dll)
BOOL CVehicle::RemoveComponent(WORD component)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        Scripting::ProcessCommand(&g_vehicleRemoveComponentCommand, m_nHandle, (unsigned int)component);
        return TRUE;
    }
    return FALSE;
}

// 0x000b7c20
// Official: FUN_100b7c20 @ 0x100b7c20 (samp.dll)
void CVehicle::SetPaintjob(BYTE paintjob)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) && m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1 && paintjob < 4)
    {
        Scripting::ProcessCommand(&g_vehiclePaintjobCommand, m_nHandle, (unsigned int)paintjob);
    }
}

// 0x000b7c80
// Official: FUN_100b7c80 @ 0x100b7c80 (samp.dll)
void CVehicle::SetLicensePlateText(const char* text)
{
    strncpy(m_szLicensePlateText, text, 32);
}

// 0x000b7ca0
// Official: FUN_100b7ca0 @ 0x100b7ca0 (samp.dll)
void CVehicle::SetRotation(float angle)
{
    if (GamePoolVehicleGetAt(m_nHandle))
        Scripting::ProcessCommand(&g_vehicleRotationCommand, m_nHandle, (double)angle);
}

// 0x000b7de0
// Official: FUN_100b7de0 @ 0x100b7de0 (samp.dll)
float CVehicle::GetBackendFloat648()
{
    return m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) ? *(float*)((BYTE*)m_pGameVehicle + 0x648) : g_objectScaleLowerBound;
}

// 0x000b7ea0
// Official: FUN_100b7ea0 @ 0x100b7ea0 (samp.dll)
void CVehicle::SetWindowOpenFlag(BYTE window)
{
    void* backend = m_pGameVehicle;
    if (backend)
    {
        unsigned int value = window;
        // clang-format off
        __asm {
            mov ecx,backend
            push value
            mov edx,0x6d3080
            call edx
        }
        // clang-format on
    }
}

// 0x000b7ed0
// Official: FUN_100b7ed0 @ 0x100b7ed0 (samp.dll)
void CVehicle::ClearWindowOpenFlag(BYTE window)
{
    void* backend = m_pGameVehicle;
    if (backend)
    {
        unsigned int value = window;
        // clang-format off
        __asm {
            mov ecx,backend
            push value
            mov edx,0x6d30b0
            call edx
        }
        // clang-format on
    }
}

#include "game/quaternion.h"

// 0x001181a0
const float g_vehicleTrainSpeedMinimum = -100.0f;
// 0x001181a4
const float g_vehicleTrainSpeedMaximum = 100.0f;

// 0x000b6cd0
// Official: FUN_100b6cd0 @ 0x100b6cd0 (samp.dll)
void CVehicle::SetInvulnerable(BOOL enabled)
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle) && *(DWORD*)m_pGameVehicle != 0x863c40)
    {
        if (enabled)
        {
            Scripting::ProcessCommand(&g_vehicleProofsCommand, m_nHandle, 1, 1, 1, 1, 1);
            Scripting::ProcessCommand(&g_vehicleDamageableCommand, m_nHandle, 0);
            m_dwInvulnerable = 1;
        }
        else
        {
            Scripting::ProcessCommand(&g_vehicleProofsCommand, m_nHandle, 0, 0, 0, 0, 0);
            Scripting::ProcessCommand(&g_vehicleDamageableCommand, m_nHandle, 1);
            m_dwInvulnerable = 0;
        }
    }
}

// 0x000b70e0
// Official: FUN_100b70e0 @ 0x100b70e0 (samp.dll)
void CVehicle::SetLandingGearState(int state)
{
    if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 5)
    {
        void* backend = m_pGameVehicle;
        DWORD position = *(DWORD*)((BYTE*)backend + 0x9cc);
        // Invalid state must not load/compare the float in x87.
        if (state == 1)
        {
            // clang-format off
            __asm {
                fld dword ptr [g_objectScaleLowerBound]
                fld dword ptr position
                fucompp
                fnstsw ax
                test ah,0x44
                jp skipRaise
                mov ecx,backend
                mov edx,0x6cac20
                call edx
skipRaise:
            }
            // clang-format on
        }
        else if (state == 0)
        {
            // clang-format off
            __asm {
                fld dword ptr [g_quaternionMatrixOne]
                fld dword ptr position
                fucompp
                fnstsw ax
                test ah,0x44
                jp skipLower
                mov ecx,backend
                mov edx,0x6cac70
                call edx
skipLower:
            }
            // clang-format on
        }
    }
}

// 0x000b7170
// Official: FUN_100b7170 @ 0x100b7170 (samp.dll)
BOOL CVehicle::GetLandingGearState()
{
    return m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 5 && *(float*)((BYTE*)m_pGameVehicle + 0x9cc) != g_objectScaleLowerBound;
}

// 0x000b7480
// Official: FUN_100b7480 @ 0x100b7480 (samp.dll)
void CVehicle::SetTires(BYTE tires)
{
    if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1)
    {
        *((BYTE*)m_pGameVehicle + 0x5a8) = tires & 1;
        *((BYTE*)m_pGameVehicle + 0x5a7) = (tires >> 1) & 1;
        *((BYTE*)m_pGameVehicle + 0x5a6) = (tires >> 2) & 1;
        *((BYTE*)m_pGameVehicle + 0x5a5) = (tires >> 3) & 1;
        return;
    }
    if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 2)
    {
        *((BYTE*)m_pGameVehicle + 0x65d) = tires & 1;
        *((BYTE*)m_pGameVehicle + 0x65c) = (tires >> 1) & 1;
    }
}

// 0x000b7570
// Official: FUN_100b7570 @ 0x100b7570 (samp.dll)
BYTE CVehicle::GetTires()
{
    if (!m_pGameVehicle)
        return 0;
    if (GameGetVehicleSubtype(m_pGameVehicle) == 1)
    {
        BYTE* backend = (BYTE*)m_pGameVehicle;
        BYTE result = (backend[0x5a5] != 0) << 1;
        if (backend[0x5a6])
            result |= 1;
        result <<= 1;
        if (backend[0x5a7])
            result |= 1;
        result <<= 1;
        if (backend[0x5a8])
            result |= 1;
        return result;
    }
    if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 2)
    {
        BYTE result = (*((BYTE*)m_pGameVehicle + 0x65c) != 0) << 1;
        if (*((BYTE*)m_pGameVehicle + 0x65d))
            result |= 1;
        return result;
    }
    return 0;
}

// 0x000b7600
// Official: FUN_100b7600 @ 0x100b7600 (samp.dll)
void CVehicle::UpdateDamage(DWORD panels, DWORD doors, BYTE lights)
{
    if (!m_pGameVehicle)
        return;
    if (GameGetVehicleSubtype(m_pGameVehicle) != 1)
    {
        if (!m_pGameVehicle || GameGetVehicleSubtype(m_pGameVehicle) != 5)
            return;
    }
    if (!panels && !doors && !lights && (*(DWORD*)((BYTE*)m_pGameVehicle + 0x5b4) || *(DWORD*)((BYTE*)m_pGameVehicle + 0x5a9) || *(DWORD*)((BYTE*)m_pGameVehicle + 0x5b0)))
    {
        void* backend = m_pGameVehicle;
        // clang-format off
        __asm { mov ecx,backend
            mov edx,0x6a3440
            call edx }
        // clang-format on
        return;
    }
    *(DWORD*)((BYTE*)m_pGameVehicle + 0x5b4) = panels;
    *(DWORD*)((BYTE*)m_pGameVehicle + 0x5a9) = doors;
    *(DWORD*)((BYTE*)m_pGameVehicle + 0x5b0) = lights;
    void* backend = m_pGameVehicle;
    // clang-format off
    __asm { mov ecx,backend
        mov edx,0x6b3e90
        call edx }
    // clang-format on
}

// 0x000b78b0
// Official: FUN_100b78b0 @ 0x100b78b0 (samp.dll)
BOOL CVehicle::IsTrailer()
{
    if (m_pGameVehicle && GamePoolVehicleGetAt(m_nHandle))
    {
        short model = *(short*)((BYTE*)m_pGameVehicle + 0x22);
        return model == 0x1b3 || model == 0x1c2 || model == 0x248 || model == 0x24f || model == 0x25e || model == 0x25f || model == 0x260 || model == 0x262 || model == 0x263;
    }
    return FALSE;
}

// 0x000b7d80
// Official: FUN_100b7d80 @ 0x100b7d80 (samp.dll)
void CVehicle::CallBackend6a6ae0(DWORD first, DWORD second, DWORD third)
{
    if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 1)
    {
        void* backend = m_pGameVehicle;
        // clang-format off
        __asm {
            push 1
            push third
            push first
            push second
            push 0
            mov ecx,backend
            mov edx,0x6a6ae0
            call edx
        }
        // clang-format on
    }
}

// 0x000b7440
// Official: FUN_100b7440 @ 0x100b7440 (samp.dll)
void CVehicle::SetTrainSpeed(float speed)
{
    // clang-format off
    // Preserve both FCOMP operations and native status masks, including NaNs.
    __asm {
        fld speed
        fcomp dword ptr [g_vehicleTrainSpeedMaximum]
        fnstsw ax
        test ah,0x41
        jz rejected
        fld speed
        fcomp dword ptr [g_vehicleTrainSpeedMinimum]
        fnstsw ax
        test ah,5
        jnp rejected
    }
    // clang-format on
    if (m_pGameVehicle) * (DWORD*)((BYTE*)m_pGameVehicle + 0x5a4) = *(DWORD*)&speed;
rejected:;
}

// 0x000b7e10
// Official: FUN_100b7e10 @ 0x100b7e10 (samp.dll)
void CVehicle::SetBackendFloat64c(float speed)
{
    if (!m_pGameVehicle || !GamePoolVehicleGetAt(m_nHandle))
        return;
    // clang-format off
    // Preserve both FCOMP operations and native status masks, including NaNs.
    __asm {
        fld speed
        fcomp dword ptr [g_quaternionMatrixOne]
        fnstsw ax
        test ah,0x41
        jz rejected
        fld speed
        fcomp dword ptr [g_entityEulerSign]
        fnstsw ax
        test ah,5
        jnp rejected
    }
    // clang-format on
    *(DWORD*)((BYTE*)m_pGameVehicle + 0x64c) = *(DWORD*)&speed;
rejected:;
}

#include "net/vehiclepool.h"

// 0x000b77d0
// Official: FUN_100b77d0 @ 0x100b77d0 (samp.dll)
CVehicle* CVehicle::GetTrailer()
{
    if (!m_pGameVehicle)
        return 0;
    void* backend = *(void**)((BYTE*)m_pGameVehicle + 0x4c8);
    if (backend && g_pNetGame)
    {
        BYTE* pools = *(BYTE**)((BYTE*)g_pNetGame + 0x3de);
        CVehiclePool* pool = *(CVehiclePool**)(pools + 0xc);
        WORD id = pool->Find(backend);
        if (id != 0xffff && pool->DoesExist(id))
            return pool->Get(id);
    }
    return 0;
}

// 0x000b7830
// Official: FUN_100b7830 @ 0x100b7830 (samp.dll)
CVehicle* CVehicle::GetTractor()
{
    if (!m_pGameVehicle)
        return 0;
    int subtype = GameGetVehicleSubtype(m_pGameVehicle);
    if (subtype == 2 || subtype == 4 || subtype == 7 || subtype == 6)
        return 0;
    void* backend = *(void**)((BYTE*)m_pGameVehicle + 0x4c4);
    if (backend && g_pNetGame)
    {
        BYTE* pools = *(BYTE**)((BYTE*)g_pNetGame + 0x3de);
        CVehiclePool* pool = *(CVehiclePool**)(pools + 0xc);
        WORD id = pool->Find(backend);
        if (id != 0xffff && pool->DoesExist(id))
            return pool->Get(id);
    }
    return 0;
}

// 0x000b7a20
// Official: FUN_100b7a20 @ 0x100b7a20 (samp.dll)
void CVehicle::RemovePassengers()
{
    if (!m_pGameVehicle || !GamePoolVehicleGetAt(m_nHandle))
        return;
    BYTE* matrix = *(BYTE**)((BYTE*)m_pGameVehicle + 0x14);
    DWORD xBits = *(DWORD*)(matrix + 0x30), yBits = *(DWORD*)(matrix + 0x34), zBits = *(DWORD*)(matrix + 0x38);
    for (int offset = 0x460; offset < 0x480; offset += 4)
    {
        void* ped = *(void**)((BYTE*)m_pGameVehicle + offset);
        if (ped)
        {
            int handle = GamePoolPedGetIndex(ped);
            double raisedZ;
            // clang-format off
            // Native loads Z before FADD and rounds directly to the vararg double.
            __asm {
                fld dword ptr zBits
                fadd dword ptr [g_quaternionMatrixTwo]
                fstp qword ptr raisedZ
            }
            // clang-format on
            Scripting::ProcessCommand(&g_vehicleWarpPedCommand, handle, (double)*(float*)&xBits, (double)*(float*)&yBits, raisedZ);
        }
    }
}

// 0x000b7b00
// Official: FUN_100b7b00 @ 0x100b7b00 (samp.dll)
BOOL CVehicle::AddComponent(WORD component)
{
    DWORD result = (DWORD)this;
    if (!m_pGameVehicle || !GamePoolVehicleGetAt(m_nHandle) || !m_pGameVehicle || GameGetVehicleSubtype(m_pGameVehicle) != 1)
        return FALSE;
    unsigned int model = component;
    if (!Scripting::ProcessCommand(&g_vehicleComponentLoadedCommand, model))
    {
        g_pGame->RequestModel(model, 2);
        g_pGame->LoadRequestedModels();
        Scripting::ProcessCommand(&g_vehicleRequestComponentCommand, model);
        void(WINAPI * sleep)(DWORD) = Sleep;
        for (int attempts = 20; attempts != 0; --attempts)
        {
            if (Scripting::ProcessCommand(&g_vehicleComponentLoadedCommand, model))
                break;
            sleep(1);
        }
    }
    if (!Scripting::ProcessCommand(&g_vehicleComponentLoadedCommand, model))
        return FALSE;
    Scripting::ProcessCommand(&g_vehicleAddComponentCommand, m_nHandle, model, &result);
    return TRUE;
}

// 0x0011812c
const float g_vehicleMarkerDistance = 200.0f;

// Keep x87 return in ST0: no float spill between distance call and FCOMP.
// Raw wrapper views do not establish the full allocation extent.
// 0x000b7220
// Official: FUN_100b7220 @ 0x100b7220 (samp.dll)
void CVehicle::ProcessMarkers()
{
    if (!m_pGameVehicle)
        return;
    DWORD* marker = &m_dwMarker;
    DWORD* special = &m_dwObjectiveMarker;
    if (m_byteObjective)
    {
        if (!*special)
        {
            if (*marker)
            {
                Scripting::ProcessCommand(&g_vehicleDestroyMarkerCommand, *marker);
                *marker = 0;
            }
            Scripting::ProcessCommand(&g_vehicleCreateMarkerCommand, m_nHandle, 1, 3, marker);
            Scripting::ProcessCommand(&g_vehicleMarkerColorCommand, *marker, 0x3ee);
            Scripting::ProcessCommand(&g_vehicleMarkerModeCommand, *marker, 3);
            *special = 1;
        }
        return;
    }
    if (*special && *marker)
    {
        Scripting::ProcessCommand(&g_vehicleDestroyMarkerCommand, *marker);
        *special = 0;
        *marker = 0;
    }
    BOOL farOrUnordered;
    // clang-format off
    __asm {
        mov ecx,this
        call CEntity::GetDistanceToLocalPlayer
        fcomp dword ptr [g_vehicleMarkerDistance]
        fnstsw ax
        test ah,5
        setp al
        movzx eax,al
        mov farOrUnordered,eax
    }
    // clang-format on
    if (!farOrUnordered && !IsOccupied())
    {
        if (!*marker)
        {
            Scripting::ProcessCommand(&g_vehicleCreateMarkerCommand, m_nHandle, 1, 2, marker);
            Scripting::ProcessCommand(&g_vehicleMarkerColorCommand, *marker, 0x3ec);
        }
        return;
    }
    if (!IsOccupied())
    {
        BOOL orderedFar;
        // clang-format off
        __asm {
            mov ecx,this
            call CEntity::GetDistanceToLocalPlayer
            fcomp dword ptr [g_vehicleMarkerDistance]
            fnstsw ax
            test ah,1
            setz al
            movzx eax,al
            mov orderedFar,eax
        }
        // clang-format on
        if (!orderedFar) return;
    }
    if (*marker)
    {
        Scripting::ProcessCommand(&g_vehicleDestroyMarkerCommand, *marker);
        *marker = 0;
    }
}

// GTA SA backend: 0x004FCF40, ECX=original backend+138.
// GTA SA shared word 0x00B6B990 is saved only around that backend call.
// 0x000b85a0
// Official: FUN_100b85a0 @ 0x100b85a0 (samp.dll)
void CVehicle::EnableEngine(BOOL enabled)
{
    BYTE* initial = (BYTE*)m_pGameVehicle;
    if (!initial)
        return;
    if (enabled)
    {
        initial[0x428] |= 0x10;
        if (m_pGameVehicle && GameGetVehicleSubtype(m_pGameVehicle) == 3 && HasDriver() && !DriverIsPlayerPed())
            m_dwEngineOverride75 = 1;
    }
    else
    {
        initial[0x428] &= 0xef;
        if (!m_pGameVehicle || GameGetVehicleSubtype(m_pGameVehicle) != 3 || !m_dwEngineOverride75)
            return;
        BYTE* current = (BYTE*)m_pGameVehicle;
        if (current)
        {
            // clang-format off
            __asm {
                mov eax,current
                fld dword ptr [eax+0x4c0]
                fcomp dword ptr [g_objectScaleLowerBound]
                fnstsw ax
                test ah,0x41
                jnz skipBackend
                mov edi,dword ptr ds:[0xb6b990]
                mov eax,initial
                lea ecx,[eax+0x138]
                mov edx,0x4fcf40
                call edx
                mov dword ptr ds:[0xb6b990],edi
skipBackend:
            }
            // clang-format on
        }
        m_dwEngineOverride75 = 0;
    }
}

// Raw GTA driver interface, no complete ped/vtable allocation is inferred.
// 0x000b3eb0
// Official: FUN_100b3eb0 @ 0x100b3eb0 (samp.dll)
void __stdcall GameRemoveDriverByState598(void* vehicle)
{
    if (!vehicle)
        return;
    void* driver = *(void**)((BYTE*)vehicle + 0x460);
    if (!driver)
        return;
    DWORD state = *(DWORD*)((BYTE*)driver + 0x598);
    if (!state || state == 1)
        return;
    // clang-format off
    __asm {
        mov ecx,driver
        mov eax,dword ptr [ecx]
        push 1
        call dword ptr [eax]
    }
    // clang-format on
    *(void**)((BYTE*)vehicle + 0x460) = 0;
}

#include "d3dhook/IDirect3DDevice9Hook.h"
#include "gui.h"

// 0x000b7cd0
// Official: FUN_100b7cd0 @ 0x100b7cd0 (samp.dll)
void CVehicle::ConstructLicensePlate()
{
    if (!m_pLicensePlateTexture)
    {
        const char *text = m_szLicensePlateText, *end = text;
        while (*end++)
        {
        }
        if (end != text + 1)
        {
            IDirect3DTexture9* created = ((CLicensePlate*)g_devicePlateManager)->Create(text);
            m_pLicensePlateTexture = created;
        }
    }
}
// 0x000b7d20
// Official: FUN_100b7d20 @ 0x100b7d20 (samp.dll)
void CVehicle::ShutdownLicensePlate()
{
    IDirect3DTexture9** texture = &m_pLicensePlateTexture;
    if (*texture)
    {
        (*texture)->Release();
        *texture = 0;
    }
}

// 0x0011f704
const Scripting::OpcodeInfo g_vehicleLockedCommand = {0x519, "ii"};
// 0x0011f68c
const Scripting::OpcodeInfo g_vehicleWreckedCommand = {0x119, "i"};
// 0x000b6d70
// Official: FUN_100b6d70 @ 0x100b6d70 (samp.dll)
void CVehicle::SetLocked(BOOL locked)
{
    if (m_pGameVehicle)
        Scripting::ProcessCommand(&g_vehicleLockedCommand, m_nHandle, locked ? 1 : 0);
}
// 0x000b6f10
// Official: FUN_100b6f10 @ 0x100b6f10 (samp.dll)
BOOL CVehicle::IsWrecked()
{
    return m_pGameVehicle ? (BOOL)Scripting::ProcessCommand(&g_vehicleWreckedCommand, m_nHandle) : FALSE;
}

// 0x000b6db0
// Official: FUN_100b6db0 @ 0x100b6db0 (samp.dll)
void CVehicle::SetBackendFlag428Bit5(BOOL enabled)
{
    BYTE* vehicle = (BYTE*)m_pGameVehicle;
    if (!vehicle)
        return;
    if (enabled)
        vehicle[0x428] |= 0x20;
    else
        vehicle[0x428] &= 0xdf;
}

// 0x000b7400
// Official: FUN_100b7400 @ 0x100b7400 (samp.dll)
float CVehicle::GetBackendFloat94C()
{
    return *(float*)((BYTE*)m_pGameVehicle + 0x94c);
}

// 0x000b7410
// Official: FUN_100b7410 @ 0x100b7410 (samp.dll)
float CVehicle::GetBackendFloat950()
{
    return *(float*)((BYTE*)m_pGameVehicle + 0x950);
}

// 0x000b73e0
// Official: FUN_100b73e0 @ 0x100b73e0 (samp.dll)
void CVehicle::SetBackendFloat94CAnd950(float first, float second)
{
    memcpy((BYTE*)m_pGameVehicle + 0x94c, &first, 4);
    memcpy((BYTE*)m_pGameVehicle + 0x950, &second, 4);
}

// 0x000b6fa0
// Official: FUN_100b6fa0 @ 0x100b6fa0 (samp.dll)
BOOL CVehicle::IsTrainPart()
{
    if (!m_pGameVehicle)
        return FALSE;
    short model = *(short*)((BYTE*)m_pGameVehicle + 0x22);
    return model == 0x21a || model == 0x23a || model == 0x219 || model == 0x239 || model == 0x1c1;
}

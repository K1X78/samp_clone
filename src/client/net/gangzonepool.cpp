#include "net/gangzonepool.h"
#include "game/game.h"
#include "main.h"
#include <stdlib.h>
#include <string.h>
// Native records are allocated and released with malloc/free.
// 0x001569a0
BYTE g_gangZoneFlashPhase = 0;
// 0x001569a4
DWORD g_gangZoneFlashTick = 0;
// 0x00002150
// Official: FUN_10002150 @ 0x10002150 (samp.dll)
CGangZonePool::CGangZonePool()
{
    for (WORD i = 0; i < 1024; ++i)
    {
        zones[i] = 0;
        active[i] = 0;
    }
}
// 0x00002180
// Official: FUN_10002180 @ 0x10002180 (samp.dll)
CGangZonePool::~CGangZonePool()
{
    for (WORD i = 0; i < 1024; ++i)
        if (zones[i])
        {
            free(zones[i]);
            zones[i] = 0;
        }
}
// 0x000021b0
// Official: FUN_100021b0 @ 0x100021b0 (samp.dll)
void CGangZonePool::Create(WORD id, float minX, float minY, float maxX, float maxY, DWORD color)
{
    if (zones[id])
    {
        free(zones[id]);
        zones[id] = 0;
        active[id] = 0;
    }
    GangZone* zone = (GangZone*)malloc(24);
    if (!zone)
        return;
    memcpy(zone->rectangle, &minX, 4);
    memcpy(zone->rectangle + 1, &maxY, 4);
    memcpy(zone->rectangle + 2, &maxX, 4);
    memcpy(zone->rectangle + 3, &minY, 4);
    zone->color = color;
    zone->flashColor = color;
    zones[id] = zone;
    active[id] = 1;
}
// 0x00002230
// Official: FUN_10002230 @ 0x10002230 (samp.dll)
void CGangZonePool::StartFlashing(WORD id, DWORD color)
{
    if (zones[id])
        zones[id]->flashColor = color;
}
// 0x00002250
// Official: FUN_10002250 @ 0x10002250 (samp.dll)
void CGangZonePool::StopFlashing(WORD id)
{
    if (zones[id])
        zones[id]->flashColor = zones[id]->color;
}
// 0x00002270
// Official: FUN_10002270 @ 0x10002270 (samp.dll)
void CGangZonePool::Delete(WORD id)
{
    if (zones[id])
    {
        free(zones[id]);
        zones[id] = 0;
        active[id] = 0;
    }
}
// 0x000022a0
// Official: FUN_100022a0 @ 0x100022a0 (samp.dll)
void CGangZonePool::Draw()
{
    DWORD now = GetTickCount();
    if ((LONG)(now - g_gangZoneFlashTick) >= 500)
    {
        g_gangZoneFlashPhase = (BYTE)~g_gangZoneFlashPhase;
        g_gangZoneFlashTick = now;
    }
    for (WORD i = 0; i < 1024; ++i)
        if (active[i])
        {
            GangZone* zone = zones[i];
            g_pGame->DrawGangZone(zone->rectangle, g_gangZoneFlashPhase ? zone->flashColor : zone->color);
        }
}

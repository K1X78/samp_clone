#include "net/gangzonepool.h"
#include "game/game.h"

#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <new>

namespace {
bool fail_allocation = false;
unsigned allocations = 0;
unsigned releases = 0;

GangZone* record(const CGangZonePool& pool, unsigned id) {
    GangZone* value;
    std::memcpy(&value, reinterpret_cast<const unsigned char*>(&pool) + id * 4, 4);
    return value;
}

DWORD active(const CGangZonePool& pool, unsigned id) {
    DWORD value;
    std::memcpy(&value, reinterpret_cast<const unsigned char*>(&pool) + 0x1000 + id * 4, 4);
    return value;
}
}

void* gangzone_test_malloc(size_t size) {
    if (size != sizeof(GangZone) || fail_allocation) return nullptr;
    ++allocations;
    return std::malloc(size);
}

void gangzone_test_free(void* pointer) {
    ++releases;
    std::free(pointer);
}

// Satisfy the unused renderer's dependencies without invoking GTA.
CGame* g_pGame = nullptr;
void CGame::DrawGangZone(const float*, DWORD) { std::abort(); }

#define CHECK(expression) do { if (!(expression)) { \
    std::fprintf(stderr, "line %d: %s\n", __LINE__, #expression); return 1; \
} } while (false)

int main() {
    static_assert(sizeof(void*) == 4);
    alignas(CGangZonePool) unsigned char storage[sizeof(CGangZonePool)];
    std::memset(storage, 0xcd, sizeof(storage));
    auto* pool = new (storage) CGangZonePool;
    for (unsigned id = 0; id < 1024; ++id) {
        CHECK(record(*pool, id) == nullptr);
        CHECK(active(*pool, id) == 0);
    }

    pool->StartFlashing(1023, 0x11223344);
    pool->StopFlashing(1023);
    pool->Delete(1023);
    CHECK(releases == 0);
    pool->Create(1023, 1.0f, 2.0f, 3.0f, 4.0f, 0xaabbccdd);
    auto* zone = record(*pool, 1023);
    CHECK(zone && active(*pool, 1023) == 1 && allocations == 1);
    CHECK(zone->rectangle[0] == 1.0f && zone->rectangle[1] == 4.0f);
    CHECK(zone->rectangle[2] == 3.0f && zone->rectangle[3] == 2.0f);
    CHECK(zone->color == 0xaabbccdd && zone->flashColor == zone->color);
    pool->StartFlashing(1023, 0x11223344);
    CHECK(zone->flashColor == 0x11223344);
    pool->StopFlashing(1023);
    CHECK(zone->flashColor == zone->color);

    // Replacement must release the previous malloc record through free.
    pool->Create(1023, -1.0f, -2.0f, -3.0f, -4.0f, 7);
    CHECK(releases == 1 && allocations == 2 && active(*pool, 1023) == 1);
    fail_allocation = true;
    pool->Create(1023, 0, 0, 0, 0, 0);
    CHECK(releases == 2 && !record(*pool, 1023) && !active(*pool, 1023));
    pool->Create(0, 0, 0, 0, 0, 0);
    CHECK(!record(*pool, 0) && !active(*pool, 0) && allocations == 2);
    fail_allocation = false;
    pool->Create(0, 0, 0, 0, 0, 1);
    pool->Delete(0);
    CHECK(releases == 3 && !record(*pool, 0) && !active(*pool, 0));
    pool->Create(0, 0, 0, 0, 0, 1);
    pool->Create(1023, 0, 0, 0, 0, 2);
    pool->~CGangZonePool();
    CHECK(releases == allocations && releases == 5);
    // Destruction clears pointer slots but deliberately retains active flags.
    DWORD first_flag = 0, last_flag = 0;
    std::memcpy(&first_flag, storage + 0x1000, 4);
    std::memcpy(&last_flag, storage + 0x1ffc, 4);
    CHECK(first_flag == 1 && last_flag == 1);
    return 0;
}

// The remote actor slot table of the injected module.
//
// Provenance
//   docs/re/team-s01.md (section 1.2 and the notable functions 0x10001660,
//   0x100016c0, 0x100016f0, 0x100018b0 and 0x100018e0)
//
// The shipped client keeps three parallel tables of 1000 entries:
//
//   +0x0004 + slot*4    the actor object
//   +0x0fa4 + slot*4    the used flag
//   +0x1f44 + slot*4    the network id of the actor
//
// and the dword at +0x00 holds the index of the last occupied slot.
//
// The actors are the fake peds the client spawns for the remote players.
// They are destroyed through the virtual destructor in vtable slot 0, so the
// replica stores them as pointers to a type with a virtual destructor.

#pragma once

#include <cstddef>
#include <cstdint>
#include <memory>
#include <vector>

namespace samp::client {

// A remote actor: the fake ped the client spawns for a remote player.
class RemoteActor {
public:
    virtual ~RemoteActor() = default;
};

class ActorSlots {
public:
    // The number of slots of the three tables.
    static constexpr std::size_t kSlotCount = 1000;
    // The value the official returns when a lookup fails.
    static constexpr std::uint16_t kNoSlot = 0xffff;

    ActorSlots() = default;

    ActorSlots(const ActorSlots&) = delete;
    ActorSlots& operator=(const ActorSlots&) = delete;
    ActorSlots(ActorSlots&&) noexcept = default;
    ActorSlots& operator=(ActorSlots&&) noexcept = default;

    // Portable core lookup by network id. The native CActorPool::Find at
    // 0x100018b0 searches by ped pointer instead.
    [[nodiscard]] std::uint16_t find_by_network_id(std::uint32_t network_id) const;

    // Test-facing view of the core slot state; the native DoesExist owner is
    // already implemented by CActorPool in net/actorpool.cpp.
    [[nodiscard]] std::uint32_t used_flag(std::uint16_t slot) const;


private:
    friend class GameRuntime;
    friend class TestRpcActorSlotsAccess;

    std::uint32_t occupied_ = 0;
    std::vector<std::unique_ptr<RemoteActor>> actors_ =
        std::vector<std::unique_ptr<RemoteActor>>(kSlotCount);
    std::vector<std::uint32_t> used_ = std::vector<std::uint32_t>(kSlotCount,0);
    std::vector<std::uint32_t> network_ids_ = std::vector<std::uint32_t>(kSlotCount,0);
};

}  // namespace samp::client

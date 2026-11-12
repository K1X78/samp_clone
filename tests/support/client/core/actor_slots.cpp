#include "samp/client/actor_slots.hpp"

namespace samp::client {

// source adapter only; no established separate native entry
std::uint16_t ActorSlots::find_by_network_id(std::uint32_t network_id) const {
    // The official checks each id through the last occupied slot, inclusive.
    for (std::size_t slot = 0; slot <= occupied_; ++slot) {
        if (network_ids_[slot] == network_id) {
            return static_cast<std::uint16_t>(slot);
        }
    }
    return kNoSlot;
}

// source adapter only; no established separate native entry
std::uint32_t ActorSlots::used_flag(std::uint16_t slot) const {
    if (slot >= kSlotCount) {
        return 0;
    }
    return used_[slot];
}

}  // namespace samp::client

#pragma once

#include "samp/proto/amx.hpp"
#include <functional>
#include <span>

namespace samp::pawn {

class NativeHost;

namespace actor_natives {

using samp::amx::cell;
using CellWriter = std::function<bool(cell, cell)>;
using StringReader = std::function<const char*(cell)>;

cell get_pool_size(NativeHost&, std::span<const cell>);
cell is_streamed_in(NativeHost&, std::span<const cell>);
cell create(NativeHost&, std::span<const cell>);
cell destroy(NativeHost&, std::span<const cell>);
cell is_valid(NativeHost&, std::span<const cell>);
cell set_world(NativeHost&, std::span<const cell>);
cell get_world(NativeHost&, std::span<const cell>);
cell set_invulnerable(NativeHost&, std::span<const cell>);
cell is_invulnerable(NativeHost&, std::span<const cell>);
cell set_health(NativeHost&, std::span<const cell>);
cell get_health(NativeHost&, std::span<const cell>, const CellWriter&);
cell set_position(NativeHost&, std::span<const cell>);
cell get_position(NativeHost&, std::span<const cell>, const CellWriter&);
cell set_angle(NativeHost&, std::span<const cell>);
cell get_angle(NativeHost&, std::span<const cell>, const CellWriter&);
cell apply_animation(NativeHost&, std::span<const cell>, const StringReader&);
cell clear_animations(NativeHost&, std::span<const cell>);

} // namespace actor_natives
} // namespace samp::pawn

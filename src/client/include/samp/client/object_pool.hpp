#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace samp::client {

inline constexpr std::size_t kObjectPoolCapacity = 2100;

// Official 0.3.DL layout: highest at +0, flags at +4, pointers at +0x20d4.
// The final word models the adjacent memory touched by the native off-by-one
// remove/create index 2100. Its flag aliases object[0]; clear/count/refresh
// still process exactly 2100 entries. This is deliberate, not a 2101-slot pool.
struct ObjectPoolState {
    std::array<std::uint32_t, 1 + 2 * kObjectPoolCapacity + 1> words{};
};
static_assert(0x835 * sizeof(std::uint32_t) == 0x20d4);

struct ObjectCreatePlacement { std::array<std::uint32_t, 7> words; };

class ObjectModelHost {
public:
    virtual ~ObjectModelHost() = default;
    virtual bool known(std::int32_t model) = 0;
    virtual std::uint8_t extra_a(std::int32_t model) = 0;
    virtual std::uint8_t extra_b(std::int32_t model) = 0;
    virtual bool has_object(std::int32_t model) = 0;
    virtual std::int32_t model_object(std::int32_t model) = 0;
};

class ObjectPoolHost {
public:
    virtual ~ObjectPoolHost() = default;
    virtual std::uint32_t local_attachment() = 0;
    virtual void release_attachment(std::uint32_t argument) = 0;
    virtual void destroy(std::uint32_t object, std::uint32_t flags) = 0;
    virtual std::uint32_t create(std::int32_t model, const ObjectCreatePlacement& placement,
                                  std::uint8_t extra_a, std::uint8_t extra_b) = 0;
    virtual std::uint32_t handle(std::uint32_t object) = 0;
    virtual std::uint32_t ticks() = 0;
    virtual void update(std::uint32_t object, float seconds) = 0;
    virtual void process(std::uint32_t object) = 0;
    virtual std::uint32_t tag(std::uint32_t object) = 0;
    virtual void tagged_first_pass(std::uint32_t object) = 0;
    virtual void tagged_second_pass(std::uint32_t object) = 0;
    virtual bool flag_49(std::uint32_t object) = 0;
    virtual bool flag_6c(std::uint32_t object) = 0;
    virtual void render(std::uint32_t object) = 0;
    virtual float distance(std::uint32_t object) = 0;
    virtual bool attachable(std::uint32_t object) = 0;
    virtual bool flag_53(std::uint32_t object) = 0;
    virtual bool attached(std::uint32_t object) = 0;
    virtual bool attach(std::uint32_t object, std::uint32_t first, std::uint32_t second,
                        std::uint32_t enabled) = 0;
};

}  // namespace samp::client

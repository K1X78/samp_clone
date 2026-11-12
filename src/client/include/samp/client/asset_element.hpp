// Flat 0x5E-byte asset record used by the official samp.dll asset pool.
// The fields retain the offsets read and written by the 0.3.DL handlers.
#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace samp::client {

enum class AssetKind : std::uint8_t {
    kModel = 1,
    kTexture = 2,
};

#pragma pack(push, 1)
struct AssetElement {
    static constexpr std::size_t kSize = 0x5E;

    std::uint8_t model_loaded{};
    std::uint8_t texture_loaded{};
    std::uint8_t model_missing{};
    std::uint8_t texture_missing{};
    std::uint8_t model_download_started{};
    std::uint8_t texture_download_started{};
    std::uint8_t download_failed{};
    std::uint8_t kind_byte{};

    std::int32_t parent_id{};
    std::int32_t asset_id{};
    std::int32_t element_id{};
    std::array<std::uint8_t, 0x32> unknown_14_45{};

    std::uint32_t model_id{};
    std::uint32_t texture_id{};
    std::uint32_t model_size{};
    std::uint32_t texture_size{};

    std::uint8_t flag_56{};
    std::uint8_t flag_57{};
    std::uint8_t flag_58{};
    std::uint8_t flag_59{};
    std::array<std::uint8_t, 4> trailing{};
};
#pragma pack(pop)

static_assert(sizeof(AssetElement) == AssetElement::kSize);
static_assert(offsetof(AssetElement, parent_id) == 0x08);
static_assert(offsetof(AssetElement, asset_id) == 0x0C);
static_assert(offsetof(AssetElement, element_id) == 0x10);
static_assert(offsetof(AssetElement, model_id) == 0x46);
static_assert(offsetof(AssetElement, texture_id) == 0x4A);
static_assert(offsetof(AssetElement, model_size) == 0x4E);
static_assert(offsetof(AssetElement, texture_size) == 0x52);
static_assert(offsetof(AssetElement, flag_56) == 0x56);

}  // namespace samp::client

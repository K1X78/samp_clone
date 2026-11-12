// Memory patch primitives used by the reconstructed 0.3.DL initializers.
// The official DLL also calls GTA functions directly at absolute addresses.
// Windows writes temporarily change protection and flush instructions.

#pragma once

#include <cstddef>
#include <cstdint>
#include <vector>

namespace samp::client {

// The base address of gta_sa.exe.  The image is 0x1177000 bytes long and
// has no exports, so every target is an absolute address.
inline constexpr std::uint32_t kGtaSaImageBase = 0x00400000u;
// The bounds of the mapped image: the base plus its size.
inline constexpr std::uint32_t kGtaSaImageSize = 0x1177000u;
inline constexpr std::uint32_t kGtaSaImageEnd = kGtaSaImageBase + kGtaSaImageSize;

// One applied patch, kept so it can be verified or reverted.
struct PatchRecord {
    std::uint32_t address = 0;
    std::vector<std::uint8_t> original;
    std::vector<std::uint8_t> replacement;
};

}  // namespace samp::client

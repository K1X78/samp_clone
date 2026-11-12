#pragma once

#include <cstdint>

namespace samp::client {

class ArchiveHash {
public:
    std::uint32_t HashString(const char* name) const;
};

extern const ArchiveHash g_archive_hash;

}  // namespace samp::client

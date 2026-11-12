#pragma once
#include <array>
#include <cstdint>
#include <filesystem>
#include <span>
#include <string>
#include <vector>

namespace samp::client {

// Compatibility wrapper around the existing CArchiveFS owners in ArchiveFS.cpp.
class DlArchive {
public:
    bool load(const std::filesystem::path& path);
    bool extract(std::uint32_t hash, std::vector<std::uint8_t>& out) const;
    // The injected startup owner consumes the authenticated directory to
    // build GTA's file-open overlay before the original game thread starts.
    std::vector<std::uint32_t> file_hashes_;
    std::string error_;
private:
    std::vector<std::uint8_t> raw_;
    std::array<std::uint8_t, 2048> table_{};
    std::uint8_t root_ = 0;
    bool ready_ = false;
};

}  // namespace samp::client

#pragma once

#include <array>
#include <string_view>

namespace samp::pawn {

// Legacy Pawn compatibility: SHA-256 of password followed by salt, encoded
// as 64 uppercase hexadecimal digits. This API is used by existing scripts.
std::array<char, 64> sha256_password_hash(std::string_view password, std::string_view salt);

} // namespace samp::pawn

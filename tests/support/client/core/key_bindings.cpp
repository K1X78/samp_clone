#include "samp/client/key_bindings.hpp"

#include <array>
#include <cstring>

namespace samp::client {

// The unique 0.3.DL owner is ChatPrepareMessage in src/client/runutil.cpp.
// source adapter only; no established separate native entry
int expand_key_bindings(char* text, int max_length, const KeyBindingExpander& expander) {
    // 0x100b5c40 rejects the original text before calling GTA. The limit on
    // the result is separate, inclusive, and compared as a signed integer.
    if (text == nullptr) {
        return 0;
    }
    const std::size_t input_length = std::strlen(text);
    if (input_length >= 400 || std::strstr(text, "~k~") == nullptr) {
        return 0;
    }

    std::array<char, 2049> expanded{};
    std::memcpy(expanded.data(), text, input_length + 1);
    expander(expanded.data());
    const int length = static_cast<int>(std::strlen(expanded.data()));
    if (length > max_length) {
        return 0;
    }
    std::memcpy(text, expanded.data(), static_cast<std::size_t>(length) + 1);
    return length;
}

}  // namespace samp::client

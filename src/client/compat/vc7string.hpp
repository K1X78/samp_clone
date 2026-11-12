#ifndef SAMP_CLIENT_COMPAT_VC7STRING_HPP
#define SAMP_CLIENT_COMPAT_VC7STRING_HPP

// VC7 containers include a four-byte allocator prefix. The current x86
// release STL omits that prefix. Size-only tail padding is insufficient:
// CPlayerPool::GetName (official 0x100170d0) reads the local string buffer
// at pool+6, i.e. string+4, and its capacity at string+24. It also reads
// remote names at info+0x14 and capacity at info+0x28.
// Keep the current STL implementation, preceded by the native allocator word.
// This is a build compatibility adapter, not a recovered STL implementation.

#include <string>
#include <vector>

namespace samp::client::compat {

struct Vc7AllocatorStorage {
    char allocator[4];
};

class Vc7String : private Vc7AllocatorStorage, public std::string {
public:
    // Forwarding the constructors explicitly rather than with a
    // using-declaration: the compilers refuse to inherit through the
    // std::string typedef (C3083), and these cover every construction the
    // client sources perform.
    Vc7String() = default;
    // inline layout helper; no standalone entry established
    Vc7String(const char* text) : std::string(text) {}
    // inline layout helper; no standalone entry established
    Vc7String(const std::string& text) : std::string(text) {}
    // inline layout helper; no standalone entry established
    Vc7String(std::string&& text) : std::string(std::move(text)) {}
    using std::string::operator=;

};

// The same situation for vector.  VC7.1's std::vector occupied three pointers
// plus a word of bookkeeping, which this toolchain's STL drops: the client
// layout checks record 16 bytes and vector is 12 here, so every member after
// one would move by four.  A real vector with the recorded size.
template <typename T>
class Vc7Vector : private Vc7AllocatorStorage, public std::vector<T> {
public:
    Vc7Vector() = default;
    // inline layout helper; no standalone entry established
    Vc7Vector(std::size_t count, const T& value = T()) : std::vector<T>(count, value) {}
    using std::vector<T>::operator=;
};

}  // namespace samp::client::compat

#endif

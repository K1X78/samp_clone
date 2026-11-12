#include "compat/vc7string.hpp"
#include "net/playerinfo.h"
#include "net/playerpool.h"
#include "game/modelfile.h"

#include <cstdint>
#include <cstdio>
#include <cstring>
#include <string>
#include <vector>

// Validate the container layout consumed by native byte-offset accesses.
// The authoritative string offsets are in samp.dll 0x100170d0.
int main() {
    using samp::client::compat::Vc7String;
    using samp::client::compat::Vc7Vector;
    static_assert(sizeof(void*) == 4);
    static_assert(sizeof(Vc7String) == 28);
    static_assert(sizeof(Vc7Vector<int>) == 16);

    for (const std::string expected : {std::string{}, std::string("nickname"),
                                      std::string(15, 'a'), std::string(16, 'b'),
                                      std::string(128, 'c')}) {
        Vc7String value(expected);
        const auto* bytes = reinterpret_cast<const unsigned char*>(&value);
        if (reinterpret_cast<const unsigned char*>(static_cast<const std::string*>(&value)) != bytes + 4) {
            std::fputs("VC7 string allocator prefix is misplaced\n", stderr);
            return 1;
        }
        std::uint32_t size = 0, capacity = 0;
        std::memcpy(&size, bytes + 20, sizeof(size));
        std::memcpy(&capacity, bytes + 24, sizeof(capacity));
        if (size != expected.size() || capacity != value.capacity() || value != expected) {
            std::fputs("VC7 string size/capacity fields differ\n", stderr);
            return 2;
        }
        const char* stored = reinterpret_cast<const char*>(bytes + 4);
        if (capacity >= 16) std::memcpy(&stored, bytes + 4, sizeof(stored));
        if (stored != value.c_str() || std::strcmp(stored, expected.c_str()) != 0) {
            std::fputs("VC7 string native buffer access differs\n", stderr);
            return 3;
        }
        value.assign(256, 'x');
        value.clear();
        value.assign("renamed");
        std::memcpy(&size, bytes + 20, sizeof(size));
        if (size != 7 || value != "renamed") return 4;
    }

    Vc7Vector<int> values;
    for (int i = 0; i != 128; ++i) values.push_back(i);
    const auto* bytes = reinterpret_cast<const unsigned char*>(&values);
    if (reinterpret_cast<const unsigned char*>(static_cast<const std::vector<int>*>(&values)) != bytes + 4)
        return 5;
    int* begin = nullptr;
    int* end = nullptr;
    std::memcpy(&begin, bytes + 4, sizeof(begin));
    std::memcpy(&end, bytes + 8, sizeof(end));
    if (begin != values.data() || end - begin != 128 || values[127] != 127) return 6;
    return 0;
}

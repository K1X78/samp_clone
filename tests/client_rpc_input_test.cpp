#include "BitStream.h"
#include "RakClientInterface.h"
#include "main.h"
#include "net/netgame.h"
#include "net/scriptrpc.h"
#include "net/textdrawpool.h"

#include <array>
#include <bit>
#include <cstddef>
#include <cstdio>
#include <cstring>
#include <limits>
#include <stdexcept>
#include <string>
#include <type_traits>

namespace {
void require(bool value, const char* message) {
    if (!value) throw std::runtime_error(message);
}

class GuardedInput {
public:
    GuardedInput() {
        SYSTEM_INFO system{};
        GetSystemInfo(&system);
        page_size_ = system.dwPageSize;
        pages_ = static_cast<unsigned char*>(VirtualAlloc(nullptr, page_size_ * 2,
            MEM_COMMIT | MEM_RESERVE, PAGE_READWRITE));
        require(pages_ != nullptr, "cannot allocate input guard pages");
        DWORD old = 0;
        if (!VirtualProtect(pages_ + page_size_, page_size_, PAGE_NOACCESS, &old)) {
            VirtualFree(pages_, 0, MEM_RELEASE);
            throw std::runtime_error("cannot protect input guard page");
        }
    }
    ~GuardedInput() { VirtualFree(pages_, 0, MEM_RELEASE); }
    RPCParameters packet(RakNet::BitStream& stream, unsigned bits) {
        const std::size_t bytes = (bits + 7u) / 8u;
        require(bytes <= page_size_, "test packet exceeds guard page");
        unsigned char* input = pages_ + page_size_ - bytes;
        if (bytes) std::memcpy(input, stream.GetData(), bytes);
        RPCParameters result{};
        result.input = input;
        result.numberOfBitsOfData = bits;
        return result;
    }
private:
    unsigned char* pages_ = nullptr;
    std::size_t page_size_ = 0;
};

void attached_object_bounds() {
    GuardedInput input;
    // These malformed packets must return before touching the runtime. The
    // byte immediately after each supplied buffer is inaccessible too.
    g_pNetGame = nullptr;
    for (const bool create : {false, true}) {
        RakNet::BitStream stream;
        stream.Write(static_cast<unsigned short>(0xffff));
        stream.Write(3);
        stream.Write(create);
        const std::array<char, 52> accessory{};
        if (create) stream.Write(accessory.data(), static_cast<int>(accessory.size()));
        const unsigned complete = stream.GetNumberOfBitsUsed();
        require(complete == (create ? 465u : 49u), "incorrect accessory wire fixture");
        for (unsigned bits = 0; bits < complete; ++bits) {
            auto packet = input.packet(stream, bits);
            ScrSetPlayerAttachedObject(&packet);
        }
        // A trivially-copyable coordinator can be built without invoking
        // networking or GTA initialization. The real handler's pool gate is
        // safe to exercise with a missing player pool.
        static_assert(std::is_trivially_copyable_v<CNetGame>);
        auto game = std::bit_cast<CNetGame>(std::array<std::byte, sizeof(CNetGame)>{});
        CNetGamePools pools{};
        game.pools = &pools;
        g_pNetGame = &game;
        auto packet = input.packet(stream, complete);
        ScrSetPlayerAttachedObject(&packet);
        g_pNetGame = nullptr;
    }
    ScrSetPlayerAttachedObject(nullptr);
    RPCParameters missing{};
    missing.numberOfBitsOfData = 49;
    ScrSetPlayerAttachedObject(&missing);
    missing.input = reinterpret_cast<unsigned char*>(1);
    missing.numberOfBitsOfData = (std::numeric_limits<unsigned>::max)();
    ScrSetPlayerAttachedObject(&missing);
}

void textdraw_bounds() {
    GuardedInput input;
    CTextDrawPool pool;
    TextDrawTransmit format{};
    // Style zero does not allocate/render a GTA texture. These are the real
    // production pool, textdraw constructor and SetText implementation.
    CTextDraw* draw = pool.Create(0, &format, "initial");
    require(draw != nullptr, "cannot create textdraw fixture");
    auto game = std::bit_cast<CNetGame>(std::array<std::byte, sizeof(CNetGame)>{});
    CNetGamePools pools{};
    pools.textDraws = &pool;
    game.pools = &pools;
    for (const unsigned length : {0u, 1u, 799u, 800u, 801u}) {
        RakNet::BitStream stream;
        stream.Write(static_cast<unsigned short>(0));
        stream.Write(static_cast<unsigned short>(length));
        const std::string text(length, 'x');
        if (length) stream.Write(text.data(), static_cast<int>(length));
        const unsigned complete = stream.GetNumberOfBitsUsed();
        // Every truncated bit count, including partial final bytes, must
        // preserve the existing text and return before runtime access.
        for (unsigned bits = 0; bits < complete; ++bits) {
            draw->SetText("unchanged");
            g_pNetGame = nullptr;
            auto packet = input.packet(stream, bits);
            ScrTextDrawSetString(&packet);
            require(std::strcmp(reinterpret_cast<const char*>(draw), "unchanged") == 0,
                    "truncated textdraw RPC changed live text");
        }
        draw->SetText("unchanged");
        g_pNetGame = &game;
        auto packet = input.packet(stream, complete);
        ScrTextDrawSetString(&packet);
        const char* actual = reinterpret_cast<const char*>(draw);
        if (length < 800)
            require(std::strcmp(actual, text.c_str()) == 0, "valid textdraw string changed");
        else if (length == 800)
            require(actual[0] == '\0', "800-byte update must retain native SetText clear behavior");
        else
            require(std::strcmp(actual, "unchanged") == 0, "oversized textdraw string accepted");
    }
    g_pNetGame = nullptr;
    ScrTextDrawSetString(nullptr);
    RPCParameters missing{};
    missing.numberOfBitsOfData = 32;
    ScrTextDrawSetString(&missing);
    missing.input = reinterpret_cast<unsigned char*>(1);
    missing.numberOfBitsOfData = (std::numeric_limits<unsigned>::max)();
    ScrTextDrawSetString(&missing);
}

void textdraw_slot_bounds() {
    GuardedInput input;
    CTextDrawPool pool;
    TextDrawTransmit format{};
    auto game = std::bit_cast<CNetGame>(std::array<std::byte, sizeof(CNetGame)>{});
    CNetGamePools pools{};
    pools.textDraws = &pool;
    game.pools = &pools;
    const auto creation = [&](RakNet::BitStream& stream, unsigned short id) {
        stream.Write(id);
        stream.Write(reinterpret_cast<const char*>(&format), 63);
        stream.Write(static_cast<unsigned short>(5));
        stream.Write("hello", 5);
    };
    RakNet::BitStream create;
    creation(create, 0);
    for (unsigned bits = 0; bits < static_cast<unsigned>(create.GetNumberOfBitsUsed()); ++bits) {
        g_pNetGame = nullptr;
        auto packet = input.packet(create, bits);
        ScrShowTextDraw(&packet);
    }
    RakNet::BitStream hide;
    hide.Write(static_cast<unsigned short>(0));
    for (unsigned bits = 0; bits < 16; ++bits) {
        auto packet = input.packet(hide, bits);
        ScrHideTextDrawForPlayer(&packet);
    }
    for (const auto id : std::array<unsigned short, 3>{2304, 2305, 65535}) {
        RakNet::BitStream invalid;
        creation(invalid, id);
        auto packet = input.packet(invalid, invalid.GetNumberOfBitsUsed());
        ScrShowTextDraw(&packet);
        RakNet::BitStream removal;
        removal.Write(id);
        packet = input.packet(removal, removal.GetNumberOfBitsUsed());
        ScrHideTextDrawForPlayer(&packet);
        require(pool.Create(id, &format, "invalid") == nullptr, "invalid pool slot created");
        pool.Delete(id);
    }
    for (const auto id : std::array<unsigned short, 2>{0, 2303}) {
        g_pNetGame = &game;
        RakNet::BitStream valid;
        creation(valid, id);
        auto packet = input.packet(valid, valid.GetNumberOfBitsUsed());
        ScrShowTextDraw(&packet);
        CTextDraw* draw = pool.Get(id);
        require(draw && std::strcmp(reinterpret_cast<const char*>(draw), "hello") == 0,
                "valid textdraw slot did not reach production pool");
        RakNet::BitStream removal;
        removal.Write(id);
        packet = input.packet(removal, removal.GetNumberOfBitsUsed());
        ScrHideTextDrawForPlayer(&packet);
        require(pool.Get(id) == nullptr, "valid textdraw removal failed");
    }
    g_pNetGame = nullptr;
    ScrShowTextDraw(nullptr);
    ScrHideTextDrawForPlayer(nullptr);
}
}

int main() {
    try {
        attached_object_bounds();
        textdraw_bounds();
        textdraw_slot_bounds();
        std::puts("Production client RPC input bounds passed");
        return 0;
    } catch (const std::exception& error) {
        std::fprintf(stderr, "%s\n", error.what());
        return 1;
    }
}

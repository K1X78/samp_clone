#pragma once
#include <cstdint>

namespace samp::client {
// The calling convention of GTA CPool::GetAtRef, called by samp.dll 0x100b3770.
#if defined(_MSC_VER) && defined(_M_IX86)
using GameActorLookup = void*(__thiscall*)(void*, std::uint32_t);
#elif defined(__GNUC__) && defined(__i386__)
using GameActorLookup = void*(__attribute__((thiscall)) *)(void*, std::uint32_t);
#else
using GameActorLookup = void*(*)(void*, std::uint32_t);
#endif
}

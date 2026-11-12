#include "game/aimstuff.h"

#include <bit>
#include <cstdio>

// Supply the shared constant and the unused look-at dependency in isolation.
extern const float g_quaternionMatrixOne = 1.0f;
struct CVector;
void __stdcall GameBuildAimUpVector(const CVector*, CVector*)
{
}

int main()
{
    float zoom = std::bit_cast<float>(0x420c0041u);
    g_aimInternalZoom = &zoom;
    unsigned short savedControlWord;
    __asm { fnstcw savedControlWord }
    const unsigned short roundNearest = savedControlWord & ~0x0c00u;
    __asm { fldcw roundNearest }
    volatile float normalized = AimStuff::GetCameraExtZoom();
    __asm { fldcw savedControlWord }

    const auto bits = std::bit_cast<unsigned>(static_cast<float>(normalized));
    if (bits != 0x36edb6dc)
    {
        std::fprintf(stderr, "Unexpected normalized zoom: %08X\n", bits);
        return 1;
    }
    return 0;
}

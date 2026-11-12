#include "chatwindow.h"
#include "game/scripting.h"

#include <cstdio>
#include <cstring>
#include <xmmintrin.h>

CChat* g_pChat = nullptr;

void CChat::AddDebugMessage(const char*, ...)
{
}

namespace
{
DWORD observedOperand;
BOOL observedDebug;

void __fastcall InspectCommand(CRunningScript* thread, void*)
{
    std::memcpy(&observedOperand, g_scriptBuffer + 3, sizeof(observedOperand));
    observedDebug = g_scriptLocalDebug;
    const DWORD result = 0x12345678;
    std::memcpy(thread->opaque + 0xc5, &result, sizeof(result));
}
}

int main()
{
    Scripting::Initialize();
    g_scriptProcessOneCommand = reinterpret_cast<FARPROC>(InspectCommand);
    const Scripting::OpcodeInfo command = {0x1234, "f"};

    unsigned short savedControlWord;
    __asm { fnstcw savedControlWord }
    const unsigned short roundUp = (savedControlWord & ~0x0c00u) | 0x0800u;
    const unsigned savedMxcsr = _mm_getcsr();
    _mm_setcsr(savedMxcsr & ~0x6000u);
    __asm { fldcw roundUp }
    // Halfway between 1.0f and the next float. Only x87 rounds upward here.
    const DWORD result = Scripting::ProcessCommand(&command, 0x1.000001p0);
    __asm { fldcw savedControlWord }
    _mm_setcsr(savedMxcsr);

    operator delete(g_scriptThread);
    if (observedOperand != 0x3f800001 || observedDebug != TRUE ||
        g_scriptLocalDebug != FALSE || result != 0x12345678)
    {
        std::fprintf(stderr, "Script operand=%08lX result=%08lX\n", observedOperand, result);
        return 1;
    }
    return 0;
}

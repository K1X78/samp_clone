/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004ac4ee
 * Name: ___crtInitCritSecAndSpinCount
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void __cdecl ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (DAT_0051c5bc == (code *)0x0) {
    if (DAT_0051c1f0 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_0051c5bc = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_0051c5bc != (FARPROC)0x0) goto LAB_004ac53a;
      }
    }
    DAT_0051c5bc = ___crtInitCritSecNoSpinCount_8;
  }
LAB_004ac53a:
  (*DAT_0051c5bc)(param_1,param_2);
  return;
}


/* END FUNCTION 0x004ac4ee */

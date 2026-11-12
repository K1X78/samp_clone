/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1010a18a
 * Name: ___crtInitCritSecAndSpinCount
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __SEH_prolog replaced with injection: SEH_prolog */
/* WARNING: Function: __SEH_epilog replaced with injection: EH_epilog3 */

void ___crtInitCritSecAndSpinCount(undefined4 param_1,undefined4 param_2)

{
  HMODULE hModule;
  
  if (DAT_102ad21c == (code *)0x0) {
    if (DAT_102acd44 != 1) {
      hModule = GetModuleHandleA("kernel32.dll");
      if (hModule != (HMODULE)0x0) {
        DAT_102ad21c = GetProcAddress(hModule,"InitializeCriticalSectionAndSpinCount");
        if (DAT_102ad21c != (FARPROC)0x0) goto LAB_1010a1d6;
      }
    }
    DAT_102ad21c = ___crtInitCritSecNoSpinCount_8;
  }
LAB_1010a1d6:
  (*DAT_102ad21c)(param_1,param_2);
  return;
}


/* END FUNCTION 0x1010a18a */

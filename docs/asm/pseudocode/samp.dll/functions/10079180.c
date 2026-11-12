/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10079180
 * Name: FUN_10079180
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10079180(int param_1,undefined4 param_2,undefined4 param_3)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined4 *)(param_1 + 0x1e3) = param_2;
  *(undefined4 *)(param_1 + 0x1e7) = param_3;
  if (DAT_10140bf4 != '\0') {
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  return;
}


/* END FUNCTION 0x10079180 */

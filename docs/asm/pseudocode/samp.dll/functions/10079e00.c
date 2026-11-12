/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10079e00
 * Name: FUN_10079e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10079e00(int param_1,undefined4 param_2)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined4 *)(param_1 + 0x22c) = param_2;
  if (DAT_10140bf4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x10079e33. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
    return;
  }
  return;
}


/* END FUNCTION 0x10079e00 */

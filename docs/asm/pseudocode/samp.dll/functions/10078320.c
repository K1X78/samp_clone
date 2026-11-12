/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10078320
 * Name: FUN_10078320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10078320(int param_1,undefined4 param_2)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined4 *)(param_1 + 4) = param_2;
  if (DAT_10140bf4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x10078350. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
    return;
  }
  return;
}


/* END FUNCTION 0x10078320 */

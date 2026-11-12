/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007a100
 * Name: FUN_1007a100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1007a100(int param_1,undefined1 param_2)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined1 *)(param_1 + 0x238) = param_2;
  if (DAT_10140bf4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x1007a133. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
    return;
  }
  return;
}


/* END FUNCTION 0x1007a100 */

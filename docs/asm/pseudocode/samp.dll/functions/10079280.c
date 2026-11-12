/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10079280
 * Name: FUN_10079280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10079280(int param_1,undefined1 param_2)

{
  if (DAT_10140bf4 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
  }
  *(undefined1 *)(param_1 + 0x20b) = param_2;
  if (DAT_10140bf4 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x100792b3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_1017ee20);
    return;
  }
  return;
}


/* END FUNCTION 0x10079280 */

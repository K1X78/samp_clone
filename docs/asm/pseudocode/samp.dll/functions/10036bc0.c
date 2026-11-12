/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10036bc0
 * Name: FUN_10036bc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10036bc0(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    uVar1 = FUN_10037440();
    *(undefined4 *)(param_1 + 4) = uVar1;
  }
  return;
}


/* END FUNCTION 0x10036bc0 */

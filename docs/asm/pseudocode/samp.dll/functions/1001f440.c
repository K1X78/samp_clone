/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001f440
 * Name: FUN_1001f440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1001f440(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 8);
  if (iVar1 != 0) {
    *(uint *)(param_1 + 8) = (iVar1 - (iVar1 - 1U & 7)) + 7;
  }
  return;
}


/* END FUNCTION 0x1001f440 */

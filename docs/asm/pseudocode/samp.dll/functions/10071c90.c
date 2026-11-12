/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071c90
 * Name: FUN_10071c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071c90(int param_1,int param_2)

{
  if ((*(int *)(param_1 + 0x78) == 1) && (param_2 == 2)) {
    param_2 = 0;
  }
  *(int *)(param_1 + 0x7c) = param_2;
  return;
}


/* END FUNCTION 0x10071c90 */

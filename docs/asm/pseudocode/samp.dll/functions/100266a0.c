/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100266a0
 * Name: FUN_100266a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100266a0(int *param_1)

{
  if ((*param_1 != 0) && (*(int *)(param_1[2] + 8) != param_1[1])) {
    param_1[2] = *(int *)(param_1[2] + 8);
  }
  return;
}


/* END FUNCTION 0x100266a0 */

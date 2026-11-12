/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044920
 * Name: FUN_10044920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10044920(int *param_1)

{
  if ((*param_1 != 0) && (*(int *)(param_1[2] + 8) != param_1[1])) {
    param_1[2] = *(int *)(param_1[2] + 8);
  }
  return;
}


/* END FUNCTION 0x10044920 */

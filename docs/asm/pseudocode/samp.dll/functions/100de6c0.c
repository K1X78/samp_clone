/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de6c0
 * Name: FUN_100de6c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100de6c0(int param_1)

{
  if ((param_1 != 0) && (*(int *)(param_1 + 4) != 0)) {
    *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
    FUN_100dd9a0();
  }
  FUN_100de650(param_1);
  return;
}


/* END FUNCTION 0x100de6c0 */

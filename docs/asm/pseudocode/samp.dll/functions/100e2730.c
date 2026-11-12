/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e2730
 * Name: FUN_100e2730
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e2730(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0x10);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    (**(code **)(DAT_102acadc + 0x10))(param_1);
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return;
}


/* END FUNCTION 0x100e2730 */

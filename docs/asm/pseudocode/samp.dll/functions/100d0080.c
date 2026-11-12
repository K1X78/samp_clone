/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0080
 * Name: FUN_100d0080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100d0080(undefined4 *param_1)

{
  int *piVar1;
  
  piVar1 = param_1 + 2;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    FUN_100e07d0(*param_1);
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return;
}


/* END FUNCTION 0x100d0080 */

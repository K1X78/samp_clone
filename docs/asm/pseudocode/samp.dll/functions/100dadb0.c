/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dadb0
 * Name: FUN_100dadb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dadb0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)PTR__free_101554bc)(param_1[1]);
    FUN_100dacd0(*param_1);
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return;
}


/* END FUNCTION 0x100dadb0 */

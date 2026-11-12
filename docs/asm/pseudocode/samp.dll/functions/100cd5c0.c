/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cd5c0
 * Name: FUN_100cd5c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cd5c0(undefined4 *param_1)

{
  if (param_1 != (undefined4 *)0x0) {
    (*(code *)PTR__free_101554bc)(*param_1);
    *param_1 = 0;
    (*(code *)PTR__free_101554bc)(param_1[4]);
    param_1[4] = 0;
    (*(code *)PTR__free_101554bc)(param_1[2]);
    param_1[2] = 0;
  }
  return;
}


/* END FUNCTION 0x100cd5c0 */

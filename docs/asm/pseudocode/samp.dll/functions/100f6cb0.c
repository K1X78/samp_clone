/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f6cb0
 * Name: FUN_100f6cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f6cb0(undefined4 param_1,int param_2)

{
  if (param_2 != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_2 + 0x3c));
    *(undefined4 *)(param_2 + 0x3c) = 0;
    (*(code *)PTR__free_101554bc)(param_2);
  }
  return;
}


/* END FUNCTION 0x100f6cb0 */

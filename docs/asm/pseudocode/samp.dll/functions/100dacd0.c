/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dacd0
 * Name: FUN_100dacd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dacd0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  while (param_1 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*param_1;
    (*(code *)PTR__free_101554bc)(param_1[8]);
    (*(code *)PTR__free_101554bc)(param_1[5]);
    (*(code *)PTR__free_101554bc)(param_1[3]);
    (*(code *)PTR__free_101554bc)(param_1[4]);
    (*(code *)PTR__free_101554bc)(param_1[1]);
    (*(code *)PTR__free_101554bc)(param_1[2]);
    (*(code *)PTR__free_101554bc)(param_1[0xb]);
    (*(code *)PTR__free_101554bc)(param_1[10]);
    (*(code *)PTR__free_101554bc)(param_1);
    param_1 = puVar1;
  }
  return;
}


/* END FUNCTION 0x100dacd0 */

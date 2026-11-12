/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4830
 * Name: FUN_100f4830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f4830(undefined4 *param_1)

{
  (*(code *)PTR__free_101554bc)(*param_1);
  *param_1 = 0;
  param_1[1] = 0;
  if (param_1[2] != 0) {
    (**(code **)(DAT_102acadc + 0x24))(param_1[2]);
    (*(code *)PTR__free_101554bc)(param_1[2]);
    param_1[2] = 0;
  }
  (*(code *)PTR__free_101554bc)(param_1[3]);
  param_1[3] = 0;
  (*(code *)PTR__free_101554bc)(param_1[4]);
  param_1[4] = 0;
  return;
}


/* END FUNCTION 0x100f4830 */

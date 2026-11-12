/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f4a70
 * Name: FUN_100f4a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100f4a70(int param_1)

{
  if (*(int *)(param_1 + 8) != 0) {
    (**(code **)(DAT_102acadc + 0x24))(*(int *)(param_1 + 8));
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 8));
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (*(int *)(param_1 + 4) != 0) {
    (**(code **)(DAT_102acadc + 0x10))(*(int *)(param_1 + 4));
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 4));
    *(undefined4 *)(param_1 + 4) = 0;
  }
  FUN_100cd5c0(*(undefined4 *)(param_1 + 0x28));
  *(undefined4 *)(param_1 + 0x28) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x34));
  *(undefined4 *)(param_1 + 0x34) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x30));
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  return;
}


/* END FUNCTION 0x100f4a70 */

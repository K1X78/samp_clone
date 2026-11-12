/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100de650
 * Name: FUN_100de650
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100de650(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 4) != 0) {
      *(undefined4 *)(*(int *)(param_1 + 4) + 0x1c) = 0;
      FUN_100dd9a0();
      *(undefined4 *)(param_1 + 4) = 0;
    }
    iVar1 = *(int *)(param_1 + 8);
    while (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 8);
      *(undefined4 *)(param_1 + 8) = *(undefined4 *)(iVar1 + 8);
      FUN_100de5a0(iVar1);
      (*(code *)PTR__free_101554bc)(iVar1);
      iVar1 = *(int *)(param_1 + 8);
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x10));
    (*(code *)PTR__free_101554bc)(param_1);
  }
  return;
}


/* END FUNCTION 0x100de650 */

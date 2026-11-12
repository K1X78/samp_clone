/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100e07d0
 * Name: FUN_100e07d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100e07d0(int param_1)

{
  int iVar1;
  
  while (param_1 != 0) {
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x18));
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x14));
    iVar1 = *(int *)(param_1 + 0x1c);
    (*(code *)PTR__free_101554bc)(param_1);
    param_1 = iVar1;
  }
  return;
}


/* END FUNCTION 0x100e07d0 */

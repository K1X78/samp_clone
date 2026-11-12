/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cf1b0
 * Name: FUN_100cf1b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cf1b0(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4bf0) != 0) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x4bf0)) {
      do {
        FUN_100d9bb0(*(undefined4 *)(*(int *)(param_1 + 0x4bf4) + iVar1 * 4));
        *(undefined4 *)(*(int *)(param_1 + 0x4bf4) + iVar1 * 4) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x4bf0));
    }
    (*(code *)PTR__free_101554bc)(*(undefined4 *)(param_1 + 0x4bf4));
    *(undefined4 *)(param_1 + 0x4bf4) = 0;
    *(undefined4 *)(param_1 + 0x4bf0) = 0;
  }
  return;
}


/* END FUNCTION 0x100cf1b0 */

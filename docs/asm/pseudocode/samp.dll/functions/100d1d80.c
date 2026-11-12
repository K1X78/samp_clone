/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d1d80
 * Name: FUN_100d1d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100d1d80(int param_1,int *param_2)

{
  int iVar1;
  int *unaff_EBX;
  int unaff_ESI;
  int *unaff_EDI;
  
  if (*(int *)(unaff_ESI + 0x644) != 0) {
    (*(code *)PTR__free_101554bc)(*unaff_EBX);
    iVar1 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(unaff_ESI + 0x644));
    *unaff_EBX = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
  }
  if (*(int *)(unaff_ESI + 0x648) != 0) {
    (*(code *)PTR__free_101554bc)(*unaff_EDI);
    iVar1 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(unaff_ESI + 0x648));
    *unaff_EDI = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
  }
  if (*(int *)(unaff_ESI + 0x64c) != 0) {
    (*(code *)PTR__free_101554bc)(*param_2);
    iVar1 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(unaff_ESI + 0x64c));
    *param_2 = iVar1;
    if (iVar1 == 0) {
      return 0x1b;
    }
  }
  *(undefined4 *)(param_1 + 0x2dc) = 0;
  if (*(int *)(unaff_ESI + 0x544) != 0) {
    iVar1 = FUN_100eb230(*(undefined4 *)(param_1 + 0xa0));
    if (0 < iVar1) {
      FUN_100d8ae0();
      return 0;
    }
    if (iVar1 < 0) {
      return 0x1b;
    }
    *(undefined4 *)(param_1 + 0x2dc) = 1;
    *(undefined4 *)(param_1 + 0x2a0) = 1;
  }
  return 0;
}


/* END FUNCTION 0x100d1d80 */

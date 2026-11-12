/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100f20e0
 * Name: FUN_100f20e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100f20e0(uint param_1,int param_2)

{
  int iVar1;
  uint unaff_EBX;
  int iVar2;
  
  iVar2 = 0;
  if (unaff_EBX <= param_1) {
    return 0;
  }
  iVar1 = FUN_100f1f20(0,0xffffffff,param_1);
  if (-1 < iVar1) {
    iVar2 = (*(code *)PTR__malloc_101554b8)(iVar1 + 1);
    if (iVar2 != 0) {
      FUN_100f1f20(iVar2,iVar1,param_1);
      *(undefined1 *)(iVar1 + iVar2) = 0;
      if (param_2 != 0) {
        iVar1 = FUN_100f1b60(iVar2);
        if (iVar1 != 0) {
          (*(code *)PTR__free_101554bc)(iVar2);
          iVar2 = (*(code *)PTR___strdup_101554c4)(*(undefined4 *)(iVar1 + 4));
          return iVar2;
        }
      }
    }
  }
  return iVar2;
}


/* END FUNCTION 0x100f20e0 */

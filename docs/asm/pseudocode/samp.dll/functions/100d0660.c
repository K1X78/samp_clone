/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100d0660
 * Name: FUN_100d0660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100d0660(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR__calloc_101554c8)(1,0x4c08);
  if (iVar1 == 0) {
    return 0x1b;
  }
  *(undefined4 *)(iVar1 + 0x4c00) = 0xc0dedbad;
  iVar2 = FUN_100cde10((undefined4 *)(iVar1 + 0x4990));
  if (iVar2 != 0) {
    (*(code *)PTR__free_101554bc)(iVar1);
    return iVar2;
  }
  iVar2 = (*(code *)PTR__malloc_101554b8)(0x4001);
  *(int *)(iVar1 + 0x854) = iVar2;
  if (iVar2 != 0) {
    FUN_100dda90(iVar1 + 0x248,iVar1);
    iVar2 = (*(code *)PTR__malloc_101554b8)(0x100);
    *(int *)(iVar1 + 0x84c) = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_100d04e0(iVar1 + 0x148);
      *(undefined4 *)(iVar1 + 0x850) = 0x100;
      FUN_100d9190(iVar1);
      *(undefined4 *)(iVar1 + 0x848) = 0;
      *(uint *)(iVar1 + 0x758) = *(uint *)(iVar1 + 0x758) | 0x10;
      *(undefined4 *)(iVar1 + 0x4860) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x4864) = 0xffffffff;
      *(undefined4 *)(iVar1 + 0x6b4) = 0;
      *(undefined4 *)(iVar1 + 0x6d0) = 5;
      if (iVar2 == 0) {
        *param_1 = iVar1;
        return 0;
      }
      goto LAB_100d0754;
    }
  }
  iVar2 = 0x1b;
LAB_100d0754:
  FUN_100cde20(*(undefined4 *)(iVar1 + 0x4990));
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x854));
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x84c));
  FUN_100d0450(iVar1);
  (*(code *)PTR__free_101554bc)(iVar1);
  return iVar2;
}


/* END FUNCTION 0x100d0660 */

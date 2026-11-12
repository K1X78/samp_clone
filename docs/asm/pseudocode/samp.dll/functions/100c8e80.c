/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c8e80
 * Name: FUN_100c8e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c8e80(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (*(code *)PTR__calloc_101554c8)(1,0x4c08);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = *(int *)(param_1 + 0x4d0);
  *(int *)(iVar1 + 0x4d0) = iVar2;
  iVar2 = (*(code *)PTR__malloc_101554b8)(iVar2 + 1);
  *(int *)(iVar1 + 0x854) = iVar2;
  if (iVar2 != 0) {
    iVar2 = (*(code *)PTR__malloc_101554b8)(0x100);
    *(int *)(iVar1 + 0x84c) = iVar2;
    if (iVar2 != 0) {
      *(undefined4 *)(iVar1 + 0x850) = 0x100;
      iVar2 = FUN_100c8dd0(iVar1);
      if (iVar2 == 0) {
        *(undefined4 *)(iVar1 + 0x838) = 0;
        *(undefined4 *)(iVar1 + 0x848) = 0;
        *(undefined4 *)(iVar1 + 0x758) = *(undefined4 *)(param_1 + 0x758);
        *(undefined4 *)(iVar1 + 0x750) = *(undefined4 *)(param_1 + 0x750);
        if (*(int *)(param_1 + 0x718) != 0) {
          iVar2 = FUN_100db030(param_1,*(undefined4 *)(*(int *)(param_1 + 0x718) + 4),
                               *(undefined4 *)(iVar1 + 0x718),*(undefined4 *)(param_1 + 0x3b4));
          *(int *)(iVar1 + 0x718) = iVar2;
          if (iVar2 == 0) goto LAB_100c8fdd;
        }
        if (*(int *)(param_1 + 0x710) != 0) {
          iVar2 = FUN_100d9bf0(*(int *)(param_1 + 0x710));
          *(int *)(iVar1 + 0x710) = iVar2;
          if (iVar2 == 0) goto LAB_100c8fdd;
        }
        if (*(int *)(param_1 + 0x700) != 0) {
          iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(param_1 + 0x700));
          *(int *)(iVar1 + 0x700) = iVar2;
          if (iVar2 == 0) goto LAB_100c8fdd;
          *(undefined4 *)(iVar1 + 0x704) = 1;
        }
        if (*(int *)(param_1 + 0x708) != 0) {
          iVar2 = (*(code *)PTR___strdup_101554c4)(*(int *)(param_1 + 0x708));
          *(int *)(iVar1 + 0x708) = iVar2;
          if (iVar2 == 0) goto LAB_100c8fdd;
          *(undefined4 *)(iVar1 + 0x70c) = 1;
        }
        iVar2 = FUN_100cde30(iVar1 + 0x4990,*(undefined4 *)(param_1 + 0x4990));
        if (iVar2 == 0) {
          FUN_100d9190(iVar1);
          *(undefined4 *)(iVar1 + 0x4c00) = 0xc0dedbad;
          return iVar1;
        }
      }
    }
  }
LAB_100c8fdd:
  FUN_100d9bb0(*(undefined4 *)(iVar1 + 0x710));
  *(undefined4 *)(iVar1 + 0x710) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x854));
  *(undefined4 *)(iVar1 + 0x854) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x84c));
  *(undefined4 *)(iVar1 + 0x84c) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x700));
  *(undefined4 *)(iVar1 + 0x700) = 0;
  (*(code *)PTR__free_101554bc)(*(undefined4 *)(iVar1 + 0x708));
  *(undefined4 *)(iVar1 + 0x708) = 0;
  FUN_100d0450(iVar1);
  (*(code *)PTR__free_101554bc)(iVar1);
  return 0;
}


/* END FUNCTION 0x100c8e80 */

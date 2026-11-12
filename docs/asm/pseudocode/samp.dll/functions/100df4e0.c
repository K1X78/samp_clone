/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df4e0
 * Name: FUN_100df4e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100df4e0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int unaff_EBX;
  int local_10;
  
  uVar2 = *(undefined4 *)(unaff_EBX + 0x10);
  uVar3 = *(undefined4 *)(unaff_EBX + 0xc);
  puVar1 = (undefined4 *)(unaff_EBX + 0xc);
  bVar4 = true;
  local_10 = 0;
  iVar5 = (*(code *)PTR__malloc_101554b8)(0x4000);
  if (iVar5 == 0) {
    if (*(int *)(unaff_EBX + 8) == 2) {
      (*(code *)PTR__free_101554bc)(*puVar1);
      *puVar1 = 0;
    }
    if (*(int *)(unaff_EBX + 8) != 0) {
      FUN_100f0e30(puVar1);
      *(undefined4 *)(unaff_EBX + 8) = 0;
    }
    return 0x1b;
  }
  iVar6 = *(int *)(unaff_EBX + 0x10);
  do {
    if (iVar6 == 0) {
      (*(code *)PTR__free_101554bc)(iVar5);
      return local_10;
    }
    *(int *)(unaff_EBX + 0x18) = iVar5;
    *(undefined4 *)(unaff_EBX + 0x1c) = 0x4000;
    iVar6 = FUN_100ef6b0(puVar1,2);
    if ((iVar6 == 0) || (iVar6 == 1)) {
      iVar7 = 0x4000 - *(int *)(unaff_EBX + 0x1c);
      if (iVar7 == 0) {
        local_10 = 0;
      }
      else {
        local_10 = (**(code **)(**(int **)(unaff_EBX + 4) + 0xc))
                             (param_1,*(int **)(unaff_EBX + 4),iVar5,iVar7);
        if (local_10 != 0) {
          (*(code *)PTR__free_101554bc)(iVar5);
          if (*(int *)(unaff_EBX + 8) == 2) {
            (*(code *)PTR__free_101554bc)(*puVar1);
            *puVar1 = 0;
          }
          if (*(int *)(unaff_EBX + 8) != 0) {
            FUN_100f0e30(puVar1);
            *(undefined4 *)(unaff_EBX + 8) = 0;
          }
          return local_10;
        }
      }
      if (iVar6 == 1) {
        (*(code *)PTR__free_101554bc)(iVar5);
        iVar5 = 0;
        if (*(int *)(unaff_EBX + 8) == 2) {
          (*(code *)PTR__free_101554bc)(*puVar1);
          *puVar1 = 0;
        }
        if (*(int *)(unaff_EBX + 8) != 0) {
          iVar6 = FUN_100f0e30(puVar1);
          if (iVar6 != 0) {
            iVar5 = FUN_100dece0();
          }
          *(undefined4 *)(unaff_EBX + 8) = 0;
        }
        return iVar5;
      }
    }
    else {
      if ((!bVar4) || (iVar6 != -3)) {
        (*(code *)PTR__free_101554bc)(iVar5);
        if (*(int *)(unaff_EBX + 0x24) == 0) {
          FUN_100d8ba0(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_100d8ba0(*param_1,"Error while processing content unencoding: %s",
                       *(int *)(unaff_EBX + 0x24));
        }
        if (*(int *)(unaff_EBX + 8) == 2) {
          (*(code *)PTR__free_101554bc)(*puVar1);
          *puVar1 = 0;
        }
        if (*(int *)(unaff_EBX + 8) != 0) {
          FUN_100f0e30(puVar1);
          *(undefined4 *)(unaff_EBX + 8) = 0;
        }
        return 0x3d;
      }
      FUN_100f0e30(puVar1);
      iVar6 = FUN_100ef400(puVar1,0xfffffff1,"1.2.11",0x38);
      if (iVar6 != 0) {
        (*(code *)PTR__free_101554bc)(iVar5);
        *(undefined4 *)(unaff_EBX + 8) = 0;
        if (*(int *)(unaff_EBX + 0x24) == 0) {
          FUN_100d8ba0(*param_1,
                       "Error while processing content unencoding: Unknown failure within decompression software."
                      );
        }
        else {
          FUN_100d8ba0(*param_1,"Error while processing content unencoding: %s",
                       *(int *)(unaff_EBX + 0x24));
        }
        if (*(int *)(unaff_EBX + 8) == 2) {
          (*(code *)PTR__free_101554bc)(*puVar1);
          *puVar1 = 0;
        }
        if (*(int *)(unaff_EBX + 8) != 0) {
          FUN_100f0e30(puVar1);
          *(undefined4 *)(unaff_EBX + 8) = 0;
        }
        return 0x3d;
      }
      *puVar1 = uVar3;
      *(undefined4 *)(unaff_EBX + 0x10) = uVar2;
    }
    bVar4 = false;
    iVar6 = *(int *)(unaff_EBX + 0x10);
  } while( true );
}


/* END FUNCTION 0x100df4e0 */

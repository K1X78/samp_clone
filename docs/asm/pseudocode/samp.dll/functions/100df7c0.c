/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100df7c0
 * Name: FUN_100df7c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_100df7c0(int param_1,undefined4 param_2,int param_3,undefined4 *param_4,uint param_5)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int local_4;
  
  iVar8 = *(int *)(param_3 + 8);
  piVar1 = (int *)(param_3 + 8);
  piVar2 = (int *)(param_3 + 0xc);
  local_4 = param_1;
  if (iVar8 == 4) {
    *piVar2 = (int)param_4;
    *(uint *)(param_3 + 0x10) = param_5;
    uVar3 = FUN_100df4e0(param_2);
    return uVar3;
  }
  if (iVar8 == 1) {
    iVar8 = FUN_100deee0(&local_4);
    if (iVar8 != 0) {
      if (iVar8 == 2) {
        *(uint *)(param_3 + 0x10) = param_5;
        puVar5 = (undefined4 *)(*(code *)PTR__malloc_101554b8)(param_5);
        *piVar2 = (int)puVar5;
        if (puVar5 != (undefined4 *)0x0) {
          uVar6 = *(uint *)(param_3 + 0x10);
          for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
            *puVar5 = *param_4;
            param_4 = param_4 + 1;
            puVar5 = puVar5 + 1;
          }
          for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
            *(undefined1 *)puVar5 = *(undefined1 *)param_4;
            param_4 = (undefined4 *)((int)param_4 + 1);
            puVar5 = (undefined4 *)((int)puVar5 + 1);
          }
          *piVar1 = 2;
          return 0;
        }
        if (*piVar1 == 2) {
          (*(code *)PTR__free_101554bc)(0);
          *piVar2 = 0;
        }
        if (*piVar1 == 0) {
          return 0x1b;
        }
        FUN_100f0e30(piVar2);
        *piVar1 = 0;
        return 0x1b;
      }
LAB_100df906:
      FUN_100dece0();
      uVar3 = FUN_100ded20(param_2);
      return uVar3;
    }
    *piVar2 = (int)(local_4 + (int)param_4);
    *(uint *)(param_3 + 0x10) = param_5 - local_4;
  }
  else {
    if (iVar8 != 2) {
      *piVar2 = (int)param_4;
      *(uint *)(param_3 + 0x10) = param_5;
      goto LAB_100df9a6;
    }
    iVar8 = *(int *)(param_3 + 0x10) + param_5;
    *(int *)(param_3 + 0x10) = iVar8;
    iVar8 = FUN_100d9990(*piVar2,iVar8);
    *piVar2 = iVar8;
    if (iVar8 == 0) {
      if (*piVar1 == 2) {
        (*(code *)PTR__free_101554bc)(0);
        *piVar2 = 0;
      }
      if (*piVar1 == 0) {
        return 0x1b;
      }
      FUN_100f0e30(piVar2);
      *piVar1 = 0;
      return 0x1b;
    }
    puVar5 = param_4;
    puVar9 = (undefined4 *)((*(int *)(param_3 + 0x10) - param_5) + iVar8);
    for (uVar6 = param_5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
      *puVar9 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar9 = puVar9 + 1;
    }
    for (uVar6 = param_5 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
      *(undefined1 *)puVar9 = *(undefined1 *)puVar5;
      puVar5 = (undefined4 *)((int)puVar5 + 1);
      puVar9 = (undefined4 *)((int)puVar9 + 1);
    }
    iVar8 = *piVar2;
    iVar4 = FUN_100deee0(&local_4);
    if (iVar4 != 0) {
      if (iVar4 == 2) {
        return 0;
      }
      goto LAB_100df906;
    }
    (*(code *)PTR__free_101554bc)(iVar8);
    *piVar2 = (int)((int)param_4 + param_5 + (local_4 - *(int *)(param_3 + 0x10)));
    *(int *)(param_3 + 0x10) = *(int *)(param_3 + 0x10) - local_4;
  }
  *piVar1 = 3;
LAB_100df9a6:
  if (*(int *)(param_3 + 0x10) == 0) {
    return 0;
  }
  uVar3 = FUN_100df4e0(param_2);
  return uVar3;
}


/* END FUNCTION 0x100df7c0 */

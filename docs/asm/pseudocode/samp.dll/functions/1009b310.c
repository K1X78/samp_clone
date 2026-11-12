/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009b310
 * Name: FUN_1009b310
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_1009b310(undefined4 *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  LPCWSTR pWVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 *puVar10;
  undefined2 **ppuVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined2 *puVar15;
  undefined2 *puStack_14;
  undefined2 local_8 [2];
  undefined4 local_4;
  
  puVar15 = (undefined2 *)((int)param_1 + 0xe);
  if (*(int *)((int)param_1 + 0xe) != 0) {
    puStack_14 = puVar15;
    (*(code *)PTR_FUN_10140c0c)();
  }
  puStack_14 = local_8;
  local_4 = 0;
  local_8[0] = 0;
  (*(code *)PTR_FUN_10140bfc)(0,&local_4);
  iVar3 = *(int *)((int)param_1 + 9);
  if (iVar3 == 0) {
    return -0x7fffbffb;
  }
  piVar1 = *(int **)(iVar3 + 0x104);
  if (*(char *)((int)param_1 + 0x12) == '\0') {
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(*piVar1 + 0x20))(piVar1);
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    ppuVar11 = &puStack_14;
    puVar10 = &stack0xfffffff0;
    uVar9 = 0;
    uVar8 = 0x10e0;
    uVar7 = 0xffffffff;
    iVar3 = lstrlenW((LPCWSTR)*param_1);
    iVar3 = (iVar3 * 3) / 2 + 0x10;
    iVar4 = lstrlenW((LPCWSTR)*param_1);
    uVar6 = *param_1;
    iVar4 = iVar4 + 1;
  }
  else {
    if (piVar1 == (int *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = (**(code **)(**(int **)(iVar3 + 0x104) + 0x20))(*(int **)(iVar3 + 0x104));
    }
    uVar14 = 0;
    uVar13 = 0;
    uVar12 = 0;
    ppuVar11 = &puStack_14;
    puVar10 = &stack0xfffffff0;
    uVar9 = 0;
    uVar8 = 0x10e0;
    uVar7 = 0xffffffff;
    pWVar5 = (LPCWSTR)FUN_100853a0(*param_1,0xffffffff,0x10e0,0,puVar10,ppuVar11,0,0,0,puVar15);
    iVar3 = lstrlenW(pWVar5);
    iVar3 = (iVar3 * 3) / 2 + 0x10;
    pWVar5 = (LPCWSTR)FUN_100853a0(*param_1,iVar3);
    iVar4 = lstrlenW(pWVar5);
    iVar4 = iVar4 + 1;
    uVar6 = FUN_100853a0(*param_1,iVar4);
  }
  iVar3 = (*(code *)PTR_FUN_10140c00)
                    (uVar2,uVar6,iVar4,iVar3,uVar7,uVar8,uVar9,puVar10,ppuVar11,uVar12,uVar13,uVar14
                     ,puVar15);
  if (-1 < iVar3) {
    *(undefined1 *)((int)param_1 + 0xd) = 0;
  }
  return iVar3;
}


/* END FUNCTION 0x1009b310 */

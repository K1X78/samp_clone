/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ee80
 * Name: FUN_1008ee80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1008ee80(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  tagRECT *ptVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int local_2c;
  int local_28;
  int local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  tagRECT local_10;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  iVar6 = 0;
  local_28 = 0;
  local_2c = 0;
  if (**(int **)(param_1 + 0x20) != 0) {
    uVar3 = FUN_10086b40(*(undefined4 *)(**(int **)(param_1 + 0x20) + 4));
    *(undefined4 *)(param_1 + 0x56) = uVar3;
    FUN_10084ef0(*(undefined4 *)(param_1 + 0x119));
  }
  iVar5 = param_1 + 0x78;
  do {
    uVar3 = *(undefined4 *)(iVar6 + *(int *)(param_1 + 0x20));
    FUN_10085f40(0,param_3,0x3f333333);
    FUN_10086e20(uVar3,iVar5);
    iVar6 = iVar6 + 4;
    iVar5 = iVar5 + 0x10;
  } while (iVar6 < 0x24);
  piVar1 = (int *)(param_1 + 0x4d);
  FUN_1009b770(*(undefined4 *)(param_1 + 0x122),0,&local_24);
  FUN_1009b770(*(undefined4 *)(param_1 + 0x119),0,&local_2c);
  if (*(int *)(param_1 + 0x119) == *(int *)(param_1 + 0x11e)) {
    local_28 = local_2c;
  }
  else {
    FUN_1009b770(*(int *)(param_1 + 0x11e),0,&local_28);
  }
  if (*(int *)(param_1 + 0x119) != *(int *)(param_1 + 0x11e)) {
    iVar6 = local_28;
    iVar5 = local_2c;
    if (local_28 < local_2c) {
      iVar6 = local_2c;
      iVar5 = local_28;
    }
    SetRect(&local_10,iVar5,*(int *)(param_1 + 0x6c),iVar6,*(int *)(param_1 + 0x74));
    OffsetRect(&local_10,*(int *)(param_1 + 0x68) - local_24,0);
    IntersectRect(&local_10,(RECT *)(param_1 + 0x68),&local_10);
    FUN_100844f0(&local_10,*(undefined4 *)(param_1 + 0x12f));
  }
  uVar2 = *(uint *)(param_1 + 0x127);
  if (*(char *)(param_1 + 0x126) == '\0') {
    local_20 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    local_1c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    param_3 = uVar2 >> 0x18;
    iVar6 = **(int **)(param_1 + 0x20);
    local_18 = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(iVar6 + 0x5c) = local_20;
    *(float *)(iVar6 + 0x60) = local_1c;
    *(float *)(iVar6 + 100) = local_18;
    local_14 = (float)param_3 * 0.003921569;
    *(float *)(iVar6 + 0x68) = local_14;
    FUN_1008ce50(*piVar1 + *(int *)(param_1 + 0x122) * 2,**(undefined4 **)(param_1 + 0x20),
                 param_1 + 0x68,0,0xffffffff);
    iVar5 = *(int *)(param_1 + 0x119);
    iVar6 = *(int *)(param_1 + 0x11e);
    if (iVar6 == iVar5) goto LAB_1008f2e0;
    iVar4 = iVar6;
    if (iVar5 <= iVar6) {
      iVar4 = iVar5;
    }
    iVar7 = *(int *)(param_1 + 0x122);
    if (((*(int *)(param_1 + 0x122) <= iVar4) && (iVar7 = iVar5, iVar4 = iVar6, iVar6 < iVar5)) ||
       (iVar4 = iVar7, iVar6 <= iVar5)) {
      iVar6 = iVar5;
    }
    uVar2 = *(uint *)(param_1 + 299);
    local_20 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    param_3 = uVar2 >> 0x18;
    local_1c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    iVar5 = **(int **)(param_1 + 0x20);
    local_18 = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(iVar5 + 0x5c) = local_20;
    *(float *)(iVar5 + 0x60) = local_1c;
    *(float *)(iVar5 + 100) = local_18;
    local_14 = (float)param_3 * 0.003921569;
    iVar6 = iVar6 - iVar4;
    uVar9 = 0;
    *(float *)(iVar5 + 0x68) = local_14;
    uVar3 = **(undefined4 **)(param_1 + 0x20);
    ptVar8 = &local_10;
    iVar5 = *piVar1 + iVar4 * 2;
  }
  else {
    local_20 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    local_1c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    param_3 = uVar2 >> 0x18;
    uVar11 = 0xffffffff;
    uVar10 = 0;
    iVar5 = **(int **)(param_1 + 0x20);
    local_18 = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(iVar5 + 0x5c) = local_20;
    *(float *)(iVar5 + 0x60) = local_1c;
    *(float *)(iVar5 + 100) = local_18;
    iVar6 = param_1 + 0x68;
    local_14 = (float)param_3 * 0.003921569;
    *(float *)(iVar5 + 0x68) = local_14;
    uVar3 = **(undefined4 **)(param_1 + 0x20);
    uVar9 = FUN_100853a0(*piVar1 + *(int *)(param_1 + 0x122) * 2,uVar3,iVar6,0,0xffffffff);
    FUN_1008ce50(uVar9,uVar3,iVar6,uVar10,uVar11);
    iVar5 = *(int *)(param_1 + 0x119);
    iVar6 = *(int *)(param_1 + 0x11e);
    if (iVar6 == iVar5) goto LAB_1008f2e0;
    iVar4 = iVar6;
    if (iVar5 <= iVar6) {
      iVar4 = iVar5;
    }
    iVar7 = *(int *)(param_1 + 0x122);
    if (((*(int *)(param_1 + 0x122) <= iVar4) && (iVar7 = iVar5, iVar4 = iVar6, iVar6 < iVar5)) ||
       (iVar4 = iVar7, iVar6 <= iVar5)) {
      iVar6 = iVar5;
    }
    uVar2 = *(uint *)(param_1 + 299);
    local_20 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    param_3 = uVar2 >> 0x18;
    local_1c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    iVar6 = iVar6 - iVar4;
    uVar9 = 0;
    ptVar8 = &local_10;
    iVar5 = **(int **)(param_1 + 0x20);
    local_18 = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(iVar5 + 0x5c) = local_20;
    *(float *)(iVar5 + 0x60) = local_1c;
    *(float *)(iVar5 + 100) = local_18;
    local_14 = (float)param_3 * 0.003921569;
    *(float *)(iVar5 + 0x68) = local_14;
    uVar3 = **(undefined4 **)(param_1 + 0x20);
    iVar5 = FUN_100853a0(*piVar1 + iVar4 * 2,uVar3,ptVar8,0,iVar6);
  }
  FUN_1008ce50(iVar5,uVar3,ptVar8,uVar9,iVar6);
LAB_1008f2e0:
  if ((*(char *)(param_1 + 4) != '\0') && (*(char *)(param_1 + 0x3c) != '\0')) {
    iVar6 = (*(int *)(param_1 + 0x68) - local_24) + local_2c;
    local_1c = *(float *)(param_1 + 0x6c);
    local_20 = (float)(iVar6 + -1);
    local_18 = (float)(iVar6 + 1);
    local_14 = *(float *)(param_1 + 0x74);
    if (*(char *)(param_1 + 0x11d) == '\0') {
      FUN_1009b770(*(undefined4 *)(param_1 + 0x119),1,&param_3);
      local_18 = (float)((*(int *)(param_1 + 0x68) - local_24) + param_3);
    }
    FUN_100844f0(&local_20,*(undefined4 *)(param_1 + 0x133));
  }
  return;
}


/* END FUNCTION 0x1008ee80 */

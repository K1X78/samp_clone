/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100babf0
 * Name: FUN_100babf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100babf0(float *param_1,undefined4 param_2)

{
  int iVar1;
  float *pfVar2;
  float fVar3;
  float *pfVar4;
  float fVar5;
  int iVar6;
  float fVar7;
  char cVar8;
  void *pvVar9;
  int iVar10;
  uint local_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10116836;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar9 = operator_new(0x34);
  if (pvVar9 == (void *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar9 + 0x28) = 0;
    *(undefined4 *)((int)pvVar9 + 0x2c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x30) = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined4 *)((int)pvVar9 + 0x1c) = 0;
  }
  local_4 = 0xffffffff;
  param_1[7] = (float)pvVar9;
  pvVar9 = operator_new(0x34);
  if (pvVar9 == (void *)0x0) {
    pvVar9 = (void *)0x0;
  }
  else {
    *(undefined4 *)((int)pvVar9 + 0x28) = 0;
    *(undefined4 *)((int)pvVar9 + 0x2c) = 0;
    *(undefined4 *)((int)pvVar9 + 0x30) = 0;
    *(undefined4 *)((int)pvVar9 + 0x20) = 0;
    *(undefined4 *)((int)pvVar9 + 0x1c) = 0;
  }
  pfVar2 = (float *)param_1[7];
  param_1[8] = (float)pvVar9;
  *pfVar2 = *param_1;
  pfVar2[1] = param_1[1];
  pfVar2[2] = param_1[2];
  fVar3 = param_1[7];
  pfVar2 = param_1 + 3;
  local_4 = 0xffffffff;
  *(float *)((int)fVar3 + 0xc) = *pfVar2;
  *(float *)((int)fVar3 + 0x10) = param_1[4];
  *(float *)((int)fVar3 + 0x14) = param_1[5];
  pfVar4 = (float *)param_1[8];
  *pfVar4 = *param_1;
  pfVar4[1] = param_1[1];
  pfVar4[2] = param_1[2];
  fVar3 = param_1[8];
  *(float *)((int)fVar3 + 0xc) = *pfVar2;
  *(float *)((int)fVar3 + 0x10) = param_1[4];
  *(float *)((int)fVar3 + 0x14) = param_1[5];
  fVar3 = *pfVar2 - *param_1;
  fVar5 = param_1[4] - param_1[1];
  fVar7 = param_1[5] - param_1[2];
  if ((fVar3 <= fVar5) || (fVar3 <= fVar7)) {
    if (fVar5 <= fVar7) {
      *(float *)((int)param_1[7] + 0x14) = fVar7 * 0.5 + param_1[2];
      *(float *)((int)param_1[8] + 8) = fVar7 * 0.5 + param_1[2];
    }
    else {
      *(float *)((int)param_1[7] + 0x10) = fVar5 * 0.5 + param_1[1];
      *(float *)((int)param_1[8] + 4) = fVar5 * 0.5 + param_1[1];
    }
  }
  else {
    *(float *)((int)param_1[7] + 0xc) = fVar3 * 0.5 + *param_1;
    *(float *)param_1[8] = fVar3 * 0.5 + *param_1;
  }
  local_1c = 0;
  do {
    while( true ) {
      fVar3 = param_1[10];
      if ((fVar3 == 0.0) || ((uint)((int)param_1[0xb] - (int)fVar3 >> 3) <= local_1c)) {
        if ((void *)param_1[10] != (void *)0x0) {
          _free((void *)param_1[10]);
        }
        param_1[10] = 0.0;
        param_1[0xb] = 0.0;
        param_1[0xc] = 0.0;
        iVar1 = *(int *)((int)param_1[7] + 0x28);
        if ((iVar1 != 0) && (0x50 < (uint)(*(int *)((int)param_1[7] + 0x2c) - iVar1 >> 3))) {
          FUN_100babf0(param_2);
        }
        iVar1 = *(int *)((int)param_1[8] + 0x28);
        if ((iVar1 != 0) && (0x50 < (uint)(*(int *)((int)param_1[8] + 0x2c) - iVar1 >> 3))) {
          FUN_100babf0(param_2);
        }
        ExceptionList = local_c;
        return;
      }
      fVar5 = param_1[7];
      iVar1 = (int)fVar3 + local_1c * 8;
      cVar8 = FUN_100b9950(iVar1,fVar5);
      if (cVar8 != '\0') break;
      fVar3 = param_1[8];
      iVar6 = *(int *)((int)fVar3 + 0x28);
      iVar10 = (int)fVar3 + 0x24;
      if ((iVar6 != 0) &&
         ((uint)(*(int *)((int)fVar3 + 0x2c) - iVar6 >> 3) <
          (uint)(*(int *)((int)fVar3 + 0x30) - iVar6 >> 3))) goto LAB_100badfd;
LAB_100bae25:
      FUN_100ba8b0(*(undefined4 *)(iVar10 + 8),1,iVar1);
      local_1c = local_1c + 1;
    }
    iVar6 = *(int *)((int)fVar5 + 0x28);
    iVar10 = (int)fVar5 + 0x24;
    if ((iVar6 == 0) ||
       ((uint)(*(int *)((int)fVar5 + 0x30) - iVar6 >> 3) <=
        (uint)(*(int *)((int)fVar5 + 0x2c) - iVar6 >> 3))) goto LAB_100bae25;
LAB_100badfd:
    iVar6 = *(int *)(iVar10 + 8);
    FUN_100ba1d0(iVar6,1,iVar1,iVar10,param_2);
    *(int *)(iVar10 + 8) = iVar6 + 8;
    local_1c = local_1c + 1;
  } while( true );
}


/* END FUNCTION 0x100babf0 */

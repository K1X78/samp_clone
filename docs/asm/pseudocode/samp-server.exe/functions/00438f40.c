/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00438f40
 * Name: FUN_00438f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_00438f40(int *param_1,int param_2,int param_3,uint param_4,uint param_5,uint *param_6)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  undefined3 extraout_var;
  int *piVar4;
  undefined3 extraout_var_00;
  uint uVar5;
  int *piVar6;
  int iVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  int extraout_EDX;
  uint uVar8;
  void *pvVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  longlong lVar14;
  uint local_34;
  int local_30;
  uint local_c;
  uint local_4;
  
  pvVar2 = (void *)param_1[3];
  param_1[0x12] = param_1[0x12] + 1;
  FUN_00414e50(0x1a);
  FUN_00414e70(1,7);
  iVar7 = *(int *)(param_3 + 0xc);
  pvVar9 = *(void **)(param_2 + 0x1c);
  pvVar1 = (void *)((int)pvVar9 + *(int *)(param_2 + 0x14) * 0x28);
  local_34 = 0;
  uVar8 = 0;
  uVar11 = 0;
  for (; pvVar9 < pvVar1; pvVar9 = (void *)((int)pvVar9 + 0x28)) {
    bVar3 = FUN_00417250(pvVar9,param_4,param_5);
    if (CONCAT31(extraout_var,bVar3) != 0) {
      if (*(int *)((int)pvVar9 + 0xc) < 0x40) {
        lVar14 = __allshl((byte)*(int *)((int)pvVar9 + 0xc),0);
      }
      else {
        lVar14 = -0x8000000000000000;
      }
      local_4 = (uint)((ulonglong)lVar14 >> 0x20);
      if (((uint)lVar14 & uVar8) == 0 && (local_4 & uVar11) == 0) {
        uVar8 = uVar8 | (uint)lVar14;
        local_34 = local_34 + 1;
        uVar11 = uVar11 | local_4;
      }
    }
  }
  param_6[1] = local_34;
  uVar13 = *(uint *)(param_3 + 0x2c);
  uVar8 = ~uVar8 & *(uint *)(param_3 + 0x28);
  iVar10 = *(int *)(iVar7 + 0xc);
  uVar11 = (~uVar11 | 0x80000000) & uVar13;
  local_30 = 0x3f;
  if (iVar10 < 0x3f) {
    local_30 = iVar10;
  }
  iVar12 = 0;
  if (0 < local_30) {
    do {
      lVar14 = __allshl((byte)iVar12,0);
      if (((uint)lVar14 & uVar8) != 0 || ((uint)((ulonglong)lVar14 >> 0x20) & uVar11) != 0) {
        local_34 = local_34 + 1;
      }
      iVar12 = iVar12 + 1;
    } while (iVar12 < local_30);
  }
  if ((uVar13 & 0x80000000) != 0) {
    local_34 = (local_34 - 0x3f) + iVar10;
  }
  *param_6 = *param_6 | 0x810002;
  piVar4 = FUN_00417b70();
  if (piVar4 != (int *)0x0) {
    param_6[2] = (uint)piVar4;
    piVar6 = piVar4 + 0xd;
    piVar4[0xb] = (int)piVar6;
    piVar4[2] = (int)(piVar6 + local_34);
    piVar4[10] = (int)(piVar6 + local_34 + local_34);
    piVar4[1] = local_34;
    *piVar4 = (int)"auto-index";
    piVar4[4] = iVar7;
    pvVar9 = *(void **)(param_2 + 0x1c);
    iVar10 = 0;
    local_c = 0;
    if (pvVar9 < pvVar1) {
      uVar13 = 0;
      do {
        bVar3 = FUN_00417250(pvVar9,param_4,param_5);
        if (CONCAT31(extraout_var_00,bVar3) != 0) {
          iVar12 = *(int *)((int)pvVar9 + 0xc);
          if (iVar12 < 0x40) {
            lVar14 = __allshl((byte)iVar12,0);
          }
          else {
            lVar14 = -0x8000000000000000;
          }
          uVar5 = (uint)((ulonglong)lVar14 >> 0x20);
          if (((uint)lVar14 & uVar13) == 0 && (uVar5 & local_c) == 0) {
            local_c = local_c | uVar5;
            uVar13 = uVar13 | (uint)lVar14;
            *(int *)(piVar4[2] + iVar10 * 4) = iVar12;
            piVar6 = FUN_00430190();
            *(int *)(piVar4[0xb] + iVar10 * 4) = *piVar6;
            iVar10 = iVar10 + 1;
          }
        }
        pvVar9 = (void *)((int)pvVar9 + 0x28);
      } while (pvVar9 < pvVar1);
    }
    iVar12 = 0;
    if (0 < local_30) {
      do {
        lVar14 = __allshl((byte)iVar12,0);
        if (((uint)lVar14 & uVar8) != 0 || ((uint)((ulonglong)lVar14 >> 0x20) & uVar11) != 0) {
          *(int *)(piVar4[2] + iVar10 * 4) = iVar12;
          *(char **)(piVar4[0xb] + iVar10 * 4) = "BINARY";
          iVar10 = iVar10 + 1;
        }
        iVar12 = iVar12 + 1;
      } while (iVar12 < local_30);
    }
    if (((*(uint *)(param_3 + 0x2c) & 0x80000000) != 0) &&
       (iVar12 = 0x3f, 0x3f < *(int *)(iVar7 + 0xc))) {
      iVar10 = iVar10 << 2;
      do {
        *(int *)(piVar4[2] + iVar10) = iVar12;
        *(char **)(piVar4[0xb] + iVar10) = "BINARY";
        iVar10 = iVar10 + 4;
        iVar12 = iVar12 + 1;
      } while (iVar12 < *(int *)(iVar7 + 0xc));
    }
    piVar6 = FUN_00430960(param_1,piVar4);
    FUN_004197c0(local_34 + 1,param_6[5],0x28,(char *)piVar6,-0x10);
    FUN_00414e50(0x41);
    iVar7 = FUN_0040ec00();
    FUN_00438460(extraout_EDX,(int)piVar4,param_6[4],iVar7,1);
    FUN_00414e70(param_6[5],0x46);
    FUN_0040d660(extraout_ECX,0x10);
    FUN_00414e70(param_6[4],0x43);
    FUN_0040d660(extraout_ECX_00,3);
    FUN_0040d680(pvVar2);
    FUN_0040ec20(extraout_ECX_01,(int)param_1);
    FUN_0040d680(pvVar2);
  }
  return;
}


/* END FUNCTION 0x00438f40 */

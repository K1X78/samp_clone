/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004389f0
 * Name: FUN_004389f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004389f0(void *this,undefined4 param_1,undefined4 *param_2,int param_3)

{
  byte *pbVar1;
  int *piVar2;
  int *piVar3;
  char *pcVar4;
  bool bVar5;
  byte bVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  undefined3 extraout_var;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined3 extraout_var_00;
  int iVar15;
  void *this_00;
  void *extraout_ECX;
  void *extraout_ECX_00;
  void *extraout_ECX_01;
  void *this_01;
  undefined4 extraout_ECX_02;
  void *this_02;
  int extraout_ECX_03;
  void *this_03;
  void *this_04;
  void *this_05;
  char *extraout_EDX;
  char *pcVar16;
  int iVar17;
  ulonglong uVar18;
  longlong lVar19;
  int local_28;
  int *local_24;
  undefined4 *local_20;
  uint local_1c;
  undefined8 local_18;
  undefined8 local_10;
  undefined8 local_8;
  
  local_10 = 0;
  local_20 = (undefined4 *)0x0;
  local_28 = 0;
  local_1c = 0;
  piVar2 = (int *)*param_2;
  iVar15 = *piVar2;
  if (*(char *)(iVar15 + 0x1e) != '\0') {
    return;
  }
  piVar3 = (int *)param_2[1];
  iVar7 = param_3 * 0x28;
  pcVar4 = *(char **)(param_2[7] + iVar7);
  iVar17 = param_2[7] + iVar7;
  local_24 = piVar3;
  local_8 = FUN_004170e0((void *)CONCAT31((int3)((uint)this >> 8),*(char *)(iVar15 + 0x1e)),piVar3,
                         *(char **)(pcVar4 + 8));
  if (*pcVar4 == 'H') {
    if ((pcVar4[3] & 8U) == 0) {
      uVar18 = FUN_00417170(piVar3,*(int **)(pcVar4 + 0x10));
      this_01 = extraout_ECX_00;
    }
    else {
      uVar18 = FUN_00410700(piVar3);
      this_01 = extraout_ECX;
    }
LAB_00438aa4:
    uVar8 = (undefined4)uVar18;
    *(int *)(iVar17 + 0x1c) = (int)(uVar18 >> 0x20);
  }
  else {
    if (*pcVar4 != 'I') {
      uVar18 = FUN_004170e0(this_00,piVar3,*(char **)(pcVar4 + 0xc));
      this_01 = extraout_ECX_01;
      goto LAB_00438aa4;
    }
    uVar8 = 0;
    *(undefined4 *)(iVar17 + 0x1c) = 0;
    this_01 = this_00;
  }
  *(undefined4 *)(iVar17 + 0x18) = uVar8;
  local_18 = FUN_004170e0(this_01,piVar3,pcVar4);
  if ((pcVar4[2] & 1U) != 0) {
    lVar19 = FUN_004106c0(extraout_ECX_02,local_24);
    local_10 = lVar19 + -1;
    local_18 = CONCAT44(local_18._4_4_ | (uint)((ulonglong)lVar19 >> 0x20),
                        (uint)local_18 | (uint)lVar19);
  }
  *(uint *)(iVar17 + 0x20) = (uint)local_18;
  *(undefined4 *)(iVar17 + 8) = 0xffffffff;
  *(undefined4 *)(iVar17 + 4) = 0xffffffff;
  *(uint *)(iVar17 + 0x24) = local_18._4_4_;
  *(undefined2 *)(iVar17 + 0x10) = 0;
  iVar9 = FUN_00410770();
  if (iVar9 != 0) {
    if ((*(uint *)(iVar17 + 0x18) & (uint)local_8) == 0 &&
        (*(uint *)(iVar17 + 0x1c) & local_8._4_4_) == 0) {
      pcVar10 = *(char **)(pcVar4 + 8);
      pcVar16 = *(char **)(pcVar4 + 0xc);
      if (*pcVar10 == -0x68) {
        *(undefined4 *)(iVar17 + 8) = *(undefined4 *)(pcVar10 + 0x18);
        *(int *)(iVar17 + 0xc) = (int)*(short *)(pcVar10 + 0x1c);
        iVar9 = FUN_00410790();
        *(short *)(iVar17 + 0x10) = (short)iVar9;
        pcVar16 = extraout_EDX;
      }
      if ((pcVar16 != (char *)0x0) && (*pcVar16 == -0x68)) {
        pcVar10 = pcVar4;
        iVar9 = iVar17;
        if (-1 < *(int *)(iVar17 + 8)) {
          pcVar10 = (char *)FUN_00420310(iVar15,(undefined4 *)pcVar4,0);
          if (*(char *)(iVar15 + 0x1e) != '\0') {
            FUN_004158d0(iVar15,(int)pcVar10);
            return;
          }
          iVar17 = FUN_00416fc0(param_2,(int)pcVar10,3);
          if (iVar17 == 0) {
            return;
          }
          iVar17 = param_2[7] + iVar17 * 0x28;
          *(int *)(iVar17 + 4) = param_3;
          bVar6 = *(byte *)(param_2[7] + 0x12 + iVar7);
          iVar9 = param_2[7] + iVar7;
          *(undefined1 *)(iVar9 + 0x13) = 1;
          *(byte *)(iVar9 + 0x12) = bVar6 | 8;
        }
        FUN_00432990();
        iVar11 = *(int *)(pcVar10 + 8);
        *(undefined4 *)(iVar17 + 8) = *(undefined4 *)(iVar11 + 0x18);
        *(int *)(iVar17 + 0xc) = (int)*(short *)(iVar11 + 0x1c);
        *(uint *)(iVar17 + 0x18) = (uint)local_8 | (uint)local_10;
        *(uint *)(iVar17 + 0x1c) = local_8._4_4_ | local_10._4_4_;
        *(uint *)(iVar17 + 0x20) = (uint)local_18;
        *(uint *)(iVar17 + 0x24) = local_18._4_4_;
        iVar11 = FUN_00410790();
        *(short *)(iVar17 + 0x10) = (short)iVar11;
        iVar17 = iVar9;
      }
      goto LAB_00438d12;
    }
  }
  if ((*pcVar4 == 'G') && (*(char *)(param_2 + 4) == 'E')) {
    local_18 = CONCAT44(local_18._4_4_,*(undefined4 *)(pcVar4 + 0x10));
    iVar9 = 0;
    do {
      FUN_00420310(iVar15,*(undefined4 **)(iVar9 + *(int *)((uint)local_18 + 0xc)),0);
      FUN_00420310(iVar15,*(undefined4 **)(pcVar4 + 8),0);
      puVar14 = FUN_0041a0a0(piVar2);
      iVar11 = FUN_00416fc0(param_2,(int)puVar14,3);
      FUN_004389f0(this_02,param_1,param_2,iVar11);
      iVar17 = param_2[7] + iVar7;
      *(int *)(param_2[7] + 4 + iVar11 * 0x28) = param_3;
      iVar9 = iVar9 + 0x14;
    } while (iVar9 < 0x28);
    *(undefined1 *)(iVar17 + 0x13) = 2;
  }
  else if (*pcVar4 == 'D') {
    FUN_00422a40(param_1,param_2,param_3);
    iVar17 = param_2[7] + iVar7;
  }
LAB_00438d12:
  if ((*(char *)(param_2 + 4) == 'E') &&
     (bVar5 = FUN_004387a0(piVar2,(int *)&local_20,&local_28,&local_1c),
     CONCAT31(extraout_var,bVar5) != 0)) {
    puVar14 = *(undefined4 **)(*(int *)(*(int *)(pcVar4 + 0x10) + 0xc) + 0x14);
    iVar17 = FUN_00420310(iVar15,local_20,0);
    local_18._0_4_ = iVar17;
    if (*(char *)(iVar15 + 0x1e) == '\0') {
      uVar12 = FUN_00408380(*(char **)(iVar17 + 4));
      pbVar1 = (byte *)((uVar12 - 1) + extraout_ECX_03);
      bVar6 = *pbVar1;
      if (local_1c != 0) {
        if (bVar6 == 0x40) {
          local_28 = 0;
        }
        bVar6 = (&DAT_004b28c8)[bVar6];
      }
      *pbVar1 = bVar6 + 1;
    }
    FUN_00420310(iVar15,puVar14,0);
    puVar13 = FUN_0041a0a0(piVar2);
    iVar9 = FUN_00416fc0(param_2,(int)puVar13,3);
    FUN_004389f0(this_03,param_1,param_2,iVar9);
    FUN_00420310(iVar15,puVar14,0);
    puVar14 = FUN_0041a0a0(piVar2);
    iVar17 = FUN_00416fc0(param_2,(int)puVar14,3);
    local_18 = CONCAT44(local_18._4_4_,iVar17);
    FUN_004389f0(this_04,param_1,param_2,iVar17);
    iVar17 = param_2[7] + iVar7;
    if (local_28 != 0) {
      *(int *)(param_2[7] + 4 + iVar9 * 0x28) = param_3;
      *(int *)(param_2[7] + 4 + (uint)local_18 * 0x28) = param_3;
      *(undefined1 *)(iVar17 + 0x13) = 2;
    }
  }
  bVar5 = FUN_004107c0();
  if (CONCAT31(extraout_var_00,bVar5) != 0) {
    puVar14 = *(undefined4 **)((int)*(void **)(pcVar4 + 0x10) + 0xc);
    pcVar10 = (char *)*puVar14;
    pcVar16 = (char *)puVar14[5];
    uVar18 = FUN_004170e0(*(void **)(pcVar4 + 0x10),local_24,pcVar10);
    local_8._4_4_ = (uint)(uVar18 >> 0x20);
    local_8._0_4_ = (uint)uVar18;
    uVar18 = FUN_004170e0(this_05,local_24,pcVar16);
    if (((uint)uVar18 & (uint)local_8) == 0 && ((uint)(uVar18 >> 0x20) & local_8._4_4_) == 0) {
      FUN_00420310(iVar15,(undefined4 *)pcVar10,0);
      puVar14 = FUN_0041a0a0(piVar2);
      iVar15 = FUN_00416fc0(param_2,(int)puVar14,3);
      iVar15 = param_2[7] + iVar15 * 0x28;
      *(uint *)(iVar15 + 0x18) = (uint)local_8;
      *(uint *)(iVar15 + 0x1c) = local_8._4_4_;
      *(undefined4 *)(iVar15 + 8) = *(undefined4 *)(pcVar16 + 0x18);
      *(int *)(iVar15 + 0xc) = (int)*(short *)(pcVar16 + 0x1c);
      *(int *)(iVar15 + 4) = param_3;
      *(undefined2 *)(iVar15 + 0x10) = 0x40;
      iVar17 = param_2[7] + iVar7;
      *(byte *)(iVar17 + 0x12) = *(byte *)(param_2[7] + 0x12 + iVar7) | 8;
      *(undefined1 *)(iVar17 + 0x13) = 1;
      *(undefined4 *)(iVar15 + 0x20) = *(undefined4 *)(iVar17 + 0x20);
      *(undefined4 *)(iVar15 + 0x24) = *(undefined4 *)(iVar17 + 0x24);
    }
  }
  *(uint *)(iVar17 + 0x18) = *(uint *)(iVar17 + 0x18) | (uint)local_10;
  *(uint *)(iVar17 + 0x1c) = *(uint *)(iVar17 + 0x1c) | local_10._4_4_;
  return;
}


/* END FUNCTION 0x004389f0 */

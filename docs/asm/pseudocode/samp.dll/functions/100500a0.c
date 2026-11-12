/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100500a0
 * Name: FUN_100500a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100500a0(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 *puVar9;
  ushort *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  int *piVar13;
  uint uVar14;
  uint local_74;
  uint local_70;
  uint local_6c;
  int local_68 [2];
  int *local_60 [2];
  undefined4 local_58;
  undefined2 local_54;
  undefined1 local_52;
  undefined4 local_50;
  undefined2 local_4c;
  undefined1 local_4a;
  undefined1 local_45 [7];
  undefined1 local_3e [7];
  undefined1 local_37 [43];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_101159cb;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  iVar3 = thunk_FUN_100218b0();
  iVar4 = thunk_FUN_100218b0();
  pvVar5 = operator_new(iVar3 * iVar4 * 2);
  *(void **)(param_1 + 0x2c) = pvVar5;
  iVar3 = thunk_FUN_100218b0();
  local_60[0] = operator_new(iVar3 * 7 + 4);
  local_4._0_1_ = 1;
  if (local_60[0] == (int *)0x0) {
    piVar13 = (int *)0x0;
  }
  else {
    piVar13 = local_60[0] + 1;
    *local_60[0] = iVar3;
    _eh_vector_constructor_iterator_(piVar13,7,iVar3,FUN_10020540,FUN_10020550);
  }
  local_4._0_1_ = 0;
  *(int **)(param_1 + 0x30) = piVar13;
  FUN_10020540();
  local_4._0_1_ = 2;
  FUN_10020540();
  FUN_1004f6d0();
  local_4._0_1_ = 4;
  FUN_10022a90();
  local_4 = CONCAT31(local_4._1_3_,5);
  uVar14 = 0;
  iVar3 = thunk_FUN_100218b0();
  if (iVar3 != 0) {
    do {
      uVar6 = FUN_10022430(local_68,uVar14);
      uVar7 = FUN_10022430(local_60,uVar14);
      local_4._0_1_ = 7;
      FUN_1004f150(uVar7,uVar6);
      local_4._0_1_ = 6;
      FUN_10020550();
      local_4 = CONCAT31(local_4._1_3_,5);
      FUN_10020550();
      uVar14 = uVar14 + 1;
      uVar8 = thunk_FUN_100218b0();
    } while (uVar14 < uVar8);
  }
  uVar14 = 0;
  iVar3 = thunk_FUN_100218b0();
  iVar4 = thunk_FUN_100218b0();
  if (iVar3 * iVar4 != 0) {
    uVar2 = (undefined2)param_4;
    do {
      *(undefined2 *)(*(int *)(param_1 + 0x2c) + uVar14 * 2) = uVar2;
      uVar14 = uVar14 + 1;
      iVar3 = thunk_FUN_100218b0();
      iVar4 = thunk_FUN_100218b0();
    } while (uVar14 < (uint)(iVar3 * iVar4));
  }
  local_54 = (undefined2)param_3;
  *(undefined2 *)(param_1 + 0x1d) = (undefined2)param_3;
  local_58 = param_2;
  local_52 = param_3._2_1_;
  param_4 = 0;
  local_74 = 0;
  *(undefined4 *)(param_1 + 0x19) = param_2;
  *(undefined1 *)(param_1 + 0x1f) = param_3._2_1_;
  iVar3 = FUN_1004f690(&param_2);
  uVar14 = 0;
  iVar4 = thunk_FUN_100218b0();
  if (iVar4 != 0) {
    do {
      iVar4 = thunk_FUN_100218b0();
      *(undefined2 *)(*(int *)(param_1 + 0x2c) + (iVar4 * uVar14 + iVar3) * 2) = 0;
      uVar14 = uVar14 + 1;
      uVar8 = thunk_FUN_100218b0();
    } while (uVar14 < uVar8);
  }
  iVar3 = thunk_FUN_100218b0();
  if (iVar3 != 1) {
    local_6c = 0;
    do {
      puVar9 = (undefined4 *)FUN_10022390(&local_58);
      local_60[0] = (int *)*puVar9;
      local_70 = 0;
      iVar3 = thunk_FUN_10021970();
      uVar14 = local_6c;
      if (iVar3 != 0) {
        do {
          puVar10 = (ushort *)FUN_10022500(local_70);
          uVar1 = *puVar10;
          puVar9 = (undefined4 *)FUN_10022510(local_45,local_70);
          local_50 = *puVar9;
          local_4c = *(undefined2 *)(puVar9 + 1);
          local_4a = *(undefined1 *)((int)puVar9 + 6);
          FUN_10020550();
          iVar3 = FUN_1004f690(&local_50);
          iVar4 = thunk_FUN_100218b0();
          uVar8 = param_4;
          if ((uint)uVar1 + (local_74 & 0xffff) <
              (uint)*(ushort *)(*(int *)(param_1 + 0x2c) + (iVar4 * param_4 + iVar3) * 2)) {
            uVar11 = thunk_FUN_100218b0();
            if (uVar8 < uVar11) {
              do {
                iVar4 = thunk_FUN_100218b0();
                *(ushort *)(*(int *)(param_1 + 0x2c) + (iVar4 * uVar8 + iVar3) * 2) =
                     (short)local_74 + uVar1;
                uVar8 = uVar8 + 1;
                uVar11 = thunk_FUN_100218b0();
              } while (uVar8 < uVar11);
            }
            local_68[0] = CONCAT22((short)(uVar14 >> 0x10),uVar1) + local_74;
            FUN_100228d0(&local_50,local_68);
          }
          uVar14 = local_70 + 1;
          uVar8 = thunk_FUN_10021970();
          local_70 = uVar14;
        } while (uVar14 < uVar8);
      }
      FUN_1004f960();
      uVar14 = 0;
      iVar3 = thunk_FUN_10021970();
      if (iVar3 != 0) {
        do {
          uVar6 = FUN_10022510(local_3e,uVar14);
          local_4._0_1_ = 8;
          uVar7 = FUN_10022500(uVar14);
          FUN_1004f6e0(uVar7,uVar6);
          local_4 = CONCAT31(local_4._1_3_,5);
          FUN_10020550();
          uVar14 = uVar14 + 1;
          uVar8 = thunk_FUN_10021970();
        } while (uVar14 < uVar8);
      }
      iVar3 = FUN_1004f1f0();
      if (iVar3 == 0) break;
      local_74 = FUN_1004f1e0(0);
      puVar9 = (undefined4 *)FUN_1004f7a0(local_37,0);
      puVar12 = (undefined4 *)(*(int *)(param_1 + 0x30) + local_6c);
      *puVar12 = *puVar9;
      *(undefined2 *)(puVar12 + 1) = *(undefined2 *)(puVar9 + 1);
      *(undefined1 *)((int)puVar12 + 6) = *(undefined1 *)((int)puVar9 + 6);
      FUN_10020550();
      local_58 = *(undefined4 *)(*(int *)(param_1 + 0x30) + local_6c);
      iVar3 = *(int *)(param_1 + 0x30) + local_6c;
      local_54 = *(undefined2 *)(iVar3 + 4);
      local_52 = *(undefined1 *)(iVar3 + 6);
      FUN_10022990(&local_58);
      uVar14 = param_4 + 1;
      local_6c = local_6c + 7;
      param_4 = uVar14;
      iVar3 = thunk_FUN_100218b0();
    } while (uVar14 < iVar3 - 1U);
  }
  local_4._0_1_ = 4;
  *(undefined1 *)(param_1 + 0x18) = 1;
  FUN_10022880();
  local_4._0_1_ = 3;
  FUN_10050050();
  local_4._0_1_ = 2;
  FUN_10020550();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_10020550();
  local_4 = 0xffffffff;
  FUN_10020550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100500a0 */

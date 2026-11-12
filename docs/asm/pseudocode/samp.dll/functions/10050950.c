/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10050950
 * Name: FUN_10050950
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10050950(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  int iVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *local_80;
  undefined4 *local_7c;
  uint local_78 [2];
  void *local_70;
  undefined4 local_6c;
  undefined2 local_68;
  undefined1 local_66;
  undefined4 local_60;
  int local_5c;
  int local_58;
  int local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_10115a5e;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_10020f60();
  local_4._0_1_ = 1;
  FUN_10023280();
  uVar3 = param_5;
  local_4._0_1_ = 2;
  local_78[0] = 0;
  if (param_2[1] != 0) {
    local_80 = (undefined4 *)0x0;
    do {
      cVar2 = FUN_10050540(&local_5c,param_3,CONCAT12(param_4._2_1_,(undefined2)param_4),
                           *(undefined4 *)(*param_2 + (int)local_80),
                           *(undefined3 *)((undefined4 *)(*param_2 + (int)local_80) + 1),uVar3);
      iVar4 = local_5c;
      iVar1 = local_58;
      if (cVar2 != '\0') {
        while (iVar1 + -1 != 0) {
          FUN_100232a0(iVar4,iVar4 + 7,uVar3);
          iVar4 = iVar4 + 7;
          iVar1 = iVar1 + -1;
        }
      }
      local_78[0] = local_78[0] + 1;
      local_80 = (undefined4 *)((int)local_80 + 7);
    } while (local_78[0] < (uint)param_2[1]);
  }
  uVar9 = 0;
  FUN_1004e520();
  local_4._0_1_ = 3;
  FUN_10020540();
  local_4._0_1_ = 4;
  FUN_1004f600();
  *param_1 = param_3;
  *(undefined2 *)(param_1 + 1) = (undefined2)param_4;
  *(undefined1 *)((int)param_1 + 6) = param_4._2_1_;
  cVar2 = FUN_100223e0(&param_3);
  if (cVar2 == '\0') {
    local_4._0_1_ = 3;
    FUN_10020550();
    local_4._0_1_ = 2;
    FUN_1004e550();
    local_4._0_1_ = 1;
    FUN_100239a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_10020f70();
    local_4 = 0xffffffff;
    FUN_10020550();
    uVar3 = 0;
  }
  else {
    FUN_10022390(&param_3);
    iVar4 = thunk_FUN_10021970();
    uVar8 = local_4c;
    if (iVar4 != 0) {
      local_7c = param_1;
      do {
        local_70 = operator_new(0x13);
        local_4._0_1_ = 5;
        if (local_70 == (void *)0x0) {
          puVar5 = (undefined4 *)0x0;
        }
        else {
          puVar5 = (undefined4 *)FUN_1004efd0();
        }
        local_4._0_1_ = 4;
        local_80 = puVar5;
        puVar6 = (undefined4 *)FUN_10022510(local_78,uVar9);
        *puVar5 = *puVar6;
        *(undefined2 *)(puVar5 + 1) = *(undefined2 *)(puVar6 + 1);
        *(undefined1 *)((int)puVar5 + 6) = *(undefined1 *)((int)puVar6 + 6);
        FUN_10020550();
        FUN_1004e570(&local_80);
        FUN_1004e6f0(puVar5);
        uVar9 = uVar9 + 1;
        uVar7 = thunk_FUN_10021970();
        uVar8 = local_4c;
      } while (uVar9 < uVar7);
    }
    while( true ) {
      if (local_48 < uVar8) {
        iVar4 = local_44 - uVar8;
      }
      else {
        iVar4 = -uVar8;
      }
      if (local_48 + iVar4 == 0) break;
      local_4c = uVar8 + 1;
      if (local_4c == local_44) {
        puVar5 = *(undefined4 **)(local_50 + -8 + local_44 * 8);
        local_60 = *(undefined4 *)(local_50 + -4 + local_44 * 8);
        local_4c = 0;
      }
      else if (local_4c == 0) {
        puVar5 = *(undefined4 **)(local_50 + -8 + local_44 * 8);
        local_60 = *(undefined4 *)(local_50 + -4 + local_44 * 8);
      }
      else {
        puVar5 = *(undefined4 **)(local_50 + -8 + local_4c * 8);
        local_60 = *(undefined4 *)(local_50 + -4 + local_4c * 8);
      }
      uVar8 = local_4c;
      FUN_10022390(puVar5);
      uVar9 = 0;
      iVar4 = thunk_FUN_10021970();
      if (iVar4 != 0) {
        do {
          puVar6 = (undefined4 *)FUN_10022510(local_78,uVar9);
          local_6c = *puVar6;
          local_68 = *(undefined2 *)(puVar6 + 1);
          local_66 = *(undefined1 *)((int)puVar6 + 6);
          FUN_10020550();
          cVar2 = thunk_FUN_100331d0(local_60);
          if (cVar2 != '\0') {
            local_70 = operator_new(0x13);
            local_4._0_1_ = 6;
            if (local_70 == (void *)0x0) {
              puVar6 = (undefined4 *)0x0;
            }
            else {
              puVar6 = (undefined4 *)FUN_1004efd0();
            }
            *puVar6 = local_6c;
            *(undefined2 *)(puVar6 + 1) = local_68;
            *(undefined1 *)((int)puVar6 + 6) = local_66;
            local_4._0_1_ = 4;
            local_80 = puVar6;
            local_7c = puVar5;
            FUN_1004e570(&local_80);
            FUN_1004e6f0(puVar6);
            uVar8 = local_4c;
          }
          uVar9 = uVar9 + 1;
          uVar7 = thunk_FUN_10021970();
        } while (uVar9 < uVar7);
      }
    }
    local_4._0_1_ = 3;
    FUN_10020550();
    local_4._0_1_ = 2;
    FUN_1004e550();
    local_4._0_1_ = 1;
    FUN_100239a0();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_10020f70();
    local_4 = 0xffffffff;
    FUN_10020550();
    uVar3 = 1;
  }
  ExceptionList = local_c;
  return uVar3;
}


/* END FUNCTION 0x10050950 */

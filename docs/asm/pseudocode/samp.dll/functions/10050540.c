/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10050540
 * Name: FUN_10050540
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10050540(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  short sVar7;
  undefined1 uVar8;
  char local_2d;
  undefined4 local_2c;
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_23 [11];
  uint local_18;
  uint local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  puStack_8 = &LAB_10115a10;
  local_c = ExceptionList;
  local_4 = 1;
  ExceptionList = &local_c;
  FUN_10021060(0);
  uVar8 = 0x10;
  cVar1 = thunk_FUN_100331a0(&param_5);
  if (cVar1 != '\0') {
    FUN_1004eec0(param_3,CONCAT12(param_4._2_1_,(undefined2)param_4));
    FUN_1004eec0(param_5,CONCAT12(param_6._2_1_,(undefined2)param_6));
    goto LAB_10050710;
  }
  if (*(char *)(param_1 + 0x18) == '\0') {
LAB_100505e6:
    FUN_10022340();
    FUN_100500a0(param_3,CONCAT13(uVar8,CONCAT12(param_4._2_1_,(undefined2)param_4)),param_7);
  }
  else {
    uVar8 = 0x10;
    cVar1 = thunk_FUN_100331d0(&param_3);
    if (cVar1 != '\0') goto LAB_100505e6;
  }
  FUN_10020c90();
  local_4._0_1_ = 2;
  iVar2 = FUN_1004e760(&param_5,&local_2d);
  uVar3 = FUN_1004e800();
  if ((uVar3 < 2) || (local_2d == '\0')) {
    local_4._0_1_ = 1;
    FUN_10020d10();
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_10020550();
    local_4 = 0xffffffff;
    FUN_10020550();
    ExceptionList = local_c;
    return 0;
  }
  FUN_10020540();
  local_4 = CONCAT31(local_4._1_3_,3);
  uVar8 = 0x10;
  iVar4 = FUN_1004e800();
  if (iVar4 + -2 == 0) {
    FUN_1004eec0(param_3,CONCAT13(uVar8,CONCAT12(param_4._2_1_,(undefined2)param_4)));
    FUN_1004eec0(param_5,CONCAT12(param_6._2_1_,(undefined2)param_6));
  }
  else {
    iVar5 = thunk_FUN_100218b0();
    sVar7 = *(short *)(*(int *)(param_1 + 0x2c) + (iVar5 * (iVar4 + -2) + iVar2) * 2);
    if (sVar7 != (short)param_7) {
      local_2c = param_5;
      local_26 = param_6._2_1_;
      local_28 = (undefined2)param_6;
      FUN_1004e810(&local_2c,0);
      iVar4 = iVar4 + -3;
      do {
        iVar5 = thunk_FUN_100218b0();
        if (*(short *)(*(int *)(param_1 + 0x2c) + (iVar5 * iVar4 + iVar2) * 2) == sVar7) {
LAB_100507a7:
          if (iVar4 != 0) goto code_r0x100507ab;
          FUN_1004eec0(param_3,CONCAT12(param_4._2_1_,(undefined2)param_4));
          while( true ) {
            if (local_14 < local_18) {
              iVar2 = local_10 - local_18;
            }
            else {
              iVar2 = -local_18;
            }
            if (local_14 + iVar2 == 0) break;
            puVar6 = (undefined4 *)FUN_10020ef0(local_23);
            local_4._0_1_ = 4;
            FUN_1004eec0(*puVar6,*(undefined3 *)(puVar6 + 1));
            local_4 = CONCAT31(local_4._1_3_,3);
            FUN_10020550();
          }
          break;
        }
LAB_100507c3:
        local_2c = *(undefined4 *)(iVar4 * 7 + *(int *)(param_1 + 0x30));
        iVar2 = iVar4 * 7 + *(int *)(param_1 + 0x30);
        local_28 = *(undefined2 *)(iVar2 + 4);
        uVar8 = 0;
        local_26 = *(undefined1 *)(iVar2 + 6);
        FUN_1004e810(&local_2c,0);
        if (iVar4 == 0) goto LAB_100508b2;
        iVar2 = FUN_1004e760(&local_2c,&local_2d);
        iVar5 = thunk_FUN_100218b0();
        sVar7 = *(short *)(*(int *)(param_1 + 0x2c) + (iVar5 * iVar4 + iVar2) * 2);
      } while( true );
    }
  }
  goto LAB_100506f4;
code_r0x100507ab:
  iVar4 = iVar4 + -1;
  iVar5 = thunk_FUN_100218b0();
  if (*(short *)(*(int *)(param_1 + 0x2c) + (iVar5 * iVar4 + iVar2) * 2) != sVar7)
  goto LAB_100507c3;
  goto LAB_100507a7;
LAB_100508b2:
  FUN_1004eec0(param_3,CONCAT13(uVar8,CONCAT12(param_4._2_1_,(undefined2)param_4)));
  while( true ) {
    if (local_14 < local_18) {
      iVar2 = local_10 - local_18;
    }
    else {
      iVar2 = -local_18;
    }
    if (local_14 + iVar2 == 0) break;
    puVar6 = (undefined4 *)FUN_10020ef0(local_23);
    local_4._0_1_ = 5;
    FUN_1004eec0(*puVar6,*(undefined3 *)(puVar6 + 1));
    local_4 = CONCAT31(local_4._1_3_,3);
    FUN_10020550();
  }
LAB_100506f4:
  local_4._0_1_ = 2;
  FUN_10020550();
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_10020d10();
LAB_10050710:
  local_4 = local_4 & 0xffffff00;
  FUN_10020550();
  local_4 = 0xffffffff;
  FUN_10020550();
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x10050540 */

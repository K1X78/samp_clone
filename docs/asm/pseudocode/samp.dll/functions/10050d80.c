/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10050d80
 * Name: FUN_10050d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10050d80(int param_1,char *param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  undefined2 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined4 uStack_154;
  undefined2 uStack_150;
  undefined1 local_144 [12];
  int local_138;
  undefined1 local_134 [20];
  undefined1 auStack_120 [276];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115aa7;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_138 = param_1;
  iVar2 = FUN_100548c0();
  iVar6 = 0;
  if ((*(int *)(iVar2 + 4) != 0) && (param_3 != 0)) {
    FUN_1004efd0();
    local_4 = 0;
    uVar8 = 0x1005;
    puVar3 = (undefined4 *)(**(code **)(**(int **)(param_1 + 0x19) + 0x60))(local_144,0);
    puVar3 = (undefined4 *)
             (**(code **)(**(int **)(param_1 + 0x19) + 0xa0))
                       ((int)&uStack_154 + 1,*puVar3,CONCAT22(uVar8,*(undefined2 *)(puVar3 + 1)));
    uStack_154 = *puVar3;
    uStack_150 = *(undefined2 *)(puVar3 + 1);
    uVar9 = 0x10050e2c;
    cVar1 = FUN_100331a0(&DAT_1013fda0);
    if (cVar1 == '\0') {
      FUN_10020f60();
      local_4 = CONCAT31(local_4._1_3_,1);
      uVar7 = 0;
      iVar2 = FUN_10054d20();
      uVar8 = (undefined2)((uint)uVar9 >> 0x10);
      if (iVar2 != 0) {
        do {
          uVar8 = (undefined2)((uint)uVar9 >> 0x10);
          piVar4 = (int *)FUN_100548c0();
          uVar10 = 0;
          puVar3 = (undefined4 *)
                   FUN_10020560(*(undefined4 *)(*piVar4 + iVar6),
                                CONCAT22(uVar8,*(undefined2 *)((undefined4 *)(*piVar4 + iVar6) + 1))
                                ,0);
          uVar9 = *puVar3;
          local_4._0_1_ = 2;
          FUN_1004eec0(uVar9,CONCAT13(uVar10,*(undefined3 *)(puVar3 + 1)));
          local_4 = CONCAT31(local_4._1_3_,1);
          FUN_10020550();
          uVar7 = uVar7 + 1;
          iVar6 = iVar6 + 6;
          uVar5 = FUN_10054d20();
          uVar8 = (undefined2)((uint)uVar9 >> 0x10);
        } while (uVar7 < uVar5);
      }
      puVar3 = (undefined4 *)FUN_10020560(uStack_154,CONCAT22(uVar8,uStack_150),0);
      local_4._0_1_ = 3;
      cVar1 = FUN_10050950(local_134,local_144,*puVar3,*(undefined3 *)(puVar3 + 1),0xffff);
      local_4._0_1_ = 1;
      FUN_10020550();
      if (cVar1 != '\0') {
        FUN_1001f1f0();
        local_4._0_1_ = 4;
        if ((*param_2 == '(') && (0x27 < param_3)) {
          FUN_1001fb50(param_2,5);
          param_2 = param_2 + 5;
          param_3 = param_3 - 0x28;
        }
        FUN_1004f450(param_4,param_5,param_6,local_134,param_2,param_3,auStack_120,param_7);
        local_4._0_1_ = 1;
        FUN_1001f390();
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_10020f70();
        local_4 = 0xffffffff;
        FUN_1004eff0();
        ExceptionList = pvStack_c;
        return 1;
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_10020f70();
    }
    local_4 = 0xffffffff;
    FUN_1004eff0();
  }
  ExceptionList = pvStack_c;
  return 0;
}


/* END FUNCTION 0x10050d80 */

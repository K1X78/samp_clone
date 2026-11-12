/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c830
 * Name: FUN_1004c830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1004c830(int *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  int *piVar8;
  byte *pbVar9;
  undefined1 *puVar10;
  byte local_145;
  int *local_144;
  int local_140;
  undefined2 local_13c;
  undefined1 local_13a [8];
  uint local_132;
  undefined4 local_12e;
  undefined4 *local_12a;
  void *local_124;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  undefined2 uVar11;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101157c9;
  local_c = ExceptionList;
  pbVar9 = *(byte **)(param_3 + 0x10);
  local_145 = *pbVar9;
  if (local_145 == 0x28) {
    if (*(uint *)(param_3 + 8) < 6) {
      return 0;
    }
    local_145 = pbVar9[5];
  }
  uVar7 = (uint)local_145;
  local_144 = param_1;
  switch(uVar7) {
  case 0x1e:
  case 0x22:
    if (*(char *)((int)param_1 + 0x29) != '\0') {
      ExceptionList = &local_c;
      FUN_1004c5a0(*(undefined4 *)(param_3 + 2),*(undefined2 *)(param_3 + 6));
    }
    break;
  case 0x20:
  case 0x21:
    ExceptionList = &local_c;
    (**(code **)(*param_1 + 0x18))
              (param_2,*(undefined4 *)(param_3 + 2),*(undefined2 *)(param_3 + 6));
    break;
  case 0x3f:
  case 0x40:
  case 0x41:
  case 0x42:
    goto switchD_1004c889_caseD_3f;
  case 0x43:
    if (param_1[9] == 0) {
      return 0;
    }
switchD_1004c889_caseD_3f:
    cVar1 = '\x01';
    ExceptionList = &local_c;
    FUN_1001f280(pbVar9,*(undefined4 *)(param_3 + 8),0);
    local_4 = 0;
    FUN_1001f7c0(*(undefined4 *)(param_3 + 0xc));
    local_140 = *(int *)(param_3 + 2);
    local_13c = *(undefined2 *)(param_3 + 6);
    local_132 = uVar7;
    if (**(char **)(param_3 + 0x10) == '(') {
      FUN_1001f7b0(8);
      cVar1 = FUN_1001f470(&local_12e,0x20,1);
    }
    else {
      local_12e = 0;
    }
    FUN_1001f7b0(8);
    uVar11 = 0x1013;
    FUN_10033300(&DAT_1013c808);
    if (local_145 == 0x3f) {
      pbVar9 = &local_145;
      cVar1 = FUN_10008110(pbVar9);
      uVar11 = (undefined2)((uint)pbVar9 >> 0x10);
      if (local_145 == 0) goto LAB_1004c9c6;
    }
    else if (local_145 == 0x43) goto LAB_1004c9c6;
    puVar10 = local_13a;
    cVar1 = FUN_1004a880(puVar10);
    uVar11 = (undefined2)((uint)puVar10 >> 0x10);
LAB_1004c9c6:
    if (cVar1 != '\0') {
      local_12a = local_120;
      iVar2 = FUN_1004af40(local_140,CONCAT22(uVar11,local_13c));
      if ((iVar2 != 0) &&
         ((iVar3 = FUN_1004a120(), iVar3 != 0 ||
          (iVar2 = FUN_1004af80(iVar2,&local_140), iVar2 == 0)))) {
        piVar4 = operator_new(0x1a);
        piVar6 = &local_140;
        piVar8 = piVar4;
        for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
          *piVar8 = *piVar6;
          piVar6 = piVar6 + 1;
          piVar8 = piVar8 + 1;
        }
        *(short *)piVar8 = (short)*piVar6;
        local_144 = piVar4;
        local_124 = operator_new(0x111);
        local_4._0_1_ = 1;
        if (local_124 == (void *)0x0) {
          uVar5 = 0;
        }
        else {
          uVar5 = FUN_1001f1f0();
        }
        *(undefined4 *)((int)piVar4 + 0x16) = uVar5;
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_1001f880(local_120,local_120[0]);
        FUN_10049f50(&local_144);
      }
    }
    local_4 = 0xffffffff;
    FUN_1001f390();
    ExceptionList = local_c;
    return 0;
  }
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x1004c830 */

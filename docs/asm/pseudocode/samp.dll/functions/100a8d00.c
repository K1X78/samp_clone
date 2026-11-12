/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a8d00
 * Name: FUN_100a8d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_100a8d00(undefined4 *param_1,int param_2,float param_3,float param_4,float param_5)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  float10 fVar8;
  float in_stack_00000020;
  undefined1 uStack00000024;
  char in_stack_00000028;
  char in_stack_0000002c;
  undefined4 auStack_64 [6];
  undefined4 uStack_4c;
  undefined *puStack_48;
  int iStack_44;
  double local_40;
  double local_38;
  undefined8 local_30;
  int *piStack_28;
  int local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10116638;
  local_c = ExceptionList;
  puVar6 = param_1;
  ExceptionList = &local_c;
  for (iVar4 = 0xf; puVar6 = puVar6 + 1, iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
  }
  *(undefined2 *)((int)param_1 + 0xbe) = 0xffff;
  *(undefined2 *)(param_1 + 0x30) = 0xffff;
  *(undefined1 *)((int)param_1 + 0x1193) = uStack00000024;
  local_4 = 0;
  *param_1 = &PTR_FUN_1011ee6c;
  local_14 = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  *(undefined4 *)((int)param_1 + 0xc2) = 0;
  *(undefined4 *)((int)param_1 + 0xc6) = 0;
  *(undefined4 *)((int)param_1 + 0xca) = 0;
  *(undefined4 *)((int)param_1 + 0xce) = 0;
  *(undefined4 *)((int)param_1 + 0xd2) = 0;
  *(undefined4 *)((int)param_1 + 0xd6) = 0;
  *(undefined1 *)((int)param_1 + 0xda) = 1;
  *(undefined1 *)(param_1 + 0x6d) = 0;
  *(undefined1 *)(param_1 + 0x465) = 0;
  *(undefined1 *)((int)param_1 + 0xb9) = 0;
  *(undefined4 *)((int)param_1 + 0xba) = 0;
  *(undefined1 *)((int)param_1 + 0x53) = 0;
  *(undefined1 *)((int)param_1 + 0x1199) = 0;
  *(undefined1 *)((int)param_1 + 0x119a) = 0;
  *(undefined1 *)((int)param_1 + 0x119b) = 0;
  if ((in_stack_00000028 != '\0') || (in_stack_0000002c != '\0')) {
    *(undefined1 *)((int)param_1 + 0x1199) = 1;
    *(char *)((int)param_1 + 0x119a) = in_stack_00000028;
    *(char *)((int)param_1 + 0x119b) = in_stack_0000002c;
  }
  piStack_28 = (int *)param_2;
  local_30 = (double)CONCAT44(0x100a8de7,(undefined4)local_30);
  local_10 = param_1;
  iVar4 = FUN_100b4170();
  if (iVar4 == 0) {
    param_2 = 0x48c7;
  }
  local_30 = (double)CONCAT44(0x100a8dfd,(undefined4)local_30);
  piStack_28 = (int *)param_2;
  iVar4 = FUN_100a7630();
  local_30 = (double)CONCAT44(0x100a8e05,(undefined4)local_30);
  piStack_28 = (int *)param_2;
  bVar1 = FUN_100b5fe0();
  *(byte *)(param_1 + 0x1b) = bVar1 >> 1 & 1;
  if ((in_stack_00000020 != 0.0) && (iVar4 != 0)) {
    local_30 = (double)CONCAT44(0x100a8e29,(undefined4)local_30);
    piStack_28 = (int *)iVar4;
    iVar2 = FUN_100b40e0();
    if (iVar2 != 0) {
      piStack_28 = (int *)in_stack_00000020;
      local_30 = (double)CONCAT44(iVar4,0x100a8e38);
      FUN_100b4150();
    }
  }
  if (param_2 < 0) {
    piStack_28 = (int *)0x1;
    local_30 = 2.5134192409399454e-307;
    FUN_100aa0b0();
    DAT_0046977f = 0x75;
  }
  piStack_28 = &local_14;
  local_30 = (double)param_5;
  local_38 = (double)param_4;
  local_40 = (double)param_3;
  puStack_48 = &DAT_1011ede8;
  uStack_4c = 0x100a8e7c;
  iStack_44 = param_2;
  FUN_100b1f10();
  if (param_2 < 0) {
    DAT_0046977f = 0x7d;
  }
  if (local_14 != 0) {
    piStack_28 = (int *)local_14;
    local_30 = (double)CONCAT44(0x100a8e9c,(undefined4)local_30);
    iVar2 = FUN_100b3830();
    if (iVar2 != 0) {
      piStack_28 = (int *)local_14;
      local_30 = (double)CONCAT44(0x100a8eae,(undefined4)local_30);
      uVar3 = FUN_100b3830();
      param_1[0x10] = uVar3;
      param_1[0x11] = local_14;
      *(undefined1 *)(param_1 + 0x12) = 1;
      *(undefined1 *)((int)param_1 + 0x1af) = 0;
      param_1[0x6c] = 0;
      *(undefined1 *)((int)param_1 + 0x1b6) = 0;
      *(undefined4 *)((int)param_1 + 0x163) = 0;
      *(int *)((int)param_1 + 0x4e) = param_2;
      local_30 = (double)CONCAT44(0x100a8edd,(undefined4)local_30);
      piStack_28 = (int *)iVar4;
      iVar2 = FUN_100b40e0();
      if (iVar2 == 0) {
        *(undefined1 *)((int)param_1 + 0x52) = 0;
        param_1[0x15] = in_stack_00000020;
      }
      else {
        *(undefined1 *)((int)param_1 + 0x52) = 1;
        local_30 = (double)CONCAT44(0x100a8eeb,(undefined4)local_30);
        piStack_28 = (int *)iVar4;
        fVar8 = (float10)FUN_100b4160();
        param_1[0x15] = (float)fVar8;
      }
      local_30 = (double)CONCAT44(0x100a8f08,(undefined4)local_30);
      piStack_28 = (undefined4 *)((int)param_1 + 0x11b);
      FUN_1009e950();
      *(float *)((int)param_1 + 0x14f) = param_4;
      *(float *)((int)param_1 + 0x14b) = param_3;
      *(float *)((int)param_1 + 0x153) = param_5;
      puVar6 = (undefined4 *)((int)param_1 + 0x11b);
      puVar5 = auStack_64;
      for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
        *puVar5 = *puVar6;
        puVar6 = puVar6 + 1;
        puVar5 = puVar5 + 1;
      }
      FUN_1009ea00();
      piStack_28 = (int *)&stack0x00000014;
      local_30 = (double)CONCAT44(0x100a8f45,(undefined4)local_30);
      FUN_100a7c90();
      piStack_28 = (int *)0x100a8f4c;
      FUN_1009f560();
      piStack_28 = (int *)param_2;
      *(undefined1 *)((int)param_1 + 0x49) = 0;
      *(undefined4 *)((int)param_1 + 0x4a) = 0;
      local_30 = (double)CONCAT44(0x100a8f5c,(undefined4)local_30);
      fVar8 = (float10)FUN_100b5ea0();
      param_1[0x16] = (float)fVar8;
      piStack_28 = (int *)0x100a8f69;
      FUN_100a8bc0();
    }
  }
  *(undefined4 *)((int)param_1 + 0x118f) = 0;
  *(undefined4 *)((int)param_1 + 0x1c3) = 0;
  *(undefined4 *)((int)param_1 + 0x118b) = 0;
  *(undefined4 *)((int)param_1 + 0x1c7) = 0;
  *(undefined4 *)((int)param_1 + 0x1d3) = 0;
  *(undefined4 *)((int)param_1 + 0x1cb) = 0;
  *(undefined4 *)((int)param_1 + 0x1cf) = 0;
  *(undefined4 *)((int)param_1 + 0x2d7) = 0;
  *(undefined4 *)((int)param_1 + 0x1195) = 0;
  puVar6 = (undefined4 *)((int)param_1 + 0x35b);
  puVar5 = (undefined4 *)((int)param_1 + 0x217);
  _uStack00000024 = 0x10;
  do {
    puVar5[-0x10] = 0;
    *puVar5 = 0;
    puVar5[0x10] = 0;
    puVar5[0x20] = 0;
    puVar5[0x31] = 0;
    puVar5[0x41] = 0;
    puVar7 = puVar6;
    for (iVar4 = 0x35; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
    }
    *(undefined2 *)puVar7 = 0;
    *(undefined1 *)((int)puVar7 + 2) = 0;
    puVar5[0x3ad] = 0;
    puVar5[0x3bd] = 0;
    puVar5[0x3cd] = 0;
    puVar6 = (undefined4 *)((int)puVar6 + 0xd7);
    puVar5 = puVar5 + 1;
    _uStack00000024 = _uStack00000024 + -1;
  } while (_uStack00000024 != 0);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100a8d00 */

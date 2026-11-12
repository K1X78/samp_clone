/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b08e0
 * Name: FUN_100b08e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall
FUN_100b08e0(undefined4 *param_1,uint param_2,undefined4 param_3,float param_4,float param_5,
            float param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined **ppuVar5;
  undefined4 *puVar6;
  float10 fVar7;
  undefined *apuStack_a8 [5];
  uint *puStack_94;
  undefined4 *puStack_90;
  undefined *puStack_8c;
  uint *puStack_88;
  double local_84;
  undefined8 local_7c;
  undefined8 local_74;
  undefined4 *puStack_6c;
  undefined4 local_58;
  uint local_54;
  undefined4 *local_50;
  undefined4 local_4c [12];
  float local_1c;
  float local_18;
  float local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101166d8;
  local_c = ExceptionList;
  puVar4 = param_1;
  ExceptionList = &local_c;
  for (iVar2 = 0xf; puVar4 = puVar4 + 1, iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
  }
  local_54 = param_2 & 0xff;
  puStack_6c = &local_58;
  puStack_88 = &local_54;
  local_74 = (double)param_6;
  local_4 = 0;
  *param_1 = &PTR_FUN_1011f24c;
  local_7c = (double)param_5;
  local_58 = 0;
  local_84 = (double)param_4;
  puStack_8c = &DAT_1011eea0;
  param_1[0xa9] = 0;
  param_1[0x11] = 0;
  puStack_90 = (undefined4 *)0x100b0968;
  local_50 = param_1;
  FUN_100b1f10();
  puStack_90 = &local_58;
  puStack_94 = &local_54;
  apuStack_a8[4] = &DAT_1011eeb4;
  apuStack_a8[3] = (undefined *)0x100b097c;
  FUN_100b1f10();
  puStack_6c = (undefined4 *)local_58;
  param_1[0x11] = local_58;
  local_74 = (double)CONCAT44(0x100b098c,(undefined4)local_74);
  puStack_6c = (undefined4 *)FUN_100b3770();
  param_1[0xa9] = puStack_6c;
  param_1[0x10] = puStack_6c;
  *(char *)(param_1 + 0xac) = (char)param_2;
  local_74 = (double)CONCAT44(param_2,0x100b09a6);
  FUN_100b3f20();
  puStack_6c = (undefined4 *)0x1;
  local_74 = (double)CONCAT44(param_1[0x11],&DAT_1011f0d0);
  local_7c = (double)CONCAT44(0x100b09ba,(undefined4)local_7c);
  FUN_100b1f10();
  puStack_8c = (undefined *)param_1[0x11];
  local_7c = 0.0;
  local_84 = 2.12199579096527e-314;
  puStack_88 = (uint *)0x0;
  puStack_90 = (undefined4 *)&DAT_1011ef7c;
  puStack_94 = (uint *)0x100b09cd;
  FUN_100b1f10();
  apuStack_a8[4] = (undefined *)param_1[0x11];
  puStack_94 = (uint *)0x0;
  apuStack_a8[3] = &DAT_1011ef90;
  apuStack_a8[2] = (undefined *)0x100b09dc;
  FUN_100b1f10();
  if (DAT_102aca24 != 0) {
    uVar1 = *(undefined4 *)(*(int *)(DAT_102aca24 + 0x3d5) + 1);
    puStack_6c = (undefined4 *)0x0;
    local_74 = (double)CONCAT44(param_1[0x11],&DAT_1011f0e4);
    local_7c = (double)CONCAT44(0x100b0a00,(undefined4)local_7c);
    FUN_100b1f10();
    local_7c = (double)CONCAT44(uVar1,param_1[0x11]);
    local_84 = 2.889013024892312e-231;
    FUN_100b1f10();
  }
  puStack_6c = (undefined4 *)param_3;
  param_1[0xaa] = 1;
  param_1[0xab] = 1;
  *(undefined4 *)((int)param_1 + 0x2cd) = 0;
  *(undefined4 *)((int)param_1 + 0x2b9) = 0;
  param_1[0x12] = 0;
  *(undefined4 *)((int)param_1 + 0x2e6) = 0;
  *(undefined4 *)((int)param_1 + 0x2d2) = 0;
  *(undefined4 *)((int)param_1 + 0x2f2) = 0;
  *(undefined4 *)((int)param_1 + 0x2de) = 0;
  *(undefined4 *)((int)param_1 + 0x2e2) = 0;
  local_74 = (double)CONCAT44(0x100b0a57,(undefined4)local_74);
  FUN_100afb50();
  if (param_1[0xa9] != 0) {
    puStack_6c = (undefined4 *)param_1[0x11];
    local_74 = (double)CONCAT44(0x100b0a68,(undefined4)local_74);
    iVar2 = FUN_100b3770();
    if (iVar2 != 0) {
      puStack_6c = (undefined4 *)param_7;
      local_74 = (double)CONCAT44(0x100b0a79,(undefined4)local_74);
      fVar7 = (float10)FUN_100b54b0();
      *(float *)(param_1[0xa9] + 0x55c) = (float)fVar7;
      local_74 = (double)CONCAT44(param_7,0x100b0a8b);
      fVar7 = (float10)FUN_100b54b0();
      *(float *)(param_1[0xa9] + 0x558) = (float)fVar7;
    }
  }
  puStack_6c = (undefined4 *)(uint)*(byte *)(param_1 + 0xac);
  local_74 = (double)CONCAT44(0x100b0aa7,(undefined4)local_74);
  FUN_100a7120();
  *(undefined4 *)((int)param_1 + 0x2c1) = 0;
  *(undefined4 *)((int)param_1 + 0x2c5) = 0;
  *(undefined4 *)((int)param_1 + 0x2c9) = 0;
  *(undefined1 *)((int)param_1 + 0x2f6) = 0;
  *(undefined1 *)((int)param_1 + 0x2f7) = 0;
  *(undefined1 *)(param_1 + 0xbe) = 0;
  *(undefined4 *)((int)param_1 + 0x329) = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x2fd);
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  puStack_6c = local_4c;
  local_74 = (double)CONCAT44(0x100b0aef,(undefined4)local_74);
  FUN_1009e950();
  local_1c = param_4;
  local_14 = param_6 + 0.15;
  local_18 = param_5;
  puVar4 = local_4c;
  ppuVar5 = apuStack_a8;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *ppuVar5 = (undefined *)*puVar4;
    puVar4 = puVar4 + 1;
    ppuVar5 = ppuVar5 + 1;
  }
  FUN_1009ea00();
  puVar4 = param_1 + 0x1d;
  puVar3 = param_1 + 0x9f;
  param_2 = 10;
  do {
    puVar3[-0x8c] = 0;
    *puVar3 = 0;
    puVar6 = puVar4;
    for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 0xd;
    param_2 = param_2 + -1;
  } while (param_2 != 0);
  *(undefined4 *)((int)param_1 + 0x2f9) = 0;
  *(undefined4 *)((int)param_1 + 0x329) = 0;
  puVar4 = (undefined4 *)((int)param_1 + 0x2fd);
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100b08e0 */

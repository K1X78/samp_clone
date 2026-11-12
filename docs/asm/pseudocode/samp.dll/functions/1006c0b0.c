/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006c0b0
 * Name: FUN_1006c0b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1006c0b0(undefined4 *param_1,int param_2,undefined4 param_3,float *param_4,float param_5)

{
  float *pfVar1;
  short sVar2;
  int iVar3;
  int iVar4;
  void *pvVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  float10 fVar10;
  int aiStack_c0 [10];
  undefined1 *local_98;
  int local_94;
  undefined4 uStack_90;
  undefined4 *local_8c;
  float fStack_88;
  float local_58;
  undefined4 local_4c [15];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011612b;
  local_c = ExceptionList;
  puVar6 = (undefined4 *)0x0;
  fStack_88 = 0.0;
  local_8c = (undefined4 *)0x100;
  uStack_90 = 0x100;
  local_94 = 0x1006c0fd;
  ExceptionList = &local_c;
  iVar3 = FUN_100b12d0();
  local_98 = (undefined1 *)0x1006c109;
  local_94 = iVar3;
  iVar4 = FUN_100b1320();
  if ((iVar3 == 0) || (iVar4 == 0)) {
    ExceptionList = local_c;
    return 0;
  }
  if ((((param_2 == 0x55d) || (param_2 == 0xc2e)) || (param_2 == 0xde0)) || (param_2 == 0xde1)) {
    param_2 = 0x48c7;
  }
  fStack_88 = 2.6575826e-29;
  pvVar5 = operator_new(0x119c);
  local_4 = 0;
  if (pvVar5 != (void *)0x0) {
    fStack_88 = 0.0;
    local_8c = (undefined4 *)0x0;
    uStack_90 = 0;
    aiStack_c0[9] = 0;
    aiStack_c0[8] = 0x42480000;
    local_98 = (undefined1 *)0x0;
    aiStack_c0[7] = 0;
    aiStack_c0[6] = 0;
    local_94 = 0;
    aiStack_c0[4] = 0x1006c1a0;
    aiStack_c0[5] = param_2;
    puVar6 = (undefined4 *)FUN_100a8d00();
  }
  local_4 = 0xffffffff;
  if ((puVar6 == (undefined4 *)0x0) || (puVar6[0x10] == 0)) {
    ExceptionList = local_c;
    return iVar4;
  }
  fStack_88 = 2.657611e-29;
  fVar10 = (float10)FUN_100b5ea0();
  puVar7 = local_4c;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  param_5 = (float)(((float10)-0.1 - fVar10 * (float10)2.25) * (float10)param_5);
  fStack_88 = 2.657627e-29;
  FUN_1009e950();
  pfVar1 = param_4;
  if (param_2 != 0x48c7) {
    if (*param_4 != 0.0) {
      local_8c = local_4c;
      fStack_88 = 0.0;
      uStack_90 = 0x1006c22f;
      FUN_100b52d0();
    }
    if (pfVar1[1] != 0.0) {
      local_8c = local_4c;
      fStack_88 = 1.4013e-45;
      uStack_90 = 0x1006c254;
      FUN_100b52d0();
    }
    if (pfVar1[2] == 0.0) goto LAB_1006c27c;
  }
  local_8c = local_4c;
  fStack_88 = 2.8026e-45;
  uStack_90 = 0x1006c279;
  FUN_100b52d0();
LAB_1006c27c:
  puVar7 = local_4c;
  piVar9 = aiStack_c0;
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar9 = *puVar7;
    puVar7 = puVar7 + 1;
    piVar9 = piVar9 + 1;
  }
  FUN_1009fb40();
  fStack_88 = 2.657677e-29;
  FUN_1009ed30();
  fStack_88 = param_5;
  local_8c = (undefined4 *)-local_58;
  uStack_90 = 0x1006c2cc;
  FUN_1009ee80();
  iVar8 = 0;
  iVar4 = FUN_1009f8a0();
  if (iVar4 == 0) {
    fStack_88 = 2.657699e-29;
    iVar8 = FUN_1009ed90();
  }
  local_8c = (undefined4 *)*param_1;
  uStack_90 = 0x1006c2fc;
  fStack_88 = (float)iVar3;
  FUN_100b15b0();
  uStack_90 = *param_1;
  local_94 = 0x1006c305;
  FUN_100b1840();
  aiStack_c0[9] = *param_1;
  local_94 = 3;
  local_98 = (undefined1 *)&param_3;
  aiStack_c0[8] = 0x1006c318;
  FUN_100b14f0();
  aiStack_c0[8] = *param_1;
  aiStack_c0[7] = 0x1006c321;
  FUN_100b1520();
  aiStack_c0[7] = param_1[2];
  aiStack_c0[6] = 0x1006c32a;
  FUN_100b17c0();
  aiStack_c0[6] = 1;
  aiStack_c0[5] = 6;
  aiStack_c0[4] = 0x1006c333;
  FUN_100c54f0();
  aiStack_c0[4] = 1;
  aiStack_c0[3] = 8;
  aiStack_c0[2] = 0x1006c33c;
  FUN_100c54f0();
  aiStack_c0[2] = 2;
  aiStack_c0[1] = 7;
  aiStack_c0[0] = 0x1006c345;
  FUN_100c54f0();
  aiStack_c0[0] = 0;
  FUN_100c54f0(0xe);
  iVar4 = FUN_1009f8a0();
  if (iVar4 != 0) {
    FUN_1009f960();
  }
  fStack_88 = 2.657738e-29;
  FUN_100a7630();
  fStack_88 = 2.6577406e-29;
  FUN_100b1550();
  fStack_88 = (float)param_1[2];
  local_8c = (undefined4 *)0x1006c37b;
  FUN_100b1800();
  fStack_88 = 2.6577466e-29;
  (**(code **)*puVar6)();
  if (iVar8 != 0) {
    fStack_88 = (float)param_2;
    local_8c = (undefined4 *)0x1006c390;
    sVar2 = FUN_100b4300();
    if (sVar2 == 0) {
      fStack_88 = 0.0;
      local_8c = (undefined4 *)param_2;
      uStack_90 = 0x1006c3a3;
      FUN_100a07e0();
    }
  }
  ExceptionList = pvStack_10;
  return iVar3;
}


/* END FUNCTION 0x1006c0b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a9240
 * Name: FUN_100a9240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100a9240(int param_1,float param_2)

{
  ushort uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ushort extraout_var;
  undefined4 *puVar7;
  undefined4 *puVar8;
  float10 fVar9;
  undefined4 auStack_fc [8];
  undefined4 uStack_dc;
  int iStack_d8;
  undefined4 *puStack_d4;
  int iStack_d0;
  int iStack_cc;
  float *local_c8;
  float *local_c4;
  float *local_c0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  undefined4 *local_90;
  float local_8c;
  float local_88;
  float local_84;
  undefined4 local_80 [12];
  float local_50;
  float local_4c;
  float local_48;
  undefined4 local_40 [16];
  
  if (((*(int *)(param_1 + 0x118b) != 0) || (300.0 < *(float *)(param_1 + 0x54))) ||
     (*(char *)(param_1 + 0x1199) != '\0')) {
    local_c0 = (float *)0x100a92d5;
    iVar5 = FUN_100a9150();
  }
  else {
    local_c0 = (float *)0x100a9275;
    iVar5 = FUN_1009f8a0();
    if (iVar5 == 0) {
      local_c0 = (float *)0x100a9284;
      FUN_10001010();
      local_c0 = (float *)0x100a928b;
      iVar6 = FUN_100aba90();
      iVar5 = 0;
      if (iVar6 != 0) {
        local_c0 = (float *)0x100a9296;
        fVar9 = (float10)FUN_1009efd0();
        iVar5 = (uint)extraout_var << 0x10;
        if (fVar9 < (float10)*(float *)(param_1 + 0x54) - (float10)30.0) {
          local_c0 = *(float **)(param_1 + 0x4e);
          local_c4 = (float *)0x100a92b7;
          iVar5 = FUN_100a07b0();
          if (iVar5 == 0) {
            local_c4 = *(float **)(param_1 + 0x4e);
            local_c0 = (float *)0x2;
            local_c8 = (float *)0x100a92cc;
            iVar5 = FUN_100a0780();
          }
        }
      }
    }
  }
  uVar1 = *(ushort *)(param_1 + 0xbe);
  if (uVar1 != 0xffff) {
    if (DAT_102aca24 == 0) {
      return;
    }
    iVar5 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
    if (iVar5 == 0) {
      return;
    }
    if (1999 < uVar1) {
      return;
    }
    if (*(int *)(iVar5 + 0x3074 + (uint)uVar1 * 4) == 0) {
      return;
    }
    iVar5 = *(int *)(iVar5 + 0x1134 + (uint)uVar1 * 4);
    if (iVar5 == 0) {
      return;
    }
    local_c0 = (float *)0x100a9334;
    iVar6 = FUN_1009f210();
    if (iVar6 == 0) {
      return;
    }
    local_c4 = (float *)0x100a9344;
    local_c0 = (float *)iVar5;
    FUN_100a7e30();
    return;
  }
  local_c0 = (float *)CONCAT22((short)((uint)iVar5 >> 0x10),*(short *)(param_1 + 0xc0));
  if (*(short *)(param_1 + 0xc0) != -1) {
    if (DAT_102aca24 == 0) {
      return;
    }
    if (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) == 0) {
      return;
    }
    local_c4 = (float *)0x100a9383;
    local_c0 = (float *)FUN_10002e10();
    if (local_c0 == (float *)0x0) {
      return;
    }
    local_c4 = (float *)0x100a9393;
    FUN_100a7eb0();
    return;
  }
  if ((*(byte *)(param_1 + 0x1af) & 1) == 0) {
    return;
  }
  local_c0 = (float *)local_80;
  local_c4 = (float *)0x100a93d1;
  FUN_1009e950();
  local_98 = param_2 * *(float *)(param_1 + 0x1b0);
  local_c0 = (float *)local_80;
  local_c4 = (float *)0x100a93ee;
  fVar9 = (float10)FUN_100a7bb0();
  local_9c = (float)fVar9;
  local_c0 = (float *)0x100a93f7;
  iVar5 = FUN_1002e2b0();
  *(int *)(param_1 + 0x163) = iVar5;
  local_88 = local_4c;
  local_a0 = (float)(iVar5 - *(int *)(param_1 + 0x15f)) * 0.001 * *(float *)(param_1 + 0x1b0);
  local_8c = local_50;
  local_84 = local_48;
  local_94 = *(float *)(param_1 + 0x15b) - local_9c;
  if (local_9c <= local_98) {
    local_c8 = (float *)0x0;
    local_c4 = (float *)0x0;
    local_c0 = (float *)0x0;
    iStack_cc = 0x100a9478;
    FUN_1009eb50();
    local_c8 = (float *)0x0;
    local_c4 = (float *)0x0;
    local_c0 = (float *)0x0;
    iStack_cc = 0x100a948c;
    FUN_1009eca0();
    local_48 = (float)*(undefined4 *)(param_1 + 0x113);
    local_50 = (float)*(undefined4 *)(param_1 + 0x10b);
    local_4c = (float)*(undefined4 *)(param_1 + 0x10f);
    if (*(char *)(param_1 + 0x1b5) != '\0') {
      local_c0 = (float *)local_80;
      local_c4 = (float *)(param_1 + 0x167);
      local_c8 = (float *)0x100a94c5;
      thunk_FUN_100b4e40();
    }
    puVar7 = local_80;
    puVar8 = auStack_fc;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *puVar8 = *puVar7;
      puVar7 = puVar7 + 1;
      puVar8 = puVar8 + 1;
    }
    FUN_1009fb40();
    local_c0 = (float *)0x100a94e6;
    FUN_100a7c20();
    return;
  }
  if (param_2 <= 0.0) {
    return;
  }
  fVar2 = 1.0 / (local_9c / local_98);
  fVar3 = (*(float *)(param_1 + 0x10b) - local_50) * fVar2 + local_50;
  fVar4 = (*(float *)(param_1 + 0x10f) - local_4c) * fVar2 + local_4c;
  fVar2 = (*(float *)(param_1 + 0x113) - local_48) * fVar2 + local_48;
  local_98 = local_9c / *(float *)(param_1 + 0x15b);
  local_90 = (undefined4 *)(1.0 - local_98);
  param_2 = 1.0 / param_2;
  local_ac = (fVar3 - local_50) * param_2 * 0.02;
  local_a8 = (fVar4 - local_4c) * param_2 * 0.02;
  local_a4 = (fVar2 - local_48) * param_2 * 0.02;
  local_c8 = (float *)0x100a95eb;
  local_c4 = (float *)local_a0;
  local_c0 = (float *)local_94;
  local_50 = fVar3;
  local_4c = fVar4;
  local_48 = fVar2;
  fVar9 = (float10)FUN_100b44b0();
  if ((float10)0.1 < fVar9) {
    if (local_a0 <= local_94) {
      if (local_94 <= local_a0) goto LAB_100a965f;
      fVar2 = 1.0 - (local_94 - local_a0) * 0.1;
    }
    else {
      fVar2 = (local_a0 - local_94) * 0.1 + 1.0;
    }
    local_ac = local_ac * fVar2;
    local_a8 = local_a8 * fVar2;
    local_a4 = fVar2 * local_a4;
  }
LAB_100a965f:
  local_c8 = (float *)local_ac;
  local_c4 = (float *)local_a8;
  local_c0 = (float *)local_a4;
  iStack_cc = 0x100a967f;
  FUN_1009eb50();
  local_c0 = (float *)0x100a9686;
  FUN_1009fba0();
  if (*(char *)(param_1 + 0x1b5) == '\0') {
    local_c0 = (float *)local_40;
    local_c4 = (float *)0x100a978d;
    FUN_1009e950();
  }
  else {
    local_c0 = &local_9c;
    local_c4 = &local_a0;
    local_c8 = &local_94;
    iStack_cc = 0x100a96aa;
    FUN_1009f730();
    local_c0 = (float *)(*(float *)(param_1 + 0x19f) - local_98 * *(float *)(param_1 + 0x1ab));
    local_c4 = (float *)local_9c;
    local_c8 = (float *)0x100a96cf;
    local_98 = (float)local_c0;
    fVar9 = (float10)FUN_100a7bf0();
    local_a4 = (float)(fVar9 * (float10)0.01);
    if (local_a4 <= 0.001) {
      if (local_a4 < -0.001) {
        local_a4 = -0.001;
      }
    }
    else {
      local_a4 = 0.001;
    }
    local_c8 = (float *)0x0;
    local_c4 = (float *)0x0;
    local_c0 = (float *)local_a4;
    iStack_cc = 0x100a973d;
    FUN_1009eca0();
    local_c0 = (float *)local_40;
    local_c4 = (float *)0x100a9749;
    FUN_1009e950();
    local_c0 = (float *)local_90;
    local_c4 = (float *)(param_1 + 0x167);
    local_c8 = (float *)(param_1 + 0x187);
    param_1 = param_1 + 0x177;
    iStack_d0 = 0x100a9768;
    iStack_cc = param_1;
    FUN_100b4fc0();
    puStack_d4 = (undefined4 *)0x100a976e;
    iStack_d0 = param_1;
    FUN_100b5040();
    puStack_d4 = local_40;
    uStack_dc = 0x100a977c;
    iStack_d8 = param_1;
    thunk_FUN_100b4e40();
  }
  puVar7 = local_40;
  puVar8 = auStack_fc;
  for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar8 = *puVar7;
    puVar7 = puVar7 + 1;
    puVar8 = puVar8 + 1;
  }
  FUN_1009fb40();
  return;
}


/* END FUNCTION 0x100a9240 */

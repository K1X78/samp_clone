/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014ec0
 * Name: FUN_10014ec0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_10014ec0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  float10 fVar4;
  undefined4 auStack_9c [9];
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float *local_60;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  if (*(int *)(param_1 + 8) == 0) {
    return;
  }
  local_60 = (float *)local_40;
  local_64 = 2.550159e-29;
  FUN_1009e950();
  local_60 = (float *)0x10014efd;
  iVar1 = FUN_1009f210();
  if (iVar1 == 0) {
    local_10 = (float)*(undefined4 *)(param_1 + 0x138);
    local_c = (float)*(undefined4 *)(param_1 + 0x13c);
    local_8 = (float)*(undefined4 *)(param_1 + 0x140);
    puVar2 = local_40;
    puVar3 = auStack_9c;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    FUN_1009ea00();
    return;
  }
  local_64 = *(float *)(param_1 + 0x138);
  local_60 = (float *)local_10;
  local_68 = 2.550188e-29;
  fVar4 = (float10)FUN_100b44b0();
  *(float *)(param_1 + 400) = (float)fVar4;
  uStack_6c = *(undefined4 *)(param_1 + 0x13c);
  local_68 = local_c;
  fStack_70 = 2.550195e-29;
  fVar4 = (float10)FUN_100b44b0();
  *(float *)(param_1 + 0x194) = (float)fVar4;
  uStack_74 = *(undefined4 *)(param_1 + 0x140);
  fStack_70 = local_8;
  uStack_78 = 0x10014f83;
  fVar4 = (float10)FUN_100b44b0();
  *(float *)(param_1 + 0x198) = (float)fVar4;
  if (((*(float *)(param_1 + 400) < 0.05 != (*(float *)(param_1 + 400) == 0.05)) &&
      (*(float *)(param_1 + 0x194) < 0.05 != (*(float *)(param_1 + 0x194) == 0.05))) &&
     (fVar4 < (float10)0.05 != (fVar4 == (float10)0.05))) {
    return;
  }
  local_50 = 0.5;
  local_60 = (float *)0x10014fd7;
  iVar1 = FUN_100b6ed0();
  if (iVar1 != 4) {
    local_60 = (float *)0x10014fe4;
    iVar1 = FUN_100b6ed0();
    if (iVar1 != 5) {
      local_60 = (float *)0x10014ff1;
      iVar1 = FUN_100b6ed0();
      if (iVar1 != 3) goto LAB_10014ffe;
    }
  }
  local_50 = 2.0;
LAB_10014ffe:
  if (((*(float *)(param_1 + 400) <= 8.0) && (*(float *)(param_1 + 0x194) <= 8.0)) &&
     (*(float *)(param_1 + 0x198) <= local_50)) {
    local_60 = &local_4c;
    local_64 = 2.550263e-29;
    FUN_1009eb20();
    if (0.05 < *(float *)(param_1 + 400)) {
      local_4c = (*(float *)(param_1 + 0x138) - local_10) * _DAT_1013c49c + local_4c;
    }
    if (0.05 < *(float *)(param_1 + 0x194)) {
      local_48 = (*(float *)(param_1 + 0x13c) - local_c) * _DAT_1013c49c + local_48;
    }
    if (0.05 < *(float *)(param_1 + 0x198)) {
      local_44 = (*(float *)(param_1 + 0x140) - local_8) * _DAT_1013c49c + local_44;
    }
    local_60 = (float *)0x0;
    local_64 = local_4c;
    local_68 = 2.5503053e-29;
    fVar4 = (float10)FUN_100b44b0();
    if (fVar4 <= (float10)0.01) {
      local_60 = (float *)0x0;
      local_64 = local_48;
      local_68 = 2.5503137e-29;
      fVar4 = (float10)FUN_100b44b0();
      if (fVar4 <= (float10)0.01) {
        local_60 = (float *)0x0;
        local_64 = local_44;
        local_68 = 2.550322e-29;
        fVar4 = (float10)FUN_100b44b0();
        if (fVar4 <= (float10)0.01) {
          return;
        }
      }
    }
    local_68 = local_4c;
    local_64 = local_48;
    local_60 = (float *)local_44;
    uStack_6c = 0x10015148;
    FUN_1009eb50();
    return;
  }
  local_10 = (float)*(undefined4 *)(param_1 + 0x138);
  local_c = (float)*(undefined4 *)(param_1 + 0x13c);
  local_8 = (float)*(undefined4 *)(param_1 + 0x140);
  puVar2 = local_40;
  puVar3 = auStack_9c;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1009ea00();
  local_68 = *(float *)(param_1 + 0x144);
  local_64 = *(float *)(param_1 + 0x148);
  local_60 = *(float **)(param_1 + 0x14c);
  uStack_6c = 0x100151ae;
  FUN_1009eb50();
  return;
}


/* END FUNCTION 0x10014ec0 */

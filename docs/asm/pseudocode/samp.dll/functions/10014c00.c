/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10014c00
 * Name: FUN_10014c00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10014c00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_98 [11];
  undefined4 uStack_6c;
  undefined4 uStack_68;
  float local_64;
  float local_60;
  float *local_5c;
  float local_4c;
  float local_48;
  undefined4 local_44;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  
  if (*(int *)(param_1 + 4) == 0) {
    return;
  }
  local_5c = (float *)local_40;
  local_60 = 2.54994e-29;
  FUN_1009e950();
  local_5c = (float *)0x10014c25;
  iVar1 = FUN_1009f210();
  uVar2 = *(undefined4 *)(param_1 + 0x120);
  if (iVar1 != 0) {
    local_5c = (float *)local_10;
    local_64 = 2.54995e-29;
    local_60 = (float)uVar2;
    fVar5 = (float10)FUN_100b44b0();
    *(float *)(param_1 + 400) = (float)fVar5;
    uStack_68 = *(undefined4 *)(param_1 + 0x124);
    local_64 = local_c;
    uStack_6c = 0x10014c55;
    fVar5 = (float10)FUN_100b44b0();
    *(float *)(param_1 + 0x194) = (float)fVar5;
    if ((*(float *)(param_1 + 400) < 0.01 != (*(float *)(param_1 + 400) == 0.01)) &&
       (fVar5 < (float10)0.01 != (fVar5 == (float10)0.01))) {
      return;
    }
    if ((*(float *)(param_1 + 400) <= 2.0) && (fVar5 <= (float10)2.0)) {
      local_5c = &local_4c;
      local_60 = 2.5499863e-29;
      FUN_1009eb20();
      if (0.001 < *(float *)(param_1 + 400)) {
        local_4c = (*(float *)(param_1 + 0x120) - local_10) * 0.1 + local_4c;
      }
      if (0.001 < *(float *)(param_1 + 0x194)) {
        local_48 = (*(float *)(param_1 + 0x124) - local_c) * 0.1 + local_48;
      }
      local_64 = local_4c;
      local_60 = local_48;
      local_5c = (float *)local_44;
      uStack_68 = 0x10014d2e;
      FUN_1009eb50();
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x120);
  }
  local_10 = (float)uVar2;
  local_c = (float)*(undefined4 *)(param_1 + 0x124);
  puVar3 = local_40;
  puVar4 = auStack_98;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  FUN_1009ea00();
  return;
}


/* END FUNCTION 0x10014c00 */

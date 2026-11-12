/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100149f0
 * Name: FUN_100149f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_100149f0(int param_1)

{
  float fVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined4 auStack_9c [9];
  undefined4 uStack_78;
  undefined4 uStack_74;
  float fStack_70;
  undefined4 uStack_6c;
  float local_68;
  float local_64;
  float *local_60;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 4) != 0) {
    local_60 = (float *)local_40;
    local_64 = 2.549781e-29;
    FUN_1009e950();
    local_60 = (float *)0x10014a15;
    iVar2 = FUN_1009f210();
    if (iVar2 == 0) {
      local_10 = (float)*(undefined4 *)(param_1 + 0x120);
      local_c = (float)*(undefined4 *)(param_1 + 0x124);
      local_8 = (float)*(undefined4 *)(param_1 + 0x128);
    }
    else {
      local_64 = *(float *)(param_1 + 0x120);
      local_60 = (float *)local_10;
      local_68 = 2.5498003e-29;
      fVar5 = (float10)FUN_100b44b0();
      *(float *)(param_1 + 400) = (float)fVar5;
      uStack_6c = *(undefined4 *)(param_1 + 0x124);
      local_68 = local_c;
      fStack_70 = 2.5498073e-29;
      fVar5 = (float10)FUN_100b44b0();
      *(float *)(param_1 + 0x194) = (float)fVar5;
      uStack_74 = *(undefined4 *)(param_1 + 0x128);
      fStack_70 = local_8;
      uStack_78 = 0x10014a7b;
      fVar5 = (float10)FUN_100b44b0();
      fVar1 = (float)fVar5;
      *(float *)(param_1 + 0x198) = fVar1;
      if (((*(float *)(param_1 + 400) < 1e-05 != (*(float *)(param_1 + 400) == 1e-05)) &&
          (*(float *)(param_1 + 0x194) < 1e-05 != (*(float *)(param_1 + 0x194) == 1e-05))) &&
         (fVar1 < 1e-05 != (fVar1 == 1e-05))) {
        return;
      }
      if (((*(float *)(param_1 + 400) <= 2.0) && (*(float *)(param_1 + 0x194) <= 2.0)) &&
         (fVar1 <= 1.0)) {
        local_60 = &local_4c;
        local_64 = 2.549861e-29;
        FUN_1009eb20();
        if (1e-05 < *(float *)(param_1 + 400)) {
          local_4c = (*(float *)(param_1 + 0x120) - local_10) * _DAT_1013c498 + local_4c;
        }
        if (1e-05 < *(float *)(param_1 + 0x194)) {
          local_48 = (*(float *)(param_1 + 0x124) - local_c) * _DAT_1013c498 + local_48;
        }
        if (1e-05 < *(float *)(param_1 + 0x198)) {
          local_44 = (*(float *)(param_1 + 0x128) - local_8) * _DAT_1013c498 + local_44;
        }
        local_68 = local_4c;
        local_64 = local_48;
        local_60 = (float *)local_44;
        uStack_6c = 0x10014bb5;
        FUN_1009eb50();
        return;
      }
      local_10 = (float)*(undefined4 *)(param_1 + 0x120);
      local_c = (float)*(undefined4 *)(param_1 + 0x124);
      local_8 = (float)*(undefined4 *)(param_1 + 0x128);
    }
    puVar3 = local_40;
    puVar4 = auStack_9c;
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + 1;
      puVar4 = puVar4 + 1;
    }
    FUN_1009ea00();
  }
  return;
}


/* END FUNCTION 0x100149f0 */

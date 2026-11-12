/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f260
 * Name: FUN_1009f260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_1009f260(int param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 auStack_a4 [12];
  undefined4 uStack_74;
  float local_70;
  float local_6c;
  undefined4 *local_68;
  float local_58;
  float local_54;
  undefined4 *local_50;
  undefined4 local_40 [12];
  float local_10;
  float local_c;
  float local_8;
  
  if (*(int *)(param_1 + 0x40) == 0) {
    return 0;
  }
  local_68 = local_40;
  local_6c = 2.7205292e-29;
  FUN_1009e950();
  iVar1 = *(int *)(param_1 + 0x40);
  local_58 = *(float *)(iVar1 + 0x44);
  local_54 = *(float *)(iVar1 + 0x48);
  local_50 = *(undefined4 **)(iVar1 + 0x4c);
  if (local_10 <= param_2) {
    if (param_3 <= local_10) {
      if (local_c <= param_4) {
        if (param_5 <= local_c) {
          return 0;
        }
        if (local_54 != 0.0) {
          local_54 = 0.2;
          local_50 = (undefined4 *)0x3dcccccd;
        }
        local_6c = local_54;
        local_68 = local_50;
        uStack_74 = 0x1009f3b3;
        local_70 = local_58;
        FUN_1009eb50();
        goto LAB_1009f3b3;
      }
      if (local_54 != 0.0) {
        local_54 = -0.2;
        goto LAB_1009f2bf;
      }
    }
    else if (local_58 != 0.0) {
      local_58 = 0.2;
      goto LAB_1009f2bf;
    }
  }
  else if (local_58 != 0.0) {
    local_58 = -0.2;
LAB_1009f2bf:
    local_50 = (undefined4 *)0x3dcccccd;
  }
  *(float *)(*(int *)(param_1 + 0x40) + 0x44) = local_58;
  *(float *)(*(int *)(param_1 + 0x40) + 0x48) = local_54;
  *(undefined4 **)(*(int *)(param_1 + 0x40) + 0x4c) = local_50;
LAB_1009f3b3:
  local_8 = local_8 + 0.04;
  puVar2 = local_40;
  puVar3 = auStack_a4;
  for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_1009ea00();
  return 1;
}


/* END FUNCTION 0x1009f260 */

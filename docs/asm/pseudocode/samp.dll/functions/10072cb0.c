/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072cb0
 * Name: FUN_10072cb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10072cb0(int param_1,int param_2,float param_3)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  float10 fVar5;
  undefined1 local_64 [4];
  undefined1 local_60 [4];
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  float local_4c;
  float local_48;
  float local_44;
  undefined4 local_40 [12];
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  local_4c = 0.0;
  local_48 = 0.0;
  local_44 = 0.0;
  uVar1 = *(ushort *)(param_1 + 0x88);
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  if (0x834 < uVar1) {
    return;
  }
  if (*(int *)(iVar2 + 4 + (uint)uVar1 * 4) == 0) {
    return;
  }
  if (*(int *)(iVar2 + 0x20d4 + (uint)uVar1 * 4) == 0) {
    return;
  }
  FUN_1009f730(local_5c,local_60,local_64);
  FUN_1009f5c0();
  puVar3 = (undefined4 *)(param_1 + 0xc3);
  puVar4 = local_40;
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  local_54 = local_c;
  local_58 = local_10;
  local_50 = local_8;
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (*(int *)(param_1 + 0x7c) != 1) goto LAB_10072edd;
      fVar5 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(param_1 + 0x92));
      *(float *)(param_1 + 0x92) = (float)fVar5;
LAB_10072ed6:
      FUN_100a7c90(param_1 + 0x92);
      goto LAB_10072edd;
    }
    local_4c = param_3;
  }
  else if (param_2 == 1) {
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (*(int *)(param_1 + 0x7c) != 1) goto LAB_10072edd;
      fVar5 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(param_1 + 0x96));
      *(float *)(param_1 + 0x96) = (float)fVar5;
      goto LAB_10072ed6;
    }
    local_48 = param_3;
  }
  else {
    if (param_2 != 2) goto LAB_10072edd;
    if (*(int *)(param_1 + 0x7c) != 0) {
      if (*(int *)(param_1 + 0x7c) != 1) goto LAB_10072edd;
      fVar5 = (float10)FUN_100b44e0(param_3 * 10.0 + *(float *)(param_1 + 0x9a));
      *(float *)(param_1 + 0x9a) = (float)fVar5;
      goto LAB_10072ed6;
    }
    local_44 = param_3;
  }
  FUN_100b4850(&local_58,local_40,&local_4c);
  local_c = local_54;
  local_10 = local_58;
  local_8 = local_50;
  FUN_100a97c0(local_58,local_54,local_50,0x3f800000,0xc47a0000,0xc47a0000,0xc47a0000);
LAB_10072edd:
  FUN_10072350(2);
  puVar3 = local_40;
  puVar4 = (undefined4 *)(param_1 + 0xc3);
  for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  return;
}


/* END FUNCTION 0x10072cb0 */

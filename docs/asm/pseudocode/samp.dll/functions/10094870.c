/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10094870
 * Name: FUN_10094870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10094870(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined1 local_50 [76];
  
  FUN_10093810(param_2,param_3);
  local_6c = 0;
  local_68 = 0x3f800000;
  local_64 = 0;
  D3DXMatrixLookAtLH(local_50,param_2,param_3,&local_6c);
  D3DXQuaternionRotationMatrix(&local_60,local_50);
  *(undefined4 *)(param_1 + 0x380) = local_68;
  *(undefined4 *)(param_1 + 900) = local_64;
  *(undefined4 *)(param_1 + 0x388) = local_60;
  *(undefined4 *)(param_1 + 0x38c) = uStack_5c;
  fVar1 = *param_3;
  fVar2 = *param_2;
  fVar3 = param_3[1];
  fVar4 = param_2[1];
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  *(undefined4 *)(param_1 + 0x4a2) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x4a6) = 0x7f7fffff;
  *(undefined1 *)(param_1 + 0x4aa) = 1;
  fVar1 = SQRT((fVar1 - fVar2) * (fVar1 - fVar2) +
               (fVar3 - fVar4) * (fVar3 - fVar4) + (fVar5 - fVar6) * (fVar5 - fVar6));
  *(float *)(param_1 + 0x49a) = fVar1;
  *(float *)(param_1 + 0x49e) = fVar1;
  return;
}


/* END FUNCTION 0x10094870 */

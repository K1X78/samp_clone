/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009c4f0
 * Name: FUN_1009c4f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009c4f0(float *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float local_7c;
  float local_78;
  float local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  float local_58;
  float local_54;
  float local_50;
  undefined1 local_4c [4];
  float local_48;
  float local_44;
  undefined1 local_40 [8];
  float local_38;
  float local_28;
  float local_18;
  
  local_58 = param_1[3];
  local_54 = param_1[4];
  local_50 = param_1[5];
  local_64 = param_2;
  local_60 = param_3;
  local_5c = param_4;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0x3f800000;
  D3DXMatrixLookAtRH(local_40,&local_58,&local_64,&local_70);
  local_7c = -local_38;
  local_78 = -local_28;
  local_74 = -local_18;
  FUN_100b6440(&local_7c,local_4c);
  *param_1 = local_78;
  param_1[2] = local_74;
  param_1[9] = local_48;
  param_1[0xb] = local_44;
  return;
}


/* END FUNCTION 0x1009c4f0 */

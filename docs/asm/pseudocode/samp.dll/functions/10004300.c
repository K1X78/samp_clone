/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10004300
 * Name: FUN_10004300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10004300(short *param_1)

{
  short sVar1;
  float *pfVar2;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float fStack_30;
  float fStack_2c;
  
  pfVar2 = (float *)FUN_1009c400();
  local_50 = 0;
  local_40 = *pfVar2 + pfVar2[3];
  local_3c = pfVar2[1] + pfVar2[4];
  local_38 = pfVar2[2] + pfVar2[5];
  *param_1 = -1;
  param_1[1] = -1;
  param_1[2] = -1;
  param_1[3] = -1;
  local_4c = *pfVar2 * 70.0 + pfVar2[3];
  local_48 = pfVar2[1] * 70.0 + pfVar2[4];
  local_44 = pfVar2[2] * 70.0 + pfVar2[5];
  FUN_100b3710(&local_40,&local_4c,&local_34,&local_50,1,0,0,0,0,0,0,0);
  if (local_50 != 0) {
    local_4c = local_34;
    local_48 = fStack_30;
    local_44 = fStack_2c;
  }
  sVar1 = FUN_10012d70(0x42200000,&local_40,&local_4c);
  if (sVar1 != -1) {
    *param_1 = sVar1;
  }
  local_4c = *pfVar2 * 70.0 + pfVar2[3];
  local_48 = pfVar2[1] * 70.0 + pfVar2[4];
  local_44 = pfVar2[2] * 70.0 + pfVar2[5];
  FUN_100b3710(&local_40,&local_4c,&local_34,&local_50,1,0,0,1,0,0,0,0);
  if (local_50 != 0) {
    local_4c = local_34;
    local_48 = fStack_30;
    local_44 = fStack_2c;
  }
  sVar1 = FUN_1001e9f0(0x42200000,&local_40,&local_4c,0x3f800000);
  if (sVar1 != -1) {
    param_1[1] = sVar1;
  }
  local_4c = *pfVar2 * 70.0 + pfVar2[3];
  local_48 = pfVar2[1] * 70.0 + pfVar2[4];
  local_44 = pfVar2[2] * 70.0 + pfVar2[5];
  FUN_100b3710(&local_40,&local_4c,&local_34,&local_50,1,1,0,1,0,0,0,0);
  if (local_50 != 0) {
    local_4c = local_34;
    local_48 = fStack_30;
    local_44 = fStack_2c;
  }
  sVar1 = FUN_10013c50(0x41a00000,&local_40,&local_4c,0x3f400000);
  if (sVar1 != -1) {
    param_1[2] = sVar1;
  }
  sVar1 = FUN_10001770(0x41a00000,&local_40,&local_4c,0x3f400000);
  if (sVar1 != -1) {
    param_1[3] = sVar1;
  }
  return 1;
}


/* END FUNCTION 0x10004300 */

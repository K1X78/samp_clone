/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00452e40
 * Name: FUN_00452e40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00452e40(uint *param_1,int param_2,uint *param_3,uint *param_4,uint *param_5)

{
  uint uVar1;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  uint local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_004517f0(&local_40,param_2);
  local_20 = *param_4;
  local_1c = param_4[1];
  local_18 = param_4[2];
  local_14 = param_4[3];
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_004528c0(&local_40,&local_20,&local_40);
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  local_44 = local_34;
  *param_5 = *param_3;
  param_5[1] = param_3[1];
  param_5[2] = param_3[2];
  param_5[3] = param_3[3];
  uVar1 = FUN_00450ff0((int)param_3,(int)&local_50);
  if ((char)uVar1 != '\0') {
    FUN_004510c0(param_5,&local_50);
    return;
  }
  FUN_004510c0(param_5,&local_50);
  FUN_00451120(param_5,param_4);
  return;
}


/* END FUNCTION 0x00452e40 */

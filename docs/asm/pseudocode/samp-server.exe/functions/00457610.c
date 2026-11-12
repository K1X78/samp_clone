/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00457610
 * Name: FUN_00457610
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00457610(uint *param_1,uint *param_2)

{
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  uint local_20 [5];
  uint local_c;
  uint local_8;
  uint local_4;
  
  FUN_00454cd0(param_1,param_2);
  local_20[4] = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  local_20[0] = 0;
  local_20[1] = 0;
  local_20[2] = 0;
  local_20[3] = 0;
  FUN_004510a0((int)local_20);
  local_3c = param_1[1];
  local_40 = *param_1;
  local_38 = param_1[2];
  local_30 = 0;
  local_34 = param_1[3];
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_00452f60(local_20,&local_40,&local_40,local_20);
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  return;
}


/* END FUNCTION 0x00457610 */

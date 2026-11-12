/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004544e0
 * Name: FUN_004544e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_004544e0(uint *param_1,undefined4 *param_2)

{
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40 [9];
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  local_40[5] = 0;
  local_40[7] = 0;
  local_40[0] = 0;
  local_40[1] = 0;
  local_40[4] = 1;
  local_40[2] = 0;
  local_40[6] = 0;
  local_60 = *param_1;
  local_40[3] = 0;
  local_5c = param_1[1];
  local_58 = param_1[2];
  local_54 = param_1[3];
  local_50 = 0;
  local_4c = 0;
  local_48 = 0;
  local_44 = 0;
  FUN_004528c0(local_40,&local_60,local_40 + 8);
  *param_2 = local_40[8];
  param_2[1] = local_1c;
  param_2[2] = local_18;
  param_2[3] = local_14;
  return;
}


/* END FUNCTION 0x004544e0 */

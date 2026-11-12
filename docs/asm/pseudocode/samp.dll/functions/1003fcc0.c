/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003fcc0
 * Name: FUN_1003fcc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003fcc0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  FUN_1003d640(param_1,param_2);
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  FUN_10039750(&local_20);
  local_3c = param_1[1];
  local_40 = *param_1;
  local_38 = param_1[2];
  local_30 = 0;
  local_34 = param_1[3];
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1003b8b0(&local_20,&local_40,&local_40,&local_20);
  *param_2 = local_40;
  param_2[1] = local_3c;
  param_2[2] = local_38;
  param_2[3] = local_34;
  return;
}


/* END FUNCTION 0x1003fcc0 */

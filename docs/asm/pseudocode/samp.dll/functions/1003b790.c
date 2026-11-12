/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003b790
 * Name: FUN_1003b790
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003b790(undefined4 *param_1,undefined4 param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5)

{
  char cVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
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
  
  local_40 = *param_1;
  local_3c = param_1[1];
  local_38 = param_1[2];
  local_34 = param_1[3];
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  FUN_1003a040(&local_40,param_2);
  local_20 = *param_4;
  local_1c = param_4[1];
  local_18 = param_4[2];
  local_14 = param_4[3];
  local_10 = 0;
  local_c = 0;
  local_8 = 0;
  local_4 = 0;
  FUN_1003b210(&local_40,&local_20,&local_40);
  local_50 = local_40;
  local_4c = local_3c;
  local_48 = local_38;
  local_44 = local_34;
  *param_5 = *param_3;
  param_5[1] = param_3[1];
  param_5[2] = param_3[2];
  param_5[3] = param_3[3];
  cVar1 = FUN_100395b0(param_3,&local_50);
  if (cVar1 != '\0') {
    FUN_10039790(param_5,&local_50);
    return;
  }
  FUN_10039790(param_5,&local_50);
  FUN_100397f0(param_5,param_4);
  return;
}


/* END FUNCTION 0x1003b790 */

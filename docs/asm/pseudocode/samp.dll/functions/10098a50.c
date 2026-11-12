/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10098a50
 * Name: FUN_10098a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10098a50(undefined4 param_1,int param_2,int param_3,int param_4,int param_5,
                 undefined4 param_6,float param_7,undefined4 param_8,undefined4 param_9)

{
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  local_40 = (float)param_2;
  local_3c = (float)param_3;
  local_38 = local_40;
  if (2.0 < param_7) {
    local_14 = local_3c - param_7 * 0.5;
    local_34 = (float)param_5 + param_7 * 0.5;
    local_2c = (float)param_5 - 0.5;
    local_28 = (float)param_4;
    local_c = local_3c;
    local_3c = local_14;
    local_30 = local_40;
    local_24 = local_2c;
    local_20 = local_28;
    local_1c = local_34;
    local_18 = local_28;
    local_10 = local_28;
    local_8 = local_40;
    local_4 = local_c;
    FUN_100987d0(param_1,&local_40,8,param_6,param_7,param_8,param_9);
    return;
  }
  local_34 = (float)param_5;
  local_30 = (float)param_4;
  local_2c = local_34;
  local_28 = local_30;
  local_24 = local_3c;
  local_20 = local_40;
  local_1c = local_3c;
  FUN_100987d0(param_1,&local_40,5,param_6,param_7,param_8,param_9);
  return;
}


/* END FUNCTION 0x10098a50 */

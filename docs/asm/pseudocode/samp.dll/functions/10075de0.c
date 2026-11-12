/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10075de0
 * Name: FUN_10075de0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10075de0(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_4;
  
  local_24 = *param_3 - *param_2;
  local_20 = param_3[1] - param_2[1];
  fVar1 = param_3[2] - param_2[2];
  local_1c = SQRT(local_20 * local_20 + fVar1 * fVar1 + local_24 * local_24);
  if (local_1c < 1e-06) {
    return 0x80070057;
  }
  local_1c = 1.0 / local_1c;
  local_24 = local_1c * local_24;
  local_20 = local_20 * local_1c;
  local_1c = local_1c * fVar1;
  fVar1 = local_24 * *param_4 + local_20 * param_4[1] + local_1c * param_4[2];
  local_14 = local_20 * fVar1;
  local_10 = local_1c * fVar1;
  local_30 = *param_4 - local_24 * fVar1;
  local_2c = param_4[1] - local_14;
  local_28 = param_4[2] - local_10;
  fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
  if (fVar1 < 1e-06) {
    fVar2 = local_1c * local_20;
    local_30 = -(local_24 * local_20);
    local_2c = 1.0 - local_20 * local_20;
    local_28 = -fVar2;
    fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
    local_18 = local_30;
    local_14 = local_2c;
    local_10 = local_28;
    local_4 = fVar2;
    if (fVar1 < 1e-06) {
      local_4 = local_1c * local_1c;
      local_30 = -(local_24 * local_1c);
      local_2c = -fVar2;
      local_28 = 1.0 - local_4;
      fVar1 = SQRT(local_30 * local_30 + local_2c * local_2c + local_28 * local_28);
      local_18 = local_30;
      local_14 = local_2c;
      local_10 = local_28;
      if (fVar1 < 1e-06) {
        return 0x80070057;
      }
    }
  }
  fVar1 = 1.0 / fVar1;
  local_30 = local_30 * fVar1;
  local_2c = local_2c * fVar1;
  local_28 = fVar1 * local_28;
  FUN_100758e0(&local_18,&local_30,&local_24);
  param_1[0xe] = 0.0;
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xb] = 0.0;
  *param_1 = local_18;
  param_1[1] = local_30;
  param_1[2] = local_24;
  param_1[4] = local_14;
  param_1[5] = local_2c;
  param_1[6] = local_20;
  param_1[8] = local_10;
  param_1[0xf] = 1.0;
  param_1[9] = local_28;
  param_1[10] = local_1c;
  param_1[0xc] = -(local_14 * param_2[1] + local_18 * *param_2 + local_10 * param_2[2]);
  param_1[0xd] = -(local_2c * param_2[1] + local_30 * *param_2 + local_28 * param_2[2]);
  param_1[0xe] = -(local_20 * param_2[1] + local_24 * *param_2 + local_1c * param_2[2]);
  return 0;
}


/* END FUNCTION 0x10075de0 */

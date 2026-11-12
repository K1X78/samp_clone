/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b48b0
 * Name: FUN_100b48b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b48b0(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float param_7,float param_8,float param_9,float *param_10,
                 float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined4 local_4;
  
  fVar1 = param_1 + param_5 + param_9 + 1.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  local_4 = SQRT(fVar1) * 0.5;
  fVar1 = ((param_1 + 1.0) - param_5) - param_9;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = SQRT(fVar1) * 0.5;
  fVar2 = 1.0 - param_1;
  fVar3 = (param_5 + fVar2) - param_9;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  param_1 = SQRT(fVar3) * 0.5;
  param_9 = (fVar2 - param_5) + param_9;
  if (param_9 < 0.0) {
    param_9 = 0.0;
  }
  param_5 = SQRT(param_9) * 0.5;
  if (local_4 < 0.0) {
    local_4 = 0.0;
  }
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (param_1 < 0.0) {
    param_1 = 0.0;
  }
  if (param_5 < 0.0) {
    param_5 = 0.0;
  }
  dVar4 = __copysign((double)fVar1,(double)(param_8 - param_6));
  dVar5 = __copysign((double)param_1,(double)(param_3 - param_7));
  dVar6 = __copysign((double)param_5,(double)(param_4 - param_2));
  *param_10 = local_4;
  *param_11 = (float)dVar4;
  *param_12 = (float)dVar5;
  *param_13 = (float)dVar6;
  return;
}


/* END FUNCTION 0x100b48b0 */

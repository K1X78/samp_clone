/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048ee60
 * Name: FUN_0048ee60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl
FUN_0048ee60(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float param_9,float *param_10,float *param_11,
            float *param_12,float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  undefined8 local_20;
  undefined8 local_18;
  
  fVar1 = param_1 + param_5 + param_9 + 1.0;
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  fVar1 = SQRT(fVar1) * 0.5;
  fVar2 = ((param_1 + 1.0) - param_5) - param_9;
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  fVar2 = SQRT(fVar2) * 0.5;
  fVar3 = (param_5 + (1.0 - param_1)) - param_9;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  local_20 = (double)(SQRT(fVar3) * 0.5);
  fVar3 = ((1.0 - param_1) - param_5) + param_9;
  if (fVar3 < 0.0) {
    fVar3 = 0.0;
  }
  local_18 = (double)(SQRT(fVar3) * 0.5);
  if (fVar1 < 0.0) {
    fVar1 = 0.0;
  }
  if (fVar2 < 0.0) {
    fVar2 = 0.0;
  }
  if (local_20 < 0.0) {
    local_20 = 0.0;
  }
  if (local_18 < 0.0) {
    local_18 = 0.0;
  }
  dVar4 = __copysign((double)fVar2,(double)(param_8 - param_6));
  dVar5 = __copysign(local_20,(double)(param_3 - param_7));
  dVar6 = __copysign(local_18,(double)(param_4 - param_2));
  *param_10 = fVar1;
  *param_11 = (float)dVar4;
  *param_12 = (float)dVar5;
  *param_13 = (float)dVar6;
  return;
}


/* END FUNCTION 0x0048ee60 */

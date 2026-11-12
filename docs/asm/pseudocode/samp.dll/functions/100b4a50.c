/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4a50
 * Name: FUN_100b4a50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4a50(float param_1,float param_2,float param_3,float param_4,float *param_5,
                 float *param_6,float *param_7,float *param_8,float *param_9,float *param_10,
                 float *param_11,float *param_12,float *param_13)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar1 = param_1 * param_1;
  fVar3 = param_2 * param_2;
  fVar2 = param_3 * param_3;
  fVar4 = param_4 * param_4;
  *param_5 = ((fVar3 - fVar2) - fVar4) + fVar1;
  *param_9 = ((fVar2 - fVar3) - fVar4) + fVar1;
  *param_13 = (fVar4 - (fVar2 + fVar3)) + fVar1;
  fVar1 = param_1 * param_4 + param_2 * param_3;
  *param_8 = fVar1 + fVar1;
  fVar1 = param_2 * param_3 - param_1 * param_4;
  *param_6 = fVar1 + fVar1;
  fVar1 = param_2 * param_4 - param_1 * param_3;
  *param_11 = fVar1 + fVar1;
  fVar1 = param_1 * param_3 + param_2 * param_4;
  *param_7 = fVar1 + fVar1;
  fVar1 = param_1 * param_2 + param_3 * param_4;
  *param_12 = fVar1 + fVar1;
  fVar1 = param_3 * param_4 - param_1 * param_2;
  *param_10 = fVar1 + fVar1;
  return;
}


/* END FUNCTION 0x100b4a50 */

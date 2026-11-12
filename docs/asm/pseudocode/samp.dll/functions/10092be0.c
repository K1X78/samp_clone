/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10092be0
 * Name: FUN_10092be0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10092be0(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  fVar1 = param_2[2];
  fVar2 = *param_3;
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = *param_2;
  fVar6 = param_3[1];
  fVar7 = *param_3;
  fVar8 = param_2[1];
  *param_1 = param_3[2] * param_2[1] - param_2[2] * param_3[1];
  param_1[1] = fVar1 * fVar2 - fVar3 * fVar4;
  param_1[2] = fVar5 * fVar6 - fVar7 * fVar8;
  return;
}


/* END FUNCTION 0x10092be0 */

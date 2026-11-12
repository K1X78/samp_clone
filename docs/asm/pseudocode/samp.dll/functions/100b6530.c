/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6530
 * Name: FUN_100b6530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b6530(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar1 = *param_3;
  fVar2 = param_2[2];
  fVar3 = param_3[2];
  fVar4 = *param_2;
  fVar5 = param_3[1];
  fVar6 = *param_2;
  fVar7 = *param_3;
  fVar8 = param_2[1];
  fVar9 = *param_2;
  fVar10 = *param_3;
  fVar11 = param_3[2];
  fVar12 = param_2[2];
  fVar13 = param_3[1];
  fVar14 = param_2[1];
  param_1[1] = (param_3[2] * param_2[1] - param_3[1] * param_2[2]) * 0.5;
  param_1[2] = (fVar1 * fVar2 - fVar3 * fVar4) * 0.5;
  param_1[3] = (fVar5 * fVar6 - fVar7 * fVar8) * 0.5;
  *param_1 = (fVar13 * fVar14 + fVar11 * fVar12 + fVar9 * fVar10 + 1.0) * 0.5;
  FUN_100b5040(param_1);
  return;
}


/* END FUNCTION 0x100b6530 */

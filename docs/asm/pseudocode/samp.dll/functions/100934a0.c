/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100934a0
 * Name: FUN_100934a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100934a0(float *param_1,float *param_2,float *param_3)

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
  
  fVar1 = param_2[1];
  fVar2 = param_3[1];
  fVar3 = *param_2;
  fVar4 = *param_3;
  fVar5 = param_3[2];
  fVar6 = param_2[2];
  fVar7 = param_2[1];
  fVar8 = param_3[2];
  fVar9 = param_2[2];
  fVar10 = param_3[1];
  fVar11 = *param_2;
  fVar12 = param_3[1];
  fVar13 = param_2[1];
  fVar14 = *param_3;
  param_1[1] = *param_3 * param_2[2] - param_3[2] * *param_2;
  *param_1 = fVar7 * fVar8 - fVar9 * fVar10;
  param_1[2] = fVar11 * fVar12 - fVar13 * fVar14;
  param_1[3] = fVar5 * fVar6 + fVar3 * fVar4 + fVar1 * fVar2;
  return;
}


/* END FUNCTION 0x100934a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b4b60
 * Name: FUN_100b4b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b4b60(float *param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_8;
  float local_4;
  
  fVar1 = *param_2;
  fVar2 = param_2[1];
  fVar3 = param_2[2];
  fVar4 = *param_3;
  fVar5 = param_3[1];
  fVar6 = param_3[2];
  fVar7 = fVar6 * fVar2 - fVar5 * fVar3;
  param_3 = (float *)(fVar4 * fVar1 + fVar5 * fVar2 + fVar6 * fVar3 +
                     SQRT((fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) *
                          (fVar4 * fVar4 + fVar5 * fVar5 + fVar6 * fVar6)));
  local_8 = fVar4 * fVar3 - fVar6 * fVar1;
  local_4 = fVar5 * fVar1 - fVar4 * fVar2;
  if ((float)param_3 < 0.0001) {
    fVar7 = -fVar3;
    param_3 = (float *)0x0;
    local_8 = fVar2;
    local_4 = fVar1;
  }
  fVar1 = 1.0 / SQRT(fVar7 * fVar7 +
                     local_8 * local_8 + local_4 * local_4 + (float)param_3 * (float)param_3);
  param_1[1] = fVar1 * fVar7;
  param_1[2] = fVar1 * local_8;
  param_1[3] = fVar1 * local_4;
  *param_1 = fVar1 * (float)param_3;
  return;
}


/* END FUNCTION 0x100b4b60 */

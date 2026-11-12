/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b5160
 * Name: FUN_100b5160
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b5160(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  
  fVar1 = *param_1 * *param_1;
  fVar2 = param_1[1] * param_1[1];
  fVar3 = param_1[2] * param_1[2];
  fVar4 = param_1[3] * param_1[3];
  fVar5 = (float10)param_1[3] * (float10)*param_1 + (float10)param_1[2] * (float10)param_1[1];
  fVar5 = (float10)fpatan(fVar5 + fVar5,
                          (((float10)fVar2 - (float10)fVar3) - (float10)fVar4) + (float10)fVar1);
  *param_2 = (float)fVar5;
  fVar5 = (float10)FUN_100fce60();
  param_2[1] = (float)fVar5;
  fVar5 = (float10)param_1[1] * (float10)*param_1 + (float10)param_1[3] * (float10)param_1[2];
  fVar5 = (float10)fpatan(fVar5 + fVar5,
                          ((float10)fVar4 - ((float10)fVar3 + (float10)fVar2)) + (float10)fVar1);
  param_2[2] = (float)fVar5;
  return;
}


/* END FUNCTION 0x100b5160 */

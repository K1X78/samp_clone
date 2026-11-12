/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b50a0
 * Name: FUN_100b50a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b50a0(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  
  fVar5 = (float10)fcos((float10)param_1[2] * (float10)0.5);
  fVar6 = (float10)fcos((float10)param_1[1] * (float10)0.5);
  fVar1 = (float)fVar6;
  fVar6 = (float10)fcos((float10)*param_1 * (float10)0.5);
  fVar2 = (float)fVar6;
  fVar6 = (float10)fsin((float10)param_1[2] * (float10)0.5);
  fVar3 = (float)fVar6;
  fVar6 = (float10)fsin((float10)param_1[1] * (float10)0.5);
  fVar4 = (float)fVar6;
  fVar6 = (float10)fsin((float10)*param_1 * (float10)0.5);
  *param_2 = (float)((float10)(float)((float10)fVar4 * fVar6) * (float10)fVar3 +
                    (float10)fVar2 * (float10)fVar1 * fVar5);
  param_2[1] = (float)((float10)fVar1 * fVar6 * fVar5 -
                      (float10)fVar4 * (float10)fVar3 * (float10)fVar2);
  param_2[2] = (float)((float10)fVar4 * (float10)fVar2 * fVar5 +
                      fVar6 * (float10)fVar3 * (float10)fVar1);
  param_2[3] = (float)((float10)fVar3 * (float10)fVar2 * (float10)fVar1 -
                      (float10)(float)((float10)fVar4 * fVar6) * fVar5);
  return;
}


/* END FUNCTION 0x100b50a0 */

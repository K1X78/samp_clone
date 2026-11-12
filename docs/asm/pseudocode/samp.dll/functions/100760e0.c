/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100760e0
 * Name: FUN_100760e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100760e0(float *param_1,float *param_2,float param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  fVar5 = (float10)fcos((float10)param_3);
  fVar6 = (float10)fsin((float10)param_3);
  fVar7 = (float10)1.0 /
          SQRT((float10)param_2[2] * (float10)param_2[2] +
               (float10)param_2[1] * (float10)param_2[1] + (float10)*param_2 * (float10)*param_2);
  fVar1 = (float)(fVar7 * (float10)*param_2);
  fVar8 = fVar7 * (float10)param_2[1];
  fVar2 = (float)(fVar7 * (float10)param_2[2]);
  fVar3 = (float)((float10)1.0 - fVar5);
  *param_1 = (float)((float10)fVar1 * (float10)fVar1 * (float10)fVar3 + fVar5);
  fVar7 = (float10)fVar1 * fVar8 * (float10)fVar3;
  param_1[1] = (float)(fVar7 - (float10)fVar2 * fVar6);
  fVar4 = fVar2 * fVar1 * fVar3;
  param_1[2] = (float)(fVar8 * fVar6 + (float10)fVar4);
  param_1[4] = (float)((float10)fVar2 * fVar6 + fVar7);
  param_1[5] = (float)(fVar8 * fVar8 * (float10)fVar3 + fVar5);
  fVar7 = (float10)fVar2 * fVar8 * (float10)fVar3;
  param_1[6] = (float)(fVar7 - (float10)fVar1 * fVar6);
  param_1[0xb] = 0.0;
  param_1[7] = 0.0;
  param_1[3] = 0.0;
  param_1[0xe] = 0.0;
  param_1[8] = fVar4 - (float)(fVar8 * fVar6);
  param_1[0xd] = 0.0;
  param_1[0xc] = 0.0;
  param_1[0xf] = 1.0;
  param_1[9] = (float)((float10)fVar1 * fVar6 + fVar7);
  param_1[10] = (float)((float10)fVar2 * (float10)fVar2 * (float10)fVar3 + fVar5);
  return;
}


/* END FUNCTION 0x100760e0 */

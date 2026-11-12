/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100933d0
 * Name: FUN_100933d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100933d0(int param_1,float *param_2,float param_3,float param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
  fVar1 = -(((param_3 - (float)*(int *)(param_1 + 0xc0)) - (float)(*(int *)(param_1 + 200) / 2)) /
           ((float)*(int *)(param_1 + 200) * *(float *)(param_1 + 0xd8) * 0.5));
  fVar3 = ((param_4 - (float)*(int *)(param_1 + 0xc4)) - (float)(*(int *)(param_1 + 0xcc) / 2)) /
          ((float)*(int *)(param_1 + 0xcc) * *(float *)(param_1 + 0xd8) * 0.5);
  fVar2 = fVar1 * fVar1 + fVar3 * fVar3;
  if (1.0 < fVar2) {
    param_2[2] = 0.0;
    *param_2 = (1.0 / SQRT(fVar2)) * fVar1;
    param_2[1] = (1.0 / SQRT(fVar2)) * fVar3;
    return;
  }
  *param_2 = fVar1;
  param_2[2] = SQRT(1.0 - fVar2);
  param_2[1] = fVar3;
  return;
}


/* END FUNCTION 0x100933d0 */

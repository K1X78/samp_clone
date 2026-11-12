/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6440
 * Name: FUN_100b6440
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b6440(float *param_1,float *param_2)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar2 = (float10)fpatan((float10)*param_1,(float10)param_1[1]);
  fVar1 = (float10)fsin(fVar2 - (float10)1.5707963705062866);
  fVar2 = (float10)fcos(fVar2 - (float10)1.5707963705062866);
  *param_2 = (float)((float10)param_1[1] * (float10)0.0 - fVar2 * (float10)param_1[2]);
  param_2[1] = (float)(fVar1 * (float10)param_1[2] - (float10)*param_1 * (float10)0.0);
  param_2[2] = (float)(fVar2 * (float10)*param_1 - fVar1 * (float10)param_1[1]);
  return;
}


/* END FUNCTION 0x100b6440 */

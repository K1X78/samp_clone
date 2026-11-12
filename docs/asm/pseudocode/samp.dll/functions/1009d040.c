/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009d040
 * Name: FUN_1009d040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009d040(double param_1,double param_2,double param_3,double param_4,double *param_5,
                 double *param_6,double *param_7)

{
  double dVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar3 = (float10)param_1 * (float10)param_4 + (float10)param_2 * (float10)param_3;
  fVar2 = (float10)param_1 * (float10)param_1 + (float10)(param_2 * param_2);
  fVar2 = (float10)fpatan(fVar3 + fVar3,(float10)1.0 - (fVar2 + fVar2));
  *param_5 = (double)fVar2;
  dVar1 = param_2 * param_4 - param_1 * param_3;
  dVar1 = dVar1 + dVar1;
  if (ABS(dVar1) < 1.0) {
    fVar2 = (float10)FUN_100fce60();
    *param_6 = (double)fVar2;
  }
  else {
    fVar2 = (float10)fsin((float10)dVar1);
    *param_6 = (double)(fVar2 * (float10)1.5707963705062866);
  }
  fVar3 = (float10)param_3 * (float10)param_4 + (float10)param_1 * (float10)param_2;
  fVar2 = (float10)param_3 * (float10)param_3 + (float10)(param_2 * param_2);
  fVar2 = (float10)fpatan(fVar3 + fVar3,(float10)1.0 - (fVar2 + fVar2));
  *param_7 = (double)fVar2;
  return;
}


/* END FUNCTION 0x1009d040 */

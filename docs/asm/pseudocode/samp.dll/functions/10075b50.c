/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10075b50
 * Name: FUN_10075b50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10075b50(float *param_1,float param_2,float param_3,float param_4,float param_5)

{
  int iVar1;
  float *pfVar2;
  float10 fVar3;
  float10 fVar4;
  
  if (0.01 <= ABS(param_5 - param_4)) {
    fVar3 = (float10)fsin((float10)param_2 * (float10)0.5);
    if ((float10)0.01 <= ABS(fVar3)) {
      param_5 = param_5 / (param_5 - param_4);
      pfVar2 = param_1;
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        *pfVar2 = 0.0;
        pfVar2 = pfVar2 + 1;
      }
      param_1[0xb] = 1.0;
      fVar4 = (float10)fcos((float10)(float)((float10)param_2 * (float10)0.5));
      *param_1 = (float)((float10)param_3 * (fVar4 / (float10)(float)fVar3));
      param_1[5] = (float)(fVar4 / (float10)(float)fVar3);
      param_1[10] = param_5;
      param_1[0xe] = -(param_5 * param_4);
      return 0;
    }
  }
  return 0x80070057;
}


/* END FUNCTION 0x10075b50 */

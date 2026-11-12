/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405e00
 * Name: FUN_00405e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405e00(int param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  float10 fVar3;
  float fVar4;
  
  fVar4 = *(float *)(param_2 + 4);
  fVar1 = *(float *)(param_2 + 8);
  if ((fVar4 < 0.0 == (fVar4 == 0.0)) && (fVar1 < 0.0 == (fVar1 == 0.0))) {
    if (fVar1 == 10.0) {
      fVar2 = (float10)log2((float10)fVar4);
      return (float)((float10)0.3010299956639812 * fVar2);
    }
    fVar2 = (float10)log2((float10)fVar4);
    fVar3 = (float10)log2((float10)fVar1);
    return (float)(((float10)0.6931471805599453 * fVar2) / ((float10)0.6931471805599453 * fVar3));
  }
  fVar4 = (float)FUN_004030f0(param_1,0x1a);
  return fVar4;
}


/* END FUNCTION 0x00405e00 */

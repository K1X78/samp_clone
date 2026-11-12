/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004840f0
 * Name: FUN_004840f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_004840f0(int param_1,float param_2,float param_3,float param_4)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)(param_1 + 0x2cfd) - (float10)param_2;
  fVar2 = (float10)*(float *)(param_1 + 0x2d01) - (float10)param_3;
  fVar3 = (float10)*(float *)(param_1 + 0x2d05) - (float10)param_4;
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}


/* END FUNCTION 0x004840f0 */

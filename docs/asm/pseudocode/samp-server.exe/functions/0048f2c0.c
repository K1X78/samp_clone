/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0048f2c0
 * Name: FUN_0048f2c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_0048f2c0(int param_1,float param_2,float param_3)

{
  float10 fVar1;
  float10 fVar2;
  
  fVar1 = (float10)*(float *)(param_1 + 0xbc) - (float10)param_2;
  fVar2 = (float10)*(float *)(param_1 + 0xc0) - (float10)param_3;
  return fVar1 * fVar1 + fVar2 * fVar2;
}


/* END FUNCTION 0x0048f2c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049d8d0
 * Name: FUN_0049d8d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __fastcall FUN_0049d8d0(int param_1)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)(param_1 + 0x42) - (float10)*(float *)(param_1 + 0x8e);
  fVar2 = (float10)*(float *)(param_1 + 0x3e) - (float10)*(float *)(param_1 + 0x8a);
  fVar3 = (float10)*(float *)(param_1 + 0x3a) - (float10)*(float *)(param_1 + 0x86);
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}


/* END FUNCTION 0x0049d8d0 */

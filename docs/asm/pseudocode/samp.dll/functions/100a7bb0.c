/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7bb0
 * Name: FUN_100a7bb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall FUN_100a7bb0(int param_1,int param_2)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  fVar1 = (float10)*(float *)(param_2 + 0x38) - (float10)*(float *)(param_1 + 0x113);
  fVar2 = (float10)*(float *)(param_2 + 0x34) - (float10)*(float *)(param_1 + 0x10f);
  fVar3 = (float10)*(float *)(param_2 + 0x30) - (float10)*(float *)(param_1 + 0x10b);
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3);
}


/* END FUNCTION 0x100a7bb0 */

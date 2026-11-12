/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049d910
 * Name: FUN_0049d910
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float10 __thiscall
FUN_0049d910(int param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8)

{
  float10 fVar1;
  float10 fVar2;
  float10 fVar3;
  
  *(float *)(param_1 + 0x86) = param_2;
  *(float *)(param_1 + 0x8e) = param_4;
  *(float *)(param_1 + 0x8a) = param_3;
  *(float *)(param_1 + 0x98) = param_5;
  if (((-999.0 < param_6) && (-999.0 < param_7)) && (-999.0 < param_8)) {
    *(float *)(param_1 + 0x4a) = param_6;
    *(float *)(param_1 + 0x4e) = param_7;
    *(float *)(param_1 + 0x52) = param_8;
  }
  fVar1 = (float10)param_2 - (float10)*(float *)(param_1 + 0x3a);
  *(byte *)(param_1 + 0x96) = *(byte *)(param_1 + 0x96) | 1;
  fVar2 = (float10)param_3 - (float10)*(float *)(param_1 + 0x3e);
  fVar3 = (float10)param_4 - (float10)*(float *)(param_1 + 0x42);
  return SQRT(fVar1 * fVar1 + fVar2 * fVar2 + fVar3 * fVar3) / (float10)param_5;
}


/* END FUNCTION 0x0049d910 */

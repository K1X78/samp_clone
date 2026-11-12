/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405db0
 * Name: FUN_00405db0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405db0(int param_1,int param_2)

{
  float fVar1;
  
  if (SQRT(*(float *)(param_2 + 4)) < 0.0) {
    fVar1 = (float)FUN_004030f0(param_1,0x1a);
    return fVar1;
  }
  return SQRT(*(float *)(param_2 + 4));
}


/* END FUNCTION 0x00405db0 */

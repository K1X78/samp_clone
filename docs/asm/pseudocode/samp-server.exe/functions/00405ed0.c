/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405ed0
 * Name: FUN_00405ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405ed0(undefined4 param_1,int param_2)

{
  float10 fVar1;
  
  fVar1 = FUN_00405e90(*(float *)(param_2 + 4));
  fVar1 = (float10)fcos(fVar1);
  return (float)fVar1;
}


/* END FUNCTION 0x00405ed0 */

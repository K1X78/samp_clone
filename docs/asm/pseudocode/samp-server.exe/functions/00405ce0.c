/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405ce0
 * Name: FUN_00405ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405ce0(undefined4 param_1,int param_2)

{
  float fVar1;
  float10 fVar2;
  undefined2 unaff_retaddr;
  
  fVar1 = *(float *)(param_2 + 4);
  fVar2 = FUN_004a02f0((double)fVar1,unaff_retaddr);
  return (float)((float10)fVar1 - fVar2);
}


/* END FUNCTION 0x00405ce0 */

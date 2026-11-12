/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473f40
 * Name: FUN_00473f40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00473f40(undefined4 param_1,int param_2)

{
  float10 fVar1;
  float local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  local_c = *(float *)(param_2 + 4);
  local_8 = *(undefined4 *)(param_2 + 8);
  local_4 = *(undefined4 *)(param_2 + 0xc);
  fVar1 = FUN_0048ee30(&local_c);
  return (float)fVar1;
}


/* END FUNCTION 0x00473f40 */

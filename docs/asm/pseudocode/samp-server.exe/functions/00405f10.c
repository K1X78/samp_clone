/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405f10
 * Name: FUN_00405f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


float __cdecl FUN_00405f10(undefined4 param_1,float param_2)

{
  param_2 = *(float *)((int)param_2 + 4);
  if (param_2 < 0.0) {
    param_2 = -param_2;
  }
  return param_2;
}


/* END FUNCTION 0x00405f10 */

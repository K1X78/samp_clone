/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00405d70
 * Name: FUN_00405d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00405d70(undefined4 param_1,int param_2)

{
  if (*(float *)(param_2 + 4) == *(float *)(param_2 + 8)) {
    return 0;
  }
  if (*(float *)(param_2 + 8) < *(float *)(param_2 + 4)) {
    return 1;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00405d70 */

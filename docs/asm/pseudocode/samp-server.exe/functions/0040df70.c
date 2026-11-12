/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040df70
 * Name: FUN_0040df70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_0040df70(int param_1,int param_2)

{
  if (((param_1 != 0) && (0 < param_2)) && (param_2 <= *(short *)(param_1 + 0x3a))) {
    FUN_0040df10();
    return *(undefined4 *)(*(int *)(param_1 + 0x40) + -4 + param_2 * 4);
  }
  return 0;
}


/* END FUNCTION 0x0040df70 */

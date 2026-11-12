/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472dd0
 * Name: FUN_00472dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472dd0(undefined4 param_1,int param_2)

{
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00472dd0 */

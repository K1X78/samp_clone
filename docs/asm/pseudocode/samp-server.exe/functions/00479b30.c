/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479b30
 * Name: FUN_00479b30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479b30(undefined4 param_1,int param_2)

{
  if (((*(int *)(DAT_004fc438 + 0x28) != 0) && (*(ushort *)(param_2 + 4) < 1000)) &&
     (*(int *)(*(int *)(DAT_004fc438 + 0x28) + 4000 + (uint)*(ushort *)(param_2 + 4) * 4) != 0)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00479b30 */

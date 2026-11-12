/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475da0
 * Name: FUN_00475da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475da0(undefined4 param_1,int param_2)

{
  if (((*(int *)(DAT_004fc438 + 0x18) != 0) && (*(byte *)(param_2 + 4) < 0x80)) &&
     (*(int *)(*(int *)(DAT_004fc438 + 0x18) + 0x200 + (uint)*(byte *)(param_2 + 4) * 4) != 0)) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00475da0 */

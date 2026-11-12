/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475e50
 * Name: FUN_00475e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __cdecl FUN_00475e50(undefined4 param_1,int param_2)

{
  if (*(int *)(DAT_004fc438 + 0x18) == 0) {
    return 0xff;
  }
  if (999 < *(ushort *)(param_2 + 4)) {
    return 0xff;
  }
  return *(undefined1 *)(*(ushort *)(param_2 + 4) + 0x400 + *(int *)(DAT_004fc438 + 0x18));
}


/* END FUNCTION 0x00475e50 */

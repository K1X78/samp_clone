/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475a40
 * Name: FUN_00475a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475a40(undefined4 param_1,int param_2)

{
  if (*(int *)(param_2 + 4) == 0) {
    if (DAT_004fc438 != 0) {
      *(undefined1 *)(DAT_004fc438 + 0x5c) = 0;
    }
  }
  else if (DAT_004fc438 != 0) {
    *(undefined1 *)(DAT_004fc438 + 0x5c) = 1;
    return 1;
  }
  return 1;
}


/* END FUNCTION 0x00475a40 */

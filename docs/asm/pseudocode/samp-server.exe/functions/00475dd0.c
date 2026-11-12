/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475dd0
 * Name: FUN_00475dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475dd0(undefined4 param_1,int param_2)

{
  if (*(int *)(DAT_004fc438 + 0x18) == 0) {
    return 0;
  }
  if (0x7f < *(byte *)(param_2 + 4)) {
    uRam00001301 = 0;
    return 1;
  }
  *(undefined4 *)
   (*(int *)(*(int *)(DAT_004fc438 + 0x18) + (uint)*(byte *)(param_2 + 4) * 4) + 0x1301) = 0;
  return 1;
}


/* END FUNCTION 0x00475dd0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475e10
 * Name: FUN_00475e10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475e10(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(DAT_004fc438 + 0x18) == 0) {
    return 0;
  }
  if (*(byte *)(param_2 + 4) < 0x80) {
    iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x18) + (uint)*(byte *)(param_2 + 4) * 4);
  }
  else {
    iVar1 = 0;
  }
  *(undefined4 *)(iVar1 + 0x1305 + (uint)*(byte *)(param_2 + 8) * 4) = 0;
  return 1;
}


/* END FUNCTION 0x00475e10 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475d30
 * Name: FUN_00475d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475d30(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (uVar1 < 1000) {
    if ((*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) &&
       (*(int *)(DAT_004fc438 + 0x18) != 0)) {
      if (0x7f < *(byte *)(param_2 + 4)) {
        FUN_00493270((void *)0x0,uVar1);
        return 1;
      }
      FUN_00493270(*(void **)(*(int *)(DAT_004fc438 + 0x18) + (uint)*(byte *)(param_2 + 4) * 4),
                   uVar1);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00475d30 */

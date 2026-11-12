/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475960
 * Name: FUN_00475960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475960(undefined4 param_1,int param_2)

{
  ushort uVar1;
  
  if (*(int *)(DAT_004fc438 + 8) != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if ((((*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) &&
           (*(ushort *)(param_2 + 8) < 2000)) && (uVar1 < 1000)) &&
         (*(int *)(*(int *)(DAT_004fc438 + 0x14) +
                  ((uVar1 + 0x3e9) * 2000 + (uint)*(ushort *)(param_2 + 8)) * 4) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00475960 */

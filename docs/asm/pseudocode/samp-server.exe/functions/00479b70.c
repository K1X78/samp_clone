/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479b70
 * Name: FUN_00479b70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479b70(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (*(int *)(DAT_004fc438 + 0x28) != 0) {
    if ((*(ushort *)(param_2 + 4) < 1000) &&
       (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x28) + 8000 + (uint)*(ushort *)(param_2 + 4) * 4),
       iVar1 != 0)) {
      *(bool *)(iVar1 + 0xd4) = *(int *)(param_2 + 8) != 0;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00479b70 */

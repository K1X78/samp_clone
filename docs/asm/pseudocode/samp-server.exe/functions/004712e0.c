/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004712e0
 * Name: FUN_004712e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004712e0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((((*(ushort *)(param_2 + 4) < 1000) &&
       (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
       iVar1 != 0)) &&
      ((*(char *)(iVar1 + 0x2f95) == '\x02' || (*(char *)(iVar1 + 0x2f95) == '\x03')))) &&
     ((uint)*(ushort *)(iVar1 + 0x3022) == *(uint *)(param_2 + 8))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004712e0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472e00
 * Name: FUN_00472e00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __cdecl FUN_00472e00(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    return *(undefined1 *)(iVar1 + 0x2f95);
  }
  return 0;
}


/* END FUNCTION 0x00472e00 */

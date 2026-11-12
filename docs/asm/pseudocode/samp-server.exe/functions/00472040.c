/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472040
 * Name: FUN_00472040
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined1 __cdecl FUN_00472040(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0))
      && (uVar1 < 1000)) &&
     ((iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0 &&
      (*(char *)(iVar2 + 0x2f95) == '\x01')))) {
    return *(undefined1 *)(iVar2 + 0xa3);
  }
  return 0;
}


/* END FUNCTION 0x00472040 */

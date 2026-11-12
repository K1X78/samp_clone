/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471330
 * Name: FUN_00471330
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00471330(undefined4 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  if (((*(ushort *)(param_2 + 4) < 1000) &&
      (iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
      iVar2 != 0)) && ((cVar1 = *(char *)(iVar2 + 0x2f95), cVar1 == '\x02' || (cVar1 == '\x03')))) {
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00471330 */

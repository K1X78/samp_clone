/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471dd0
 * Name: FUN_00471dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00471dd0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if ((((*(int *)(DAT_004fc438 + 8) != 0) && (*(ushort *)(param_2 + 4) < 1000)) &&
      (iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
      iVar2 != 0)) &&
     (((*(char *)(iVar2 + 0x2f95) == '\x01' && (uVar1 = *(ushort *)(iVar2 + 0xbc), uVar1 != 0)) &&
      ((1999 < uVar1 && (uVar1 < 4000)))))) {
    return uVar1 - 2000;
  }
  return 0xffff;
}


/* END FUNCTION 0x00471dd0 */

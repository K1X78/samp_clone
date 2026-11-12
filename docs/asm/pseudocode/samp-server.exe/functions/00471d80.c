/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471d80
 * Name: FUN_00471d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


ushort __cdecl FUN_00471d80(undefined4 param_1,int param_2)

{
  int iVar1;
  ushort uVar2;
  
  if ((((*(int *)(DAT_004fc438 + 8) == 0) || (999 < *(ushort *)(param_2 + 4))) ||
      (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
      iVar1 == 0)) ||
     (((*(char *)(iVar1 + 0x2f95) != '\x01' || (uVar2 = *(ushort *)(iVar1 + 0xbc), uVar2 == 0)) ||
      (1999 < uVar2)))) {
    uVar2 = 0xffff;
  }
  return uVar2;
}


/* END FUNCTION 0x00471d80 */

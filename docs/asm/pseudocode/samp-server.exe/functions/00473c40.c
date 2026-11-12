/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473c40
 * Name: FUN_00473c40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __cdecl FUN_00473c40(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if ((*(ushort *)(param_2 + 4) < 1000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    return *(byte *)(iVar1 + 0xa2) & 0x3f;
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00473c40 */

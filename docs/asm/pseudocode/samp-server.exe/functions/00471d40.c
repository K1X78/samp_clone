/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471d40
 * Name: FUN_00471d40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined2 __cdecl FUN_00471d40(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(DAT_004fc438 + 8) != 0) && (*(ushort *)(param_2 + 4) < 1000)) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    return *(undefined2 *)(iVar1 + 0x3022);
  }
  return 0;
}


/* END FUNCTION 0x00471d40 */

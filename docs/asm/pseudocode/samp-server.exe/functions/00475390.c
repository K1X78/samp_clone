/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475390
 * Name: FUN_00475390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475390(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(DAT_004fc438 + 0x14) != 0) && (*(ushort *)(param_2 + 4) < 2000)) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 + (uint)*(ushort *)(param_2 + 4) * 4
                      ), iVar1 != 0)) {
    return *(undefined4 *)(iVar1 + 2);
  }
  return 0xffffffff;
}


/* END FUNCTION 0x00475390 */

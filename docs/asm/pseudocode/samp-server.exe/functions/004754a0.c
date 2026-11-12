/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004754a0
 * Name: FUN_004754a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_004754a0(undefined4 param_1,int param_2)

{
  int iVar1;
  
  if (((*(int *)(DAT_004fc438 + 0x14) != 0) && (*(ushort *)(param_2 + 4) < 2000)) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 + (uint)*(ushort *)(param_2 + 4) * 4
                      ), iVar1 != 0)) {
    return *(byte *)(iVar1 + 0x96) & 1;
  }
  return 0;
}


/* END FUNCTION 0x004754a0 */

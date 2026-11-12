/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004759d0
 * Name: FUN_004759d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte __cdecl FUN_004759d0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 < 1000) {
    if ((((*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) &&
         (*(ushort *)(param_2 + 8) < 2000)) && (uVar1 < 1000)) &&
       (iVar2 = *(int *)(*(int *)(DAT_004fc438 + 0x14) +
                        ((uVar1 + 0x3e9) * 2000 + (uint)*(ushort *)(param_2 + 8)) * 4), iVar2 != 0))
    {
      return *(byte *)(iVar2 + 0x96) & 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004759d0 */

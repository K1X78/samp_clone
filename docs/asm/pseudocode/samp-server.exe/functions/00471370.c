/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00471370
 * Name: FUN_00471370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00471370(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if (uVar1 < 1000) {
    if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) {
      iVar2 = FUN_0046fcb0(param_1,*(int *)(param_2 + 8),
                           (char *)((uint)uVar1 * 0x19 + 0x26d24 + *(int *)(DAT_004fc438 + 8)),
                           *(int *)(param_2 + 0xc));
      return iVar2;
    }
  }
  return 0;
}


/* END FUNCTION 0x00471370 */

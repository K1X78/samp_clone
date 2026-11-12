/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472c50
 * Name: FUN_00472c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00472c50(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4);
    iVar3 = FUN_004841a0(*(undefined1 *)(iVar2 + 0x3075));
    if (iVar3 == -1) {
      return 0;
    }
    return (int)*(short *)(iVar2 + 0x3034 + iVar3 * 4);
  }
  return 0;
}


/* END FUNCTION 0x00472c50 */

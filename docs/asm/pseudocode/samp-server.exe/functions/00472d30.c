/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472d30
 * Name: FUN_00472d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472d30(int *param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  uint *local_4;
  
  bVar1 = *(byte *)(param_2 + 8);
  if (bVar1 < 0xd) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((uVar2 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar2 * 4) != 0)) {
      iVar3 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar2 * 4);
      FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
      *local_4 = (uint)*(byte *)(bVar1 + 0x3068 + iVar3);
      FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
      *local_4 = (int)*(short *)(iVar3 + 0x3034 + (uint)bVar1 * 4);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00472d30 */

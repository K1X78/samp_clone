/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476d80
 * Name: FUN_00476d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476d80(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  int iVar4;
  
  if (DAT_004fc438 != 0) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((uVar2 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar2 * 4) != 0)) {
      if (uVar2 < 1000) {
        iVar4 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar2 * 4);
      }
      else {
        iVar4 = 0;
      }
      iVar4 = *(int *)(iVar4 + 0x2d4b);
      if (((iVar4 != 0) && (uVar2 = *(ushort *)(param_2 + 8), uVar2 < 0x100)) &&
         (*(int *)(iVar4 + (uint)uVar2 * 4) != 0)) {
        pbVar3 = *(byte **)(iVar4 + 0x400 + (uint)uVar2 * 4);
        bVar1 = *pbVar3;
        *pbVar3 = bVar1 ^ ((*(char *)(param_2 + 0xc) != '\0') << 4 ^ bVar1) & 0x10;
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00476d80 */

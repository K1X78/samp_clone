/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004761d0
 * Name: FUN_004761d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004761d0(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  byte *pbVar4;
  
  iVar3 = *(int *)(DAT_004fc438 + 0x1c);
  if (iVar3 != 0) {
    uVar2 = *(ushort *)(param_2 + 4);
    if ((uVar2 < 0x800) && (*(int *)(iVar3 + (uint)uVar2 * 4) != 0)) {
      pbVar4 = *(byte **)(iVar3 + 0x2000 + (uint)uVar2 * 4);
      bVar1 = *pbVar4;
      *pbVar4 = bVar1 ^ (*(char *)(param_2 + 8) != '\0' ^ bVar1) & 1;
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004761d0 */

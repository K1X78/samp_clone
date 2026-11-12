/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470740
 * Name: FUN_00470740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00470740(undefined4 param_1,int param_2)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  
  iVar3 = *(int *)(DAT_004fc438 + 0xc);
  if (iVar3 != 0) {
    uVar2 = *(ushort *)(param_2 + 4);
    if (uVar2 < 2000) {
      if ((((*(int *)(iVar3 + 0x2014 + (uint)uVar2 * 4) != 0) && (uVar2 < 2000)) &&
          (iVar3 = *(int *)(iVar3 + 0x3f54 + (uint)uVar2 * 4), iVar3 != 0)) &&
         ((*(byte *)(param_2 + 8) < 0xe &&
          (bVar1 = *(byte *)(*(byte *)(param_2 + 8) + 0xb7 + iVar3), bVar1 != 0)))) {
        return bVar1 + 999;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00470740 */

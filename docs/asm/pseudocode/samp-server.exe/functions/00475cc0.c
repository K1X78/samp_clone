/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475cc0
 * Name: FUN_00475cc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475cc0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  
  uVar1 = *(ushort *)(param_2 + 8);
  if (((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) &&
     (iVar2 = *(int *)(DAT_004fc438 + 0x18), iVar2 != 0)) {
    if (*(byte *)(param_2 + 4) < 0x80) {
      this = *(void **)(iVar2 + (uint)*(byte *)(param_2 + 4) * 4);
    }
    else {
      this = (void *)0x0;
    }
    FUN_004931b0(this,uVar1);
    if ((*(ushort *)(param_2 + 8) < 1000) && (*(byte *)(param_2 + 4) < 0x80)) {
      *(byte *)(*(ushort *)(param_2 + 8) + 0x400 + iVar2) = *(byte *)(param_2 + 4);
    }
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00475cc0 */

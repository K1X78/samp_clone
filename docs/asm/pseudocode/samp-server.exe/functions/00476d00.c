/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476d00
 * Name: FUN_00476d00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476d00(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (DAT_004fc438 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 1000) {
        iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      iVar2 = *(int *)(iVar2 + 0x2d4b);
      if (((iVar2 != 0) && (uVar1 = *(ushort *)(param_2 + 8), uVar1 < 0x100)) &&
         (*(int *)(iVar2 + (uint)uVar1 * 4) != 0)) {
        *(undefined1 *)(*(int *)(iVar2 + 0x400 + (uint)uVar1 * 4) + 0x1f) =
             *(undefined1 *)(param_2 + 0xc);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00476d00 */

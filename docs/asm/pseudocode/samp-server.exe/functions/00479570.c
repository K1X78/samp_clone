/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479570
 * Name: FUN_00479570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479570(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0) {
        if ((uVar1 < 1000) &&
           (this = *(void **)(iVar2 + 0x25d84 + (uint)uVar1 * 4), this != (void *)0x0)) {
          FUN_00486480(this,*(byte *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                       (uint)*(ushort *)(param_2 + 0x10),(uint)*(ushort *)(param_2 + 0x14));
        }
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00479570 */

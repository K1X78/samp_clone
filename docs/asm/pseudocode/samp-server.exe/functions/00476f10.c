/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476f10
 * Name: FUN_00476f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476f10(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  int iVar2;
  
  if (DAT_004fc438 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) {
        if (uVar1 < 1000) {
          iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)uVar1 * 4);
        }
        else {
          iVar2 = 0;
        }
        this = *(void **)(iVar2 + 0x2d4b);
        if (this != (void *)0x0) {
          uVar1 = *(ushort *)(param_2 + 8);
          if ((uVar1 < 0x100) && (*(int *)((int)this + (uint)uVar1 * 4) != 0)) {
            FUN_0046fd60(this,uVar1,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10),
                         *(undefined4 *)(param_2 + 0x14),*(undefined4 *)(param_2 + 0x18));
            return 1;
          }
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00476f10 */

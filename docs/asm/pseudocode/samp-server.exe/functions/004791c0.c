/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004791c0
 * Name: FUN_004791c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004791c0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  void *this;
  
  if ((DAT_004fc438 != 0) && (iVar2 = *(int *)(DAT_004fc438 + 0xc), iVar2 != 0)) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 2000) {
      if (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0) {
        if (uVar1 < 2000) {
          this = *(void **)(iVar2 + 0x3f54 + (uint)uVar1 * 4);
        }
        else {
          this = (void *)0x0;
        }
        FUN_00489e00(this,0xffff,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),
                     *(undefined1 *)(param_2 + 0x10),*(undefined1 *)(param_2 + 0x14));
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x004791c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475900
 * Name: FUN_00475900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475900(undefined4 param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  
  if (*(int *)(DAT_004fc438 + 8) != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0) {
        if (*(void **)(DAT_004fc438 + 0x14) != (void *)0x0) {
          iVar2 = FUN_0046fe30(*(void **)(DAT_004fc438 + 0x14),uVar1,*(ushort *)(param_2 + 8));
          if (iVar2 != 0) {
            return *(undefined4 *)(iVar2 + 2);
          }
        }
        return 0xffffffff;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00475900 */

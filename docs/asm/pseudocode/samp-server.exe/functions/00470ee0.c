/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470ee0
 * Name: FUN_00470ee0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470ee0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  
  if ((DAT_004fc438 != 0) && (this = *(void **)(DAT_004fc438 + 8), this != (void *)0x0)) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (uVar1 < 1000) {
      if (*(int *)((int)this + (uint)uVar1 * 4 + 0x24de4) != 0) {
        FUN_00466a20(this,uVar1,*(int *)(param_2 + 8));
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00470ee0 */

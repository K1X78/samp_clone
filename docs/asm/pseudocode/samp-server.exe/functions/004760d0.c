/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004760d0
 * Name: FUN_004760d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004760d0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  
  this = *(void **)(DAT_004fc438 + 0x1c);
  if (this != (void *)0x0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 0x800) && (*(int *)((int)this + (uint)uVar1 * 4) != 0)) {
      FUN_00466d40(this,uVar1,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004760d0 */

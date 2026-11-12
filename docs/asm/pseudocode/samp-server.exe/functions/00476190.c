/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00476190
 * Name: FUN_00476190
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00476190(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  
  this = *(void **)(DAT_004fc438 + 0x1c);
  if (this != (void *)0x0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 0x800) && (*(int *)((int)this + (uint)uVar1 * 4) != 0)) {
      FUN_00466df0(this,uVar1,*(uint *)(param_2 + 8));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00476190 */

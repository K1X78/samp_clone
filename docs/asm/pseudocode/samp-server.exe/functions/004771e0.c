/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004771e0
 * Name: FUN_004771e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004771e0(undefined4 param_1,int param_2)

{
  ushort uVar1;
  void *this;
  
  this = *(void **)(DAT_004fc438 + 0x24);
  if (this != (void *)0x0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 0x400) && (*(int *)((int)this + (uint)uVar1 * 4 + 0x4000) != 0)) {
      FUN_004649d0(this,CONCAT22((short)((uint)DAT_004fc438 >> 0x10),uVar1));
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004771e0 */

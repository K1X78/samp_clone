/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483e70
 * Name: FUN_00483e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483e70(void *this,uint param_1)

{
  void *this_00;
  uint uVar1;
  
  if ((void *)DAT_004fc438[10] != (void *)0x0) {
    FUN_00464880((void *)DAT_004fc438[10],param_1,*(ushort *)((int)this + 0x2d53));
    uVar1 = param_1 & 0xffff;
    *(undefined1 *)(uVar1 + 0x28dd + (int)this) = 0;
    *(int *)((int)this + 0x2cd9) = *(int *)((int)this + 0x2cd9) + -1;
    this_00 = (void *)*DAT_004fc438;
    if ((void *)DAT_004fc438[1] != (void *)0x0) {
      FUN_0046c220((void *)DAT_004fc438[1],uVar1,(uint)*(ushort *)((int)this + 0x2d53));
    }
    if (this_00 != (void *)0x0) {
      FUN_0046edf0(this_00,uVar1,(uint)*(ushort *)((int)this + 0x2d53));
    }
  }
  return;
}


/* END FUNCTION 0x00483e70 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483c10
 * Name: FUN_00483c10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483c10(void *this,uint param_1)

{
  void *this_00;
  uint uVar1;
  
  if (((void *)DAT_004fc438[2] != (void *)0x0) &&
     (uVar1 = param_1 & 0xffff, *(char *)(uVar1 + 0x155 + (int)this) != '\0')) {
    FUN_004667d0((void *)DAT_004fc438[2],param_1,*(ushort *)((int)this + 0x2d53));
    *(undefined1 *)(uVar1 + 0x155 + (int)this) = 0;
    *(int *)((int)this + 0x2cc5) = *(int *)((int)this + 0x2cc5) + -1;
    this_00 = (void *)*DAT_004fc438;
    if ((void *)DAT_004fc438[1] != (void *)0x0) {
      FUN_0046c020((void *)DAT_004fc438[1],uVar1,(uint)*(ushort *)((int)this + 0x2d53));
    }
    if (this_00 != (void *)0x0) {
      FUN_0046ec30(this_00,uVar1,(uint)*(ushort *)((int)this + 0x2d53));
    }
  }
  return;
}


/* END FUNCTION 0x00483c10 */

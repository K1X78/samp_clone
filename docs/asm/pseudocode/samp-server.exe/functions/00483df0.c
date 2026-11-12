/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483df0
 * Name: FUN_00483df0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483df0(void *this,ushort param_1)

{
  char *pcVar1;
  void *this_00;
  uint uVar2;
  
  if (((*(char *)((int)this + 0x30b5) == '\0') && ((void *)DAT_004fc438[10] != (void *)0x0)) &&
     (*(int *)((int)this + 0x2cd9) < 0x33)) {
    FUN_004646a0((void *)DAT_004fc438[10],param_1,*(ushort *)((int)this + 0x2d53));
    uVar2 = (uint)param_1;
    pcVar1 = (char *)(uVar2 + 0x28dd + (int)this);
    *pcVar1 = *pcVar1 + '\x01';
    *(int *)((int)this + 0x2cd9) = *(int *)((int)this + 0x2cd9) + 1;
    this_00 = (void *)*DAT_004fc438;
    if ((void *)DAT_004fc438[1] != (void *)0x0) {
      FUN_0046c1a0((void *)DAT_004fc438[1],uVar2,(uint)*(ushort *)((int)this + 0x2d53));
    }
    if (this_00 != (void *)0x0) {
      FUN_0046ed80(this_00,uVar2,(uint)*(ushort *)((int)this + 0x2d53));
    }
  }
  return;
}


/* END FUNCTION 0x00483df0 */

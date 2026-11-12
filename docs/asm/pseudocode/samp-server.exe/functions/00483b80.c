/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483b80
 * Name: FUN_00483b80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483b80(void *this,ushort param_1)

{
  char *pcVar1;
  void *this_00;
  uint uVar2;
  
  if ((((*(char *)((int)this + 0x30b5) == '\0') && ((void *)DAT_004fc438[2] != (void *)0x0)) &&
      (uVar2 = (uint)param_1, *(char *)(uVar2 + 0x155 + (int)this) == '\0')) &&
     (*(int *)((int)this + 0x2cc5) < 0xc9)) {
    FUN_00465d30((void *)DAT_004fc438[2],param_1,*(ushort *)((int)this + 0x2d53));
    pcVar1 = (char *)(uVar2 + 0x155 + (int)this);
    *pcVar1 = *pcVar1 + '\x01';
    *(int *)((int)this + 0x2cc5) = *(int *)((int)this + 0x2cc5) + 1;
    this_00 = (void *)*DAT_004fc438;
    if ((void *)DAT_004fc438[1] != (void *)0x0) {
      FUN_0046bfa0((void *)DAT_004fc438[1],uVar2,(uint)*(ushort *)((int)this + 0x2d53));
    }
    if (this_00 != (void *)0x0) {
      FUN_0046ebc0(this_00,uVar2,(uint)*(ushort *)((int)this + 0x2d53));
    }
  }
  return;
}


/* END FUNCTION 0x00483b80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489a70
 * Name: FUN_00489a70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00489a70(void *this,ushort param_1,byte param_2)

{
  void *this_00;
  uint uVar1;
  
  if (param_2 != *(byte *)((int)this + 0x10a)) {
    *(byte *)((int)this + 0x10a) = param_2;
    *(bool *)((int)this + 0xf6) = param_2 != 0;
    this_00 = (void *)*DAT_004fc438;
    if ((this_00 != (void *)0x0) && ((void *)DAT_004fc438[1] != (void *)0x0)) {
      uVar1 = FUN_0046d000((void *)DAT_004fc438[1],(uint)param_1,(uint)*(ushort *)((int)this + 100),
                           (uint)param_2);
      if (uVar1 == 0) {
        FUN_0046f7c0(this_00,(uint)param_1,(uint)*(ushort *)((int)this + 100),
                     (uint)*(byte *)((int)this + 0x10a));
      }
    }
  }
  return;
}


/* END FUNCTION 0x00489a70 */

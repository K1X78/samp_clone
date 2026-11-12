/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483630
 * Name: FUN_00483630
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00483630(void *this,byte param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)((int)this + 0x2f95);
  if (bVar1 != param_1) {
    *(byte *)((int)this + 0x2f95) = param_1;
    FUN_0046b570((void *)DAT_004fc438[1],(uint)*(ushort *)((int)this + 0x2d53),(uint)param_1,
                 (uint)bVar1);
    if ((void *)*DAT_004fc438 != (void *)0x0) {
      FUN_0046e250((void *)*DAT_004fc438,(uint)*(ushort *)((int)this + 0x2d53),
                   (uint)*(byte *)((int)this + 0x2f95),(uint)bVar1);
    }
  }
  return;
}


/* END FUNCTION 0x00483630 */

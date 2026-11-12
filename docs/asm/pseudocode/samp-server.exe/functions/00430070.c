/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00430070
 * Name: FUN_00430070
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00430070(void *this,byte param_1)

{
  char in_AL;
  
  if (in_AL == 'a') {
    if (((*(ushort *)((int)this + 0x1c) & 2) == 0) && ((*(ushort *)((int)this + 0x1c) & 0xc) != 0))
    {
      FUN_0041fc10((uint)param_1);
    }
    *(byte *)((int)this + 0x1c) = *(byte *)((int)this + 0x1c) & 0xf3;
    return;
  }
  if (in_AL != 'b') {
    FUN_0042ff90();
    if ((*(byte *)((int)this + 0x1c) & 8) != 0) {
      FUN_0040d2d0();
    }
  }
  return;
}


/* END FUNCTION 0x00430070 */

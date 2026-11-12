/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00465d30
 * Name: FUN_00465d30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00465d30(void *this,ushort param_1,ushort param_2)

{
  void *this_00;
  
  if ((param_1 < 1000) &&
     (this_00 = *(void **)((int)this + (uint)param_1 * 4 + 0x25d84), this_00 != (void *)0x0)) {
    FUN_004877e0(this_00,param_2);
  }
  return;
}


/* END FUNCTION 0x00465d30 */

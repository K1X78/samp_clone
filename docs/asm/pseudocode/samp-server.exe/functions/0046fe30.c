/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fe30
 * Name: FUN_0046fe30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046fe30(void *this,ushort param_1,ushort param_2)

{
  if ((param_2 < 2000) && (param_1 < 1000)) {
    return *(undefined4 *)((int)this + ((param_1 + 0x3e9) * 2000 + (uint)param_2) * 4);
  }
  return 0;
}


/* END FUNCTION 0x0046fe30 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046fe70
 * Name: FUN_0046fe70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0046fe70(void *this,ushort param_1,ushort param_2)

{
  if ((param_2 < 0x7d1) && (param_1 < 0x3e9)) {
    if (*(int *)((int)this + (uint)param_2 * 4 + 8000000) != 0) {
      return *(undefined4 *)((int)this + ((uint)param_1 * 2000 + (uint)param_2) * 4);
    }
  }
  return 0;
}


/* END FUNCTION 0x0046fe70 */

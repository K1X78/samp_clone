/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004647e0
 * Name: FUN_004647e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_004647e0(void *this,ushort param_1,undefined4 param_2)

{
  if ((param_1 < 1000) && (*(int *)((int)this + (uint)param_1 * 4 + 4000) != 0)) {
    *(undefined4 *)((int)this + (uint)param_1 * 4) = param_2;
  }
  return;
}


/* END FUNCTION 0x004647e0 */

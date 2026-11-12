/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0040ba20
 * Name: FUN_0040ba20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined8 __thiscall FUN_0040ba20(void *this,int param_1,uint param_2)

{
  if ((-2 < (int)param_2) && ((param_2 < 0x80000000 || (param_1 == -1)))) {
    *(int *)((int)this + 0x58) = param_1;
    *(uint *)((int)this + 0x5c) = param_2;
  }
  return *(undefined8 *)((int)this + 0x58);
}


/* END FUNCTION 0x0040ba20 */

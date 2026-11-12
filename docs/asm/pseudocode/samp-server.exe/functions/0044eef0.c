/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044eef0
 * Name: FUN_0044eef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_0044eef0(void *this,int *param_1)

{
  if ((*(int *)this == *param_1) && (*(short *)((int)this + 4) == (short)param_1[1])) {
    return 0;
  }
  return 1;
}


/* END FUNCTION 0x0044eef0 */

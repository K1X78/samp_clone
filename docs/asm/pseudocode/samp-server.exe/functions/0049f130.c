/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049f130
 * Name: FUN_0049f130
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_0049f130(void *this,int param_1)

{
  if (((-1 < param_1) && (param_1 < 2000)) && (*(int *)((int)this + param_1 * 4 + 0x1dc90) != 0)) {
    return (int)(param_1 * 0x3d + (int)this);
  }
  return 0;
}


/* END FUNCTION 0x0049f130 */

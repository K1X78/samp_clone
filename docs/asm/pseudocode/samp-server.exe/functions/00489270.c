/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00489270
 * Name: FUN_00489270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_00489270(void *this,int param_1)

{
  if (((-1 < param_1) && (param_1 < 800)) && (*(int *)((int)this + param_1 * 4 + 0xbea0) != 0)) {
    return (int)(param_1 * 0x3d + (int)this);
  }
  return 0;
}


/* END FUNCTION 0x00489270 */

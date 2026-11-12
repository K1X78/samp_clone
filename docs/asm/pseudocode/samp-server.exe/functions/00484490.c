/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484490
 * Name: FUN_00484490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00484490(void *this,int param_1)

{
  if ((-1 < param_1) && (param_1 < 10)) {
    return *(undefined4 *)((int)this + param_1 * 4 + 0x2f61);
  }
  return 0;
}


/* END FUNCTION 0x00484490 */

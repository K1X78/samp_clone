/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ee60
 * Name: FUN_0044ee60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0044ee60(void *this,byte param_1)

{
  FUN_0044ee00(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


/* END FUNCTION 0x0044ee60 */

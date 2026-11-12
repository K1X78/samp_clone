/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00462960
 * Name: FUN_00462960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_00462960(void *this,byte param_1)

{
  FUN_00462950(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


/* END FUNCTION 0x00462960 */

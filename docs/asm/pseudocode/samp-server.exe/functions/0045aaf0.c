/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045aaf0
 * Name: FUN_0045aaf0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0045aaf0(void *this,byte param_1)

{
  FUN_00459f10(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


/* END FUNCTION 0x0045aaf0 */

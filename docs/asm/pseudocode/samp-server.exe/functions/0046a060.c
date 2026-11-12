/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0046a060
 * Name: FUN_0046a060
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_0046a060(void *this,byte param_1)

{
  FUN_0046a080(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


/* END FUNCTION 0x0046a060 */

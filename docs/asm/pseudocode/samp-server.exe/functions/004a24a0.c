/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a24a0
 * Name: _scalar_deleting_destructor_
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall _scalar_deleting_destructor_(void *this,byte param_1)

{
  _type_info(this);
  if ((param_1 & 1) != 0) {
    _free(this);
  }
  return this;
}


/* END FUNCTION 0x004a24a0 */

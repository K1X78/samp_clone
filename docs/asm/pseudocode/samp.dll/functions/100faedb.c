/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100faedb
 * Name: FUN_100faedb
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_100faedb(void *param_1,byte param_2)

{
  _exception();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x100faedb */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028a40
 * Name: FUN_10028a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_10028a40(void *param_1,byte param_2)

{
  thunk_FUN_10026fb0();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x10028a40 */

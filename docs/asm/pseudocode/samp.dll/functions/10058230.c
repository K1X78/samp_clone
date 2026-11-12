/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058230
 * Name: FUN_10058230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_10058230(void *param_1,byte param_2)

{
  FUN_10058250();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x10058230 */

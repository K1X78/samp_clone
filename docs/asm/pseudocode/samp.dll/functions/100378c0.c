/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100378c0
 * Name: FUN_100378c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_100378c0(void *param_1,byte param_2)

{
  FUN_10024690();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x100378c0 */

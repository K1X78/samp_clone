/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004c6a0
 * Name: FUN_1004c6a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void * __thiscall FUN_1004c6a0(void *param_1,byte param_2)

{
  FUN_1004c4c0();
  if ((param_2 & 1) != 0) {
    _free(param_1);
  }
  return param_1;
}


/* END FUNCTION 0x1004c6a0 */

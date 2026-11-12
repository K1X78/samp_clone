/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fae05
 * Name: _exception
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall _exception(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1012d0d8;
  if (param_1[2] != 0) {
    _free((void *)param_1[1]);
  }
  return;
}


/* END FUNCTION 0x100fae05 */

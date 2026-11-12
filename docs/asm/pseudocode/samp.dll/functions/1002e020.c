/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1002e020
 * Name: FUN_1002e020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1002e020(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_10118e4c;
  if ((void *)param_1[1] != (void *)0x0) {
    _free((void *)param_1[1]);
  }
  return;
}


/* END FUNCTION 0x1002e020 */

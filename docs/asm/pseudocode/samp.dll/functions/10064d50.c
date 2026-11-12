/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064d50
 * Name: FUN_10064d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064d50(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1011bab4;
  if ((FILE *)param_1[1] != (FILE *)0x0) {
    _fclose((FILE *)param_1[1]);
    param_1[1] = 0;
  }
  *param_1 = &PTR_LAB_1011ba74;
  return;
}


/* END FUNCTION 0x10064d50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10058340
 * Name: FUN_10058340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10058340(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_1011b410;
  if (0xf < (uint)param_1[9]) {
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  _exception();
  return;
}


/* END FUNCTION 0x10058340 */

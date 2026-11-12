/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10031580
 * Name: FUN_10031580
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10031580(undefined4 *param_1)

{
  *param_1 = &PTR_LAB_101191cc;
  FUN_10031470();
  *(undefined1 *)(param_1 + 1) = 1;
  *(undefined4 *)((int)param_1 + 5) = 0;
  return param_1;
}


/* END FUNCTION 0x10031580 */

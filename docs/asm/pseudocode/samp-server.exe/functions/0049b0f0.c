/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049b0f0
 * Name: FUN_0049b0f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0049b0f0(undefined4 *param_1)

{
  *param_1 = &PTR_FUN_004c0214;
  if (0xf < (uint)param_1[9]) {
    _free((void *)param_1[4]);
  }
  param_1[9] = 0xf;
  param_1[8] = 0;
  *(undefined1 *)(param_1 + 4) = 0;
  _exception(param_1);
  return;
}


/* END FUNCTION 0x0049b0f0 */

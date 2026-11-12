/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10090e40
 * Name: thunk_FUN_1008de00
 * Status: ok
 * Single JMP forwarder to 0x1008de00; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall thunk_FUN_1008de00(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = 0;
  *param_1 = &PTR_FUN_1011d360;
  if (0 < (int)param_1[9]) {
    do {
      _free(*(void **)(param_1[8] + iVar1 * 4));
      iVar1 = iVar1 + 1;
    } while (iVar1 < (int)param_1[9]);
  }
  thunk_FUN_10086650(0);
  thunk_FUN_10086650(0);
  return;
}


/* END FUNCTION 0x10090e40 */

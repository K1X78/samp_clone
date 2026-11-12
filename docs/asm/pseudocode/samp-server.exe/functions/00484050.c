/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484050
 * Name: FUN_00484050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484050(int param_1)

{
  if (*(FILE **)(param_1 + 0x30ba) != (FILE *)0x0) {
    _fclose(*(FILE **)(param_1 + 0x30ba));
    *(undefined4 *)(param_1 + 0x30ba) = 0;
  }
  *(undefined4 *)(param_1 + 0x30b6) = 0;
  return;
}


/* END FUNCTION 0x00484050 */

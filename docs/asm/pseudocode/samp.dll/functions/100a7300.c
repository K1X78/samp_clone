/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a7300
 * Name: FUN_100a7300
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100a7300(uint param_1)

{
  uint local_4;
  
  if (*(int *)(param_1 + 0x372) == 0) {
    return 0xff;
  }
  local_4 = param_1;
  FUN_100b1f10(&DAT_1011ece0,*(undefined4 *)(param_1 + 0x3b4),&local_4);
  return local_4 & 0xff;
}


/* END FUNCTION 0x100a7300 */

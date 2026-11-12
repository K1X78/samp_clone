/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100ab870
 * Name: FUN_100ab870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __fastcall FUN_100ab870(uint param_1)

{
  int iVar1;
  uint local_4;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    local_4 = param_1;
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011ef54,*(undefined4 *)(param_1 + 0x44),&local_4);
      return local_4 & 0xff;
    }
  }
  return 0;
}


/* END FUNCTION 0x100ab870 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100acab0
 * Name: FUN_100acab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100acab0(int param_1)

{
  int iVar1;
  int local_4;
  
  if ((*(int *)(param_1 + 0x2e2) != 0) && (*(int *)(param_1 + 0x2a4) != 0)) {
    local_4 = param_1;
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      FUN_100b1f10(&DAT_1011ef54,*(undefined4 *)(param_1 + 0x44),&local_4);
      if ((char)local_4 != '\0') {
        FUN_100abc80(0,0);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100acab0 */

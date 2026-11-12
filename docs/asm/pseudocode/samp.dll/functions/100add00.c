/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100add00
 * Name: FUN_100add00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100add00(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x2a4) != 0) {
    iVar1 = FUN_100b3770(*(undefined4 *)(param_1 + 0x44));
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x2f2) == 0)) {
      if (*(char *)(param_1 + 0x2b0) == '\0') {
        FUN_100ace50();
      }
      FUN_100b1f10(&DAT_1011f1fc,"PETROLCAN",*(undefined4 *)(param_1 + 0x44),0,0x3fe28f5c20000000,
                   0xbfb47ae140000000,0,0x3f847ae140000000,0,1,(undefined4 *)(param_1 + 0x2bd));
      FUN_100b1f10(&DAT_1011f210,*(undefined4 *)(param_1 + 0x2bd));
      *(undefined4 *)(param_1 + 0x2f2) = 1;
    }
  }
  return;
}


/* END FUNCTION 0x100add00 */

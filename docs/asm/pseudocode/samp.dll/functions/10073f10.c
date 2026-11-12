/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073f10
 * Name: FUN_10073f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10073f10(void)

{
  int iVar1;
  
  if (DAT_102aca3c != 0) {
    iVar1 = FUN_100a0760();
    if ((iVar1 != 0) && (DAT_1017ebe0 == '\0')) {
      DAT_1017ebe0 = 1;
      FUN_100a0280();
      return;
    }
    iVar1 = FUN_100a0760();
    if ((iVar1 == 0) && (DAT_1017ebe0 != '\0')) {
      DAT_1017ebe0 = 0;
      FUN_100a0280();
      return;
    }
  }
  return;
}


/* END FUNCTION 0x10073f10 */

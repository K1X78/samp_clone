/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fe50
 * Name: FUN_1009fe50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009fe50(void)

{
  int iVar1;
  
  iVar1 = FUN_1002e2b0();
  if (DAT_1018e524 != 0) {
    if ((0x1e < iVar1 - DAT_1018e524) &&
       (DAT_1018e520 = DAT_1018e520 + '\x01', DAT_1018e524 = iVar1, DAT_1018e520 == '\x05')) {
      DAT_1018e520 = '\0';
    }
    DAT_00b7356e = DAT_1018e520;
    return;
  }
  DAT_1018e524 = iVar1;
  return;
}


/* END FUNCTION 0x1009fe50 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10098d80
 * Name: FUN_10098d80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10098d80(void)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = FUN_10098c60();
  if ((cVar1 != '\0') && (DAT_10181aa8 != (code *)0x0)) {
                    /* WARNING: Could not recover jumptable at 0x10098d92. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (*DAT_10181aa8)();
    return uVar2;
  }
  return 0;
}


/* END FUNCTION 0x10098d80 */

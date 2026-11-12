/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2750
 * Name: FUN_100b2750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100b2750(int param_1)

{
  int iVar1;
  
  if ((-1 < param_1) && (param_1 < 200)) {
    (&DAT_102a9720)[param_1] = 0;
    iVar1 = (&DAT_102a9400)[param_1];
    if (iVar1 != 0) {
      FUN_100b3560(iVar1);
    }
    (&DAT_102a9400)[param_1] = 0;
  }
  return;
}


/* END FUNCTION 0x100b2750 */

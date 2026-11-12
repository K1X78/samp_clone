/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b2720
 * Name: FUN_100b2720
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100b2720(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_102a9720)[iVar1] == 0) {
      (&DAT_102a9720)[iVar1] = 1;
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 200);
  return -1;
}


/* END FUNCTION 0x100b2720 */

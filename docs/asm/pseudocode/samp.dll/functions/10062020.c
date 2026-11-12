/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10062020
 * Name: FUN_10062020
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10062020(void)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if ((&DAT_1016be98)[iVar1] == 0) {
      return iVar1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x32);
  return -1;
}


/* END FUNCTION 0x10062020 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045870
 * Name: FUN_10045870
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10045870(void)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  for (iVar1 = FUN_100445c0(); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0xc5)) {
    iVar2 = iVar2 + *(int *)(iVar1 + 1);
  }
  return iVar2;
}


/* END FUNCTION 0x10045870 */

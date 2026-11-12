/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003ab10
 * Name: FUN_1003ab10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003ab10(void)

{
  int iVar1;
  
  iVar1 = FUN_10038d90();
  while (iVar1 != 0) {
    if (*(void **)(iVar1 + 0xb) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0xb));
    }
    FUN_10038dc0();
    iVar1 = FUN_10038d90();
  }
  FUN_10038de0();
  return;
}


/* END FUNCTION 0x1003ab10 */

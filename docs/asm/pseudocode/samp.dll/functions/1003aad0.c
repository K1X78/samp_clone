/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003aad0
 * Name: FUN_1003aad0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003aad0(void)

{
  int iVar1;
  
  iVar1 = FUN_10038f60();
  while (iVar1 != 0) {
    if (*(void **)(iVar1 + 0x21) != (void *)0x0) {
      _free(*(void **)(iVar1 + 0x21));
    }
    FUN_10038f80();
    iVar1 = FUN_10038f60();
  }
  FUN_10038fa0();
  return;
}


/* END FUNCTION 0x1003aad0 */

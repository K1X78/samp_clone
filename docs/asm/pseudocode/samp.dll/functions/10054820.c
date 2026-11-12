/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054820
 * Name: FUN_10054820
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054820(void)

{
  void *pvVar1;
  
  DAT_1015fa60 = DAT_1015fa60 + 1;
  if (DAT_1015fa60 == 1) {
    pvVar1 = operator_new(0xc);
    if (pvVar1 != (void *)0x0) {
      DAT_1015fa5c = FUN_10054790();
      return;
    }
    DAT_1015fa5c = 0;
  }
  return;
}


/* END FUNCTION 0x10054820 */

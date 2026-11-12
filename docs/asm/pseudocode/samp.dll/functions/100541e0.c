/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100541e0
 * Name: FUN_100541e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100541e0(void)

{
  void *_Memory;
  
  _Memory = DAT_1015fa54;
  if ((0 < DAT_1015fa58) && (DAT_1015fa58 = DAT_1015fa58 + -1, DAT_1015fa58 == 0)) {
    if (DAT_1015fa54 != (void *)0x0) {
      FUN_100540d0();
      _free(_Memory);
    }
    DAT_1015fa54 = (void *)0x0;
  }
  return;
}


/* END FUNCTION 0x100541e0 */

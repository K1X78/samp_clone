/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054880
 * Name: FUN_10054880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054880(void)

{
  void *_Memory;
  
  _Memory = DAT_1015fa5c;
  if ((0 < DAT_1015fa60) && (DAT_1015fa60 = DAT_1015fa60 + -1, DAT_1015fa60 == 0)) {
    if (DAT_1015fa5c != (void *)0x0) {
      FUN_100547a0();
      _free(_Memory);
    }
    DAT_1015fa5c = (void *)0x0;
  }
  return;
}


/* END FUNCTION 0x10054880 */

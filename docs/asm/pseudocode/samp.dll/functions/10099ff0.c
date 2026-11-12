/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10099ff0
 * Name: FUN_10099ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_10099ff0(void)

{
  char cVar1;
  
  cVar1 = FUN_100998e0();
  if (cVar1 != '\0') {
    DAT_10181c5c = DAT_10181c5c | 4;
    return 0;
  }
  DAT_10181c5c = DAT_10181c5c & 0xfffffffb;
  return 0;
}


/* END FUNCTION 0x10099ff0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b3f60
 * Name: FUN_100b3f60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


byte FUN_100b3f60(int param_1)

{
  byte bVar1;
  
  bVar1 = 0;
  do {
    if ((&DAT_102a9da8)[bVar1] == param_1) {
      return bVar1;
    }
    bVar1 = bVar1 + 1;
  } while (bVar1 != 0xd2);
  return 0;
}


/* END FUNCTION 0x100b3f60 */

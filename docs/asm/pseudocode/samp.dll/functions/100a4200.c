/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a4200
 * Name: FUN_100a4200
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a4200(void)

{
  undefined4 local_8;
  
  local_8 = (code *)0x7fb060;
  if (DAT_102ac9b8 == 1) {
    local_8 = (code *)0x7fb020;
  }
  if (DAT_1018f560 != 0) {
    (*local_8)(DAT_1018f560);
  }
  DAT_1018f560 = 0;
  return;
}


/* END FUNCTION 0x100a4200 */

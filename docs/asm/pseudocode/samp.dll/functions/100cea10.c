/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100cea10
 * Name: FUN_100cea10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100cea10(int *param_1)

{
  byte *pbVar1;
  
  pbVar1 = *(byte **)(*param_1 + 0x6c);
  if ((pbVar1 != (byte *)0x0) && ((*pbVar1 & 0x10) != 0)) {
    FUN_100dec30(*param_1,4,2);
  }
  return;
}


/* END FUNCTION 0x100cea10 */

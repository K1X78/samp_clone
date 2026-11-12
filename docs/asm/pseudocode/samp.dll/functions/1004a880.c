/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1004a880
 * Name: FUN_1004a880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1004a880(int param_1)

{
  char cVar1;
  
  cVar1 = FUN_10033480();
  if (cVar1 != '\0') {
    FUN_1001f470(param_1,0x20,1);
    FUN_1001f470(param_1 + 4,0x10,1);
  }
  FUN_1001f470(param_1 + 6,0x10,1);
  return;
}


/* END FUNCTION 0x1004a880 */

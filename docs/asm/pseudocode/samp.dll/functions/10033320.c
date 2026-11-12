/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033320
 * Name: FUN_10033320
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_10033320(int param_1,int param_2)

{
  char cVar1;
  
  if (DAT_10156bdc == '\0') {
    return *(short *)(param_1 + 6) == *(short *)(param_2 + 6);
  }
  cVar1 = FUN_100331a0(param_2);
  if ((cVar1 != '\0') && (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) {
    return true;
  }
  return false;
}


/* END FUNCTION 0x10033320 */

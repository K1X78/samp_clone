/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033370
 * Name: FUN_10033370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_10033370(int param_1,int param_2)

{
  char cVar1;
  
  if (DAT_10156bdc == '\0') {
    return *(short *)(param_1 + 6) != *(short *)(param_2 + 6);
  }
  cVar1 = FUN_100331d0(param_2);
  if ((cVar1 == '\0') && (*(short *)(param_1 + 6) == *(short *)(param_2 + 6))) {
    return false;
  }
  return true;
}


/* END FUNCTION 0x10033370 */

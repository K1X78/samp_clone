/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009fed0
 * Name: FUN_1009fed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009fed0(int param_1,int param_2)

{
  int iVar1;
  
  if (((param_1 != 0) && (param_2 != 0)) &&
     (iVar1 = (int)(1000 / (longlong)param_2), param_1 < iVar1)) {
    Sleep((iVar1 - param_1) - 1);
  }
  return;
}


/* END FUNCTION 0x1009fed0 */

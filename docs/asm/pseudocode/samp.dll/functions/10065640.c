/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065640
 * Name: FUN_10065640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10065640(uint param_1,int param_2)

{
  int iVar1;
  
  if (param_1 >> 2 != 0) {
    iVar1 = ((param_1 >> 2) - 1 >> 1) + 1;
    do {
      FUN_10065580(param_2,param_2 + 4);
      param_2 = param_2 + 8;
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  return;
}


/* END FUNCTION 0x10065640 */

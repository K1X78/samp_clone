/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100fad53
 * Name: FUN_100fad53
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100fad53(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_1 / param_2;
  if ((param_1 < 0) && (0 < param_1 % param_2)) {
    iVar1 = iVar1 + 1;
  }
  return iVar1;
}


/* END FUNCTION 0x100fad53 */

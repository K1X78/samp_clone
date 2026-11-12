/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c2880
 * Name: FUN_100c2880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_100c2880(int param_1,int param_2)

{
  int iVar1;
  int extraout_ECX;
  
  iVar1 = FUN_100c27c0(param_2);
  return iVar1 + *(int *)(extraout_ECX + 0x376a9 + (param_2 * 0x110 + param_1) * 4);
}


/* END FUNCTION 0x100c2880 */

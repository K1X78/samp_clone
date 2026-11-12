/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100dc080
 * Name: FUN_100dc080
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100dc080(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 == 1) ||
     ((param_2 == 2 && ((*(uint *)(*(int *)(param_1 + 800) + 0x44) & 0x200) == 0)))) {
    iVar1 = 1;
  }
  else {
    iVar1 = 0;
  }
  if (((param_2 != 2) || ((*(uint *)(*(int *)(param_1 + 800) + 0x44) & 0x200) == 0)) &&
     (iVar1 != *(int *)(param_1 + 0x284))) {
    *(int *)(param_1 + 0x284) = iVar1;
  }
  return;
}


/* END FUNCTION 0x100dc080 */

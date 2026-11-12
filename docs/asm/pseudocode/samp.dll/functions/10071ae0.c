/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071ae0
 * Name: FUN_10071ae0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10071ae0(int *param_1,int *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = *param_3 - *param_1 / 2;
  *param_2 = iVar1;
  param_2[2] = *param_1 + iVar1;
  iVar1 = param_3[1] - param_1[1] / 2;
  param_2[1] = iVar1;
  param_2[3] = param_1[1] + iVar1;
  return;
}


/* END FUNCTION 0x10071ae0 */

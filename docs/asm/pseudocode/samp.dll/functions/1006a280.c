/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006a280
 * Name: FUN_1006a280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_1006a280(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  *param_2 = iVar1;
  param_2[2] = *(int *)(param_1 + 0x14) + iVar1;
  iVar1 = *(int *)(param_1 + 0x10);
  param_2[1] = iVar1;
  param_2[3] = *(int *)(param_1 + 0x18) + iVar1;
  return;
}


/* END FUNCTION 0x1006a280 */

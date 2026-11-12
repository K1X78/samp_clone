/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100954b0
 * Name: FUN_100954b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100954b0(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 0x1c);
  *(undefined4 *)(param_1 + 0x158) = *(undefined4 *)(param_2 + 0x18);
  *(int *)(param_1 + 0x15c) = iVar1;
  *(undefined4 *)(param_1 + 0x168) = 0x3f666666;
  *(float *)(param_1 + 0x160) = (float)*(int *)(param_1 + 0x158) * 0.5;
  *(float *)(param_1 + 0x164) = (float)iVar1 * 0.5;
  return 0;
}


/* END FUNCTION 0x100954b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10111ff0
 * Name: FUN_10111ff0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10111ff0(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 extraout_var;
  
  FUN_10111df0(param_1,param_2,param_3);
  iVar1 = (uint)*(byte *)(param_3 + 1) * 8;
  (**(code **)(&UNK_1013325c + iVar1))(&DAT_10133258 + iVar1,param_2 + 1,param_3 + 1,extraout_var);
  return;
}


/* END FUNCTION 0x10111ff0 */

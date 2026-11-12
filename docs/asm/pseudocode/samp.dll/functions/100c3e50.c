/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c3e50
 * Name: FUN_100c3e50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c3e50(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0x94;
  FUN_100c2130(1);
  FUN_100c2130(0);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(&DAT_1011f924 + *(int *)(param_1 + 0x44) * 4);
  FUN_100c26a0(iVar1,*(int *)(param_1 + 100) == 0,param_1 + 0x30d29);
  FUN_100c2320(iVar1,param_1 + 0x3275d,0x3f);
  FUN_100c20e0();
  FUN_100c2360(iVar1,param_1 + 0x32a41,0xf);
  return;
}


/* END FUNCTION 0x100c3e50 */

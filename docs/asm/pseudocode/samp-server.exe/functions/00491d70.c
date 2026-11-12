/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491d70
 * Name: FUN_00491d70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __fastcall FUN_00491d70(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_004904e0();
  *(int *)(param_1 + 4) = iVar1;
  *(undefined1 *)(iVar1 + 0x2d) = 1;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(undefined4 *)(param_1 + 8) = 0;
  return param_1;
}


/* END FUNCTION 0x00491d70 */

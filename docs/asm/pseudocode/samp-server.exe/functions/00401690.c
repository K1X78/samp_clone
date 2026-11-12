/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401690
 * Name: FUN_00401690
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401690(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = (*(int *)(iVar1 + 0x24) - *(int *)(iVar1 + 0x20)) / (int)*(short *)(iVar1 + 10);
  return 0;
}


/* END FUNCTION 0x00401690 */

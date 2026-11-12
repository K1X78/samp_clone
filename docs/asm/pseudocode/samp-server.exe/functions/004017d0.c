/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004017d0
 * Name: FUN_004017d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004017d0(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  *param_2 = (*(int *)(iVar1 + 0x30) - *(int *)(iVar1 + 0x2c)) / (int)*(short *)(iVar1 + 10);
  return 0;
}


/* END FUNCTION 0x004017d0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401920
 * Name: FUN_00401920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401920(int *param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (*(char *)(iVar1 + 6) < '\x05') {
    *param_2 = 0;
    return 0x12;
  }
  if (*(char *)(iVar1 + 6) < '\a') {
    *param_2 = (*(int *)(iVar1 + 0xc) - *(int *)(iVar1 + 0x30)) / (int)*(short *)(iVar1 + 10);
    return 0;
  }
  *param_2 = (*(int *)(iVar1 + 0x34) - *(int *)(iVar1 + 0x30)) / (int)*(short *)(iVar1 + 10);
  return 0;
}


/* END FUNCTION 0x00401920 */

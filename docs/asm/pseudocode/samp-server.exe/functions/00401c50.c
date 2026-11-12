/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00401c50
 * Name: FUN_00401c50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00401c50(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  if (param_1[8] < param_1[6] + 0x40) {
    return 3;
  }
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    iVar2 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  iVar1 = param_1[8] + -4;
  param_1[0x14] = param_1[0x14] + 1;
  param_1[8] = iVar1;
  *(undefined4 *)(iVar1 + iVar2) = param_2;
  return 0;
}


/* END FUNCTION 0x00401c50 */

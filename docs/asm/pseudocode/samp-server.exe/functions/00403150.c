/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403150
 * Name: FUN_00403150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00403150(int *param_1,int param_2,int *param_3,int *param_4)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  if ((uint)((param_1[8] + param_2 * -4) - param_1[6]) < 0x40) {
    return 0x10;
  }
  *param_3 = param_1[6];
  *param_4 = param_1[6] + iVar1;
  param_1[6] = param_1[6] + param_2 * 4;
  return 0;
}


/* END FUNCTION 0x00403150 */

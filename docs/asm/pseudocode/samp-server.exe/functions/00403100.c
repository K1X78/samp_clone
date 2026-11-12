/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403100
 * Name: FUN_00403100
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00403100(int *param_1,int param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (iVar1 == 0) {
    iVar1 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  if ((((param_2 < param_1[6]) || (param_1[8] <= param_2)) && (-1 < param_2)) &&
     (param_2 < param_1[9])) {
    *param_3 = iVar1 + param_2;
    return 0;
  }
  *param_3 = 0;
  return 5;
}


/* END FUNCTION 0x00403100 */

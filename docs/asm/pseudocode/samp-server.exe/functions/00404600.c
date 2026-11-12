/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00404600
 * Name: FUN_00404600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00404600(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[1];
  if (iVar2 == 0) {
    iVar2 = *(int *)(*param_1 + 0x10) + *param_1;
  }
  iVar1 = *(int *)(param_1[5] + 0xc + *(int *)(param_2 + 4) * 4 + iVar2) + *(int *)(param_2 + 8) * 4
  ;
  if ((-1 < iVar1) && ((iVar1 < param_1[6] || (param_1[8] <= iVar1)))) {
    *(undefined4 *)(iVar1 + iVar2) = *(undefined4 *)(param_2 + 0xc);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00404600 */

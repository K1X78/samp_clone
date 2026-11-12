/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479f70
 * Name: FUN_00479f70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479f70(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *local_4;
  
  if (DAT_004fc444 == (void *)0x0) {
    return 0;
  }
  iVar1 = FUN_00496f20(DAT_004fc444,*(int *)(param_2 + 4));
  if (iVar1 != 0) {
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
    FUN_00403250(local_4,(short *)(iVar1 + 0x112),0,0,*(uint *)(param_2 + 0xc));
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00479f70 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475260
 * Name: FUN_00475260
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475260(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *local_4;
  
  if (*(int *)(DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 + (uint)*(ushort *)(param_2 + 4) * 4
                      ), iVar1 != 0)) {
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar1 + 0x3a);
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar1 + 0x3e);
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar1 + 0x42);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00475260 */

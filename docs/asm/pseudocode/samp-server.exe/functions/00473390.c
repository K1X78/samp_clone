/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473390
 * Name: FUN_00473390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00473390(int *param_1,int param_2)

{
  int iVar1;
  float *local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  if (*(int *)(DAT_004fc438 + 0xc) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0xc) + 0x3f54 + (uint)*(ushort *)(param_2 + 4) * 4),
     iVar1 != 0)) {
    FUN_0048f0d0((float *)(iVar1 + 0xc),&local_10);
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_14);
    *local_14 = local_10;
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_14);
    *local_14 = local_c;
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_14);
    *local_14 = local_8;
    FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_14);
    *local_14 = local_4;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00473390 */

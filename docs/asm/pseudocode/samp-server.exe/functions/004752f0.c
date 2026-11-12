/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004752f0
 * Name: FUN_004752f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004752f0(int *param_1,int param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *local_4;
  
  if (*(int *)(DAT_004fc438 + 0x14) == 0) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 4) < 2000) &&
     (iVar1 = *(int *)(*(int *)(DAT_004fc438 + 0x14) + 0xf46280 + (uint)*(ushort *)(param_2 + 4) * 4
                      ), iVar1 != 0)) {
    puVar2 = (undefined4 *)FUN_0049d8c0(iVar1);
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
    *local_4 = *puVar2;
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
    *local_4 = puVar2[1];
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
    *local_4 = puVar2[2];
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x004752f0 */

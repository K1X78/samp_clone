/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00479740
 * Name: FUN_00479740
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00479740(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 0x28);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((((uVar1 < 1000) && (*(int *)(iVar2 + 4000 + (uint)uVar1 * 4) != 0)) && (uVar1 < 1000)) &&
     (iVar2 = *(int *)(iVar2 + 8000 + (uint)uVar1 * 4), iVar2 != 0)) {
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar2 + 0xbc);
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar2 + 0xc0);
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
    *local_4 = *(undefined4 *)(iVar2 + 0xc4);
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00479740 */

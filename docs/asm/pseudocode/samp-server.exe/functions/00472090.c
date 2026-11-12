/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472090
 * Name: FUN_00472090
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472090(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *local_10;
  undefined4 local_c;
  undefined4 local_8;
  undefined4 local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((((uVar1 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) && (uVar1 < 1000)) &&
     (iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4), iVar2 != 0)) {
    local_c = *(undefined4 *)(iVar2 + 0xd);
    local_8 = *(undefined4 *)(iVar2 + 0x11);
    local_4 = *(undefined4 *)(iVar2 + 0x15);
    FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_10);
    *local_10 = local_c;
    FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_10);
    *local_10 = local_8;
    FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_10);
    *local_10 = local_4;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00472090 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004710a0
 * Name: FUN_004710a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004710a0(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 8);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = *(ushort *)(param_2 + 4);
  if ((uVar1 < 1000) && (*(int *)(iVar2 + 0x24de4 + (uint)uVar1 * 4) != 0)) {
    if (uVar1 < 1000) {
      iVar2 = *(int *)(iVar2 + 0x25d84 + (uint)uVar1 * 4);
    }
    else {
      iVar2 = 0;
    }
    if (iVar2 != -0x307f) {
      FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x3082);
      FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x3086);
      FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x308a);
      FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x308e);
      FUN_00403100(param_1,*(int *)(param_2 + 0x18),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x3092);
      FUN_00403100(param_1,*(int *)(param_2 + 0x1c),(int *)&local_4);
      *local_4 = *(undefined4 *)(iVar2 + 0x3096);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004710a0 */

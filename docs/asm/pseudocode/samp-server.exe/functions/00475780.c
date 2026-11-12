/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475780
 * Name: FUN_00475780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475780(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *local_4;
  
  if (*(int *)(DAT_004fc438 + 8) != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if (((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0))
       && (*(void **)(DAT_004fc438 + 0x14) != (void *)0x0)) {
      iVar2 = FUN_0046fe30(*(void **)(DAT_004fc438 + 0x14),uVar1,*(ushort *)(param_2 + 8));
      if (iVar2 != 0) {
        FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
        *local_4 = *(undefined4 *)(iVar2 + 0x3a);
        FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
        *local_4 = *(undefined4 *)(iVar2 + 0x3e);
        FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_4);
        *local_4 = *(undefined4 *)(iVar2 + 0x42);
        return 1;
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x00475780 */

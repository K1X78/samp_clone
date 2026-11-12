/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00472880
 * Name: FUN_00472880
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00472880(int *param_1,int param_2)

{
  ushort uVar1;
  int iVar2;
  int *local_4;
  
  iVar2 = *(int *)(DAT_004fc438 + 0xc);
  if (iVar2 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 2000) && (*(int *)(iVar2 + 0x2014 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 2000) {
        iVar2 = *(int *)(iVar2 + 0x3f54 + (uint)uVar1 * 4);
      }
      else {
        iVar2 = 0;
      }
      iVar2 = FUN_004899c0(iVar2);
      FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
      *local_4 = (int)*(char *)(iVar2 + 8);
      FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
      *local_4 = (int)*(char *)(iVar2 + 9);
      FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
      *local_4 = (int)*(char *)(iVar2 + 10);
      FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_4);
      *local_4 = (int)*(char *)(iVar2 + 0xb);
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x00472880 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004726b0
 * Name: FUN_004726b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_004726b0(int *param_1,int param_2)

{
  ushort uVar1;
  char *pcVar2;
  int iVar3;
  int *local_4;
  
  iVar3 = *(int *)(DAT_004fc438 + 0xc);
  if (iVar3 != 0) {
    uVar1 = *(ushort *)(param_2 + 4);
    if ((uVar1 < 2000) && (*(int *)(iVar3 + 0x2014 + (uint)uVar1 * 4) != 0)) {
      if (uVar1 < 2000) {
        iVar3 = *(int *)(iVar3 + 0x3f54 + (uint)uVar1 * 4);
      }
      else {
        iVar3 = 0;
      }
      pcVar2 = (char *)FUN_004899c0(iVar3);
      FUN_00403100(param_1,*(int *)(param_2 + 8),(int *)&local_4);
      *local_4 = (int)*pcVar2;
      FUN_00403100(param_1,*(int *)(param_2 + 0xc),(int *)&local_4);
      *local_4 = (int)pcVar2[1];
      FUN_00403100(param_1,*(int *)(param_2 + 0x10),(int *)&local_4);
      *local_4 = (int)pcVar2[2];
      FUN_00403100(param_1,*(int *)(param_2 + 0x14),(int *)&local_4);
      *local_4 = (int)pcVar2[3];
      FUN_00403100(param_1,*(int *)(param_2 + 0x18),(int *)&local_4);
      *local_4 = (int)pcVar2[4];
      FUN_00403100(param_1,*(int *)(param_2 + 0x1c),(int *)&local_4);
      *local_4 = (int)pcVar2[5];
      FUN_00403100(param_1,*(int *)(param_2 + 0x20),(int *)&local_4);
      *local_4 = (int)pcVar2[6];
      return 1;
    }
  }
  return 0;
}


/* END FUNCTION 0x004726b0 */

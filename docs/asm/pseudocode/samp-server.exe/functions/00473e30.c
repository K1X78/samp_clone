/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00473e30
 * Name: FUN_00473e30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00473e30(int *param_1,int *param_2)

{
  char cVar1;
  short sVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_2;
  if (((*(ushort *)(param_2 + 1) < 1000) &&
      (iVar4 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 1) * 4),
      iVar4 != 0)) &&
     ((cVar1 = *(char *)(iVar4 + 0x2f95), cVar1 == '\x01' ||
      (((cVar1 == '\x02' || (cVar1 == '\x03')) || (cVar1 == '\t')))))) {
    iVar5 = *(int *)(iVar4 + 0x2d35);
    sVar2 = *(short *)(iVar4 + 0x2d33);
    sVar3 = *(short *)(iVar4 + 0x2d31);
    FUN_00403100(param_1,param_2[2],(int *)&param_2);
    *param_2 = iVar5;
    FUN_00403100(param_1,piVar6[3],(int *)&param_2);
    *param_2 = (int)sVar2;
    FUN_00403100(param_1,piVar6[4],(int *)&param_2);
    *param_2 = (int)sVar3;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00473e30 */

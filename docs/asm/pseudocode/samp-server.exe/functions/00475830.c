/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00475830
 * Name: FUN_00475830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00475830(int *param_1,undefined4 *param_2)

{
  ushort uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  
  puVar3 = param_2;
  uVar1 = *(ushort *)(param_2 + 1);
  if ((((uVar1 < 1000) && (*(int *)(*(int *)(DAT_004fc438 + 8) + 0x24de4 + (uint)uVar1 * 4) != 0))
      && (*(ushort *)(param_2 + 2) < 2000)) &&
     ((uVar1 < 1000 &&
      (iVar2 = *(int *)(*(int *)(DAT_004fc438 + 0x14) +
                       ((uVar1 + 0x3e9) * 2000 + (uint)*(ushort *)(param_2 + 2)) * 4), iVar2 != 0)))
     ) {
    puVar4 = (undefined4 *)FUN_0049d8c0(iVar2);
    FUN_00403100(param_1,puVar3[3],(int *)&param_2);
    *param_2 = *puVar4;
    FUN_00403100(param_1,puVar3[4],(int *)&param_2);
    *param_2 = puVar4[1];
    FUN_00403100(param_1,puVar3[5],(int *)&param_2);
    *param_2 = puVar4[2];
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00475830 */

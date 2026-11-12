/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00477830
 * Name: FUN_00477830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00477830(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  
  puVar1 = param_2;
  if (*(ushort *)(param_2 + 1) < 1000) {
    iVar2 = *(int *)(*(int *)(DAT_004fc438 + 8) + 0x25d84 + (uint)*(ushort *)(param_2 + 1) * 4);
  }
  else {
    iVar2 = 0;
  }
  if ((iVar2 != 0) && (*(char *)(iVar2 + 0x2f95) == '\x01')) {
    FUN_00403100(param_1,param_2[2],(int *)&param_2);
    *param_2 = *(undefined4 *)(iVar2 + 0x2d25);
    FUN_00403100(param_1,puVar1[3],(int *)&param_2);
    *param_2 = *(undefined4 *)(iVar2 + 0x2d29);
    FUN_00403100(param_1,puVar1[4],(int *)&param_2);
    *param_2 = *(undefined4 *)(iVar2 + 0x2d2d);
    return 1;
  }
  FUN_00403100(param_1,param_2[2],(int *)&param_2);
  *param_2 = 0;
  FUN_00403100(param_1,puVar1[3],(int *)&param_2);
  *param_2 = 0;
  FUN_00403100(param_1,puVar1[4],(int *)&param_2);
  *param_2 = 0;
  return 0;
}


/* END FUNCTION 0x00477830 */

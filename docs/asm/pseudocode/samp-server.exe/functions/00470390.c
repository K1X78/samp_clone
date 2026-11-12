/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00470390
 * Name: FUN_00470390
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl FUN_00470390(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
  puVar2 = param_2;
  iVar1 = param_2[1];
  if ((399 < iVar1) && (iVar1 < 0x264)) {
    puVar3 = (undefined4 *)FUN_004892a0(iVar1,param_2[2]);
    if (puVar3 == (undefined4 *)0x0) {
      return 0;
    }
    FUN_00403100(param_1,puVar2[3],(int *)&param_2);
    *param_2 = *puVar3;
    FUN_00403100(param_1,puVar2[4],(int *)&param_2);
    *param_2 = puVar3[1];
    FUN_00403100(param_1,puVar2[5],(int *)&param_2);
    *param_2 = puVar3[2];
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x00470390 */

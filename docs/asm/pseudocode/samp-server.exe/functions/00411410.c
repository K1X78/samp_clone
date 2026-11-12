/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00411410
 * Name: FUN_00411410
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __cdecl FUN_00411410(int param_1,int param_2,byte *param_3,int param_4,byte *param_5)

{
  int iVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  
  iVar1 = param_2;
  iVar3 = param_4;
  if (param_2 < param_4) {
    iVar3 = param_2;
  }
  bVar6 = false;
  bVar7 = true;
  iVar2 = iVar3;
  pbVar4 = param_3;
  pbVar5 = param_5;
  do {
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    bVar6 = *pbVar4 < *pbVar5;
    bVar7 = *pbVar4 == *pbVar5;
    pbVar4 = pbVar4 + 1;
    pbVar5 = pbVar5 + 1;
  } while (bVar7);
  param_2 = 0;
  if (!bVar7) {
    param_2 = (1 - (uint)bVar6) - (uint)(bVar6 != 0);
  }
  if ((param_2 == 0) &&
     (((param_1 == 0 ||
       (bVar6 = FUN_004113f0((int)(param_3 + iVar3)), CONCAT31(extraout_var,bVar6) == 0)) ||
      (bVar6 = FUN_004113f0((int)(param_5 + iVar3)), CONCAT31(extraout_var_00,bVar6) == 0)))) {
    return iVar1 - param_4;
  }
  return param_2;
}


/* END FUNCTION 0x00411410 */

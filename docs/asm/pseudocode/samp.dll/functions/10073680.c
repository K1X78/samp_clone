/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10073680
 * Name: FUN_10073680
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_10073680(int param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (param_2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x10073762. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x38))();
    return uVar3;
  }
  DAT_10174d30 = param_2;
  DAT_10174d20 = param_7;
  DAT_10174d34 = 0;
  pcVar2 = param_3;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar4 = param_3;
  pcVar5 = DAT_1017e97c;
  if ((uint)((int)pcVar2 - (int)(param_3 + 1)) < 0x186a1) {
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      pcVar2 = DAT_1017e980;
      pcVar4 = pcVar4 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 != '\0');
    do {
      cVar1 = *param_3;
      param_3 = param_3 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_10073440(DAT_1017e97c,&DAT_10174d38,20000);
    FUN_100b5c00(DAT_1017e980);
    pcVar2 = DAT_1017e980;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    uVar3 = (**(code **)(**(int **)(param_1 + 4) + 0x38))
                      (*(int **)(param_1 + 4),&PTR_PTR_10140bd8,DAT_1017e980,
                       (int)pcVar2 - (int)(DAT_1017e980 + 1),param_5,param_6,param_7);
    return uVar3;
  }
  return 0;
}


/* END FUNCTION 0x10073680 */

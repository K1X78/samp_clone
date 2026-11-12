/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008a120
 * Name: FUN_1008a120
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1008a120(int param_1,char *param_2,undefined4 param_3)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  iVar1 = (int)param_2;
  if (param_2 == (char *)0x0) {
    return 0x80070057;
  }
  param_2 = operator_new(0x115);
  if (param_2 == (char *)0x0) {
    return 0x8007000e;
  }
  pcVar2 = param_2;
  for (iVar3 = 0x45; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  iVar3 = 0x100;
  pcVar2 = param_2;
  do {
    if (pcVar2[iVar1 - (int)param_2] == '\0') {
      if (iVar3 != 0) goto LAB_1008a185;
      break;
    }
    *pcVar2 = pcVar2[iVar1 - (int)param_2];
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar2 = pcVar2 + -1;
LAB_1008a185:
  *pcVar2 = '\0';
  *(undefined4 *)(param_2 + 0x100) = param_3;
  FUN_10089670(&param_2);
  FUN_100886d0(0,*(undefined4 *)(param_1 + 0x259));
  if (*(int *)(param_1 + 0x259) == 1) {
    *(undefined4 *)(param_1 + 0x152) = 0;
    *(undefined4 *)(param_1 + 0x156) = 0;
    FUN_10084460(0x201,0,param_1);
  }
  return 0;
}


/* END FUNCTION 0x1008a120 */

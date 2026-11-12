/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008c8f0
 * Name: FUN_1008c8f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_1008c8f0(int param_1,char *param_2,int param_3,int param_4)

{
  char *_Str2;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  _Str2 = param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    do {
      pcVar2 = *(char **)(*(int *)(param_1 + 0x14) + iVar3 * 4);
      iVar1 = __strnicmp(pcVar2,_Str2,0x103);
      if (((iVar1 == 0) && (*(int *)(pcVar2 + 0x108) == param_3)) &&
         (*(int *)(pcVar2 + 0x10c) == param_4)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  param_2 = operator_new(0x110);
  if (param_2 == (char *)0x0) {
    return -1;
  }
  pcVar2 = param_2;
  for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  pcVar2 = param_2;
  for (iVar3 = 0x44; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  iVar3 = 0x104;
  pcVar2 = param_2;
  do {
    if (pcVar2[(int)_Str2 - (int)param_2] == '\0') {
      if (iVar3 != 0) goto LAB_1008c999;
      break;
    }
    *pcVar2 = pcVar2[(int)_Str2 - (int)param_2];
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar2 = pcVar2 + -1;
LAB_1008c999:
  *pcVar2 = '\0';
  *(int *)(param_2 + 0x108) = param_3;
  *(int *)(param_2 + 0x10c) = param_4;
  FUN_10089550(&param_2);
  iVar3 = *(int *)(param_1 + 0x18) + -1;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_1008c170(iVar3);
  }
  return iVar3;
}


/* END FUNCTION 0x1008c8f0 */

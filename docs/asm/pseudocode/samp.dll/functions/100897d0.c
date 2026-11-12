/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100897d0
 * Name: FUN_100897d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_100897d0(int param_1,char *param_2)

{
  char *_Str2;
  int iVar1;
  char *pcVar2;
  int iVar3;
  
  _Str2 = param_2;
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    do {
      iVar1 = __strnicmp(*(char **)(*(int *)(param_1 + 8) + iVar3 * 4),_Str2,0x103);
      if (iVar1 == 0) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0xc));
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
      if (iVar3 != 0) goto LAB_1008985d;
      break;
    }
    *pcVar2 = pcVar2[(int)_Str2 - (int)param_2];
    pcVar2 = pcVar2 + 1;
    iVar3 = iVar3 + -1;
  } while (iVar3 != 0);
  pcVar2 = pcVar2 + -1;
LAB_1008985d:
  *pcVar2 = '\0';
  FUN_10089510(&param_2);
  iVar3 = *(int *)(param_1 + 0xc) + -1;
  if (*(int *)(param_1 + 0x20) != 0) {
    FUN_100874b0(iVar3);
  }
  return iVar3;
}


/* END FUNCTION 0x100897d0 */

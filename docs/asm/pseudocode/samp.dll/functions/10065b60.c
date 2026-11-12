/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10065b60
 * Name: FUN_10065b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10065b60(int param_1,undefined4 param_2,char *param_3,int param_4)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  
  iVar2 = FUN_10065710(param_2);
  if ((iVar2 < 0) && (iVar2 = FUN_100657d0(param_2), iVar2 < 0)) {
    return 0;
  }
  param_1 = iVar2 * 0x3d + param_1;
  if (param_4 == 0) {
    if (*(int *)(param_1 + 0x29) != 0) {
      return 0;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0x29) = 1;
  }
  *(undefined4 *)(param_1 + 0x2d) = 2;
  if (*(void **)(param_1 + 0x39) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x39));
  }
  pcVar3 = param_3;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  pcVar3 = _calloc(1,(size_t)(pcVar3 + (1 - (int)(param_3 + 1))));
  *(char **)(param_1 + 0x39) = pcVar3;
  do {
    cVar1 = *param_3;
    param_3 = param_3 + 1;
    *pcVar3 = cVar1;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  FUN_10065a50();
  return 1;
}


/* END FUNCTION 0x10065b60 */

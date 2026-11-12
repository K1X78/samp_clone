/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027290
 * Name: FUN_10027290
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10027290(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 < *(int *)(param_2 + 1) + -1) {
    pcVar1 = param_2 + param_1 * 4 + 5;
    iVar2 = param_1;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 4;
    } while (iVar2 < *(int *)(param_2 + 1) + -1);
  }
  if (*param_2 == '\0') {
    if (param_1 < *(int *)(param_2 + 1) + -1) {
      pcVar1 = param_2 + param_1 * 4 + 0x91;
      do {
        *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
        param_1 = param_1 + 1;
        pcVar1 = pcVar1 + 4;
      } while (param_1 < *(int *)(param_2 + 1) + -1);
    }
  }
  else if (param_1 < *(int *)(param_2 + 1) + -1) {
    pcVar1 = param_2 + param_1 * 4 + 0x45;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
      param_1 = param_1 + 1;
      pcVar1 = pcVar1 + 4;
    } while (param_1 < *(int *)(param_2 + 1) + -1);
    *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
    return;
  }
  *(int *)(param_2 + 1) = *(int *)(param_2 + 1) + -1;
  return;
}


/* END FUNCTION 0x10027290 */

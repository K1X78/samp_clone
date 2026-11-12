/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10044dd0
 * Name: FUN_10044dd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10044dd0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 1) != 1 && -1 < *(int *)(param_1 + 1) + -1) {
    pcVar1 = param_1 + 5;
    do {
      *(undefined2 *)pcVar1 = *(undefined2 *)(pcVar1 + 2);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 2;
    } while (iVar2 < *(int *)(param_1 + 1) + -1);
  }
  iVar2 = 0;
  if (*param_1 == '\0') {
    if (0 < *(int *)(param_1 + 1)) {
      pcVar1 = param_1 + 0xcd;
      do {
        *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 4;
      } while (iVar2 < *(int *)(param_1 + 1));
    }
  }
  else if (0 < *(int *)(param_1 + 1)) {
    pcVar1 = param_1 + 0x45;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 1));
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
    return;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + -1;
  return;
}


/* END FUNCTION 0x10044dd0 */

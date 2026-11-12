/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100278e0
 * Name: FUN_100278e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100278e0(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = 0;
  if (*(int *)(param_1 + 1) != 1 && -1 < *(int *)(param_1 + 1) + -1) {
    pcVar1 = param_1 + 5;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 4;
    } while (iVar2 < *(int *)(param_1 + 1) + -1);
  }
  iVar2 = 0;
  if (*param_1 == '\0') {
    if (0 < *(int *)(param_1 + 1)) {
      pcVar1 = param_1 + 0x8d;
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


/* END FUNCTION 0x100278e0 */

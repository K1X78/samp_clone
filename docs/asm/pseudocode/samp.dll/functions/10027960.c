/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10027960
 * Name: FUN_10027960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10027960(char *param_1)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 1);
  if (0 < iVar2) {
    pcVar1 = param_1 + iVar2 * 4 + 5;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + -4);
      pcVar1 = pcVar1 + -4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  iVar2 = *(int *)(param_1 + 1);
  if (*param_1 == '\0') {
    iVar2 = iVar2 + 1;
    if (0 < iVar2) {
      pcVar1 = param_1 + iVar2 * 4 + 0x8d;
      do {
        *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + -4);
        pcVar1 = pcVar1 + -4;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
  }
  else if (0 < iVar2) {
    pcVar1 = param_1 + iVar2 * 4 + 0x45;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + -4);
      pcVar1 = pcVar1 + -4;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
    return;
  }
  *(int *)(param_1 + 1) = *(int *)(param_1 + 1) + 1;
  return;
}


/* END FUNCTION 0x10027960 */

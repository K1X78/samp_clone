/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045b8a0
 * Name: FUN_0045b8a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_0045b8a0(int param_1,char *param_2)

{
  char *pcVar1;
  int iVar2;
  
  if (param_1 < *(int *)(param_2 + 4) + -1) {
    pcVar1 = param_2 + param_1 * 2 + 8;
    iVar2 = param_1;
    do {
      *(undefined2 *)pcVar1 = *(undefined2 *)(pcVar1 + 2);
      iVar2 = iVar2 + 1;
      pcVar1 = pcVar1 + 2;
    } while (iVar2 < *(int *)(param_2 + 4) + -1);
  }
  if (*param_2 == '\0') {
    if (param_1 < *(int *)(param_2 + 4) + -1) {
      pcVar1 = param_2 + param_1 * 4 + 0xd4;
      do {
        *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
        param_1 = param_1 + 1;
        pcVar1 = pcVar1 + 4;
      } while (param_1 < *(int *)(param_2 + 4) + -1);
    }
  }
  else if (param_1 < *(int *)(param_2 + 4) + -1) {
    pcVar1 = param_2 + param_1 * 4 + 0x48;
    do {
      *(undefined4 *)pcVar1 = *(undefined4 *)(pcVar1 + 4);
      param_1 = param_1 + 1;
      pcVar1 = pcVar1 + 4;
    } while (param_1 < *(int *)(param_2 + 4) + -1);
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
    return;
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + -1;
  return;
}


/* END FUNCTION 0x0045b8a0 */

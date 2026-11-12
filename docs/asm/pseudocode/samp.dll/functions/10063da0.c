/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10063da0
 * Name: thunk_FUN_10063d30
 * Status: ok
 * Single JMP forwarder to 0x10063d30; Ghidra C may show the target body.
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall thunk_FUN_10063d30(int param_1,undefined1 *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  if (param_3 != 0) {
    if ((*(char *)(param_1 + 100) != '\0') || (*(char *)(param_1 + 0x65) != '\0')) {
      *(undefined1 *)(param_1 + 0x65) = 1;
      return;
    }
    do {
      param_3 = param_3 + -1;
      if (*(char *)(param_1 + 0x65) != '\0') {
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x60) + 0x20 + param_1) = *param_2;
      iVar3 = *(int *)(param_1 + 0x60) + 1;
      iVar2 = *(int *)(param_1 + 0x18) + 8;
      *(int *)(param_1 + 0x60) = iVar3;
      *(int *)(param_1 + 0x18) = iVar2;
      if (iVar2 == 0) {
        piVar1 = (int *)(param_1 + 0x1c);
        *piVar1 = *piVar1 + 1;
        if (*piVar1 == 0) {
          *(undefined1 *)(param_1 + 0x65) = 1;
        }
      }
      if (iVar3 == 0x40) {
        FUN_100635f0();
      }
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}


/* END FUNCTION 0x10063da0 */

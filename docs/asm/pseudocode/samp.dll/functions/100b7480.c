/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7480
 * Name: FUN_100b7480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7480(int param_1,byte param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 == 1) {
      if ((param_2 & 1) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a8) = 0;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a8) = 1;
      }
      if ((param_2 >> 1 & 1) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a7) = 0;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a7) = 1;
      }
      if ((param_2 >> 2 & 1) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a6) = 0;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a6) = 1;
      }
      if ((param_2 >> 2 & 2) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a5) = 1;
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x5a5) = 0;
      return;
    }
  }
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
    if (iVar1 == 2) {
      if ((param_2 & 1) == 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x65d) = 0;
      }
      else {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x65d) = 1;
      }
      if ((param_2 & 2) != 0) {
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x65c) = 1;
        return;
      }
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x65c) = 0;
    }
  }
  return;
}


/* END FUNCTION 0x100b7480 */

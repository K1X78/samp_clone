/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6e20
 * Name: FUN_100b6e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b6e20(int param_1,undefined1 param_2,undefined1 param_3)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (iVar1 != 0) {
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x434) = param_2;
      *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x435) = param_3;
    }
  }
  *(undefined1 *)(param_1 + 0x7a) = param_3;
  *(undefined1 *)(param_1 + 0x79) = param_2;
  *(undefined4 *)(param_1 + 0x7b) = 1;
  return;
}


/* END FUNCTION 0x100b6e20 */

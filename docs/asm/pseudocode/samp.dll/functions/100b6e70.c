/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b6e70
 * Name: FUN_100b6e70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100b6e70(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if (((iVar1 != 0) && (*(int *)(param_1 + 0x7b) != 0)) && (*(int *)(param_1 + 0x71) == 0)) {
      if ((*(char *)(param_1 + 0x79) != *(char *)(*(int *)(param_1 + 0x4c) + 0x434)) ||
         (*(char *)(param_1 + 0x7a) != *(char *)(*(int *)(param_1 + 0x4c) + 0x435))) {
        *(char *)(*(int *)(param_1 + 0x4c) + 0x434) = *(char *)(param_1 + 0x79);
        *(undefined1 *)(*(int *)(param_1 + 0x4c) + 0x435) = *(undefined1 *)(param_1 + 0x7a);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100b6e70 */

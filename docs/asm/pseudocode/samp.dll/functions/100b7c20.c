/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b7c20
 * Name: FUN_100b7c20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100b7c20(int param_1,byte param_2)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) != 0) {
    iVar1 = FUN_100b37d0(*(undefined4 *)(param_1 + 0x44));
    if ((iVar1 != 0) && (*(int *)(param_1 + 0x4c) != 0)) {
      iVar1 = FUN_100b5d20(*(int *)(param_1 + 0x4c));
      if ((iVar1 == 1) && (param_2 < 4)) {
        FUN_100b1f10(&DAT_1011f72c,*(undefined4 *)(param_1 + 0x44),param_2);
      }
    }
  }
  return;
}


/* END FUNCTION 0x100b7c20 */

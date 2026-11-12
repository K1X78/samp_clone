/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089750
 * Name: FUN_10089750
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10089750(int param_1)

{
  int iVar1;
  
  if (DAT_10180610 != (int *)0x0) {
    (**(code **)(*DAT_10180610 + 0x24))();
  }
  if (*(int **)(param_1 + 0xf) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0xf) + 0x2c))();
  }
  DAT_10180610 = (int *)0x0;
  DAT_10180614 = 0;
  iVar1 = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  if (0 < *(int *)(param_1 + 0x162)) {
    do {
      (**(code **)(**(int **)(*(int *)(param_1 + 0x15e) + iVar1 * 4) + 8))();
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 0x162));
  }
  if (*(char *)(param_1 + 1) == '\0') {
    return;
  }
  FUN_100873e0();
  return;
}


/* END FUNCTION 0x10089750 */

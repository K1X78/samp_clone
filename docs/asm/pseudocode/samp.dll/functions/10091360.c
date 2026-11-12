/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10091360
 * Name: FUN_10091360
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10091360(int param_1)

{
  int *piVar1;
  uint uVar2;
  
  FUN_10091330();
  uVar2 = 0;
  if (*(int *)(param_1 + 0x20c) != 0) {
    do {
      piVar1 = *(int **)(*(int *)(param_1 + 0x214) + uVar2 * 4);
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))(piVar1);
        *(undefined4 *)(*(int *)(param_1 + 0x214) + uVar2 * 4) = 0;
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 0x20c));
  }
  if (*(void **)(param_1 + 0x214) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x214));
    *(undefined4 *)(param_1 + 0x214) = 0;
  }
  if (*(void **)(param_1 + 0x210) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x210));
    *(undefined4 *)(param_1 + 0x210) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x204);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
    *(undefined4 *)(param_1 + 0x204) = 0;
  }
  *(undefined4 *)(param_1 + 0x20c) = 0;
  return 0;
}


/* END FUNCTION 0x10091360 */

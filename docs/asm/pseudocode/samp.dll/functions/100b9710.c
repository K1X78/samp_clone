/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b9710
 * Name: FUN_100b9710
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100b9710(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined2 uVar3;
  void *pvVar4;
  int iVar5;
  
  iVar2 = param_2;
  FUN_100b95e0(param_2,param_1 + 0x20,param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x3c) == 0) {
    return 0;
  }
  if (*(void **)(param_1 + 0x88) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x88));
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  pvVar4 = _calloc(*(size_t *)(param_2 + 0xe),8);
  *(void **)(param_1 + 0x88) = pvVar4;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_2 + 0xe);
  iVar5 = 0;
  if (*(int *)(param_2 + 0xe) != 0) {
    do {
      *(undefined2 *)(*(int *)(param_1 + 0x88) + iVar5 * 8) =
           *(undefined2 *)(*(int *)(param_2 + 0x28) + 6 + iVar5 * 8);
      *(undefined2 *)(*(int *)(param_1 + 0x88) + 2 + iVar5 * 8) =
           *(undefined2 *)(*(int *)(param_2 + 0x28) + iVar5 * 8);
      *(undefined2 *)(*(int *)(param_1 + 0x88) + 4 + iVar5 * 8) =
           *(undefined2 *)(*(int *)(param_2 + 0x28) + 2 + iVar5 * 8);
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 6 + iVar5 * 8) = 0;
      *(undefined1 *)(*(int *)(param_1 + 0x88) + 7 + iVar5 * 8) = 0xff;
      iVar5 = iVar5 + 1;
    } while (iVar5 != *(int *)(param_2 + 0xe));
  }
  if (*(void **)(param_1 + 0x90) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x90));
    *(undefined4 *)(param_1 + 0x90) = 0;
  }
  pvVar4 = _calloc(*(size_t *)(param_2 + 0x12),6);
  *(void **)(param_1 + 0x90) = pvVar4;
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_2 + 0x12);
  piVar1 = (int *)(param_2 + 0x12);
  param_2 = 0;
  if (*piVar1 != 0) {
    iVar5 = 0;
    do {
      uVar3 = FUN_100f9324();
      *(undefined2 *)(*(int *)(param_1 + 0x90) + iVar5) = uVar3;
      uVar3 = FUN_100f9324();
      *(undefined2 *)(*(int *)(param_1 + 0x90) + 2 + iVar5) = uVar3;
      uVar3 = FUN_100f9324();
      *(undefined2 *)(*(int *)(param_1 + 0x90) + 4 + iVar5) = uVar3;
      param_2 = param_2 + 1;
      iVar5 = iVar5 + 6;
    } while (param_2 != *(int *)(iVar2 + 0x12));
  }
  return 1;
}


/* END FUNCTION 0x100b9710 */

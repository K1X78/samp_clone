/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009570
 * Name: FUN_10009570
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10009570(int param_1)

{
  void *pvVar1;
  
  (**(code **)(**(int **)(param_1 + 0x2c) + 8))(0,0);
  FUN_1000eb60(*(undefined4 *)(param_1 + 0x2c));
  FUN_10017c20(*(undefined4 *)(param_1 + 0x2c));
  FUN_10037880(*(undefined4 *)(param_1 + 0x2c));
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 8);
  if (pvVar1 != (void *)0x0) {
    FUN_10013fd0();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 8) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0xc);
  if (pvVar1 != (void *)0x0) {
    FUN_1001eb20();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0xc) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 4);
  if (pvVar1 != (void *)0x0) {
    FUN_100018e0();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 4) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x20);
  if (pvVar1 != (void *)0x0) {
    FUN_1001e390();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x20) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x18);
  if (pvVar1 != (void *)0x0) {
    FUN_10002180();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x18) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x1c);
  if (pvVar1 != (void *)0x0) {
    FUN_100015e0();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x1c) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x10);
  if (pvVar1 != (void *)0x0) {
    FUN_10013310();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x10) = 0;
  }
  pvVar1 = *(void **)(*(int *)(param_1 + 0x3de) + 0x14);
  if (pvVar1 != (void *)0x0) {
    FUN_10013060();
    _free(pvVar1);
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x14) = 0;
  }
  pvVar1 = (void *)**(undefined4 **)(param_1 + 0x3de);
  if (pvVar1 != (void *)0x0) {
    FUN_10007eb0();
    _free(pvVar1);
    **(undefined4 **)(param_1 + 0x3de) = 0;
  }
  if (*(void **)(param_1 + 0x3de) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x3de));
    *(undefined4 *)(param_1 + 0x3de) = 0;
  }
  if (*(void **)(param_1 + 0x3d5) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x3d5));
    *(undefined4 *)(param_1 + 0x3d5) = 0;
  }
  return;
}


/* END FUNCTION 0x10009570 */

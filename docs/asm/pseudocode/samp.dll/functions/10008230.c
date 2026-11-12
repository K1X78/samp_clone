/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10008230
 * Name: FUN_10008230
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10008230(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101129d8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = _calloc(1,0x24);
  *(void **)(param_1 + 0x3de) = pvVar1;
  pvVar1 = operator_new(0x41a4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10012700();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x14) = uVar2;
  pvVar1 = operator_new(0x402);
  local_4 = 1;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10007b40();
  }
  local_4 = 0xffffffff;
  **(undefined4 **)(param_1 + 0x3de) = uVar2;
  pvVar1 = operator_new(0x10800);
  local_4 = 2;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10001190();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x1c) = uVar2;
  pvVar1 = operator_new(0x4800);
  local_4 = 3;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001e260();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x20) = uVar2;
  pvVar1 = operator_new(0x2000);
  local_4 = 4;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10002150();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x18) = uVar2;
  pvVar1 = operator_new(0x2f3e);
  local_4 = 5;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10013e80();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 8) = uVar2;
  pvVar1 = operator_new(0x17898);
  local_4 = 6;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1001e4d0();
  }
  local_4 = 0xffffffff;
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0xc) = uVar2;
  pvVar1 = operator_new(0x23004);
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_10008190();
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 0x10) = uVar2;
  pvVar1 = operator_new(0x4e24);
  local_4 = 7;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_100016c0();
    *(undefined4 *)(*(int *)(param_1 + 0x3de) + 4) = uVar2;
    ExceptionList = local_c;
    return;
  }
  *(undefined4 *)(*(int *)(param_1 + 0x3de) + 4) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10008230 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00484600
 * Name: FUN_00484600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00484600(int param_1)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1801;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x2d55) = 0;
  *(undefined2 *)(param_1 + 0x3022) = 0;
  *(undefined4 *)(param_1 + 0x2f89) = 0;
  *(undefined4 *)(param_1 + 0x2f8d) = 0;
  *(undefined1 *)(param_1 + 0x2f95) = 0;
  *(undefined4 *)(param_1 + 0x3024) = 0;
  *(undefined2 *)(param_1 + 0x2d31) = 0;
  *(undefined2 *)(param_1 + 0x2d33) = 0;
  *(undefined4 *)(param_1 + 0x2d35) = 0;
  *(undefined4 *)(param_1 + 0x2d39) = 0;
  *(undefined4 *)(param_1 + 0x2cfd) = 0;
  *(undefined4 *)(param_1 + 0x2d01) = 0;
  *(undefined4 *)(param_1 + 0x2d05) = 0;
  *(undefined4 *)(param_1 + 0x2d15) = 0;
  *(undefined4 *)(param_1 + 0x2d19) = 0;
  *(undefined4 *)(param_1 + 0x2d1d) = 0;
  *(undefined4 *)(param_1 + 0x2d11) = 0;
  *(undefined4 *)(param_1 + 0x2d21) = 0;
  *(undefined4 *)(param_1 + 0x2d09) = 0;
  *(undefined4 *)(param_1 + 0x2d0d) = 0;
  *(undefined4 *)(param_1 + 0x30a8) = 0;
  *(undefined1 *)(param_1 + 0x30a7) = 0;
  *(undefined1 *)(param_1 + 0x301f) = 0;
  *(undefined1 *)(param_1 + 0x3020) = 4;
  *(undefined4 *)(param_1 + 0x3028) = 0;
  *(undefined4 *)(param_1 + 0x302c) = 0;
  *(undefined4 *)(param_1 + 0x3030) = 0;
  *(undefined1 *)(param_1 + 0x30ac) = 0;
  *(undefined4 *)(param_1 + 0x30ad) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2cdd) = 0;
  *(undefined4 *)(param_1 + 0x2ce1) = 0;
  *(undefined4 *)(param_1 + 0x2fcb) = 0;
  *(undefined1 *)(param_1 + 0x3021) = 0;
  uVar6 = thunk_FUN_0044e910();
  *(int *)(param_1 + 0x30b1) = (int)uVar6;
  iVar1 = 0;
  puVar3 = (undefined4 *)(param_1 + 0x3034);
  do {
    *(undefined1 *)(param_1 + 0x3068 + iVar1) = 0;
    *puVar3 = 0;
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 1;
  } while (iVar1 < 0xd);
  FUN_00484290(0);
  *(undefined2 *)(param_1 + 0x3076) = 0xffff;
  *(undefined2 *)(param_1 + 0x3078) = 0xffff;
  *(undefined4 *)(param_1 + 0x2fcf) = 0x3e703e7;
  *(undefined4 *)(param_1 + 0x2fd3) = 0x3e703e7;
  *(undefined4 *)(param_1 + 0x2fd7) = 0x3e703e7;
  *(undefined4 *)(param_1 + 0x2fdb) = 0x3e703e7;
  *(undefined4 *)(param_1 + 0x2fdf) = 0x3e703e7;
  *(undefined2 *)(param_1 + 0x2fe3) = 999;
  puVar3 = (undefined4 *)(param_1 + 0x155);
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x53d);
  for (iVar1 = 500; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0xd0d);
  for (iVar1 = 500; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x14dd);
  for (iVar1 = 0x100; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x18dd);
  for (iVar1 = 0x400; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  puVar3 = (undefined4 *)(param_1 + 0x28dd);
  for (iVar1 = 0xfa; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)(param_1 + 0x2cc5) = 0;
  *(undefined4 *)(param_1 + 0x2cc9) = 0;
  *(undefined4 *)(param_1 + 0x2ccd) = 0;
  *(undefined4 *)(param_1 + 0x2cd1) = 0;
  *(undefined4 *)(param_1 + 0x2cd5) = 0;
  *(undefined4 *)(param_1 + 0x2cd9) = 0;
  *(undefined4 *)(param_1 + 0x301b) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x2fe9);
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)(param_1 + 0x30a7) = 0;
  *(undefined4 *)(param_1 + 0x30a8) = 0x44340000;
  *(undefined4 *)(param_1 + 0x30b6) = 0;
  *(undefined4 *)(param_1 + 0x30ba) = 0;
  uVar6 = thunk_FUN_0044e910();
  pvVar2 = *(void **)(param_1 + 0x2d4b);
  *(int *)(param_1 + 0x2fe5) = (int)uVar6;
  if (pvVar2 != (void *)0x0) {
    FUN_00488710((int)pvVar2);
    _free(pvVar2);
  }
  pvVar2 = operator_new(0xd02);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar1 = 0;
  }
  else {
    iVar1 = FUN_004886d0((int)pvVar2);
  }
  *(int *)(param_1 + 0x2d4b) = iVar1;
  *(undefined2 *)(iVar1 + 0xd00) = *(undefined2 *)(param_1 + 0x2d53);
  pvVar2 = *(void **)(param_1 + 0x2d4f);
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    FUN_00488070(pvVar2);
    _free(pvVar2);
  }
  puVar3 = operator_new(0x9802);
  local_4 = 1;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00487bd0(puVar3);
  }
  *(undefined4 **)(param_1 + 0x2d4f) = puVar3;
  *(undefined2 *)(puVar3 + 0x2600) = *(undefined2 *)(param_1 + 0x2d53);
  pvVar2 = *(void **)(param_1 + 0x30cb);
  local_4 = 0xffffffff;
  if (pvVar2 != (void *)0x0) {
    FUN_00488de0((int)pvVar2);
    _free(pvVar2);
  }
  puVar3 = operator_new(0xcb24);
  local_4 = 2;
  if (puVar3 == (undefined4 *)0x0) {
    puVar3 = (undefined4 *)0x0;
  }
  else {
    puVar3 = FUN_00488da0(puVar3);
  }
  local_4 = 0xffffffff;
  *(undefined4 **)(param_1 + 0x30cb) = puVar3;
  *(undefined4 *)(param_1 + 0x2d25) = 0;
  *(undefined4 *)(param_1 + 0x2d29) = 0;
  *(undefined4 *)(param_1 + 0x2d2d) = 0;
  puVar3 = (undefined4 *)(param_1 + 0x2d59);
  puVar4 = (undefined4 *)(param_1 + 0x2f61);
  local_10 = 10;
  do {
    *puVar4 = 0;
    puVar5 = puVar3;
    for (iVar1 = 0xd; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar5 = 0;
      puVar5 = puVar5 + 1;
    }
    puVar4 = puVar4 + 1;
    puVar3 = puVar3 + 0xd;
    local_10 = local_10 + -1;
  } while (local_10 != 0);
  *(undefined4 *)(param_1 + 0x2d3d) = 0;
  *(undefined4 *)(param_1 + 0x2d41) = 0;
  *(undefined2 *)(param_1 + 0x2d45) = 0;
  *(undefined4 *)(param_1 + 0x2cf9) = 1;
  uVar6 = thunk_FUN_0044e910();
  *(int *)(param_1 + 0x307a) = (int)uVar6;
  *(undefined1 *)(param_1 + 0x307e) = 0;
  *(undefined4 *)(param_1 + 0x307f) = 0;
  *(undefined4 *)(param_1 + 0x3083) = 0;
  *(undefined4 *)(param_1 + 0x3087) = 0;
  *(undefined4 *)(param_1 + 0x308b) = 0;
  *(undefined4 *)(param_1 + 0x308f) = 0;
  *(undefined4 *)(param_1 + 0x3093) = 0;
  *(undefined4 *)(param_1 + 0x3097) = 0;
  *(undefined4 *)(param_1 + 0x309b) = 0;
  *(undefined4 *)(param_1 + 0x309f) = 0;
  *(undefined4 *)(param_1 + 0x30a3) = 0;
  *(undefined4 *)(param_1 + 0x2cf1) = 0;
  *(undefined4 *)(param_1 + 0x14d) = 0;
  *(undefined4 *)(param_1 + 0x151) = 0;
  *(undefined4 *)(param_1 + 0x2d47) = 0;
  *(undefined1 *)(param_1 + 0x30b5) = 0;
  *(undefined2 *)(param_1 + 0x1f) = 0xffff;
  *(undefined2 *)(param_1 + 0x21) = 0xffff;
  *(undefined2 *)(param_1 + 0x23) = 0xffff;
  *(undefined2 *)(param_1 + 0x25) = 0xffff;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00484600 */

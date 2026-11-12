/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10047240
 * Name: FUN_10047240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10047240(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  
  puVar6 = (undefined4 *)(param_1 + 0x24b);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x28b);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x1cb);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x20b);
  for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  puVar6 = (undefined4 *)(param_1 + 0x2db);
  for (iVar4 = 0x4a; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  uVar1 = FUN_1002e2b0();
  *(undefined4 *)(param_1 + 999) = uVar1;
  uVar1 = FUN_1002e2b0();
  *(undefined4 *)(param_1 + 0x3eb) = uVar1;
  *(undefined4 *)(param_1 + 0x3ef) = 0;
  *(undefined4 *)(param_1 + 0x3f3) = 0;
  uVar1 = FUN_1002e2b0();
  *(undefined8 *)(param_1 + 0x45a) = 0;
  *(undefined4 *)(param_1 + 0x3f7) = uVar1;
  *(undefined4 *)(param_1 + 0x3fb) = 0;
  *(undefined4 *)(param_1 + 0x3ff) = 0;
  *(undefined4 *)(param_1 + 0x403) = 4;
  *(undefined2 *)(param_1 + 0x2d1) = 0;
  *(undefined2 *)(param_1 + 0xb0) = 0;
  uVar7 = FUN_1002e310();
  iVar5 = (int)((ulonglong)uVar7 >> 0x20);
  *(int *)(param_1 + 0x41a) = (int)uVar7;
  *(undefined8 *)(param_1 + 0x452) = 0x411f400000000000;
  uVar2 = *(int *)(param_1 + 0x2cd) * 2000;
  *(undefined8 *)(param_1 + 0x442) = 0x411f400000000000;
  *(undefined8 *)(param_1 + 0x44a) = 0;
  uVar3 = uVar2 + *(uint *)(param_1 + 0x41a);
  iVar4 = iVar5 + (uint)CARRY4(uVar2,*(uint *)(param_1 + 0x41a)) + (uint)(0xfff85edf < uVar3);
  *(int *)(param_1 + 0x41e) = iVar5;
  *(uint *)(param_1 + 0x42a) = uVar3 + 500000;
  *(int *)(param_1 + 0x42e) = iVar4;
  *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 999);
  *(undefined1 *)(param_1 + 0x2cc) = 0;
  *(undefined1 *)(param_1 + 0x2cb) = 0;
  *(undefined4 *)(param_1 + 0xb2) = 0;
  *(undefined4 *)(param_1 + 0xb6) = 0;
  *(uint *)(param_1 + 0x422) = uVar3 + 750000;
  *(uint *)(param_1 + 0x426) = iVar4 + (uint)(0xfffc2f6f < uVar3 + 500000);
  *(undefined4 *)(param_1 + 0x43a) = 0;
  *(undefined4 *)(param_1 + 0x43e) = 0;
  *(undefined1 *)(param_1 + 0x462) = 0;
  *(undefined4 *)(param_1 + 0x432) = 0;
  *(undefined4 *)(param_1 + 0x436) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined2 *)(param_1 + 0x417) = 0;
  *(undefined1 *)(param_1 + 0x419) = 1;
  *(undefined4 *)(param_1 + 0x6c9) = 0;
  *(undefined4 *)(param_1 + 0x6c5) = 0;
  FUN_100456c0(1000);
  thunk_FUN_10045b80(0x40);
  return;
}


/* END FUNCTION 0x10047240 */

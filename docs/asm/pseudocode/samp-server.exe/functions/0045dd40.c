/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045dd40
 * Name: FUN_0045dd40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045dd40(void *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined8 uVar6;
  longlong lVar7;
  
  puVar5 = (undefined4 *)((int)param_1 + 0x254);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)param_1 + 0x294);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)param_1 + 0x1d4);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)param_1 + 0x214);
  for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = (undefined4 *)((int)param_1 + 0x2e8);
  for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  uVar6 = FUN_0044e910();
  *(int *)((int)param_1 + 0x400) = (int)uVar6;
  uVar6 = FUN_0044e910();
  *(int *)((int)param_1 + 0x404) = (int)uVar6;
  *(undefined4 *)((int)param_1 + 0x408) = 0;
  *(undefined4 *)((int)param_1 + 0x40c) = 0;
  uVar6 = FUN_0044e910();
  *(undefined8 *)((int)param_1 + 0x478) = 0;
  *(int *)((int)param_1 + 0x410) = (int)uVar6;
  *(undefined4 *)((int)param_1 + 0x414) = 0;
  *(undefined4 *)((int)param_1 + 0x418) = 0;
  *(undefined4 *)((int)param_1 + 0x420) = 4;
  *(undefined2 *)((int)param_1 + 0x2dc) = 0;
  *(undefined2 *)((int)param_1 + 0xb4) = 0;
  lVar7 = FUN_0044e970();
  iVar4 = (int)((ulonglong)lVar7 >> 0x20);
  *(int *)((int)param_1 + 0x438) = (int)lVar7;
  *(undefined8 *)((int)param_1 + 0x470) = 0x411f400000000000;
  uVar1 = *(int *)((int)param_1 + 0x2d8) * 2000;
  *(undefined8 *)((int)param_1 + 0x460) = 0x411f400000000000;
  *(undefined8 *)((int)param_1 + 0x468) = 0;
  uVar2 = uVar1 + *(uint *)((int)param_1 + 0x438);
  iVar3 = iVar4 + (uint)CARRY4(uVar1,*(uint *)((int)param_1 + 0x438)) + (uint)(0xfff85edf < uVar2);
  *(int *)((int)param_1 + 0x43c) = iVar4;
  *(uint *)((int)param_1 + 0x448) = uVar2 + 500000;
  *(int *)((int)param_1 + 0x44c) = iVar3;
  *(undefined4 *)((int)param_1 + 0x28) = *(undefined4 *)((int)param_1 + 0x400);
  *(undefined1 *)((int)param_1 + 0x2d5) = 0;
  *(undefined1 *)((int)param_1 + 0x2d4) = 0;
  *(undefined4 *)((int)param_1 + 0xb8) = 0;
  *(undefined4 *)((int)param_1 + 0xbc) = 0;
  *(uint *)((int)param_1 + 0x440) = uVar2 + 750000;
  *(uint *)((int)param_1 + 0x444) = iVar3 + (uint)(0xfffc2f6f < uVar2 + 500000);
  *(undefined4 *)((int)param_1 + 0x458) = 0;
  *(undefined4 *)((int)param_1 + 0x45c) = 0;
  *(undefined1 *)((int)param_1 + 0x480) = 0;
  *(undefined4 *)((int)param_1 + 0x450) = 0;
  *(undefined4 *)((int)param_1 + 0x454) = 0;
  *(undefined4 *)((int)param_1 + 0x2c) = 0;
  *(undefined2 *)((int)param_1 + 0x434) = 0;
  *(undefined1 *)((int)param_1 + 0x436) = 1;
  *(undefined4 *)((int)param_1 + 0x6fc) = 0;
  *(undefined4 *)((int)param_1 + 0x6f8) = 0;
  FUN_0045c520(param_1,1000);
  thunk_FUN_0045c8b0((void *)((int)param_1 + 0x40),0x40);
  return;
}


/* END FUNCTION 0x0045dd40 */

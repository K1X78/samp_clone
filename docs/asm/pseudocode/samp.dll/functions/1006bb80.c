/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006bb80
 * Name: FUN_1006bb80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall
FUN_1006bb80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,float *param_4)

{
  short sVar1;
  int iVar2;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 auStack_a8 [10];
  undefined4 local_4c [15];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101160eb;
  local_c = ExceptionList;
  piVar5 = (int *)0x0;
  ExceptionList = &local_c;
  iVar2 = FUN_100b12d0();
  iVar3 = FUN_100b1320();
  auStack_a8[9] = 0x1006bbd1;
  pvVar4 = operator_new(0x32d);
  local_4 = 0;
  if (pvVar4 != (void *)0x0) {
    auStack_a8[9] = 0x1006bbf1;
    piVar5 = (int *)FUN_100b08e0();
  }
  local_4 = 0xffffffff;
  if (((iVar2 != 0) && (iVar3 != 0)) && (piVar5 != (int *)0x0)) {
    FUN_1009ee80();
    FUN_100afb50();
    FUN_1009f4c0();
    FUN_1009f470();
    puVar6 = local_4c;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar6 = 0;
      puVar6 = puVar6 + 1;
    }
    FUN_1009e950();
    if (*param_4 != 0.0) {
      FUN_100b52d0();
    }
    if (param_4[1] != 0.0) {
      FUN_100b52d0();
    }
    if (param_4[2] != 0.0) {
      FUN_100b52d0();
    }
    puVar6 = local_4c;
    puVar7 = auStack_a8;
    for (iVar3 = 0x10; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar7 = *puVar6;
      puVar6 = puVar6 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_1009fb40();
    FUN_100b15b0();
    FUN_100b1840();
    auStack_a8[9] = *param_1;
    auStack_a8[8] = 0x1006bd34;
    FUN_100b14f0();
    auStack_a8[8] = *param_1;
    auStack_a8[7] = 0x1006bd3d;
    FUN_100b1520();
    auStack_a8[7] = param_1[2];
    auStack_a8[6] = 0x1006bd46;
    FUN_100b17c0();
    auStack_a8[6] = 1;
    auStack_a8[5] = 6;
    auStack_a8[4] = 0x1006bd4f;
    FUN_100c54f0();
    auStack_a8[4] = 1;
    auStack_a8[3] = 8;
    auStack_a8[2] = 0x1006bd58;
    FUN_100c54f0();
    auStack_a8[2] = 2;
    auStack_a8[1] = 7;
    auStack_a8[0] = 0x1006bd61;
    FUN_100c54f0();
    auStack_a8[0] = 0;
    FUN_100c54f0(0xe);
    (**(code **)(*piVar5 + 4))();
    FUN_100ae130();
    FUN_1009f960();
    FUN_100b1550();
    FUN_100b1800();
    (**(code **)(*piVar5 + 8))();
    (**(code **)*piVar5)();
    sVar1 = FUN_100b4300();
    if (sVar1 == 0) {
      FUN_100a07e0();
    }
    ExceptionList = pvStack_10;
    return iVar2;
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x1006bb80 */

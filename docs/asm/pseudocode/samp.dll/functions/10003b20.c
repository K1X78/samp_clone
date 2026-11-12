/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10003b20
 * Name: FUN_10003b20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10003b20(int param_1)

{
  int iVar1;
  DWORD DVar2;
  undefined4 uVar3;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011268b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 0x181) != 0) {
    ExceptionList = &local_c;
    if (*(int *)(param_1 + 0x30a) == 1) {
      ExceptionList = &local_c;
      *(undefined4 *)(param_1 + 0x30a) = 0;
      if (DAT_102acabc != 0) {
        *(undefined1 *)(DAT_102acabc + 0x13) = 0;
      }
      FUN_100a0530(0,0);
    }
    FUN_1009d670();
    FUN_1009d580();
    FUN_100a1bd0(1);
    FUN_100ac3b0(1);
    if (DAT_1013c0a0 == 0) {
      FUN_100ab7f0();
    }
    else {
      DAT_1013c0a0 = 0;
    }
    FUN_100a0a60(*(undefined4 *)(param_1 + 0x159),*(undefined4 *)(param_1 + 0x15d));
    iVar1 = FUN_100acb10();
    if (iVar1 != 0) {
      FUN_100acb20(0);
    }
    FUN_100ac370((undefined4 *)(param_1 + 0x159),*(undefined4 *)(param_1 + 0x165));
    if ((DAT_102aca28 == 0) || (*(int *)(param_1 + 0x154) < 0x4e21)) {
      uVar3 = *(undefined4 *)(param_1 + 0x150);
    }
    else {
      iVar1 = FUN_100b39d0(*(int *)(param_1 + 0x154));
      if (iVar1 == 0) {
        iVar1 = FUN_1000ce30(*(undefined4 *)(param_1 + 0x154));
        if (iVar1 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(undefined4 *)(param_1 + 0x154);
        }
      }
      else {
        uVar3 = *(undefined4 *)(param_1 + 0x154);
      }
    }
    FUN_100afb50(uVar3);
    FUN_100abc30();
    FUN_100ad4a0();
    FUN_10003110(0);
    *(undefined4 *)(param_1 + 0x2e6) = 0;
    *(undefined4 *)(param_1 + 0x2ea) = 0;
    *(undefined4 *)(param_1 + 0x2ee) = 0;
    *(undefined4 *)(param_1 + 0x2f2) = 0;
    *(undefined2 *)(param_1 + 0x2d8) = 0xffff;
    *(undefined4 *)(param_1 + 0x2de) = 0;
    *(undefined4 *)(param_1 + 0x2e2) = 0;
    if (*(int *)(param_1 + 0x171) != -1) {
      FUN_100af390(*(int *)(param_1 + 0x171),*(undefined4 *)(param_1 + 0x17d));
    }
    if (*(int *)(param_1 + 0x16d) != -1) {
      FUN_100af390(*(int *)(param_1 + 0x16d),*(undefined4 *)(param_1 + 0x179));
    }
    if (*(int *)(param_1 + 0x169) != -1) {
      FUN_100af390(*(int *)(param_1 + 0x169),*(undefined4 *)(param_1 + 0x175));
    }
    FUN_100a0a50();
    FUN_100aa0b0(&DAT_0050ac20,3);
    DAT_0050ac20 = 0xc2;
    DAT_0050ac21 = 8;
    DAT_0050ac22 = 0;
    FUN_1009ee80(*(undefined4 *)(param_1 + 0x159),*(undefined4 *)(param_1 + 0x15d),
                 *(float *)(param_1 + 0x161) + 0.5);
    FUN_100abb80(*(undefined4 *)(param_1 + 0x165));
    *(undefined4 *)(param_1 + 0xf8) = 0;
    *(undefined4 *)(param_1 + 0xf4) = 1;
    *(undefined4 *)(param_1 + 0x306) = 0;
    FUN_1001f1f0();
    local_4 = 0;
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117880,local_120,1,9,0,0);
    DVar2 = GetTickCount();
    *(DWORD *)(param_1 + 0x30e) = DVar2 + 1000;
    uStack_1c = 0xffffffff;
    FUN_1001f390();
    ExceptionList = pvStack_24;
    return 1;
  }
  return 0;
}


/* END FUNCTION 0x10003b20 */

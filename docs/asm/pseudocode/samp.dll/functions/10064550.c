/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064550
 * Name: FUN_10064550
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064550(int param_1)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined1 local_4c [8];
  void *local_44 [3];
  void *local_38;
  int local_30;
  void *pvStack_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10115f88;
  pvStack_14 = ExceptionList;
  ExceptionList = &pvStack_14;
  FUN_10065030();
  local_c = 0;
  FUN_10065360(local_4c);
  local_c._0_1_ = 1;
  FUN_100652f0(local_4c);
  local_c._0_1_ = 2;
  FUN_10065440();
  local_c._0_1_ = 3;
  FUN_100654e0();
  local_c = CONCAT31(local_c._1_3_,4);
  pvVar2 = operator_new(0x80);
  local_44[0] = pvVar2;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x18))(0xffffff80,2);
  uVar3 = (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  (**(code **)(**(int **)(param_1 + 0x14) + 8))(pvVar2,0x80);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(*(int *)(param_1 + 0x119) * 2 + 0x10);
  pvVar2 = operator_new(0x2800);
  uVar5 = *(int *)(param_1 + 0x119) * 2 + 0x10;
  while (uVar5 < uVar3) {
    iVar4 = (**(code **)(**(int **)(param_1 + 0x14) + 8))(pvVar2,0x2800);
    uVar1 = iVar4 + uVar5;
    if (uVar3 < uVar1) {
      iVar4 = uVar3 - uVar5;
    }
    FUN_10065330(iVar4,pvVar2);
    uVar5 = uVar1;
  }
  _free(pvVar2);
  FUN_100653a0(0x94,&DAT_1011b9d0,0xaa);
  FUN_10065460(0x80,&stack0xfffffffc);
  iVar4 = FUN_100654b0(&stack0xffffffac,local_44);
  _free(&stack0xfffffffc);
  *(int *)(param_1 + 0x92d) = -iVar4;
  (**(code **)(**(int **)(param_1 + 0x14) + 0x14))(uVar3 + *(int *)(param_1 + 0x931) * -8);
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  iVar4 = param_1 + 0x11d;
  (**(code **)(**(int **)(param_1 + 0x14) + 4))(iVar4,8,*(undefined4 *)(param_1 + 0x931));
  (**(code **)(**(int **)(param_1 + 0x14) + 0x1c))();
  FUN_10065540(&DAT_1011ba64,0xaa);
  FUN_10065640(*(int *)(param_1 + 0x931) << 3,iVar4);
  uVar5 = 0;
  if (*(int *)(param_1 + 0x931) != 0) {
    do {
      FUN_10064220(iVar4);
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 8;
    } while (uVar5 < *(uint *)(param_1 + 0x931));
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  local_30._0_1_ = 3;
  FUN_10065530();
  local_30._0_1_ = 2;
  FUN_10065450();
  local_30._0_1_ = 1;
  FUN_10065320();
  local_30 = (uint)local_30._1_3_ << 8;
  FUN_10065430();
  local_30 = 0xffffffff;
  FUN_100650a0();
  ExceptionList = local_38;
  return;
}


/* END FUNCTION 0x10064550 */

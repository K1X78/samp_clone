/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005400
 * Name: FUN_10005400
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10005400(int param_1)

{
  int iVar1;
  char cVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined2 uVar5;
  short sVar6;
  undefined4 uVar7;
  int iVar8;
  DWORD DVar9;
  int *piVar10;
  uint uVar11;
  int *piVar12;
  bool bVar13;
  undefined1 local_184 [4];
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined2 local_168 [2];
  undefined2 local_164 [2];
  undefined1 local_160 [48];
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined1 local_120 [276];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011274b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  uVar5 = FUN_100af1d0(local_164,local_168);
  cVar2 = FUN_100ab810();
  local_180 = 0;
  local_17c = 0;
  local_178 = 0;
  local_174 = 0;
  local_170 = 0;
  local_16c = 0;
  uVar7 = FUN_100abc20();
  sVar6 = FUN_1001e650(uVar7);
  iVar8 = local_180;
  local_180 = CONCAT22(local_180._2_2_,sVar6);
  iVar1 = local_180;
  if (sVar6 == -1) goto LAB_10005630;
  local_180._3_1_ = SUB41(iVar8,3);
  local_180._0_3_ = (undefined3)iVar1;
  local_180 = CONCAT13(local_180._3_1_ & 0x3f | cVar2 << 6,(undefined3)local_180);
  local_17c = CONCAT22(local_164[0],(undefined2)local_17c);
  local_178 = CONCAT22(uVar5,local_168[0]);
  FUN_100ab970();
  uVar3 = FUN_100f9324();
  local_17c = CONCAT31(local_17c._1_3_,uVar3);
  FUN_100ab9b0();
  uVar3 = FUN_100f9324();
  local_17c._0_2_ = CONCAT11(uVar3,(undefined1)local_17c);
  bVar4 = FUN_100abe20();
  local_180._0_3_ =
       CONCAT12(local_180._2_1_ ^ (bVar4 ^ local_180._2_1_) & 0x3f,(undefined2)local_180);
  iVar8 = FUN_100acb10();
  if (iVar8 == 0) {
    bVar4 = local_180._2_1_ & 0x7f;
  }
  else {
    bVar4 = local_180._2_1_ | 0x80;
  }
  local_180._0_3_ =
       CONCAT12(bVar4 ^ (*(char *)(param_1 + 0x1cf) << 6 ^ bVar4) & 0x40,(undefined2)local_180);
  bVar4 = FUN_100ab870();
  local_180 = CONCAT13(local_180._3_1_ ^ (bVar4 ^ local_180._3_1_) & 0x3f,(undefined3)local_180);
  FUN_1009e950(local_160);
  local_174 = local_130;
  local_170 = local_12c;
  local_16c = local_128;
  DVar9 = GetTickCount();
  if (DVar9 - *(int *)(param_1 + 0x128) < 0x1f5) {
    iVar8 = 6;
    bVar13 = true;
    piVar10 = (int *)(param_1 + 0x7e);
    piVar12 = &local_180;
    do {
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      bVar13 = *piVar10 == *piVar12;
      piVar10 = piVar10 + 1;
      piVar12 = piVar12 + 1;
    } while (bVar13);
    if (!bVar13) goto LAB_10005587;
  }
  else {
LAB_10005587:
    DVar9 = GetTickCount();
    *(DWORD *)(param_1 + 0x128) = DVar9;
    local_184[0] = 0xd3;
    FUN_1001faa0(local_184,8,1);
    FUN_1001fb50(&local_180,0x18);
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 0x18))(local_120,1,7,1);
    *(int *)(param_1 + 0x7e) = local_180;
    *(undefined4 *)(param_1 + 0x82) = local_17c;
    *(undefined4 *)(param_1 + 0x86) = local_178;
    *(undefined4 *)(param_1 + 0x8a) = local_174;
    *(undefined4 *)(param_1 + 0x8e) = local_170;
    *(undefined4 *)(param_1 + 0x92) = local_16c;
  }
  uVar11 = 1000;
  if (*(int *)(param_1 + 0x1cf) != 0) {
    uVar11 = 100;
  }
  DVar9 = GetTickCount();
  if (uVar11 < DVar9 - *(int *)(param_1 + 0x13b)) {
    DVar9 = GetTickCount();
    *(DWORD *)(param_1 + 0x13b) = DVar9;
    FUN_10005090();
  }
LAB_10005630:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10005400 */

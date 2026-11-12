/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10023d20
 * Name: FUN_10023d20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10023d20(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined1 *puVar9;
  undefined4 uVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  undefined1 local_358 [4];
  undefined4 local_354;
  undefined1 auStack_350 [4];
  undefined2 uStack_34c;
  undefined2 uStack_34a;
  undefined1 auStack_340 [6];
  undefined1 local_33a [6];
  undefined1 local_334 [276];
  undefined1 local_220 [276];
  byte local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114291;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f280(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),0);
  local_4 = 0;
  FUN_1001f7b0(8);
  uVar10 = 0;
  puVar9 = local_220;
  pbVar3 = local_10c;
  uVar8 = 0x100;
  FUN_100536f0(pbVar3,0x100,puVar9,0);
  FUN_10053d90(pbVar3,uVar8,puVar9,uVar10);
  pbVar3 = *(byte **)(param_1 + 8);
  if ((pbVar3 != (byte *)0x0) && (*pbVar3 != 0)) {
    pbVar5 = local_10c;
    do {
      bVar1 = *pbVar3;
      bVar7 = bVar1 < *pbVar5;
      if (bVar1 != *pbVar5) {
LAB_10023dd8:
        iVar4 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
        goto LAB_10023ddd;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar3[1];
      bVar7 = bVar1 < pbVar5[1];
      if (bVar1 != pbVar5[1]) goto LAB_10023dd8;
      pbVar3 = pbVar3 + 2;
      pbVar5 = pbVar5 + 2;
    } while (bVar1 != 0);
    iVar4 = 0;
LAB_10023ddd:
    if (iVar4 != 0) goto LAB_10023f3c;
  }
  FUN_1001f1f0();
  local_4._0_1_ = 1;
  local_358[0] = 0x3b;
  FUN_1001faa0(local_358,8,1);
  FUN_10022af0(local_334,param_1 + 0x18);
  uVar11 = 0;
  local_354 = 1;
  FUN_1001faa0(&local_354,0x10,1);
  puVar6 = (undefined4 *)(param_3 + 2);
  uVar8 = CONCAT22(uVar11,*(undefined2 *)(param_3 + 6));
  iVar4 = (**(code **)(*param_2 + 0xa0))(local_33a,*puVar6,uVar8);
  uVar12 = (undefined2)((uint)uVar8 >> 0x10);
  _uStack_34c = CONCAT22(uStack_34a,*(undefined2 *)(iVar4 + 4));
  FUN_1001faa0(&stack0xfffffca0,0x20,1);
  uVar11 = 0;
  FUN_1001faa0(&stack0xfffffca0,0x10,1);
  (**(code **)(*param_2 + 0x30))
            (auStack_340,3,9,0x1f,*puVar6,CONCAT22(uVar11,*(undefined2 *)(param_3 + 6)),0);
  FUN_10021f90(*puVar6,CONCAT22(uVar12,*(undefined2 *)(param_3 + 6)));
  cVar2 = FUN_10023410(local_220,param_2);
  if (cVar2 != '\0') {
    FUN_10020790();
    local_4._0_1_ = 2;
    FUN_10021630(puVar6,puVar6);
    FUN_10022ce0(auStack_350,param_2);
    local_4._0_1_ = 1;
    FUN_100221d0();
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1001f390();
LAB_10023f3c:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10023d20 */

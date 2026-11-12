/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100230d0
 * Name: FUN_100230d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100230d0(int param_1,int *param_2,int param_3)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined2 uVar10;
  undefined1 local_338 [4];
  undefined1 local_334 [276];
  undefined1 local_220 [276];
  byte local_10c [256];
  void *pvStack_c;
  undefined1 *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114166;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f280(*(undefined4 *)(param_3 + 0x10),*(undefined4 *)(param_3 + 8),0);
  local_4 = 0;
  FUN_1001f7b0(8);
  uVar8 = 0;
  puVar7 = local_220;
  pbVar2 = local_10c;
  uVar6 = 0x100;
  FUN_100536f0(pbVar2,0x100,puVar7,0);
  FUN_10053d90(pbVar2,uVar6,puVar7,uVar8);
  pbVar2 = *(byte **)(param_1 + 8);
  if ((pbVar2 != (byte *)0x0) && (*pbVar2 != 0)) {
    pbVar4 = local_10c;
    do {
      bVar1 = *pbVar2;
      bVar5 = bVar1 < *pbVar4;
      if (bVar1 != *pbVar4) {
LAB_10023188:
        iVar3 = (1 - (uint)bVar5) - (uint)(bVar5 != 0);
        goto LAB_1002318d;
      }
      if (bVar1 == 0) break;
      bVar1 = pbVar2[1];
      bVar5 = bVar1 < pbVar4[1];
      if (bVar1 != pbVar4[1]) goto LAB_10023188;
      pbVar2 = pbVar2 + 2;
      pbVar4 = pbVar4 + 2;
    } while (bVar1 != 0);
    iVar3 = 0;
LAB_1002318d:
    if (iVar3 != 0) goto LAB_10023241;
  }
  FUN_1001f1f0();
  local_4._0_1_ = 1;
  local_338[0] = 0x3a;
  FUN_1001faa0(local_338,8,1);
  uVar6 = *(undefined4 *)(param_1 + 8);
  uVar9 = 0;
  puVar7 = local_334;
  uVar8 = 0x100;
  FUN_100536f0(uVar6,0x100,puVar7,0);
  FUN_10053c60(uVar6,uVar8,puVar7,uVar9);
  FUN_10022af0(local_334,param_1 + 0x18);
  uVar10 = 0;
  (**(code **)(*param_2 + 0x30))
            (local_334,3,9,0x1f,*(undefined4 *)(param_3 + 2),*(undefined2 *)(param_3 + 6),0);
  FUN_10021f90(*(undefined4 *)(param_3 + 2),CONCAT22(uVar10,*(undefined2 *)(param_3 + 6)));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_1001f390();
LAB_10023241:
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x100230d0 */

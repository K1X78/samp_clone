/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10029240
 * Name: FUN_10029240
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10029240(int param_1,int param_2,uint param_3,int param_4)

{
  int *piVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101144c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10027170();
  uVar8 = 0;
  DAT_10156b9c = local_18;
  piVar1 = (int *)(param_1 + 0x18);
  local_4 = 0;
  DAT_10156ba0 = param_2;
  DAT_10156b94 = param_3;
  bVar2 = false;
  DAT_10156b98 = piVar1;
  bVar3 = false;
  if (param_3 != 0) {
    do {
      bVar2 = bVar3;
      uVar6 = *(uint *)(param_2 + uVar8 * 8);
      if ((uVar6 < *(uint *)(param_1 + 0x1c)) && (*(int *)(*piVar1 + 0x20 + uVar6 * 0x24) != 2)) {
        FUN_100271b0(uVar6);
        bVar2 = true;
      }
      else {
        FUN_100271b0(0xffffffff);
      }
      uVar8 = uVar8 + 1;
      bVar3 = bVar2;
    } while (uVar8 < param_3);
  }
  iVar4 = FUN_10027060();
  if (bVar2) {
    FUN_10028240();
    local_4 = CONCAT31(local_4._1_3_,1);
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x85)) {
      uVar8 = 0;
      if (*(int *)(iVar4 + 1) != 0) {
        iVar7 = iVar4 + 0x45;
        do {
          FUN_10028c30(iVar7,iVar7);
          uVar8 = uVar8 + 1;
          iVar7 = iVar7 + 4;
        } while (uVar8 < *(uint *)(iVar4 + 1));
      }
    }
    uVar8 = 0;
    iVar4 = FUN_10028260();
    if (iVar4 != 0) {
      do {
        puVar5 = (undefined4 *)FUN_10028250(uVar8);
        *(undefined4 *)(param_4 + uVar8 * 4) = *puVar5;
        uVar8 = uVar8 + 1;
        uVar6 = FUN_10028260();
      } while (uVar8 < uVar6);
    }
    local_4 = local_4 & 0xffffff00;
    FUN_10028be0();
  }
  else {
    iVar7 = 0;
    for (; iVar4 != 0; iVar4 = *(int *)(iVar4 + 0x85)) {
      uVar8 = 0;
      if (*(int *)(iVar4 + 1) != 0) {
        puVar5 = (undefined4 *)(iVar4 + 0x45);
        do {
          *(undefined4 *)(param_4 + iVar7 * 4) = *puVar5;
          iVar7 = iVar7 + 1;
          uVar8 = uVar8 + 1;
          puVar5 = puVar5 + 1;
        } while (uVar8 < *(uint *)(iVar4 + 1));
      }
    }
  }
  local_4 = 0xffffffff;
  FUN_10027180();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10029240 */

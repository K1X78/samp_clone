/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10029d50
 * Name: FUN_10029d50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_10029d50(int param_1,int param_2,uint param_3,uint *param_4,int param_5,int param_6,uint param_7
            ,undefined4 param_8)

{
  uint uVar1;
  undefined4 uVar2;
  uint *puVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  int local_24;
  uint local_20;
  undefined1 local_18 [12];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114560;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10027170();
  uVar6 = 0;
  local_4 = 0;
  FUN_10029c60();
  uVar7 = param_3;
  iVar5 = param_2;
  if ((param_2 == 0) || (param_3 == 0)) {
    if (*(int *)(param_1 + 0x1c) != 0) {
      do {
        FUN_100271b0(uVar6);
        uVar6 = uVar6 + 1;
      } while (uVar6 < *(uint *)(param_1 + 0x1c));
    }
  }
  else if (param_3 != 0) {
    do {
      uVar1 = *(uint *)(iVar5 + uVar6 * 4);
      if (uVar1 < *(uint *)(param_1 + 0x1c)) {
        FUN_100271b0(uVar1);
      }
      uVar6 = uVar6 + 1;
    } while (uVar6 < uVar7);
  }
  if (local_20 != 0) {
    uVar7 = 0;
    if (local_20 != 0) {
      do {
        iVar5 = *(int *)(local_24 + uVar7 * 4);
        FUN_10028a60(*(int *)(param_1 + 0x18) + iVar5 * 0x24,
                     *(undefined4 *)(*(int *)(param_1 + 0x18) + 0x20 + iVar5 * 0x24));
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_20);
    }
    FUN_10027170();
    local_4 = CONCAT31(local_4._1_3_,1);
    puVar3 = param_4;
    iVar5 = param_5;
    if (param_4 != (uint *)0x0) {
      for (; iVar5 != 0; iVar5 = iVar5 + -1) {
        uVar7 = *puVar3;
        if (*(uint *)(param_1 + 0x1c) <= uVar7) {
          uVar7 = 0xffffffff;
        }
        FUN_100271b0(uVar7);
        puVar3 = puVar3 + 3;
      }
    }
    iVar5 = param_6;
    if ((param_6 == 0) || (param_7 == 0)) {
      for (iVar5 = FUN_10027060(); iVar5 != 0; iVar5 = *(int *)(iVar5 + 0x85)) {
        uVar7 = 0;
        if (*(int *)(iVar5 + 1) != 0) {
          puVar8 = (undefined4 *)(iVar5 + 5);
          do {
            FUN_10029960(local_18,&local_24,*puVar8,puVar8[0x10],param_4,param_8);
            uVar7 = uVar7 + 1;
            puVar8 = puVar8 + 1;
          } while (uVar7 < *(uint *)(iVar5 + 1));
        }
      }
    }
    else {
      uVar7 = 0;
      if (param_7 != 0) {
        do {
          uVar2 = *(undefined4 *)(iVar5 + uVar7 * 4);
          cVar4 = FUN_10027ff0(uVar2,&param_2);
          if (cVar4 != '\0') {
            FUN_10029960(local_18,&local_24,uVar2,param_2,param_4,param_8);
          }
          uVar7 = uVar7 + 1;
        } while (uVar7 < param_7);
      }
    }
    local_4 = local_4 & 0xffffff00;
    FUN_10027180();
  }
  local_4 = 0xffffffff;
  FUN_10027180();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10029d50 */

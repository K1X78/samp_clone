/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004290b0
 * Name: FUN_004290b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Removing unreachable block (ram,0x0042927a) */

uint __cdecl
FUN_004290b0(uint param_1,int param_2,undefined4 *param_3,uint param_4,uint param_5,
            undefined4 *param_6,uint param_7,uint param_8,uint *param_9)

{
  char *pcVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 *local_38;
  undefined4 *local_34;
  int local_30;
  int local_2c;
  undefined1 *local_28;
  int local_24;
  int local_20 [6];
  ushort local_6;
  ushort local_4;
  ushort local_2;
  
  iVar9 = *(int *)(param_1 + 0x3c);
  iVar5 = 0;
  local_2c = 0;
  local_30 = 0;
  local_38 = (undefined4 *)0x0;
  if (*(char *)(param_1 + 3) == '\0') {
    iVar5 = 4;
  }
  local_24 = iVar9;
  if (*(char *)(param_1 + 4) == '\0') {
    param_8 = 0;
    param_7 = 0;
  }
  else {
    uVar10 = FUN_00408c30((void *)(iVar5 + param_2),param_7 + param_8,
                          (int)(param_7 + param_8) >> 0x1f);
    iVar5 = iVar5 + (int)uVar10;
  }
  uVar7 = param_7;
  uVar10 = FUN_00408c30((void *)(iVar5 + param_2),param_4,param_5);
  FUN_0040c7d0(param_1,param_2,local_20);
  pcVar1 = (char *)(param_1 + 2);
  param_1 = param_8 + param_7;
  if (*pcVar1 == '\0') {
    if ((0 < (int)param_5) ||
       (((-1 < (int)param_5 && (0x7fffffff < param_4)) || (param_3 == (undefined4 *)0x0)))) {
      uVar7 = FUN_0041d790();
      return uVar7;
    }
    param_1 = param_1 + param_4;
    local_34 = param_3;
  }
  else {
    local_34 = param_6;
    param_7 = 0;
    param_4 = uVar7;
  }
  *param_9 = (uint)local_2;
  uVar7 = (uint)local_6;
  puVar6 = (undefined4 *)(iVar5 + (int)uVar10 + param_2);
  local_28 = (undefined1 *)((uint)local_4 + param_2);
  puVar8 = (undefined4 *)0x0;
  param_8 = param_4;
  if ((int)param_1 < 1) {
    FUN_00427610();
    return 0;
  }
  do {
    iVar5 = DAT_004ca204;
    if (uVar7 == 0) {
      puVar6 = puVar8;
      puVar2 = local_38;
      if (*(char *)(iVar9 + 0x14) != '\0') {
        do {
          do {
            puVar6 = (undefined4 *)((int)puVar6 + 1);
            puVar2 = (undefined4 *)FUN_0040c740((int)puVar6);
          } while (puVar2 == puVar6);
          puVar2 = puVar6;
        } while (puVar6 == (undefined4 *)(iVar5 / (int)(uint)*(ushort *)(iVar9 + 0x16) + 1));
      }
      local_38 = puVar2;
      uVar7 = FUN_00428700(iVar9,&local_2c,&local_38,puVar6,'\0');
      iVar5 = local_2c;
      if (*(char *)(iVar9 + 0x14) == '\0') {
        if (uVar7 != 0) goto LAB_00429357;
      }
      else {
        if (uVar7 != 0) {
LAB_00429357:
          FUN_00427610();
          return uVar7;
        }
        FUN_00427460((puVar8 != (undefined4 *)0x0) + '\x03',(int)puVar8);
      }
      FUN_00408fa0(local_28);
      FUN_00427610();
      local_28 = *(undefined1 **)(iVar5 + 0x40);
      local_30 = iVar5;
      FUN_00408fa0(local_28);
      puVar6 = (undefined4 *)(*(int *)(iVar5 + 0x40) + 4);
      uVar7 = *(ushort *)(iVar9 + 0x18) - 4;
    }
    uVar4 = param_1;
    if ((int)uVar7 < (int)param_1) {
      uVar4 = uVar7;
    }
    if ((int)param_8 < 1) {
      puVar8 = puVar6;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar8 = 0;
        puVar8 = puVar8 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar8 = 0;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
      }
    }
    else {
      if ((int)param_8 < (int)uVar4) {
        uVar4 = param_8;
      }
      puVar8 = local_34;
      puVar2 = puVar6;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar2 = *puVar8;
        puVar8 = puVar8 + 1;
        puVar2 = puVar2 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar2 = *(undefined1 *)puVar8;
        puVar8 = (undefined4 *)((int)puVar8 + 1);
        puVar2 = (undefined4 *)((int)puVar2 + 1);
      }
    }
    local_34 = (undefined4 *)((int)local_34 + uVar4);
    param_8 = param_8 - uVar4;
    param_1 = param_1 - uVar4;
    puVar6 = (undefined4 *)((int)puVar6 + uVar4);
    uVar7 = uVar7 - uVar4;
    if (param_8 == 0) {
      param_8 = param_7;
      local_34 = param_6;
    }
    puVar8 = local_38;
    iVar9 = local_24;
    if ((int)param_1 < 1) {
      FUN_00427610();
      return 0;
    }
  } while( true );
}


/* END FUNCTION 0x004290b0 */

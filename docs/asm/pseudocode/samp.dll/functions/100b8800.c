/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100b8800
 * Name: FUN_100b8800
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100b8800(undefined4 param_1,char *param_2,int param_3,int param_4,undefined4 param_5,
            uint param_6,undefined4 *param_7,int *param_8,undefined4 *param_9)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  void *pvVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  uint uVar14;
  int *piVar15;
  undefined4 uStack_424;
  undefined4 auStack_41c [3];
  undefined4 local_410 [259];
  
  puVar3 = operator_new(0x40);
  puVar7 = puVar3;
  for (iVar11 = 0x10; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  puVar7 = local_410;
  for (iVar11 = 0x100; iVar11 != 0; iVar11 = iVar11 + -1) {
    *puVar7 = 0;
    puVar7 = puVar7 + 1;
  }
  *(undefined1 *)puVar7 = 0;
  *param_9 = 0;
  if (param_2 == (char *)0x0) {
    *puVar3 = 0;
  }
  else {
    pcVar4 = param_2;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    pcVar4 = pcVar4 + (1 - (int)(param_2 + 1));
    pcVar5 = operator_new((uint)pcVar4);
    *puVar3 = pcVar5;
    for (uVar12 = (uint)pcVar4 >> 2; uVar12 != 0; uVar12 = uVar12 - 1) {
      *(undefined4 *)pcVar5 = *(undefined4 *)param_2;
      param_2 = param_2 + 4;
      pcVar5 = pcVar5 + 4;
    }
    for (uVar12 = (uint)pcVar4 & 3; uVar12 != 0; uVar12 = uVar12 - 1) {
      *pcVar5 = *param_2;
      param_2 = param_2 + 1;
      pcVar5 = pcVar5 + 1;
    }
  }
  puVar3[1] = 1;
  iVar11 = (**(code **)(**(int **)(param_3 + 4) + 0x10))();
  puVar3[5] = param_6;
  pvVar6 = operator_new(param_6 * 0x44);
  puVar3[10] = pvVar6;
  puVar7 = operator_new(iVar11 * 0xc);
  puVar3[6] = puVar7;
  for (uVar12 = iVar11 * 3 & 0x3fffffff; uVar12 != 0; uVar12 = uVar12 - 1) {
    *puVar7 = *param_7;
    param_7 = param_7 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar11 = 0; iVar11 != 0; iVar11 = iVar11 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)param_7;
    param_7 = (undefined4 *)((int)param_7 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  piVar15 = *(int **)(param_3 + 4);
  auStack_41c[0] = 0;
  (**(code **)(*piVar15 + 0x28))(piVar15,auStack_41c);
  piVar2 = *(int **)(param_3 + 4);
  iVar11 = *piVar2;
  uVar8 = (**(code **)(*piVar2 + 0x18))(piVar2,uStack_424,puVar3 + 2);
  (**(code **)(iVar11 + 0x2c))(*(undefined4 *)(param_3 + 4),0x220,uVar8);
  pvVar6 = operator_new(param_6 * 4);
  puVar3[9] = pvVar6;
  uVar12 = 0;
  if (param_6 != 0) {
    puVar7 = (undefined4 *)(param_4 + 0x44);
    do {
      iVar11 = uVar12 * 4;
      *(undefined4 *)(iVar11 + puVar3[9]) = 0;
      pcVar4 = (char *)*puVar7;
      if (pcVar4 != (char *)0x0) {
        pcVar5 = pcVar4;
        do {
          cVar1 = *pcVar5;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (pcVar5 != pcVar4 + 1) {
          _sprintf(&stack0xfffffbcc,"%s%s",
                   "C:\\Users\\New\\Desktop\\SAMP_037_Desktop\\Matite2014\\newskins\\ponz\\",pcVar4)
          ;
          iVar9 = D3DXCreateTextureFromFileA(piVar15,&stack0xfffffbcc,puVar3[9] + iVar11);
          if (iVar9 < 0) {
            *(undefined4 *)(iVar11 + puVar3[9]) = 0;
            if (DAT_102aca10 != 0) {
              uVar8 = *puVar7;
              pcVar4 = "FAILED texture: %s";
LAB_100b89da:
              FUN_10067b60(DAT_102aca10,pcVar4,uVar8);
            }
          }
          else if (DAT_102aca10 != 0) {
            uVar8 = *puVar7;
            pcVar4 = "LOADED texture: %s";
            goto LAB_100b89da;
          }
        }
      }
      uVar12 = uVar12 + 1;
      puVar7 = puVar7 + 0x12;
    } while (uVar12 < param_6);
  }
  if (piVar15 != (int *)0x0) {
    (**(code **)(*piVar15 + 8))(piVar15);
  }
  if (param_8 == (int *)0x0) {
    puVar3[7] = 0;
    puVar3[0xc] = 0;
    puVar3[0xb] = 0;
    puVar3[0xd] = 0;
  }
  else {
    puVar3[7] = param_8;
    (**(code **)(*param_8 + 4))(param_8);
    uVar10 = (**(code **)(*param_8 + 0x24))(param_8);
    uVar12 = uVar10;
    pvVar6 = operator_new(uVar10 << 6);
    puVar3[0xc] = pvVar6;
    pvVar6 = operator_new(uVar10 * 4);
    puVar3[0xd] = pvVar6;
    uVar14 = 0;
    if (uVar10 != 0) {
      iVar11 = 0;
      do {
        puVar7 = (undefined4 *)(**(code **)(*(int *)puVar3[7] + 0x44))((int *)puVar3[7],uVar14);
        puVar13 = (undefined4 *)(puVar3[0xc] + iVar11);
        for (iVar9 = 0x10; iVar9 != 0; iVar9 = iVar9 + -1) {
          *puVar13 = *puVar7;
          puVar7 = puVar7 + 1;
          puVar13 = puVar13 + 1;
        }
        uVar14 = uVar14 + 1;
        iVar11 = iVar11 + 0x40;
      } while (uVar14 < uVar12);
    }
  }
  puVar3[3] = 0;
  puVar3[4] = 0;
  *param_9 = puVar3;
  return 0;
}


/* END FUNCTION 0x100b8800 */

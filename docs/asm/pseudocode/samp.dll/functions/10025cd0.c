/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025cd0
 * Name: FUN_10025cd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_10025cd0(int param_1,char param_2,undefined4 param_3,undefined2 param_4,undefined4 param_5,
            undefined4 param_6,undefined4 param_7)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  char *pcVar5;
  uint uVar6;
  char *pcVar7;
  uint uVar8;
  int unaff_EBX;
  undefined2 *puVar9;
  char *pcVar10;
  char *unaff_retaddr;
  undefined4 uVar11;
  undefined1 *puVar12;
  undefined2 uVar13;
  undefined4 uVar14;
  uint uStack_138;
  int local_134;
  undefined1 auStack_128 [276];
  void *pvStack_14;
  void *pvStack_c;
  undefined1 *puStack_8;
  char *pcStack_4;
  
  pcStack_4 = (char *)0xffffffff;
  puStack_8 = &LAB_101143a6;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  local_134 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x20c) + 0x5c))(param_5,(undefined2)param_6);
  if (iVar2 == -1) {
    uVar6 = 0xffff;
  }
  else {
    FUN_1002af80();
    pvStack_c = (void *)0x0;
    if (param_2 == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1 + 4;
    }
    FUN_1002b6c0(iVar2,unaff_retaddr,1,0,1,0);
    puVar3 = operator_new(0x20c);
    if (puVar3 == (undefined4 *)0x0) {
      puVar3 = (undefined4 *)0x0;
    }
    else {
      *puVar3 = &PTR_LAB_10118ad8;
    }
    if ((pcStack_4 == (char *)0x0) || (*pcStack_4 == '\0')) {
      puVar3[1] = 0;
    }
    else {
      pcVar4 = pcStack_4;
      do {
        cVar1 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
      iVar2 = (int)pcVar4 - (int)(pcStack_4 + 1);
      puVar3[1] = iVar2;
      if ((pcStack_4[iVar2 + -1] != '/') && (pcStack_4[iVar2 + -1] != '\\')) {
        puVar3[1] = iVar2 + 1;
      }
    }
    if (param_2 == '\0') {
      *(undefined1 *)(puVar3 + 2) = 0;
    }
    else {
      pcVar4 = (char *)(param_1 + 4);
      iVar2 = 8 - (int)pcVar4;
      do {
        cVar1 = *pcVar4;
        pcVar4[(int)puVar3 + iVar2] = cVar1;
        pcVar4 = pcVar4 + 1;
      } while (cVar1 != '\0');
    }
    pcVar4 = (char *)(puVar3 + 2);
    pcVar7 = pcVar4;
    pcVar5 = unaff_retaddr;
    if (unaff_retaddr != (char *)0x0) {
      do {
        cVar1 = *pcVar5;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 != '\0');
      uVar6 = (int)pcVar5 - (int)unaff_retaddr;
      pcVar5 = (char *)((int)puVar3 + 7);
      do {
        pcVar7 = pcVar5 + 1;
        pcVar5 = pcVar5 + 1;
      } while (*pcVar7 != '\0');
      pcVar10 = unaff_retaddr;
      for (uVar8 = uVar6 >> 2; uVar8 != 0; uVar8 = uVar8 - 1) {
        *(undefined4 *)pcVar5 = *(undefined4 *)pcVar10;
        pcVar10 = pcVar10 + 4;
        pcVar5 = pcVar5 + 4;
      }
      for (uVar6 = uVar6 & 3; pcVar7 = pcVar4, uVar6 != 0; uVar6 = uVar6 - 1) {
        *pcVar5 = *pcVar10;
        pcVar10 = pcVar10 + 1;
        pcVar5 = pcVar5 + 1;
      }
    }
    do {
      pcVar5 = pcVar7;
      pcVar7 = pcVar5 + 1;
    } while (*pcVar5 != '\0');
    if (pcVar5[-1] != '/') {
      do {
        pcVar7 = pcVar4;
        pcVar4 = pcVar7 + 1;
      } while (*pcVar7 != '\0');
      if (pcVar7[-1] != '\\') {
        puVar9 = (undefined2 *)((int)puVar3 + 7);
        do {
          pcVar4 = (char *)((int)puVar9 + 1);
          puVar9 = (undefined2 *)((int)puVar9 + 1);
        } while (*pcVar4 != '\0');
        *puVar9 = 0x2f;
      }
    }
    puVar3[0x82] = param_5;
    uVar6 = FUN_1002d820(puVar3,1,param_3,param_4);
    FUN_1001f1f0();
    pvStack_c._0_1_ = 1;
    FUN_1001faa0(&stack0xfffffec0,8,1);
    uStack_138 = uVar6;
    FUN_1001faa0(&uStack_138,0x10,1);
    uVar14 = 0;
    puVar12 = auStack_128;
    uVar11 = 0x100;
    pcVar4 = pcStack_4;
    FUN_100536f0(pcStack_4,0x100,puVar12,0);
    FUN_10053c60(pcVar4,uVar11,puVar12,uVar14);
    uVar14 = 0;
    puVar12 = auStack_128;
    uVar11 = 0x100;
    FUN_100536f0(unaff_retaddr,0x100,puVar12,0);
    FUN_10053c60(unaff_retaddr,uVar11,puVar12,uVar14);
    uVar13 = 0x1002;
    FUN_1002afe0(auStack_128);
    (**(code **)(**(int **)(unaff_EBX + 0x20c) + 0x30))
              (auStack_128,param_6,9,param_7,param_3,CONCAT22(uVar13,param_4),0);
    pvStack_c = (void *)((uint)pvStack_c._1_3_ << 8);
    FUN_1001f390();
    pvStack_c = (void *)0xffffffff;
    FUN_1002b510();
    uVar6 = uVar6 & 0xffff;
  }
  ExceptionList = pvStack_14;
  return uVar6;
}


/* END FUNCTION 0x10025cd0 */

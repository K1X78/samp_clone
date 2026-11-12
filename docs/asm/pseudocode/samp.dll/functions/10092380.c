/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10092380
 * Name: FUN_10092380
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10092380(undefined4 param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *unaff_EBX;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  bool bVar8;
  char *pcVar9;
  int *piStack_448;
  char *pcStack_444;
  char acStack_428 [4];
  int local_424 [2];
  char local_41c [8];
  undefined1 auStack_414 [4];
  undefined1 uStack_410;
  undefined4 uStack_40f;
  char acStack_21c [511];
  char cStack_1d;
  
  pcStack_444 = local_41c;
  piStack_448 = param_2;
  iVar2 = (**(code **)(*param_2 + 0x20))();
  if (-1 < iVar2) {
    iVar2 = 4;
    bVar8 = true;
    piVar5 = local_424;
    piVar6 = &DAT_101218fc;
    do {
      if (iVar2 == 0) break;
      iVar2 = iVar2 + -1;
      bVar8 = *piVar5 == *piVar6;
      piVar5 = piVar5 + 1;
      piVar6 = piVar6 + 1;
    } while (bVar8);
    if ((!bVar8) || (iVar2 = FUN_100922b0(param_1,param_2,param_3), -1 < iVar2)) {
      iVar2 = 4;
      bVar8 = true;
      piVar5 = local_424;
      piVar6 = &DAT_1012189c;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        iVar2 = (**(code **)(*param_2 + 0x18))(param_2,auStack_414,&stack0xfffffbc8);
        if (iVar2 < 0) {
          return iVar2;
        }
        puVar7 = (undefined4 *)(param_3 + 0x204);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = *unaff_EBX;
          unaff_EBX = unaff_EBX + 1;
          puVar7 = puVar7 + 1;
        }
      }
      iVar2 = 4;
      bVar8 = true;
      piVar5 = local_424;
      piVar6 = &DAT_101218ac;
      do {
        if (iVar2 == 0) break;
        iVar2 = iVar2 + -1;
        bVar8 = *piVar5 == *piVar6;
        piVar5 = piVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (bVar8);
      if (bVar8) {
        uStack_410 = 0;
        puVar7 = &uStack_40f;
        for (iVar2 = 0x7f; iVar2 != 0; iVar2 = iVar2 + -1) {
          *puVar7 = 0;
          puVar7 = puVar7 + 1;
        }
        iVar2 = *param_2;
        *(undefined2 *)puVar7 = 0;
        pcVar9 = acStack_428;
        *(undefined1 *)((int)puVar7 + 2) = 0;
        acStack_428[0] = '\0';
        acStack_428[1] = '\x02';
        acStack_428[2] = '\0';
        acStack_428[3] = '\0';
        iVar2 = (**(code **)(iVar2 + 0x10))(param_2,&uStack_410);
        if (iVar2 < 0) {
          return iVar2;
        }
        iVar2 = 0;
        do {
          cVar1 = acStack_21c[iVar2];
          local_41c[iVar2] = cVar1;
          iVar2 = iVar2 + 1;
        } while (cVar1 != '\0');
        cStack_1d = cVar1;
        pvVar3 = operator_new(0x250);
        if ((pvVar3 == (void *)0x0) || (iVar2 = FUN_10091cf0(acStack_21c), iVar2 == 0)) {
          return -0x7ff8fff2;
        }
        *(undefined4 *)(iVar2 + 0x248) = *(undefined4 *)(param_3 + 0x24c);
        *(int *)(param_3 + 0x24c) = iVar2;
        (**(code **)(*param_2 + 0x28))(param_2,&pcStack_444);
        pcStack_444 = (char *)0x0;
        if (pcVar9 != (char *)0x0) {
          do {
            iVar4 = (**(code **)(*param_2 + 0x2c))(param_2,pcStack_444,&piStack_448);
            if (iVar4 < 0) {
              return iVar4;
            }
            iVar4 = FUN_10092380(param_1,piStack_448,iVar2);
            if (piStack_448 != (int *)0x0) {
              (**(code **)(*piStack_448 + 8))(piStack_448);
              piStack_448 = (int *)0x0;
            }
            if (iVar4 < 0) {
              return iVar4;
            }
            pcStack_444 = pcStack_444 + 1;
          } while (pcStack_444 < pcVar9);
        }
      }
      iVar2 = 0;
    }
  }
  return iVar2;
}


/* END FUNCTION 0x10092380 */

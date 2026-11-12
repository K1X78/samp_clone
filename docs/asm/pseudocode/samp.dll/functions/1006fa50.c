/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006fa50
 * Name: FUN_1006fa50
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall
FUN_1006fa50(int param_1,int param_2,undefined4 param_3,char *param_4,char *param_5,
            undefined4 param_6,char *param_7,undefined4 param_8)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int local_10;
  int local_c;
  undefined1 local_8 [4];
  int local_4;
  
  if (param_2 < 0) {
    if (*(int *)(param_1 + 0x28) == 0) {
      return;
    }
    FUN_1006f2a0();
    return;
  }
  if ((DAT_102aca14 != 0) && (*(int *)(DAT_102aca14 + 0x14e0) != 0)) {
    FUN_10068fc0();
  }
  *(int *)(param_1 + 0x30) = param_2;
  *(undefined4 *)(param_1 + 0x2c) = param_3;
  *(undefined4 *)(param_1 + 0x81) = param_8;
  pcVar2 = (char *)(param_1 + 0x40);
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  _strncpy((char *)(param_1 + 0x40),param_4,0x40);
  if (*(void **)(param_1 + 0x34) != (void *)0x0) {
    _free(*(void **)(param_1 + 0x34));
  }
  pcVar2 = param_5;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  pcVar2 = _calloc(1,(size_t)(pcVar2 + (0x40 - (int)(param_5 + 1))));
  *(char **)(param_1 + 0x34) = pcVar2;
  do {
    cVar1 = *param_5;
    param_5 = param_5 + 1;
    *pcVar2 = cVar1;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  puVar3 = (undefined4 *)FUN_1006acf0(local_8,*(undefined4 *)(param_1 + 0x34),0x40);
  *(undefined4 *)(param_1 + 0x38) = *puVar3;
  *(undefined4 *)(param_1 + 0x3c) = puVar3[1];
  pcVar2 = param_4;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  if (pcVar2 != param_4 + 1) {
    FUN_1006ac40(&local_10,&DAT_10118400,0);
    pcVar2 = (char *)(*(int *)(param_1 + 0x1c) + 0x16);
    do {
      cVar1 = *param_4;
      param_4 = param_4 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x14) = 1;
    *(int *)(*(int *)(param_1 + 0x1c) + 0x126) = local_c + 4;
  }
  local_10 = 0;
  local_c = 0;
  switch(*(undefined4 *)(param_1 + 0x2c)) {
  case 0:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x38) + 0x28;
    *(int *)(param_1 + 0x10) =
         *(int *)(*(int *)(param_1 + 0x1c) + 0x126) + *(int *)(param_1 + 0x3c) + 0x19 +
         *(int *)(param_1 + 0x18);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(0);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(0);
    goto LAB_1006fccf;
  case 1:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x38) + 0x28;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x126);
    FUN_10086b40(1);
    iVar4 = FUN_100f9324();
    *(int *)(param_1 + 0x10) =
         iVar4 + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x18) + 0x19 + iVar7;
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(1);
    iVar7 = *(int *)(param_1 + 0x24);
    *(undefined1 *)(iVar7 + 0x126) = 0;
    *(undefined1 *)(iVar7 + 0x5f) = 0;
    FUN_10085000(&DAT_10117a39,0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))(0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(0);
    break;
  case 2:
    FUN_1006f630(*(undefined4 *)(param_1 + 0x34),&local_10);
    *(int *)(param_1 + 0xc) = local_10 + 0x28;
    if (local_10 + 0x28 < 400) {
      *(undefined4 *)(param_1 + 0xc) = 400;
    }
    if (800 < *(int *)(param_1 + 0xc)) {
      *(undefined4 *)(param_1 + 0xc) = 800;
    }
    iVar7 = *(int *)(param_1 + 0x14) * 2 + 0x1e;
    if (*(int *)(param_1 + 0xc) < iVar7) {
      *(int *)(param_1 + 0xc) = iVar7;
    }
    piVar6 = *(int **)(param_1 + 0x20);
    iVar7 = local_c + *(int *)((int)piVar6 + 0x133) * 2;
    if (iVar7 < 200) {
      iVar7 = 200;
    }
    else if (400 < iVar7) {
      iVar7 = 400;
    }
    *(int *)(param_1 + 0x10) =
         *(int *)(*(int *)(param_1 + 0x1c) + 0x126) + *(int *)(param_1 + 0x18) + 0xf + iVar7;
    piVar6[2] = 5;
    piVar6[3] = 5;
    (**(code **)(*piVar6 + 0x4c))();
    piVar6 = *(int **)(param_1 + 0x20);
    piVar6[4] = *(int *)(param_1 + 0xc) + -10;
    piVar6[5] = iVar7;
    (**(code **)(*piVar6 + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(0);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(1);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))();
    break;
  case 3:
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0x38) + 0x28;
    iVar7 = *(int *)(*(int *)(param_1 + 0x1c) + 0x126);
    FUN_10086b40(1);
    iVar4 = FUN_100f9324();
    *(int *)(param_1 + 0x10) =
         iVar4 + *(int *)(param_1 + 0x3c) + *(int *)(param_1 + 0x18) + 0x19 + iVar7;
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(1);
    iVar7 = *(int *)(param_1 + 0x24);
    *(undefined1 *)(iVar7 + 0x126) = 1;
    *(undefined1 *)(iVar7 + 0x5f) = 1;
    FUN_10085000(&DAT_10117a39,0);
LAB_1006fccf:
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))(0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(0);
    break;
  case 4:
    FUN_1006f730(*(undefined4 *)(param_1 + 0x34),&local_10,0);
    *(int *)(param_1 + 0xc) = local_10 + 0x28;
    if (local_10 + 0x28 < 400) {
      *(undefined4 *)(param_1 + 0xc) = 400;
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x4d);
      if (0 < iVar7) {
        iVar8 = 0;
        iVar4 = (0x168 - local_10) / iVar7;
        if (iVar7 != 0) {
          piVar6 = (int *)(param_1 + 0x28d);
          do {
            iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x51 + iVar8 * 4);
            *piVar6 = *piVar6 + iVar4;
            *(int *)(*(int *)(param_1 + 0x20) + 0x51 + iVar8 * 4) = iVar7 + iVar4;
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar8 != *(int *)(*(int *)(param_1 + 0x20) + 0x4d));
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x14) * 2 + 0x1e;
    if (*(int *)(param_1 + 0xc) < iVar7) {
      *(int *)(param_1 + 0xc) = iVar7;
    }
    piVar6 = *(int **)(param_1 + 0x20);
    iVar7 = local_c + *(int *)((int)piVar6 + 0x133) * 2;
    if (iVar7 < 200) {
      iVar7 = 200;
    }
    else if (400 < iVar7) {
      iVar7 = 400;
    }
    *(int *)(param_1 + 0x10) =
         *(int *)(*(int *)(param_1 + 0x1c) + 0x126) + *(int *)(param_1 + 0x18) + 0xf + iVar7;
    piVar6[3] = 5;
    goto LAB_1006ff7e;
  case 5:
    FUN_1006f730(*(undefined4 *)(param_1 + 0x34),&local_10,1);
    *(int *)(param_1 + 0xc) = local_10 + 0x28;
    if (local_10 + 0x28 < 400) {
      *(undefined4 *)(param_1 + 0xc) = 400;
      iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x4d);
      if (0 < iVar7) {
        iVar8 = 0;
        iVar4 = (0x168 - local_10) / iVar7;
        if (iVar7 != 0) {
          piVar6 = (int *)(param_1 + 0x28d);
          do {
            iVar7 = *(int *)(*(int *)(param_1 + 0x20) + 0x51 + iVar8 * 4);
            *piVar6 = *piVar6 + iVar4;
            *(int *)(*(int *)(param_1 + 0x20) + 0x51 + iVar8 * 4) = iVar7 + iVar4;
            iVar8 = iVar8 + 1;
            piVar6 = piVar6 + 1;
          } while (iVar8 != *(int *)(*(int *)(param_1 + 0x20) + 0x4d));
        }
      }
    }
    iVar7 = *(int *)(param_1 + 0x14) * 2 + 0x1e;
    if (*(int *)(param_1 + 0xc) < iVar7) {
      *(int *)(param_1 + 0xc) = iVar7;
    }
    iVar7 = local_c + *(int *)(*(int *)(param_1 + 0x20) + 0x133) * 2;
    if (iVar7 < 200) {
      iVar7 = 200;
    }
    else if (400 < iVar7) {
      iVar7 = 400;
    }
    FUN_1006acf0(local_8,&DAT_10118400,0);
    *(int *)(param_1 + 0x10) =
         *(int *)(*(int *)(param_1 + 0x1c) + 0x126) + *(int *)(param_1 + 0x18) + local_4 + 0xf +
         iVar7;
    piVar6 = *(int **)(param_1 + 0x20);
    piVar6[3] = local_4 + 5;
LAB_1006ff7e:
    piVar6[2] = 5;
    (**(code **)(*piVar6 + 0x4c))();
    iVar4 = *(int *)(param_1 + 0xc);
    piVar6 = *(int **)(param_1 + 0x20);
    piVar6[5] = iVar7;
    piVar6[4] = iVar4 + -10;
    (**(code **)(*piVar6 + 0x4c))();
    (**(code **)(**(int **)(param_1 + 0x24) + 0x40))(0);
    (**(code **)(**(int **)(param_1 + 0x24) + 0x38))(0);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x40))(1);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x38))(1);
    (**(code **)(**(int **)(param_1 + 0x20) + 0x4c))();
  }
  pcVar2 = param_7 + 1;
  pcVar5 = param_7;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  if (pcVar5 == pcVar2) {
    FUN_10086cf0(0x14,0);
    FUN_100875c0(param_6);
    puVar9 = &DAT_10117a39;
    FUN_10086cf0(0x15,0);
    FUN_100875c0(puVar9);
    piVar6 = (int *)FUN_10086cf0(0x15,0);
  }
  else {
    FUN_10086cf0(0x14,0);
    FUN_100875c0(param_6);
    FUN_10086cf0(0x15,0);
    FUN_100875c0(param_7);
    piVar6 = (int *)FUN_10086cf0(0x15,0);
  }
  (**(code **)(*piVar6 + 0x40))(pcVar5 != pcVar2);
  *(undefined1 *)(*(int *)(param_1 + 0x1c) + 0x13) = 1;
  if ((*(int *)(param_1 + 0x2c) == 1) || (*(int *)(param_1 + 0x2c) == 3)) {
    FUN_100844b0(*(undefined4 *)(param_1 + 0x24));
  }
  iVar7 = *(int *)(param_1 + 0x2c);
  if (((iVar7 == 2) || (iVar7 == 4)) || (iVar7 == 5)) {
    FUN_100844b0(*(undefined4 *)(param_1 + 0x20));
    FUN_1008a470(0);
  }
  FUN_1006ef40();
  *(undefined4 *)(param_1 + 0x28) = 1;
  return;
}


/* END FUNCTION 0x1006fa50 */

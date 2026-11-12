/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10045ef0
 * Name: FUN_10045ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_10045ef0(undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
                   char *param_5,undefined2 *param_6)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  int iVar11;
  
  pcVar7 = param_5;
  iVar3 = *(int *)(param_5 + 1);
  if (0x1f < iVar3) {
    pcVar4 = (char *)FUN_10045bc0();
    puVar2 = param_6;
    iVar3 = (int)param_3;
    *pcVar4 = *pcVar7;
    if (*pcVar7 != '\0') {
      *(undefined4 *)(pcVar4 + 0xc5) = *(undefined4 *)(pcVar7 + 0xc5);
      if (*(int *)(pcVar7 + 0xc5) != 0) {
        *(char **)(*(int *)(pcVar7 + 0xc5) + 0xc9) = pcVar4;
      }
      *(char **)(pcVar4 + 0xc9) = pcVar7;
      *(char **)(pcVar7 + 0xc5) = pcVar4;
    }
    if ((int)param_3 < 0x10) {
      pcVar8 = pcVar4 + 5;
      pcVar9 = pcVar7 + 0x23;
      iVar3 = 0x11;
      pcVar10 = pcVar8;
      do {
        *(undefined2 *)pcVar10 = *(undefined2 *)pcVar9;
        pcVar9 = pcVar9 + 2;
        pcVar10 = pcVar10 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (*pcVar7 == '\0') {
        pcVar9 = pcVar4 + 0xcd;
        pcVar10 = pcVar7 + 0x10d;
        param_5 = (char *)0x11;
        do {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
          param_5 = (char *)((int)param_5 + -1);
        } while (param_5 != (char *)0x0);
        *(undefined4 *)(param_6 + 2) = 2;
        *param_6 = *(undefined2 *)pcVar8;
        *(undefined2 *)pcVar8 = *(undefined2 *)(pcVar4 + 7);
        *(undefined2 *)(pcVar4 + 7) = *(undefined2 *)(pcVar4 + 9);
        *(undefined2 *)(pcVar4 + 9) = *(undefined2 *)(pcVar4 + 0xb);
        *(undefined2 *)(pcVar4 + 0xb) = *(undefined2 *)(pcVar4 + 0xd);
        *(undefined2 *)(pcVar4 + 0xd) = *(undefined2 *)(pcVar4 + 0xf);
        *(undefined2 *)(pcVar4 + 0xf) = *(undefined2 *)(pcVar4 + 0x11);
        *(undefined2 *)(pcVar4 + 0x11) = *(undefined2 *)(pcVar4 + 0x13);
        *(undefined2 *)(pcVar4 + 0x13) = *(undefined2 *)(pcVar4 + 0x15);
        *(undefined2 *)(pcVar4 + 0x15) = *(undefined2 *)(pcVar4 + 0x17);
        *(undefined2 *)(pcVar4 + 0x17) = *(undefined2 *)(pcVar4 + 0x19);
        *(undefined2 *)(pcVar4 + 0x19) = *(undefined2 *)(pcVar4 + 0x1b);
        *(undefined2 *)(pcVar4 + 0x1b) = *(undefined2 *)(pcVar4 + 0x1d);
        *(undefined2 *)(pcVar4 + 0x1d) = *(undefined2 *)(pcVar4 + 0x1f);
        *(undefined2 *)(pcVar4 + 0x1f) = *(undefined2 *)(pcVar4 + 0x21);
        *(undefined2 *)(pcVar4 + 0x21) = *(undefined2 *)(pcVar4 + 0x23);
        *(undefined2 *)(pcVar4 + 0x23) = *(undefined2 *)(pcVar4 + 0x25);
        param_5 = (char *)0x0;
      }
      else {
        pcVar9 = pcVar4 + 0x45;
        pcVar8 = pcVar7 + 0x81;
        iVar3 = 0x11;
        do {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      pcVar7[1] = '\x0f';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      FUN_10044660(param_1,pcVar7,&param_3);
      FUN_10045ef0(param_1,param_2,param_3,param_4,pcVar7,puVar2);
      pcVar4[1] = '\x11';
      pcVar4[2] = '\0';
      pcVar4[3] = '\0';
      pcVar4[4] = '\0';
      return pcVar4;
    }
    iVar11 = 0;
    iVar6 = 0x10;
    if (0x10 < (int)param_3) {
      param_5 = pcVar7 + 0x25;
      iVar11 = (int)param_3 + -0x10;
      pcVar8 = pcVar4 + 5;
      iVar5 = iVar11;
      do {
        *(undefined2 *)pcVar8 = *(undefined2 *)param_5;
        param_5 = param_5 + 2;
        pcVar8 = pcVar8 + 2;
        iVar5 = iVar5 + -1;
        iVar6 = (int)param_3;
      } while (iVar5 != 0);
    }
    *(undefined2 *)(pcVar4 + iVar11 * 2 + 5) = (undefined2)param_1;
    if (iVar6 < 0x20) {
      pcVar8 = pcVar4 + (iVar11 + 1) * 2 + 5;
      pcVar9 = pcVar7 + iVar6 * 2 + 5;
      iVar6 = 0x20 - iVar6;
      do {
        *(undefined2 *)pcVar8 = *(undefined2 *)pcVar9;
        pcVar9 = pcVar9 + 2;
        pcVar8 = pcVar8 + 2;
        iVar6 = iVar6 + -1;
      } while (iVar6 != 0);
    }
    iVar11 = 0;
    if (*pcVar7 == '\0') {
      iVar6 = 0x10;
      if (0x10 < (int)param_3) {
        iVar11 = (int)param_3 + -0x10;
        pcVar8 = pcVar4 + 0xcd;
        iVar5 = iVar11;
        param_3 = pcVar7 + 0x111;
        do {
          *(undefined4 *)pcVar8 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pcVar8 = pcVar8 + 4;
          iVar5 = iVar5 + -1;
          iVar6 = iVar3;
        } while (iVar5 != 0);
      }
      *(undefined4 *)(pcVar4 + iVar11 * 4 + 0xcd) = param_4;
      iVar11 = iVar11 + 1;
      iVar3 = iVar6 + 1;
      if (iVar3 < *(int *)(pcVar7 + 1) + 1) {
        pcVar8 = pcVar4 + iVar11 * 4 + 0xcd;
        pcVar9 = pcVar7 + iVar6 * 4 + 0xd1;
        do {
          uVar1 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          *(undefined4 *)pcVar8 = uVar1;
          iVar3 = iVar3 + 1;
          iVar11 = iVar11 + 1;
          pcVar8 = pcVar8 + 4;
        } while (iVar3 < *(int *)(pcVar7 + 1) + 1);
      }
      *(undefined4 *)(param_6 + 2) = 2;
      *param_6 = *(undefined2 *)(pcVar4 + 5);
      iVar3 = iVar11 + -1;
      if (0 < iVar3) {
        pcVar8 = pcVar4 + 7;
        pcVar9 = pcVar4 + 5;
        for (; iVar3 != 0; iVar3 = iVar3 + -1) {
          *(undefined2 *)pcVar9 = *(undefined2 *)pcVar8;
          pcVar8 = pcVar8 + 2;
          pcVar9 = pcVar9 + 2;
        }
      }
    }
    else {
      iVar6 = 0x10;
      if (0x10 < (int)param_3) {
        iVar11 = (int)param_3 + -0x10;
        pcVar8 = pcVar4 + 0x45;
        iVar5 = iVar11;
        param_3 = pcVar7 + 0x85;
        do {
          *(undefined4 *)pcVar8 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pcVar8 = pcVar8 + 4;
          iVar5 = iVar5 + -1;
          iVar6 = iVar3;
        } while (iVar5 != 0);
      }
      *(undefined4 *)(pcVar4 + iVar11 * 4 + 0x45) = *param_2;
      iVar11 = iVar11 + 1;
      if (iVar6 < 0x20) {
        iVar3 = 0x20 - iVar6;
        pcVar8 = pcVar4 + iVar11 * 4 + 0x45;
        pcVar9 = pcVar7 + iVar6 * 4 + 0x45;
        iVar11 = iVar11 + iVar3;
        do {
          *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
          pcVar9 = pcVar9 + 4;
          pcVar8 = pcVar8 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pcVar7[1] = '\x10';
        pcVar7[2] = '\0';
        pcVar7[3] = '\0';
        pcVar7[4] = '\0';
        *(int *)(pcVar4 + 1) = iVar11;
        return pcVar4;
      }
    }
    pcVar7[1] = '\x10';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7[4] = '\0';
    *(int *)(pcVar4 + 1) = iVar11;
    return pcVar4;
  }
  if ((int)param_3 < iVar3) {
    pcVar7 = param_5 + iVar3 * 2 + 5;
    iVar3 = iVar3 - (int)param_3;
    do {
      *(undefined2 *)pcVar7 = *(undefined2 *)(pcVar7 + -2);
      pcVar7 = pcVar7 + -2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_5 + 1);
  if (*param_5 == '\0') {
    iVar3 = iVar3 + 1;
    if ((int)param_3 + 1 < iVar3) {
      pcVar7 = param_5 + iVar3 * 4 + 0xcd;
      iVar3 = iVar3 - ((int)param_3 + 1);
      do {
        *(undefined4 *)pcVar7 = *(undefined4 *)(pcVar7 + -4);
        pcVar7 = pcVar7 + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if ((int)param_3 < iVar3) {
    pcVar7 = param_5 + iVar3 * 4 + 0x45;
    iVar3 = iVar3 - (int)param_3;
    do {
      *(undefined4 *)pcVar7 = *(undefined4 *)(pcVar7 + -4);
      pcVar7 = pcVar7 + -4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined2 *)(param_5 + (int)param_3 * 2 + 5) = (undefined2)param_1;
  if (*param_5 == '\0') {
    *(undefined4 *)(param_5 + (int)param_3 * 4 + 0xd1) = param_4;
    *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
    return (char *)0x0;
  }
  *(undefined4 *)(param_5 + (int)param_3 * 4 + 0x45) = *param_2;
  *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
  return (char *)0x0;
}


/* END FUNCTION 0x10045ef0 */

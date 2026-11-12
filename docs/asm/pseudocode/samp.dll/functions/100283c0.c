/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100283c0
 * Name: FUN_100283c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * FUN_100283c0(undefined4 param_1,undefined4 *param_2,int param_3,undefined4 param_4,
                   char *param_5,undefined4 *param_6)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  pcVar7 = param_5;
  iVar3 = *(int *)(param_5 + 1);
  if (iVar3 < 0x10) {
    if (param_3 < iVar3) {
      pcVar7 = param_5 + iVar3 * 4 + 5;
      iVar3 = iVar3 - param_3;
      do {
        *(undefined4 *)pcVar7 = *(undefined4 *)(pcVar7 + -4);
        pcVar7 = pcVar7 + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    iVar3 = *(int *)(param_5 + 1);
    if (*param_5 == '\0') {
      iVar3 = iVar3 + 1;
      if (param_3 + 1 < iVar3) {
        pcVar7 = param_5 + iVar3 * 4 + 0x8d;
        iVar3 = iVar3 - (param_3 + 1);
        do {
          *(undefined4 *)pcVar7 = *(undefined4 *)(pcVar7 + -4);
          pcVar7 = pcVar7 + -4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
    }
    else if (param_3 < iVar3) {
      pcVar7 = param_5 + iVar3 * 4 + 0x45;
      iVar3 = iVar3 - param_3;
      do {
        *(undefined4 *)pcVar7 = *(undefined4 *)(pcVar7 + -4);
        pcVar7 = pcVar7 + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    *(undefined4 *)(param_5 + param_3 * 4 + 5) = param_1;
    if (*param_5 == '\0') {
      *(undefined4 *)(param_5 + param_3 * 4 + 0x91) = param_4;
      *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
      return (char *)0x0;
    }
    *(undefined4 *)(param_5 + param_3 * 4 + 0x45) = *param_2;
    *(int *)(param_5 + 1) = *(int *)(param_5 + 1) + 1;
    return (char *)0x0;
  }
  pcVar4 = (char *)FUN_100282f0();
  puVar2 = param_6;
  *pcVar4 = *pcVar7;
  if (*pcVar7 != '\0') {
    *(undefined4 *)(pcVar4 + 0x85) = *(undefined4 *)(pcVar7 + 0x85);
    if (*(int *)(pcVar7 + 0x85) != 0) {
      *(char **)(*(int *)(pcVar7 + 0x85) + 0x89) = pcVar4;
    }
    *(char **)(pcVar4 + 0x89) = pcVar7;
    *(char **)(pcVar7 + 0x85) = pcVar4;
  }
  if (param_3 < 8) {
    *(undefined4 *)(pcVar4 + 5) = *(undefined4 *)(pcVar7 + 0x21);
    *(undefined4 *)(pcVar4 + 9) = *(undefined4 *)(pcVar7 + 0x25);
    *(undefined4 *)(pcVar4 + 0xd) = *(undefined4 *)(pcVar7 + 0x29);
    *(undefined4 *)(pcVar4 + 0x11) = *(undefined4 *)(pcVar7 + 0x2d);
    *(undefined4 *)(pcVar4 + 0x15) = *(undefined4 *)(pcVar7 + 0x31);
    *(undefined4 *)(pcVar4 + 0x19) = *(undefined4 *)(pcVar7 + 0x35);
    *(undefined4 *)(pcVar4 + 0x1d) = *(undefined4 *)(pcVar7 + 0x39);
    *(undefined4 *)(pcVar4 + 0x21) = *(undefined4 *)(pcVar7 + 0x3d);
    *(undefined4 *)(pcVar4 + 0x25) = *(undefined4 *)(pcVar7 + 0x41);
    param_5 = (char *)0x9;
    if (*pcVar7 == '\0') {
      *(undefined4 *)(pcVar4 + 0x8d) = *(undefined4 *)(pcVar7 + 0xad);
      *(undefined4 *)(pcVar4 + 0x91) = *(undefined4 *)(pcVar7 + 0xb1);
      *(undefined4 *)(pcVar4 + 0x95) = *(undefined4 *)(pcVar7 + 0xb5);
      *(undefined4 *)(pcVar4 + 0x99) = *(undefined4 *)(pcVar7 + 0xb9);
      *(undefined4 *)(pcVar4 + 0x9d) = *(undefined4 *)(pcVar7 + 0xbd);
      *(undefined4 *)(pcVar4 + 0xa1) = *(undefined4 *)(pcVar7 + 0xc1);
      *(undefined4 *)(pcVar4 + 0xa5) = *(undefined4 *)(pcVar7 + 0xc5);
      *(undefined4 *)(pcVar4 + 0xa9) = *(undefined4 *)(pcVar7 + 0xc9);
      *(undefined4 *)(pcVar4 + 0xad) = *(undefined4 *)(pcVar7 + 0xcd);
      param_6[2] = 2;
      *param_6 = *(undefined4 *)(pcVar4 + 5);
      *(undefined4 *)(pcVar4 + 5) = *(undefined4 *)(pcVar4 + 9);
      *(undefined4 *)(pcVar4 + 9) = *(undefined4 *)(pcVar4 + 0xd);
      *(undefined4 *)(pcVar4 + 0xd) = *(undefined4 *)(pcVar4 + 0x11);
      *(undefined4 *)(pcVar4 + 0x11) = *(undefined4 *)(pcVar4 + 0x15);
      *(undefined4 *)(pcVar4 + 0x15) = *(undefined4 *)(pcVar4 + 0x19);
      *(undefined4 *)(pcVar4 + 0x19) = *(undefined4 *)(pcVar4 + 0x1d);
      *(undefined4 *)(pcVar4 + 0x1d) = *(undefined4 *)(pcVar4 + 0x21);
      *(undefined4 *)(pcVar4 + 0x21) = *(undefined4 *)(pcVar4 + 0x25);
    }
    else {
      *(undefined4 *)(pcVar4 + 0x45) = *(undefined4 *)(pcVar7 + 0x61);
      *(undefined4 *)(pcVar4 + 0x49) = *(undefined4 *)(pcVar7 + 0x65);
      *(undefined4 *)(pcVar4 + 0x4d) = *(undefined4 *)(pcVar7 + 0x69);
      *(undefined4 *)(pcVar4 + 0x51) = *(undefined4 *)(pcVar7 + 0x6d);
      *(undefined4 *)(pcVar4 + 0x55) = *(undefined4 *)(pcVar7 + 0x71);
      *(undefined4 *)(pcVar4 + 0x59) = *(undefined4 *)(pcVar7 + 0x75);
      *(undefined4 *)(pcVar4 + 0x5d) = *(undefined4 *)(pcVar7 + 0x79);
      *(undefined4 *)(pcVar4 + 0x61) = *(undefined4 *)(pcVar7 + 0x7d);
      *(undefined4 *)(pcVar4 + 0x65) = *(undefined4 *)(pcVar7 + 0x81);
    }
    pcVar7[1] = '\a';
    pcVar7[2] = '\0';
    pcVar7[3] = '\0';
    pcVar7[4] = '\0';
    FUN_10027310(param_1,pcVar7,&param_3);
    FUN_100283c0(param_1,param_2,param_3,param_4,pcVar7,puVar2);
    *(char **)(pcVar4 + 1) = param_5;
    return pcVar4;
  }
  iVar3 = 0;
  iVar6 = 8;
  if (8 < param_3) {
    param_5 = pcVar7 + 0x25;
    iVar3 = param_3 + -8;
    pcVar8 = pcVar4 + 5;
    iVar5 = iVar3;
    do {
      *(undefined4 *)pcVar8 = *(undefined4 *)param_5;
      param_5 = param_5 + 4;
      pcVar8 = pcVar8 + 4;
      iVar5 = iVar5 + -1;
      iVar6 = param_3;
    } while (iVar5 != 0);
  }
  *(undefined4 *)(pcVar4 + iVar3 * 4 + 5) = param_1;
  if (iVar6 < 0x10) {
    pcVar8 = pcVar4 + (iVar3 + 1) * 4 + 5;
    pcVar9 = pcVar7 + iVar6 * 4 + 5;
    iVar6 = 0x10 - iVar6;
    do {
      *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
      pcVar9 = pcVar9 + 4;
      pcVar8 = pcVar8 + 4;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
  }
  iVar3 = 0;
  if (*pcVar7 == '\0') {
    iVar6 = 8;
    if (8 < param_3) {
      iVar3 = param_3 + -8;
      pcVar8 = pcVar4 + 0x8d;
      pcVar9 = pcVar7 + 0xb1;
      iVar5 = iVar3;
      do {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
        iVar5 = iVar5 + -1;
        iVar6 = param_3;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(pcVar4 + iVar3 * 4 + 0x8d) = param_4;
    iVar3 = iVar3 + 1;
    iVar5 = iVar6 + 1;
    if (iVar5 < *(int *)(pcVar7 + 1) + 1) {
      pcVar8 = pcVar4 + iVar3 * 4 + 0x8d;
      pcVar9 = pcVar7 + iVar6 * 4 + 0x91;
      do {
        uVar1 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        *(undefined4 *)pcVar8 = uVar1;
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 1;
        pcVar8 = pcVar8 + 4;
      } while (iVar5 < *(int *)(pcVar7 + 1) + 1);
    }
    param_6[2] = 2;
    *param_6 = *(undefined4 *)(pcVar4 + 5);
    iVar6 = iVar3 + -1;
    if (0 < iVar6) {
      pcVar8 = pcVar4 + 9;
      pcVar9 = pcVar4 + 5;
      for (; iVar6 != 0; iVar6 = iVar6 + -1) {
        *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
        pcVar8 = pcVar8 + 4;
        pcVar9 = pcVar9 + 4;
      }
    }
  }
  else {
    iVar6 = 8;
    if (8 < param_3) {
      iVar3 = param_3 + -8;
      pcVar8 = pcVar4 + 0x45;
      pcVar9 = pcVar7 + 0x65;
      iVar5 = iVar3;
      do {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
        iVar5 = iVar5 + -1;
        iVar6 = param_3;
      } while (iVar5 != 0);
    }
    *(undefined4 *)(pcVar4 + iVar3 * 4 + 0x45) = *param_2;
    iVar3 = iVar3 + 1;
    if (iVar6 < 0x10) {
      iVar5 = 0x10 - iVar6;
      pcVar8 = pcVar4 + iVar3 * 4 + 0x45;
      pcVar9 = pcVar7 + iVar6 * 4 + 0x45;
      iVar3 = iVar3 + iVar5;
      do {
        *(undefined4 *)pcVar8 = *(undefined4 *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar8 = pcVar8 + 4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pcVar7[1] = '\b';
      pcVar7[2] = '\0';
      pcVar7[3] = '\0';
      pcVar7[4] = '\0';
      *(int *)(pcVar4 + 1) = iVar3;
      return pcVar4;
    }
  }
  pcVar7[1] = '\b';
  pcVar7[2] = '\0';
  pcVar7[3] = '\0';
  pcVar7[4] = '\0';
  *(int *)(pcVar4 + 1) = iVar3;
  return pcVar4;
}


/* END FUNCTION 0x100283c0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045cbe0
 * Name: FUN_0045cbe0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


char * __thiscall
FUN_0045cbe0(void *this,undefined4 param_1,undefined4 *param_2,char *param_3,undefined4 param_4,
            char *param_5,undefined2 *param_6)

{
  undefined4 uVar1;
  undefined2 *puVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  char *pcVar10;
  
  pcVar6 = param_5;
  iVar3 = *(int *)(param_5 + 4);
  if (0x1f < iVar3) {
    pcVar4 = FUN_0045c8f0((int)this);
    puVar2 = param_6;
    pcVar10 = param_3;
    *pcVar4 = *pcVar6;
    if (*pcVar6 != '\0') {
      *(undefined4 *)(pcVar4 + 200) = *(undefined4 *)(pcVar6 + 200);
      if (*(int *)(pcVar6 + 200) != 0) {
        *(char **)(*(int *)(pcVar6 + 200) + 0xcc) = pcVar4;
      }
      *(char **)(pcVar4 + 0xcc) = pcVar6;
      *(char **)(pcVar6 + 200) = pcVar4;
    }
    if ((int)param_3 < 0x10) {
      pcVar10 = pcVar4 + 8;
      pcVar9 = pcVar6 + 0x26;
      iVar3 = 0x11;
      pcVar8 = pcVar10;
      do {
        *(undefined2 *)pcVar8 = *(undefined2 *)pcVar9;
        pcVar9 = pcVar9 + 2;
        pcVar8 = pcVar8 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
      if (*pcVar6 == '\0') {
        pcVar9 = pcVar4 + 0xd0;
        pcVar8 = pcVar6 + 0x110;
        param_5 = (char *)0x11;
        do {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar9 = pcVar9 + 4;
          param_5 = param_5 + -1;
        } while (param_5 != (char *)0x0);
        *(undefined4 *)(param_6 + 2) = 2;
        *param_6 = *(undefined2 *)pcVar10;
        *(undefined2 *)pcVar10 = *(undefined2 *)(pcVar4 + 10);
        *(undefined2 *)(pcVar4 + 10) = *(undefined2 *)(pcVar4 + 0xc);
        *(undefined2 *)(pcVar4 + 0xc) = *(undefined2 *)(pcVar4 + 0xe);
        *(undefined2 *)(pcVar4 + 0xe) = *(undefined2 *)(pcVar4 + 0x10);
        *(undefined2 *)(pcVar4 + 0x10) = *(undefined2 *)(pcVar4 + 0x12);
        *(undefined2 *)(pcVar4 + 0x12) = *(undefined2 *)(pcVar4 + 0x14);
        *(undefined2 *)(pcVar4 + 0x14) = *(undefined2 *)(pcVar4 + 0x16);
        *(undefined2 *)(pcVar4 + 0x16) = *(undefined2 *)(pcVar4 + 0x18);
        *(undefined2 *)(pcVar4 + 0x18) = *(undefined2 *)(pcVar4 + 0x1a);
        *(undefined2 *)(pcVar4 + 0x1a) = *(undefined2 *)(pcVar4 + 0x1c);
        *(undefined2 *)(pcVar4 + 0x1c) = *(undefined2 *)(pcVar4 + 0x1e);
        *(undefined2 *)(pcVar4 + 0x1e) = *(undefined2 *)(pcVar4 + 0x20);
        *(undefined2 *)(pcVar4 + 0x20) = *(undefined2 *)(pcVar4 + 0x22);
        *(undefined2 *)(pcVar4 + 0x22) = *(undefined2 *)(pcVar4 + 0x24);
        *(undefined2 *)(pcVar4 + 0x24) = *(undefined2 *)(pcVar4 + 0x26);
        *(undefined2 *)(pcVar4 + 0x26) = *(undefined2 *)(pcVar4 + 0x28);
        param_5 = (char *)0x0;
      }
      else {
        pcVar9 = pcVar4 + 0x48;
        pcVar10 = pcVar6 + 0x84;
        iVar3 = 0x11;
        do {
          *(undefined4 *)pcVar9 = *(undefined4 *)pcVar10;
          pcVar10 = pcVar10 + 4;
          pcVar9 = pcVar9 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
      }
      pcVar6[4] = '\x0f';
      pcVar6[5] = '\0';
      pcVar6[6] = '\0';
      pcVar6[7] = '\0';
      FUN_0045b930((ushort)param_1,(int)pcVar6,(uint *)&param_3);
      FUN_0045cbe0(this,param_1,param_2,param_3,param_4,pcVar6,puVar2);
      pcVar4[4] = '\x11';
      pcVar4[5] = '\0';
      pcVar4[6] = '\0';
      pcVar4[7] = '\0';
      return pcVar4;
    }
    pcVar9 = (char *)0x0;
    pcVar8 = (char *)0x10;
    if (0x10 < (int)param_3) {
      param_5 = pcVar6 + 0x28;
      pcVar9 = param_3 + -0x10;
      pcVar7 = pcVar4 + 8;
      pcVar5 = pcVar9;
      do {
        *(undefined2 *)pcVar7 = *(undefined2 *)param_5;
        param_5 = param_5 + 2;
        pcVar7 = pcVar7 + 2;
        pcVar5 = pcVar5 + -1;
        pcVar8 = param_3;
      } while (pcVar5 != (char *)0x0);
    }
    *(ushort *)(pcVar4 + (int)pcVar9 * 2 + 8) = (ushort)param_1;
    if ((int)pcVar8 < 0x20) {
      pcVar9 = pcVar4 + (int)(pcVar9 + 1) * 2 + 8;
      pcVar7 = pcVar6 + (int)pcVar8 * 2 + 8;
      iVar3 = 0x20 - (int)pcVar8;
      do {
        *(undefined2 *)pcVar9 = *(undefined2 *)pcVar7;
        pcVar7 = pcVar7 + 2;
        pcVar9 = pcVar9 + 2;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
    pcVar9 = (char *)0x0;
    if (*pcVar6 == '\0') {
      pcVar8 = (char *)0x10;
      if (0x10 < (int)param_3) {
        pcVar9 = param_3 + -0x10;
        pcVar7 = pcVar4 + 0xd0;
        pcVar5 = pcVar9;
        param_3 = pcVar6 + 0x114;
        do {
          *(undefined4 *)pcVar7 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pcVar7 = pcVar7 + 4;
          pcVar5 = pcVar5 + -1;
          pcVar8 = pcVar10;
        } while (pcVar5 != (char *)0x0);
      }
      *(undefined4 *)(pcVar4 + (int)pcVar9 * 4 + 0xd0) = param_4;
      pcVar9 = pcVar9 + 1;
      pcVar10 = pcVar8 + 1;
      if ((int)pcVar10 < *(int *)(pcVar6 + 4) + 1) {
        pcVar7 = pcVar4 + (int)pcVar9 * 4 + 0xd0;
        pcVar8 = pcVar6 + (int)pcVar8 * 4 + 0xd4;
        do {
          uVar1 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          *(undefined4 *)pcVar7 = uVar1;
          pcVar10 = pcVar10 + 1;
          pcVar9 = pcVar9 + 1;
          pcVar7 = pcVar7 + 4;
        } while ((int)pcVar10 < *(int *)(pcVar6 + 4) + 1);
      }
      *(undefined4 *)(param_6 + 2) = 2;
      *param_6 = *(undefined2 *)(pcVar4 + 8);
      pcVar10 = pcVar9 + -1;
      if (0 < (int)pcVar10) {
        pcVar8 = pcVar4 + 10;
        pcVar7 = pcVar4 + 8;
        for (; pcVar10 != (char *)0x0; pcVar10 = pcVar10 + -1) {
          *(undefined2 *)pcVar7 = *(undefined2 *)pcVar8;
          pcVar8 = pcVar8 + 2;
          pcVar7 = pcVar7 + 2;
        }
      }
    }
    else {
      pcVar8 = (char *)0x10;
      if (0x10 < (int)param_3) {
        pcVar9 = param_3 + -0x10;
        pcVar7 = pcVar4 + 0x48;
        pcVar5 = pcVar9;
        param_3 = pcVar6 + 0x88;
        do {
          *(undefined4 *)pcVar7 = *(undefined4 *)param_3;
          param_3 = param_3 + 4;
          pcVar7 = pcVar7 + 4;
          pcVar5 = pcVar5 + -1;
          pcVar8 = pcVar10;
        } while (pcVar5 != (char *)0x0);
      }
      *(undefined4 *)(pcVar4 + (int)pcVar9 * 4 + 0x48) = *param_2;
      pcVar9 = pcVar9 + 1;
      if ((int)pcVar8 < 0x20) {
        iVar3 = 0x20 - (int)pcVar8;
        pcVar10 = pcVar4 + (int)pcVar9 * 4 + 0x48;
        pcVar8 = pcVar6 + (int)pcVar8 * 4 + 0x48;
        pcVar9 = pcVar9 + iVar3;
        do {
          *(undefined4 *)pcVar10 = *(undefined4 *)pcVar8;
          pcVar8 = pcVar8 + 4;
          pcVar10 = pcVar10 + 4;
          iVar3 = iVar3 + -1;
        } while (iVar3 != 0);
        pcVar6[4] = '\x10';
        pcVar6[5] = '\0';
        pcVar6[6] = '\0';
        pcVar6[7] = '\0';
        *(char **)(pcVar4 + 4) = pcVar9;
        return pcVar4;
      }
    }
    pcVar6[4] = '\x10';
    pcVar6[5] = '\0';
    pcVar6[6] = '\0';
    pcVar6[7] = '\0';
    *(char **)(pcVar4 + 4) = pcVar9;
    return pcVar4;
  }
  if ((int)param_3 < iVar3) {
    pcVar6 = param_5 + iVar3 * 2 + 8;
    iVar3 = iVar3 - (int)param_3;
    do {
      *(undefined2 *)pcVar6 = *(undefined2 *)(pcVar6 + -2);
      pcVar6 = pcVar6 + -2;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  iVar3 = *(int *)(param_5 + 4);
  if (*param_5 == '\0') {
    iVar3 = iVar3 + 1;
    if ((int)(param_3 + 1) < iVar3) {
      pcVar6 = param_5 + iVar3 * 4 + 0xd0;
      iVar3 = iVar3 - (int)(param_3 + 1);
      do {
        *(undefined4 *)pcVar6 = *(undefined4 *)(pcVar6 + -4);
        pcVar6 = pcVar6 + -4;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  else if ((int)param_3 < iVar3) {
    pcVar6 = param_5 + iVar3 * 4 + 0x48;
    iVar3 = iVar3 - (int)param_3;
    do {
      *(undefined4 *)pcVar6 = *(undefined4 *)(pcVar6 + -4);
      pcVar6 = pcVar6 + -4;
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(ushort *)(param_5 + (int)param_3 * 2 + 8) = (ushort)param_1;
  if (*param_5 == '\0') {
    *(undefined4 *)(param_5 + (int)param_3 * 4 + 0xd4) = param_4;
    *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
    return (char *)0x0;
  }
  *(undefined4 *)(param_5 + (int)param_3 * 4 + 0x48) = *param_2;
  *(int *)(param_5 + 4) = *(int *)(param_5 + 4) + 1;
  return (char *)0x0;
}


/* END FUNCTION 0x0045cbe0 */

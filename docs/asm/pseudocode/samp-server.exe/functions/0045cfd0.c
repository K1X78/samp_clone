/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045cfd0
 * Name: FUN_0045cfd0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint __thiscall
FUN_0045cfd0(void *this,int param_1,char *param_2,undefined2 param_3,undefined2 *param_4)

{
  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined2 uVar6;
  char *pcVar7;
  char *pcVar8;
  
  pcVar1 = param_2;
  if ((0 < param_1) && (iVar4 = *(int *)(param_2 + param_1 * 4 + 0xcc), 0x10 < *(int *)(iVar4 + 4)))
  {
    pcVar1 = *(char **)(param_2 + param_1 * 4 + 0xd0);
    FUN_0045bcf0(pcVar1);
    if (*pcVar1 == '\0') {
      *(undefined4 *)(pcVar1 + 0xd0) = *(undefined4 *)(iVar4 + 0xd0 + *(int *)(iVar4 + 4) * 4);
      *(undefined2 *)(pcVar1 + 8) = *(undefined2 *)(param_2 + param_1 * 2 + 6);
    }
    else {
      *(undefined2 *)(pcVar1 + 8) = *(undefined2 *)(iVar4 + 6 + *(int *)(iVar4 + 4) * 2);
      *(undefined4 *)(pcVar1 + 0x48) = *(undefined4 *)(iVar4 + 0x44 + *(int *)(iVar4 + 4) * 4);
    }
    *(undefined2 *)(param_2 + param_1 * 2 + 6) =
         *(undefined2 *)(iVar4 + 6 + *(int *)(iVar4 + 4) * 2);
    uVar2 = *(int *)(iVar4 + 4) - 1;
    *(uint *)(iVar4 + 4) = uVar2;
    return uVar2 & 0xffffff00;
  }
  if (param_1 < *(int *)(param_2 + 4)) {
    pcVar7 = *(char **)(param_2 + param_1 * 4 + 0xd4);
    if (0x10 < *(int *)(pcVar7 + 4)) {
      pcVar1 = *(char **)(param_2 + param_1 * 4 + 0xd0);
      if (*pcVar1 == '\0') {
        if (*(int *)(param_4 + 2) == 0) {
          *(undefined4 *)(param_4 + 2) = 3;
          *param_4 = *(undefined2 *)(pcVar1 + 8);
        }
        *(undefined2 *)(pcVar1 + *(int *)(pcVar1 + 4) * 2 + 8) = param_3;
        *(undefined4 *)(pcVar1 + *(int *)(pcVar1 + 4) * 4 + 0xd4) = *(undefined4 *)(pcVar7 + 0xd0);
        uVar6 = *(undefined2 *)(pcVar7 + 8);
      }
      else {
        *(undefined2 *)(pcVar1 + *(int *)(pcVar1 + 4) * 2 + 8) = *(undefined2 *)(pcVar7 + 8);
        *(undefined4 *)(pcVar1 + *(int *)(pcVar1 + 4) * 4 + 0x48) = *(undefined4 *)(pcVar7 + 0x48);
        uVar6 = *(undefined2 *)(pcVar7 + 10);
      }
      *(undefined2 *)(param_2 + param_1 * 2 + 8) = uVar6;
      *(int *)(pcVar1 + 4) = *(int *)(pcVar1 + 4) + 1;
      uVar2 = FUN_0045bc70(pcVar7);
      return uVar2 & 0xffffff00;
    }
    if (*(int *)(param_2 + 4) <= param_1) goto LAB_0045d0fd;
    pcVar7 = *(char **)(param_2 + param_1 * 4 + 0xd0);
    pcVar8 = *(char **)(param_2 + param_1 * 4 + 0xd4);
  }
  else {
LAB_0045d0fd:
    pcVar7 = *(char **)(param_2 + param_1 * 4 + 0xcc);
    pcVar8 = *(char **)(param_2 + param_1 * 4 + 0xd0);
  }
  if (*pcVar7 == '\0') {
    *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 4) * 2 + 8) = param_3;
    *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 4) * 4 + 0xd4) = *(undefined4 *)(pcVar8 + 0xd0);
    iVar4 = *(int *)(pcVar7 + 4) + 1;
    *(int *)(pcVar7 + 4) = iVar4;
    iVar5 = 0;
    if (0 < *(int *)(pcVar8 + 4)) {
      _param_3 = pcVar8 + 0xd4;
      pcVar3 = pcVar8 + 8;
      do {
        *(undefined2 *)(pcVar7 + iVar4 * 2 + 8) = *(undefined2 *)pcVar3;
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 4) * 4 + 0xd4) = *(undefined4 *)_param_3;
        iVar4 = *(int *)(pcVar7 + 4) + 1;
        _param_3 = _param_3 + 4;
        *(int *)(pcVar7 + 4) = iVar4;
        iVar5 = iVar5 + 1;
        pcVar3 = pcVar3 + 2;
      } while (iVar5 < *(int *)(pcVar8 + 4));
    }
  }
  else {
    param_2 = (char *)0x0;
    if (0 < *(int *)(pcVar8 + 4)) {
      _param_3 = pcVar8 + 0x48;
      pcVar3 = pcVar8 + 8;
      do {
        *(undefined2 *)(pcVar7 + *(int *)(pcVar7 + 4) * 2 + 8) = *(undefined2 *)pcVar3;
        *(undefined4 *)(pcVar7 + *(int *)(pcVar7 + 4) * 4 + 0x48) = *(undefined4 *)_param_3;
        *(int *)(pcVar7 + 4) = *(int *)(pcVar7 + 4) + 1;
        _param_3 = _param_3 + 4;
        param_2 = param_2 + 1;
        pcVar3 = pcVar3 + 2;
      } while ((int)param_2 < *(int *)(pcVar8 + 4));
    }
  }
  iVar4 = param_1;
  if (*(int *)(pcVar1 + 4) <= param_1) {
    if (param_1 < 1) goto LAB_0045d207;
    iVar4 = param_1 + -1;
  }
  FUN_0045b8a0(iVar4,pcVar1);
LAB_0045d207:
  if ((param_1 == 0) && (*pcVar7 != '\0')) {
    *(undefined4 *)(param_4 + 2) = 3;
    *param_4 = *(undefined2 *)(pcVar7 + 8);
  }
  if (pcVar8 == *(char **)((int)this + 0x14)) {
    *(undefined4 *)((int)this + 0x14) = *(undefined4 *)(pcVar8 + 200);
  }
  if (*pcVar8 != '\0') {
    if (*(int *)(pcVar8 + 0xcc) != 0) {
      *(undefined4 *)(*(int *)(pcVar8 + 0xcc) + 200) = *(undefined4 *)(pcVar8 + 200);
    }
    if (*(int *)(pcVar8 + 200) != 0) {
      *(undefined4 *)(*(int *)(pcVar8 + 200) + 0xcc) = *(undefined4 *)(pcVar8 + 0xcc);
    }
  }
  FUN_0045c910(this,pcVar8);
  pcVar8[0] = '\0';
  pcVar8[1] = '\0';
  pcVar8[2] = '\0';
  pcVar8[3] = '\0';
  return (uint)(*(int *)(pcVar1 + 4) < 0x10);
}


/* END FUNCTION 0x0045cfd0 */

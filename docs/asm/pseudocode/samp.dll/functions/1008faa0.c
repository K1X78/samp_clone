/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008faa0
 * Name: FUN_1008faa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_1008faa0(int param_1)

{
  int iVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  undefined4 uVar4;
  char *pcVar5;
  int local_70;
  int local_6c;
  char *local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  uint local_54;
  tagRECT local_50;
  int local_40;
  float local_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  int local_10;
  float local_c;
  int local_8;
  float local_4;
  
  local_40 = 0;
  local_3c = 0.0;
  local_38 = 0;
  local_34 = 0.0;
  FUN_1009b770(*(undefined4 *)(param_1 + 0x119),0,&local_60);
  FUN_1009b770(*(undefined4 *)(param_1 + 0x122),0,&local_70);
  iVar1 = *(int *)(*(int *)(param_1 + 0x20) + 4);
  local_50.top = *(LONG *)(param_1 + 0x6c);
  local_50.left = local_60 + (*(int *)(param_1 + 0x68) - local_70);
  local_50.bottom = *(LONG *)(param_1 + 0x74);
  local_6c = iVar1;
  local_50.right = local_50.left;
  FUN_10087260(DAT_1018062c,iVar1,&local_50,0xffffffff);
  if (*(int *)(param_1 + 0x70) < local_50.right) {
    OffsetRect(&local_50,*(int *)(param_1 + 0x68) - local_50.left,local_50.bottom - local_50.top);
  }
  DAT_1017f69c = (float)local_50.left;
  DAT_1017f6a0 = (float)local_50.top;
  uVar2 = *(uint *)(param_1 + 0x158);
  local_20 = (float)local_50.left;
  local_18 = (float)local_50.right;
  local_1c = (float)local_50.top;
  local_14 = (float)local_50.bottom;
  local_30 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
  local_2c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
  local_5c = uVar2 >> 0x18;
  *(float *)(iVar1 + 0x5c) = local_30;
  *(float *)(iVar1 + 0x60) = local_2c;
  local_28 = (float)(uVar2 & 0xff) * 0.003921569;
  *(float *)(iVar1 + 100) = local_28;
  local_24 = (float)local_5c * 0.003921569;
  *(float *)(iVar1 + 0x68) = local_24;
  pWVar3 = DAT_1018062c;
  local_68 = (char *)lstrlenW(DAT_1018062c);
  do {
    pcVar5 = local_68;
    FUN_1009b7b0(*(int *)(param_1 + 0x70) - local_50.left,&local_5c,&local_54);
    if ((int)local_5c <= (int)pcVar5) {
      pcVar5 = (char *)local_5c;
    }
    FUN_10087260(pWVar3,local_6c,&local_50,pcVar5);
    if ((_DAT_10180600 & 0x3ff) == 0x12) {
      if (*(char *)(param_1 + 0x118) != '\0') {
        uVar4 = *(undefined4 *)(param_1 + 0x15c);
        goto LAB_1008fc90;
      }
      uVar2 = *(uint *)(**(int **)(param_1 + 0x20) + 0x44);
    }
    else {
      uVar4 = *(undefined4 *)(param_1 + 0x15c);
LAB_1008fc90:
      FUN_100844f0(&local_50,uVar4);
    }
    local_30 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
    local_2c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
    local_64 = uVar2 >> 0x18;
    *(float *)(local_6c + 0x5c) = local_30;
    *(float *)(local_6c + 0x60) = local_2c;
    local_28 = (float)(uVar2 & 0xff) * 0.003921569;
    *(float *)(local_6c + 100) = local_28;
    local_24 = (float)local_64 * 0.003921569;
    *(float *)(local_6c + 0x68) = local_24;
    FUN_1008ce50(pWVar3,local_6c,&local_50,0,pcVar5);
    local_68 = (char *)((int)local_68 - (int)pcVar5);
    pWVar3 = pWVar3 + (int)pcVar5;
    if ((int)local_68 < 1) break;
    OffsetRect(&local_50,*(int *)(param_1 + 0x68) - local_50.left,local_50.bottom - local_50.top);
  } while( true );
  local_50.left = (LONG)local_20;
  local_50.top = (LONG)local_1c;
  local_50.right = (LONG)local_18;
  local_50.bottom = (LONG)local_14;
  local_70 = 0;
  DAT_1017f6ac = 0xffffffff;
  local_68 = (char *)&DAT_1017f6b8;
  if (*DAT_1018062c != L'\0') {
    local_64 = 0;
    pWVar3 = DAT_1018062c;
    do {
      FUN_1009b770((int)pWVar3 - (int)DAT_1018062c >> 1,0,&local_58);
      FUN_1009b770((int)pWVar3 - (int)DAT_1018062c >> 1,1,&local_5c);
      if (*(int *)(param_1 + 0x70) - local_50.left < (int)(local_5c - local_70)) {
        OffsetRect(&local_50,*(int *)(param_1 + 0x68) - local_50.left,local_50.bottom - local_50.top
                  );
        FUN_1009b770((int)pWVar3 - (int)DAT_1018062c >> 1,0,&local_70);
      }
      if (DAT_1017f690 == (int)pWVar3 - (int)DAT_1018062c >> 1) {
        local_3c = (float)local_50.top;
        local_34 = (float)local_50.bottom;
        local_40 = local_50.left + -1 + (local_58 - local_70);
        local_38 = local_40 + 2;
      }
      if (*local_68 == '\x01') {
        uVar2 = *(uint *)(param_1 + 0x164);
        local_20 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        local_1c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        local_54 = uVar2 >> 0x18;
        local_18 = (float)(uVar2 & 0xff) * 0.003921569;
        *(float *)(local_6c + 0x5c) = local_20;
        *(float *)(local_6c + 0x60) = local_1c;
        *(float *)(local_6c + 100) = local_18;
        local_14 = (float)local_54 * 0.003921569;
        *(float *)(local_6c + 0x68) = local_14;
        uVar4 = *(undefined4 *)(param_1 + 0x168);
LAB_1008ffd5:
        local_8 = (local_5c - local_70) + local_50.left;
        local_10 = (local_58 - local_70) + local_50.left;
        local_4 = (float)local_50.bottom;
        local_c = (float)local_50.top;
        FUN_100844f0(&local_10,uVar4);
        FUN_1008ce50(pWVar3,local_6c,&local_10,0,1);
        if (DAT_1017f6ac == 0xffffffff) {
          DAT_1017f6ac = local_64;
        }
      }
      else if (*local_68 == '\x03') {
        uVar2 = *(uint *)(param_1 + 0x16c);
        local_30 = (float)(uVar2 >> 0x10 & 0xff) * 0.003921569;
        local_2c = (float)(uVar2 >> 8 & 0xff) * 0.003921569;
        local_54 = uVar2 >> 0x18;
        local_28 = (float)(uVar2 & 0xff) * 0.003921569;
        *(float *)(local_6c + 0x5c) = local_30;
        *(float *)(local_6c + 0x60) = local_2c;
        *(float *)(local_6c + 100) = local_28;
        local_24 = (float)local_54 * 0.003921569;
        *(float *)(local_6c + 0x68) = local_24;
        uVar4 = *(undefined4 *)(param_1 + 0x170);
        goto LAB_1008ffd5;
      }
      pWVar3 = pWVar3 + 1;
      local_68 = local_68 + 1;
      local_64 = local_64 + 1;
    } while (*pWVar3 != L'\0');
  }
  if (*(char *)(param_1 + 0x118) != '\0') {
    iVar1 = lstrlenW(DAT_1018062c);
    if (DAT_1017f690 == iVar1) {
      FUN_1009b770(DAT_1017f690,0,&local_60);
      local_3c = (float)local_50.top;
      local_34 = (float)local_50.bottom;
      local_40 = local_50.left + -1 + (local_60 - local_70);
      local_38 = local_40 + 2;
    }
    FUN_100844f0(&local_40,*(undefined4 *)(param_1 + 0x160));
  }
  return;
}


/* END FUNCTION 0x1008faa0 */

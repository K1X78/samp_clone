/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008f480
 * Name: FUN_1008f480
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_1008f480(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int yTop;
  uint uVar5;
  short *psVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 *puVar9;
  undefined4 uVar10;
  int local_54;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined1 local_34 [4];
  tagRECT local_30;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  float local_c;
  float local_8;
  float local_4;
  
  cVar1 = (char)param_4;
  uVar2 = (-(uint)((char)param_4 != '\0') & 0xfffffffa) + 10;
  FUN_1009b770(*(undefined4 *)(param_1 + 0x119),0,local_38);
  FUN_1009b770(*(undefined4 *)(param_1 + 0x122),0,local_34);
  if (cVar1 == '\0') {
    local_48 = *(uint *)(param_1 + 0x148);
    local_3c = *(int *)(param_1 + 0x14c);
    uVar5 = *(uint *)(param_1 + 0x150);
    local_44 = *(undefined4 *)(param_1 + 0x154);
  }
  else {
    local_48 = *(uint *)(param_1 + 0x138);
    local_3c = *(int *)(param_1 + 0x13c);
    uVar5 = *(uint *)(param_1 + 0x140);
    local_44 = *(undefined4 *)(param_1 + 0x144);
  }
  if (((short)_DAT_10180600 == 0x404) && (iVar3 = FUN_10085500(0), iVar3 == 0)) {
    local_4c = 0;
  }
  else {
    uVar10 = DAT_1017f690;
    if ((_DAT_10180600 & 0x3ff) == 0x11) {
      uVar10 = DAT_1017f6ac;
    }
    FUN_1009b770(uVar10,0,&local_4c);
  }
  iVar3 = 0;
  local_54 = 0;
  if (((DAT_1017f6b1 == '\0') || ((char)param_4 != '\0')) &&
     ((DAT_101803ba != '\0' || ((char)param_4 == '\0')))) {
    SetRect(&local_30,0,0,0,0);
    puVar9 = DAT_10181a40;
    if ((char)param_4 != '\0') {
      puVar9 = &DAT_101803c0;
    }
    FUN_10087260(puVar9,*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),&local_30,0xffffffff);
    iVar3 = local_30.right - local_30.left;
    iVar4 = local_30.bottom - local_30.top;
    local_54 = iVar4;
  }
  else {
    local_40 = 0;
    if (uVar2 != 0) {
      psVar6 = (short *)&DAT_10180640;
      do {
        if (*psVar6 == 0) break;
        SetRect(&local_30,0,0,0,0);
        FUN_10087260(psVar6,*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),&local_30,0xffffffff);
        if (iVar3 <= local_30.right - local_30.left) {
          iVar3 = local_30.right - local_30.left;
        }
        if (local_54 <= local_30.bottom - local_30.top) {
          local_54 = local_30.bottom - local_30.top;
        }
        local_40 = local_40 + 1;
        psVar6 = psVar6 + 0x100;
      } while (local_40 < uVar2);
    }
    iVar4 = local_54 * uVar2;
  }
  yTop = (*(int *)(param_1 + 0x74) - *(int *)(param_1 + 0x6c)) + DAT_1017f6a0;
  SetRect(&local_30,DAT_1017f69c + local_4c,yTop,iVar3 + DAT_1017f69c + local_4c,iVar4 + yTop);
  iVar3 = *(int *)(param_1 + 0x18);
  if (*(int *)(iVar3 + 0x11e) < local_30.right) {
    local_30.left = local_30.left + (*(int *)(iVar3 + 0x11e) - local_30.right);
    local_30.right = *(int *)(iVar3 + 0x11e);
  }
  if ((char)param_4 == '\0') {
    DAT_10181a6c = local_30.left;
    DAT_10181a70 = local_30.top;
    _DAT_10181a78 = local_30.bottom;
    _DAT_10181a74 = local_30.right;
  }
  FUN_100844f0(&local_30,local_3c);
  if (((DAT_1017f6b1 == '\0') || ((char)param_4 != '\0')) &&
     ((DAT_101803ba != '\0' || ((char)param_4 == '\0')))) {
    local_10 = (float)(local_48 >> 0x10 & 0xff) * 0.003921569;
    uVar2 = local_48 >> 0x18;
    local_c = (float)(local_48 >> 8 & 0xff) * 0.003921569;
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    local_8 = (float)(local_48 & 0xff) * 0.003921569;
    *(float *)(iVar3 + 0x5c) = local_10;
    *(float *)(iVar3 + 0x60) = local_c;
    *(float *)(iVar3 + 100) = local_8;
    local_4 = (float)uVar2 * 0.003921569;
    *(float *)(iVar3 + 0x68) = local_4;
    uVar10 = *(undefined4 *)(*(int *)(param_1 + 0x20) + 4);
    param_4 = uVar2;
    if ((char)param_4 != '\0') {
      FUN_1008ce50(&DAT_101803c0,uVar10,&local_30,0,0xffffffff);
      return;
    }
    FUN_1008ce50(DAT_10181a40,uVar10,&local_30,0,0xffffffff);
    FUN_1009b770(DAT_10181a53,0,&local_3c);
    FUN_1009b770(DAT_10181a57 + DAT_10181a53,0,&param_4);
    local_30.right = param_4 + local_30.left;
    local_30.left = local_30.left + local_3c;
    FUN_100844f0(&local_30,local_44);
    local_10 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
    iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
    local_c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
    local_40 = uVar5 >> 0x18;
    *(float *)(iVar3 + 0x5c) = local_10;
    *(float *)(iVar3 + 0x60) = local_c;
    local_8 = (float)(uVar5 & 0xff) * 0.003921569;
    *(float *)(iVar3 + 100) = local_8;
    local_4 = (float)local_40 * 0.003921569;
    *(float *)(iVar3 + 0x68) = local_4;
    FUN_1008ce50(DAT_10181a40 + DAT_10181a53,*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),&local_30
                 ,0,DAT_10181a57);
  }
  else {
    uVar8 = 0;
    if (uVar2 != 0) {
      puVar7 = &DAT_10180640;
      do {
        local_30.bottom = local_30.top + local_54;
        if (DAT_10181a5f == uVar8) {
          FUN_100844f0(&local_30,local_44);
          local_20 = (float)(uVar5 >> 0x10 & 0xff) * 0.003921569;
          local_1c = (float)(uVar5 >> 8 & 0xff) * 0.003921569;
          iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
          param_4 = uVar5 >> 0x18;
          local_18 = (float)(uVar5 & 0xff) * 0.003921569;
          *(float *)(iVar3 + 0x5c) = local_20;
          *(float *)(iVar3 + 0x60) = local_1c;
          *(float *)(iVar3 + 100) = local_18;
          local_14 = (float)param_4 * 0.003921569;
          *(float *)(iVar3 + 0x68) = local_14;
        }
        else {
          local_10 = (float)(local_48 >> 0x10 & 0xff) * 0.003921569;
          local_c = (float)(local_48 >> 8 & 0xff) * 0.003921569;
          param_4 = local_48 >> 0x18;
          iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 4);
          local_8 = (float)(local_48 & 0xff) * 0.003921569;
          *(float *)(iVar3 + 0x5c) = local_10;
          *(float *)(iVar3 + 0x60) = local_c;
          *(float *)(iVar3 + 100) = local_8;
          local_4 = (float)param_4 * 0.003921569;
          *(float *)(iVar3 + 0x68) = local_4;
        }
        FUN_1008ce50(puVar7,*(undefined4 *)(*(int *)(param_1 + 0x20) + 4),&local_30,0,0xffffffff);
        local_30.top = local_30.top + local_54;
        uVar8 = uVar8 + 1;
        puVar7 = puVar7 + 0x80;
      } while (uVar8 < uVar2);
      return;
    }
  }
  return;
}


/* END FUNCTION 0x1008f480 */

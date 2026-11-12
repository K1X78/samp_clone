/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10086e20
 * Name: FUN_10086e20
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10086e20(int param_1,undefined4 *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_EBX;
  uint uVar4;
  float unaff_ESI;
  float unaff_EDI;
  uint uVar5;
  uint uVar6;
  float fStack_94;
  float fStack_90;
  undefined4 uStack_8c;
  float local_88;
  float local_84;
  int local_80;
  undefined1 auStack_78 [8];
  tagRECT local_70;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined1 local_50 [76];
  
  if ((float)param_2[0x10] == 0.0) {
    return 0;
  }
  local_60 = param_2[3];
  local_5c = param_2[4];
  local_58 = param_2[5];
  local_54 = param_2[6];
  local_70.left = *param_3;
  local_70.top = param_3[1];
  local_70.right = param_3[2];
  local_70.bottom = param_3[3];
  OffsetRect(&local_70,*(int *)(param_1 + 0x116),*(int *)(param_1 + 0x11a));
  if (*(char *)(param_1 + 0x14) != '\0') {
    OffsetRect(&local_70,0,*(int *)(param_1 + 0x126));
  }
  local_80 = FUN_10086b70(*param_2);
  uVar4 = 0;
  if (local_80 == 0) {
    return 0x80004005;
  }
  local_84 = (float)(local_70.right - local_70.left) / (float)(local_58 - local_60);
  local_88 = (float)(local_70.bottom - local_70.top) / (float)(local_54 - local_5c);
  D3DXMatrixScaling(local_50,local_84,local_88,0x3f800000);
  piVar1 = *(int **)(*(int *)(param_1 + 0x13a) + 4);
  (**(code **)(*piVar1 + 0x14))(piVar1,&local_60);
  uStack_8c = 0;
  fStack_94 = (float)(int)local_88 / unaff_ESI;
  fStack_90 = (float)(int)local_84 / unaff_EDI;
  if ((float)param_2[0xd] < 1.0) {
    if ((float)param_2[0xd] < 0.0 == ((float)param_2[0xd] == 0.0)) {
      uVar5 = FUN_100f9324();
    }
    else {
      uVar5 = 0;
    }
  }
  else {
    uVar5 = 0xff;
  }
  if ((float)param_2[0xe] < 1.0) {
    if ((float)param_2[0xe] < 0.0 == ((float)param_2[0xe] == 0.0)) {
      uVar6 = FUN_100f9324();
    }
    else {
      uVar6 = 0;
    }
  }
  else {
    uVar6 = 0xff;
  }
  if ((float)param_2[0xf] < 1.0) {
    if ((float)param_2[0xf] < 0.0 == ((float)param_2[0xf] == 0.0)) {
      uVar4 = FUN_100f9324();
    }
  }
  else {
    uVar4 = 0xff;
  }
  if ((float)param_2[0x10] < 1.0) {
    if ((float)param_2[0x10] < 0.0 == ((float)param_2[0x10] == 0.0)) {
      iVar2 = FUN_100f9324();
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0xff;
  }
  piVar1 = *(int **)(*(int *)(param_1 + 0x13a) + 4);
  uVar3 = (**(code **)(*piVar1 + 0x24))
                    (piVar1,*(undefined4 *)(unaff_EBX + 0x104),auStack_78,0,&fStack_94,
                     ((iVar2 << 8 | uVar5) << 8 | uVar6) << 8 | uVar4);
  return uVar3;
}


/* END FUNCTION 0x10086e20 */

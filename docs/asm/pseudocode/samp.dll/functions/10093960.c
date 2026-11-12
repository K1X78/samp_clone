/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10093960
 * Name: FUN_10093960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10093960(int *param_1,HWND param_2,uint param_3,undefined4 param_4,undefined4 param_5)

{
  byte *pbVar1;
  POINT pt;
  POINT pt_00;
  POINT pt_01;
  uint uVar2;
  int iVar3;
  BOOL BVar4;
  int iVar5;
  
  if (0x205 < param_3) {
    switch(param_3) {
    case 0x206:
    case 0x207:
    case 0x209:
      goto switchD_10093b07_caseD_206;
    case 0x208:
      goto switchD_10093b07_caseD_208;
    case 0x20a:
      *(int *)((int)param_1 + 0x9b) = (int)(short)((uint)param_4 >> 0x10) / 0x78;
      return 0;
    default:
      return 0;
    }
  }
  if (param_3 == 0x205) goto switchD_10093b07_caseD_208;
  if (param_3 < 0x202) {
    if (param_3 != 0x201) {
      if (param_3 == 0x100) {
        iVar3 = (**(code **)(*param_1 + 0x18))(param_4);
        if (iVar3 == 0xff) {
          return 0;
        }
        if ((*(byte *)(iVar3 + 0x84 + (int)param_1) & 1) != 0) {
          return 0;
        }
        *(undefined1 *)(iVar3 + 0x84 + (int)param_1) = 0x81;
        return 0;
      }
      if (param_3 != 0x101) {
        return 0;
      }
      uVar2 = (**(code **)(*param_1 + 0x18))(param_4);
      if (uVar2 == 0xff) {
        return 0;
      }
      if (7 < uVar2) {
        return 0;
      }
      pbVar1 = (byte *)(uVar2 + 0x84 + (int)param_1);
      *pbVar1 = *pbVar1 & 0xfe;
      return 0;
    }
switchD_10093b07_caseD_206:
    iVar5 = (int)(short)param_5;
    iVar3 = (int)(short)((uint)param_5 >> 0x10);
    if (((param_3 == 0x201) || (param_3 == 0x203)) &&
       (pt.y = iVar3, pt.x = iVar5, BVar4 = PtInRect((RECT *)((int)param_1 + 0xe3),pt), BVar4 != 0))
    {
      *(undefined1 *)(param_1 + 0x25) = 1;
      *(uint *)((int)param_1 + 0x97) = *(uint *)((int)param_1 + 0x97) | 1;
    }
    if (((param_3 == 0x207) || (param_3 == 0x209)) &&
       (pt_00.y = iVar3, pt_00.x = iVar5, BVar4 = PtInRect((RECT *)((int)param_1 + 0xe3),pt_00),
       BVar4 != 0)) {
      *(undefined1 *)((int)param_1 + 0x95) = 1;
      *(uint *)((int)param_1 + 0x97) = *(uint *)((int)param_1 + 0x97) | 2;
    }
    if (((param_3 == 0x204) || (param_3 == 0x206)) &&
       (pt_01.y = iVar3, pt_01.x = iVar5, BVar4 = PtInRect((RECT *)((int)param_1 + 0xe3),pt_01),
       BVar4 != 0)) {
      *(undefined1 *)((int)param_1 + 0x96) = 1;
      *(uint *)((int)param_1 + 0x97) = *(uint *)((int)param_1 + 0x97) | 4;
    }
    SetCapture(param_2);
    GetCursorPos((LPPOINT)(param_1 + 0x23));
    return 1;
  }
  if (param_3 != 0x202) {
    if (param_3 < 0x203) {
      return 0;
    }
    if (0x204 < param_3) {
      return 0;
    }
    goto switchD_10093b07_caseD_206;
  }
LAB_10093b16:
  *(undefined1 *)(param_1 + 0x25) = 0;
  uVar2 = *(uint *)((int)param_1 + 0x97) & 0xfffffffe;
  goto LAB_10093b57;
switchD_10093b07_caseD_208:
  if (param_3 == 0x202) goto LAB_10093b16;
  if (param_3 == 0x208) {
    *(undefined1 *)((int)param_1 + 0x95) = 0;
    uVar2 = *(uint *)((int)param_1 + 0x97) & 0xfffffffd;
  }
  else {
    if (param_3 != 0x205) goto LAB_10093b5d;
    *(undefined1 *)((int)param_1 + 0x96) = 0;
    uVar2 = *(uint *)((int)param_1 + 0x97) & 0xfffffffb;
  }
LAB_10093b57:
  *(uint *)((int)param_1 + 0x97) = uVar2;
LAB_10093b5d:
  if ((((char)param_1[0x25] == '\0') && (*(char *)((int)param_1 + 0x96) == '\0')) &&
     (*(char *)((int)param_1 + 0x95) == '\0')) {
    ReleaseCapture();
    return 0;
  }
  return 0;
}


/* END FUNCTION 0x10093960 */

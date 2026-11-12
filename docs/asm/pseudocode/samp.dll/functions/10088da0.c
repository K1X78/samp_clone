/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088da0
 * Name: FUN_10088da0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_10088da0(int param_1,int param_2,uint param_3)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  ushort *puVar6;
  ushort uVar7;
  
  if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 4) == '\0')) {
    return 0;
  }
  if (param_2 == 0x101) {
    if (param_3 != 0xd) {
      return 0;
    }
    FUN_10084460(0x601,1,param_1);
    return 1;
  }
  if (param_2 != 0x102) {
    return 0;
  }
  uVar7 = (ushort)param_3;
  switch(param_3 & 0xffff) {
  case 1:
    if (*(int *)(param_1 + 0x11e) == *(int *)(param_1 + 0x119)) {
      *(undefined4 *)(param_1 + 0x11e) = 0;
      iVar3 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
      FUN_10084ef0(iVar3);
      return 1;
    }
    break;
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x17:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
    break;
  case 3:
  case 0x18:
    FUN_10085260();
    if (uVar7 == 0x18) {
      FUN_100850e0();
      goto LAB_10088e67;
    }
    break;
  case 8:
    iVar3 = *(int *)(param_1 + 0x119);
    if (iVar3 == *(int *)(param_1 + 0x11e)) {
      if (iVar3 < 1) goto LAB_10088e38;
      FUN_10084ef0(iVar3 + -1);
      *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
      FUN_1009b5d0(*(undefined4 *)(param_1 + 0x119));
    }
    else {
      FUN_100850e0();
    }
    FUN_10084460(0x602,1,param_1);
LAB_10088e38:
    FUN_10085cf0();
    return 1;
  case 0x16:
    FUN_10085320();
LAB_10088e67:
    FUN_10084460(0x602,1,param_1);
    return 1;
  default:
    if (*(int *)(param_1 + 0x119) != *(int *)(param_1 + 0x11e)) {
      FUN_100850e0();
    }
    pcVar4 = (char *)FUN_100850d0();
    pcVar1 = pcVar4 + 1;
    do {
      cVar2 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar2 != '\0');
    if (0x7f < (uint)((int)pcVar4 - (int)pcVar1)) {
      return 1;
    }
    if (*(char *)(param_1 + 0x11d) == '\0') {
      iVar3 = *(int *)(param_1 + 0x119);
      iVar5 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
      if (iVar5 <= iVar3) goto LAB_10088f41;
      if (uVar7 < 0x100) {
        cVar2 = FUN_1009bbf0(iVar3,param_3);
        goto LAB_10088f5f;
      }
      puVar6 = (ushort *)FUN_1009b470(iVar3);
      *puVar6 = uVar7;
      FUN_10084ef0(*(int *)(param_1 + 0x119) + 1);
      *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
    }
    else {
LAB_10088f41:
      if (uVar7 < 0x100) {
        cVar2 = FUN_1009b520(*(undefined4 *)(param_1 + 0x119),param_3);
      }
      else {
        cVar2 = FUN_1009b490(*(undefined4 *)(param_1 + 0x119),param_3);
      }
LAB_10088f5f:
      if (cVar2 != '\0') {
        FUN_10084ef0(*(int *)(param_1 + 0x119) + 1);
        *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
      }
    }
    FUN_10085cf0();
    FUN_10084460(0x602,1,param_1);
  }
  return 1;
}


/* END FUNCTION 0x10088da0 */

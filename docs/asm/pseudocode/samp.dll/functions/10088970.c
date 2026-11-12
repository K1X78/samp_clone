/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10088970
 * Name: FUN_10088970
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool __thiscall FUN_10088970(int param_1,int param_2,int param_3)

{
  int *piVar1;
  char cVar2;
  SHORT SVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  if ((*(char *)(param_1 + 0x3c) == '\0') || (*(char *)(param_1 + 4) == '\0')) {
    return false;
  }
  bVar6 = false;
  if (param_2 == 0x100) {
    switch(param_3) {
    default:
      bVar6 = param_3 != 0x1b;
    case 9:
      break;
    case 0x23:
      iVar5 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
      FUN_10084ef0(iVar5);
      SVar3 = GetKeyState(0x10);
      if (-1 < SVar3) {
        *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
      }
      FUN_10085cf0();
      return true;
    case 0x24:
      FUN_10084ef0(0);
      SVar3 = GetKeyState(0x10);
      if (-1 < SVar3) {
        *(undefined4 *)(param_1 + 0x11e) = *(undefined4 *)(param_1 + 0x119);
      }
      FUN_10085cf0();
      return true;
    case 0x25:
      SVar3 = GetKeyState(0x11);
      piVar1 = (int *)(param_1 + 0x119);
      if (SVar3 < 0) {
        FUN_1009b840(*piVar1,piVar1);
        iVar5 = *piVar1;
      }
      else {
        if (*piVar1 < 1) goto LAB_10088af1;
        iVar5 = *piVar1 + -1;
      }
      FUN_10084ef0(iVar5);
LAB_10088af1:
      SVar3 = GetKeyState(0x10);
      if (-1 < SVar3) {
        *(int *)(param_1 + 0x11e) = *piVar1;
      }
      FUN_10085cf0();
      return true;
    case 0x26:
    case 0x28:
      return true;
    case 0x27:
      SVar3 = GetKeyState(0x11);
      piVar1 = (int *)(param_1 + 0x119);
      if (SVar3 < 0) {
        FUN_1009b8d0(*piVar1,piVar1);
        iVar5 = *piVar1;
      }
      else {
        iVar5 = *piVar1;
        iVar4 = lstrlenW(*(LPCWSTR *)(param_1 + 0x4d));
        if (iVar4 <= iVar5) goto LAB_10088b53;
        iVar5 = iVar5 + 1;
      }
      FUN_10084ef0(iVar5);
LAB_10088b53:
      SVar3 = GetKeyState(0x10);
      if (-1 < SVar3) {
        *(int *)(param_1 + 0x11e) = *piVar1;
      }
      FUN_10085cf0();
      return true;
    case 0x2d:
      SVar3 = GetKeyState(0x11);
      if (SVar3 < 0) {
        FUN_10085260();
        return false;
      }
      SVar3 = GetKeyState(0x10);
      if (-1 < SVar3) {
        *(bool *)(param_1 + 0x11d) = *(char *)(param_1 + 0x11d) == '\0';
        return false;
      }
      FUN_10085320();
      return false;
    case 0x2e:
      if (*(int *)(param_1 + 0x119) == *(int *)(param_1 + 0x11e)) {
        cVar2 = FUN_1009b5d0(*(int *)(param_1 + 0x119));
        if (cVar2 == '\0') goto LAB_10088aac;
      }
      else {
        FUN_100850e0();
      }
      FUN_10084460(0x602,1,param_1);
LAB_10088aac:
      FUN_10085cf0();
      return true;
    }
  }
  return bVar6;
}


/* END FUNCTION 0x10088970 */

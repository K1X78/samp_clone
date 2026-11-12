/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10089900
 * Name: FUN_10089900
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall
FUN_10089900(int param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  
  if (*(char *)(param_1 + 0x13) == '\0') {
    return 0;
  }
  cVar1 = FUN_1007d500();
  if ((cVar1 != '\0') && (((param_3 == 0x201 || (param_3 == 0x203)) || (param_3 == 0x100)))) {
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if (*(char *)(param_1 + 0x15) != '\0') {
    return 0;
  }
  if (((DAT_10180610 != (int *)0x0) && (DAT_10180610[6] == param_1)) &&
     ((cVar1 = (**(code **)(*DAT_10180610 + 0x3c))(), cVar1 != '\0' &&
      (cVar1 = (**(code **)(*DAT_10180610 + 0x10))(param_3,param_4,param_5), cVar1 != '\0')))) {
    return 1;
  }
  if (param_3 < 0x102) {
    if (param_3 < 0x100) {
      if ((param_3 == 3) || (param_3 == 5)) {
        FUN_10086c20(0xffffffff,0xffffffff);
        return 0;
      }
      if (param_3 != 0x1c) {
        return 0;
      }
      if (DAT_10180610 == (int *)0x0) {
        return 0;
      }
      if (DAT_10180610[6] != param_1) {
        return 0;
      }
      cVar1 = (**(code **)(*DAT_10180610 + 0x3c))();
      if (cVar1 == '\0') {
        return 0;
      }
      if (param_4 == 0) {
        (**(code **)(*DAT_10180610 + 0x24))();
        return 0;
      }
      (**(code **)(*DAT_10180610 + 0x20))();
      return 0;
    }
  }
  else {
    if (0x20c < param_3) {
      return 0;
    }
    if (0x1ff < param_3) {
      if (*(char *)(param_1 + 2) == '\0') {
        return 0;
      }
      iVar6 = (int)(short)param_5 - *(int *)(param_1 + 0x116);
      iVar5 = (int)(short)((uint)param_5 >> 0x10) - *(int *)(param_1 + 0x11a);
      if (*(char *)(param_1 + 0x14) != '\0') {
        iVar5 = iVar5 - *(int *)(param_1 + 0x126);
      }
      if ((((DAT_10180610 != (int *)0x0) && (DAT_10180610[6] == param_1)) &&
          (cVar1 = (**(code **)(*DAT_10180610 + 0x3c))(), cVar1 != '\0')) &&
         (cVar1 = (**(code **)(*DAT_10180610 + 0x18))(param_3,iVar6,iVar5,param_4,param_5),
         cVar1 != '\0')) {
        return 1;
      }
      piVar4 = (int *)FUN_10086ba0(iVar6,iVar5);
      if ((piVar4 == (int *)0x0) || (cVar1 = (**(code **)(*piVar4 + 0x3c))(), cVar1 == '\0')) {
        if (param_3 == 0x201) {
          if (DAT_10180610 == (int *)0x0) {
            return 0;
          }
          if (DAT_10180610[6] != param_1) {
            return 0;
          }
          (**(code **)(*DAT_10180610 + 0x24))();
          DAT_10180610 = (int *)0x0;
          return 0;
        }
      }
      else {
        cVar1 = (**(code **)(*piVar4 + 0x18))(param_3,iVar6,iVar5,param_4,param_5);
        if (cVar1 != '\0') {
          return 1;
        }
      }
      if (param_3 != 0x200) {
        return 0;
      }
      FUN_10086c20(iVar6,iVar5);
      return 0;
    }
    if (param_3 < 0x104) {
      return 0;
    }
    if (0x105 < param_3) {
      return 0;
    }
  }
  if (((DAT_10180610 != (int *)0x0) && (DAT_10180610[6] == param_1)) &&
     ((cVar1 = (**(code **)(*DAT_10180610 + 0x3c))(), cVar1 != '\0' &&
      (cVar1 = (**(code **)(*DAT_10180610 + 0x14))(param_3,param_4,param_5), cVar1 != '\0')))) {
    return 1;
  }
  if (param_3 == 0x100) {
    if (((DAT_10180610 == (int *)0x0) || ((DAT_10180610[0xc] != 6 && (DAT_10180610[0xc] != 7)))) &&
       (iVar5 = 0, 0 < *(int *)(param_1 + 0x162))) {
      piVar4 = *(int **)(param_1 + 0x15e);
      do {
        if (((int *)*piVar4)[0xd] == param_4) {
          (**(code **)(*(int *)*piVar4 + 0x30))();
          return 1;
        }
        iVar5 = iVar5 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar5 < *(int *)(param_1 + 0x162));
    }
    if (*(char *)(param_1 + 1) != '\0') {
      switch(param_4) {
      case 9:
        if (DAT_10180610 != (int *)0x0) {
          uVar2 = GetAsyncKeyState(0x10);
          uVar3 = FUN_10087420((uVar2 & 0x8000) == 0);
          return uVar3;
        }
        FUN_100873e0();
        return 1;
      case 0x25:
      case 0x26:
        if (DAT_10180610 != (int *)0x0) {
          uVar3 = FUN_10087420(0);
          return uVar3;
        }
        break;
      case 0x27:
      case 0x28:
        if (DAT_10180610 != (int *)0x0) {
          uVar3 = FUN_10087420(1);
          return uVar3;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x10089900 */

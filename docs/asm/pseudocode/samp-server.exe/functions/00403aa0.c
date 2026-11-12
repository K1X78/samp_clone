/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00403aa0
 * Name: FUN_00403aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_00403aa0(char param_1,int *param_2,int param_3)

{
  int in_EAX;
  uint uVar1;
  char unaff_BL;
  int iVar2;
  int iVar3;
  uint *local_2c;
  undefined1 local_28 [40];
  
  switch((int)param_1) {
  default:
    __fputchar((int)param_1);
    return 0;
  case 99:
    break;
  case 100:
    iVar2 = 1;
    FUN_00403100(param_2,in_EAX,(int *)&local_2c);
    uVar1 = *local_2c;
    if (((int)uVar1 < 0) || (unaff_BL == '+')) {
      iVar2 = 2;
      uVar1 = -uVar1;
    }
    for (; 9 < (int)uVar1; uVar1 = (int)uVar1 / 10) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = param_3 - iVar2;
    if (unaff_BL != '-') {
      iVar3 = iVar2;
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          __fputchar(0x20);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = iVar3 + -1;
    }
    FUN_004039e0(0,0,local_28);
    _printf("%s",local_28);
    if (0 < iVar2) {
      do {
        __fputchar(0x20);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 1;
  case 0x66:
  case 0x71:
  case 0x72:
    _printf("%s","(no rational number support)");
    return 0;
  case 0x73:
    FUN_00403100(param_2,in_EAX,(int *)&local_2c);
    FUN_00403e00((int)param_2,(int *)local_2c,0,0);
    return 1;
  case 0x78:
    iVar2 = 1;
    FUN_00403100(param_2,in_EAX,(int *)&local_2c);
    for (uVar1 = *local_2c; 0xf < uVar1; uVar1 = uVar1 >> 4) {
      iVar2 = iVar2 + 1;
    }
    iVar2 = param_3 - iVar2;
    if (unaff_BL != '-') {
      iVar3 = iVar2;
      if (0 < iVar2) {
        iVar3 = 0;
        do {
          __fputchar(0x20);
          iVar2 = iVar2 + -1;
        } while (iVar2 != 0);
      }
      iVar2 = iVar3 + -1;
    }
    FUN_004039e0(1,0,local_28);
    _printf("%s",local_28);
    if (0 < iVar2) {
      do {
        __fputchar(0x20);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    return 1;
  }
  FUN_00403100(param_2,in_EAX,(int *)&local_2c);
  iVar2 = param_3 + -1;
  if (unaff_BL != '-') {
    iVar3 = iVar2;
    if (0 < iVar2) {
      iVar3 = 0;
      do {
        __fputchar(0x20);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    iVar2 = iVar3 + -1;
  }
  __fputchar((int)(char)*local_2c);
  if (0 < iVar2) {
    do {
      __fputchar(0x20);
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  return 1;
}


/* END FUNCTION 0x00403aa0 */

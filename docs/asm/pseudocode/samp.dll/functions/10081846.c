/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081846
 * Name: FUN_10081846
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10081846(HWND param_1,int param_2,int param_3,char param_4)

{
  char cVar1;
  LONG LVar2;
  DWORD DVar3;
  uint uVar4;
  LPSTR lpString;
  undefined4 uVar5;
  
  uVar5 = 1;
  FUN_1007cbc0(1);
  FUN_10079940(uVar5);
  if (((param_1 == (HWND)0x0) || (param_2 == 0)) || (param_3 == 0)) {
    return 0x80070057;
  }
  if (param_4 != '\0') {
    LVar2 = SetWindowLongW(param_1,-4,0x10080ab0);
    DVar3 = GetLastError();
    if (LVar2 == 0) {
      if ((int)DVar3 < 1) {
        return DVar3;
      }
      return DVar3 & 0xffff | 0x80070000;
    }
  }
  FUN_1007cbc0();
  cVar1 = FUN_10079780();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079900();
    if (cVar1 != '\0') {
      return 0x80004005;
    }
    uVar4 = FUN_1007f110(1,1,1);
    if ((int)uVar4 < 0) {
      return uVar4;
    }
  }
  FUN_1007cbc0();
  lpString = (LPSTR)FUN_1007b440();
  GetWindowTextA(param_1,lpString,0xff);
  lpString[0xff] = '\0';
  LVar2 = GetWindowLongA(param_1,-6);
  FUN_1007cbc0(LVar2);
  FUN_10078d70(LVar2);
  uVar5 = 0;
  FUN_1007cbc0(0);
  FUN_10079680(uVar5);
  uVar5 = 1;
  FUN_1007cbc0(1);
  FUN_100797c0(uVar5);
  FUN_1007cbc0(param_1);
  FUN_10078520(param_1);
  FUN_1007cbc0(param_2);
  FUN_100785a0(param_2);
  FUN_1007cbc0(param_3);
  FUN_10078620(param_3);
  return 0;
}


/* END FUNCTION 0x10081846 */

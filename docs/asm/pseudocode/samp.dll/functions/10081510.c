/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081510
 * Name: FUN_10081510
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


uint FUN_10081510(LPCSTR param_1,HMODULE param_2,HICON param_3,HMENU param_4,int param_5,int param_6
                 )

{
  char cVar1;
  ATOM AVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  HWND pHVar6;
  int yBottom;
  LPCSTR pCVar7;
  int xRight;
  HINSTANCE pHVar8;
  HWND pHVar9;
  undefined4 uVar10;
  tagRECT local_13c;
  WNDCLASSA local_12c;
  CHAR local_104 [260];
  
  FUN_1007cbc0();
  cVar1 = FUN_10079a80();
  if (cVar1 != '\0') {
    return 0x80004005;
  }
  uVar10 = 1;
  FUN_1007cbc0(1);
  FUN_10079940(uVar10);
  FUN_1007cbc0();
  cVar1 = FUN_10079780();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079900();
    if (cVar1 != '\0') {
      return 0x80004005;
    }
    uVar3 = FUN_1007f110(1,1,1);
    if ((int)uVar3 < 0) {
      return uVar3;
    }
  }
  iVar4 = FUN_1007d3a0();
  if (iVar4 == 0) {
    if (param_2 == (HINSTANCE)0x0) {
      param_2 = GetModuleHandleA((LPCSTR)0x0);
    }
    pHVar8 = param_2;
    FUN_1007cbc0(param_2);
    FUN_10078d70(pHVar8);
    GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
    if (param_3 == (HICON)0x0) {
      param_3 = ExtractIconA(param_2,local_104,0);
    }
    local_12c.style = 8;
    local_12c.lpfnWndProc = FUN_10080ab0;
    local_12c.cbClsExtra = 0;
    local_12c.cbWndExtra = 0;
    local_12c.hInstance = param_2;
    local_12c.hIcon = param_3;
    local_12c.hCursor = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
    local_12c.hbrBackground = GetStockObject(4);
    local_12c.lpszMenuName = (LPCSTR)0x0;
    local_12c.lpszClassName = "Direct3DWindowClass";
    AVar2 = RegisterClassA(&local_12c);
    if ((AVar2 != 0) || (uVar3 = GetLastError(), uVar3 == 0x582)) {
      FUN_1007cbc0();
      iVar4 = FUN_1007a240();
      if (iVar4 != -1) {
        FUN_1007cbc0();
        param_5 = FUN_1007a240();
      }
      FUN_1007cbc0();
      iVar4 = FUN_1007a2c0();
      if (iVar4 != -1) {
        FUN_1007cbc0();
        param_6 = FUN_1007a2c0();
      }
      uVar10 = 0;
      FUN_1007cbc0(0);
      FUN_10079680(uVar10);
      if ((param_5 == -0x80000000) && (param_6 == -0x80000000)) {
        uVar10 = 1;
        FUN_1007cbc0(1);
        FUN_10079680(uVar10);
      }
      xRight = 0x280;
      yBottom = 0x1e0;
      FUN_1007cbc0();
      iVar4 = FUN_1007a340();
      if (iVar4 != 0) {
        FUN_1007cbc0();
        xRight = FUN_1007a340();
      }
      FUN_1007cbc0();
      iVar4 = FUN_1007a3c0();
      if (iVar4 != 0) {
        FUN_1007cbc0();
        yBottom = FUN_1007a3c0();
      }
      SetRect(&local_13c,0,0,xRight,yBottom);
      AdjustWindowRect(&local_13c,0xcf0000,(uint)(param_4 != (HMENU)0x0));
      iVar4 = 0x100;
      FUN_1007cbc0();
      pcVar5 = (char *)FUN_1007b440();
      pCVar7 = param_1;
      do {
        if (*pCVar7 == '\0') {
          if (iVar4 != 0) goto LAB_1008178c;
          break;
        }
        *pcVar5 = *pCVar7;
        pcVar5 = pcVar5 + 1;
        pCVar7 = pCVar7 + 1;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      pcVar5 = pcVar5 + -1;
LAB_1008178c:
      *pcVar5 = '\0';
      pHVar6 = CreateWindowExA(0,"Direct3DWindowClass",param_1,0xcf0000,param_5,param_6,
                               local_13c.right - local_13c.left,local_13c.bottom - local_13c.top,
                               (HWND)0x0,param_4,param_2,(LPVOID)0x0);
      if (pHVar6 != (HWND)0x0) {
        uVar10 = 1;
        FUN_1007cbc0(1);
        FUN_100797c0(uVar10);
        pHVar9 = pHVar6;
        FUN_1007cbc0(pHVar6);
        FUN_10078520(pHVar9);
        pHVar9 = pHVar6;
        FUN_1007cbc0(pHVar6);
        FUN_100785a0(pHVar9);
        FUN_1007cbc0(pHVar6);
        FUN_10078620(pHVar6);
        goto LAB_1008181d;
      }
      uVar3 = GetLastError();
    }
    if (0 < (int)uVar3) {
      return uVar3 & 0xffff | 0x80070000;
    }
  }
  else {
LAB_1008181d:
    uVar3 = 0;
  }
  return uVar3;
}


/* END FUNCTION 0x10081510 */

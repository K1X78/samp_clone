/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10081ed0
 * Name: FUN_10081ed0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int FUN_10081ed0(HACCEL param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  HWND hWnd;
  BOOL BVar4;
  undefined4 uVar5;
  tagMSG local_1c;
  
  FUN_1007cbc0();
  cVar1 = FUN_10079a80();
  if (cVar1 == '\0') {
    FUN_1007cbc0();
    cVar1 = FUN_10079b00();
    if (cVar1 == '\0') {
      uVar5 = 1;
      FUN_1007cbc0(1);
      FUN_10079ac0(uVar5);
      FUN_1007cbc0();
      cVar1 = FUN_10079880();
      if (cVar1 == '\0') {
        FUN_1007cbc0();
        cVar1 = FUN_10079a00();
        if (cVar1 != '\0') {
          FUN_1007cbc0();
          iVar2 = FUN_10079700();
          if (iVar2 != 0) {
            FUN_1007cbc0();
            iVar2 = FUN_10079700();
            if (iVar2 != 0xb) {
              return -0x7fffbffb;
            }
          }
          uVar5 = 1;
          FUN_1007cbc0(1);
          FUN_100796c0(uVar5);
          return -0x7fffbffb;
        }
        iVar2 = FUN_10081980(0,1,0x280,0x1e0,0,0,0);
        if (iVar2 < 0) {
          FUN_1007cbc0();
          iVar3 = FUN_10079700();
          if (iVar3 != 0) {
            FUN_1007cbc0();
            iVar3 = FUN_10079700();
            if (iVar3 != 0xb) {
              return iVar2;
            }
          }
          uVar5 = 1;
          FUN_1007cbc0(1);
          FUN_100796c0(uVar5);
          return iVar2;
        }
      }
      hWnd = (HWND)FUN_1007bed0();
      FUN_1007cbc0();
      cVar1 = FUN_10079780();
      if (cVar1 != '\0') {
        FUN_1007cbc0();
        cVar1 = FUN_10079800();
        if (cVar1 != '\0') {
          FUN_1007cbc0();
          cVar1 = FUN_10079880();
          if (cVar1 != '\0') {
            local_1c.message = 0;
            PeekMessageA(&local_1c,(HWND)0x0,0,0,0);
            while (local_1c.message != 0x12) {
              BVar4 = PeekMessageA(&local_1c,(HWND)0x0,0,0,1);
              if (BVar4 == 0) {
                FUN_10080710();
              }
              else if (((param_1 == (HACCEL)0x0) || (hWnd == (HWND)0x0)) ||
                      (iVar2 = TranslateAcceleratorA(hWnd,param_1,&local_1c), iVar2 == 0)) {
                TranslateMessage(&local_1c);
                DispatchMessageA(&local_1c);
              }
            }
            if (param_1 != (HACCEL)0x0) {
              DestroyAcceleratorTable(param_1);
            }
            uVar5 = 0;
            FUN_1007cbc0(0);
            FUN_10079ac0(uVar5);
            return 0;
          }
        }
      }
      FUN_1007cbc0();
      iVar2 = FUN_10079700();
      if (iVar2 != 0) {
        FUN_1007cbc0();
        iVar2 = FUN_10079700();
        if (iVar2 != 0xb) {
          return -0x7fffbffb;
        }
      }
      uVar5 = 1;
      FUN_1007cbc0(1);
      FUN_100796c0(uVar5);
      return -0x7fffbffb;
    }
  }
  FUN_1007cbc0();
  iVar2 = FUN_10079700();
  if (iVar2 != 0) {
    FUN_1007cbc0();
    iVar2 = FUN_10079700();
    if (iVar2 != 0xb) {
      return -0x7fffbffb;
    }
  }
  uVar5 = 1;
  FUN_1007cbc0(1);
  FUN_100796c0(uVar5);
  return -0x7fffbffb;
}


/* END FUNCTION 0x10081ed0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007d6b0
 * Name: FUN_1007d6b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007d6b0(void)

{
  char cVar1;
  HWND pHVar2;
  undefined4 uVar3;
  int *piVar4;
  LPRECT lpRect;
  int nIndex;
  
  cVar1 = FUN_1007b4c0();
  if (cVar1 == '\0') {
    nIndex = -0xc;
    pHVar2 = (HWND)FUN_1007d3b0();
    GetClassLongA(pHVar2,nIndex);
    FUN_1007cbc0();
    uVar3 = FUN_10078360();
    FUN_1007b500(uVar3);
    piVar4 = (int *)FUN_1007b4a0();
    lpRect = (LPRECT)&stack0xffffffe8;
    (**(code **)(*piVar4 + 0x30))();
    pHVar2 = (HWND)FUN_1007d3b0();
    GetWindowRect(pHVar2,lpRect);
    ClipCursor((RECT *)&stack0xffffffe8);
    return;
  }
  ClipCursor((RECT *)0x0);
  return;
}


/* END FUNCTION 0x1007d6b0 */

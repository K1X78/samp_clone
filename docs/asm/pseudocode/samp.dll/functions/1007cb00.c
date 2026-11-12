/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007cb00
 * Name: FUN_1007cb00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1007cb00(undefined4 param_1)

{
  HWND hWnd;
  int *piVar1;
  undefined4 uVar2;
  
  hWnd = (HWND)FUN_1007bed0();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x10,0,0);
  }
  FUN_1007cbc0(param_1);
  FUN_100796c0(param_1);
  FUN_1007c350(1);
  FUN_1007b480(1);
  uVar2 = 0;
  FUN_1007cbc0(0);
  FUN_100783a0(uVar2);
  piVar1 = (int *)FUN_1007d360();
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))(piVar1);
  }
  uVar2 = 0;
  FUN_1007cbc0(0);
  FUN_100782a0(uVar2);
  return;
}


/* END FUNCTION 0x1007cb00 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10071600
 * Name: FUN_10071600
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


int __thiscall FUN_10071600(int param_1,undefined4 param_2)

{
  DWORD DVar1;
  
  *(undefined4 *)(param_1 + 0x103) = param_2;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined4 *)(param_1 + 0x113) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined1 *)(param_1 + 0xa3) = 0;
  *(undefined1 *)(param_1 + 0xa4) = 0;
  *(undefined1 *)(param_1 + 0xa5) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)(param_1 + 0xa2) = 0;
  *(undefined2 *)(param_1 + 0x88) = 0xffff;
  DVar1 = GetTickCount();
  *(DWORD *)(param_1 + 0x9e) = DVar1;
  D3DXCreateLine(param_2,param_1 + 0x107);
  D3DXCreateFontA(param_2,0x16,0,400,1,0,2,0,0,0,"SAMPAUX3",param_1 + 0x10b);
  D3DXCreateFontA(param_2,0x1c,0,400,1,0,2,0,0,0,"SAMPAUX3",param_1 + 0x10f);
  return param_1;
}


/* END FUNCTION 0x10071600 */

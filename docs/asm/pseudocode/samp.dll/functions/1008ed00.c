/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008ed00
 * Name: FUN_1008ed00
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1008ed00(undefined4 *param_1,undefined4 param_2)

{
  float fVar1;
  UINT UVar2;
  float10 fVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101163f3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1008dcc0(0);
  local_4 = 0;
  *param_1 = &PTR_FUN_1011d5f0;
  FUN_1009bbb0(1);
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0xc] = 6;
  param_1[6] = param_2;
  param_1[0x18] = 5;
  param_1[0x19] = 4;
  *(undefined1 *)(param_1 + 0x46) = 1;
  UVar2 = GetCaretBlinkTime();
  fVar1 = (float)(int)UVar2;
  if ((int)UVar2 < 0) {
    fVar1 = fVar1 + 4.2949673e+09;
  }
  *(double *)(param_1 + 0x42) = (double)(fVar1 * 0.001);
  FUN_10095e30();
  fVar3 = (float10)FUN_10093150();
  *(double *)(param_1 + 0x44) = (double)fVar3;
  DAT_1017f694 = 0;
  *(undefined4 *)((int)param_1 + 0x122) = 0;
  *(undefined4 *)((int)param_1 + 0x11e) = 0;
  *(undefined4 *)((int)param_1 + 0x119) = 0;
  *(undefined1 *)((int)param_1 + 0x137) = 0;
  *(undefined1 *)((int)param_1 + 0x126) = 0;
  *(undefined4 *)((int)param_1 + 0x127) = 0xff101010;
  *(undefined4 *)((int)param_1 + 299) = 0xffffffff;
  *(undefined4 *)((int)param_1 + 0x12f) = 0xff28325c;
  *(undefined4 *)((int)param_1 + 0x133) = 0xff000000;
  *(undefined1 *)((int)param_1 + 0x11d) = 1;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1008ed00 */

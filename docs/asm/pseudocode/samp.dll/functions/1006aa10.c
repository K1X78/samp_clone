/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006aa10
 * Name: FUN_1006aa10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1006aa10(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_101160a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = param_2;
  param_1[10] = 0;
  param_1[0xc] = 0;
  param_1[5] = 0x280;
  param_1[6] = 300;
  param_1[7] = 0xd2;
  param_1[8] = 0x1e;
  param_1[0xd] = 3;
  param_1[0xe] = 0x65707954;
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined2 *)((int)param_1 + 0xb9) = 0x4449;
  *(undefined1 *)((int)param_1 + 0xbb) = 0;
  builtin_strncpy((char *)((int)param_1 + 0x13a),"Prog",4);
  builtin_strncpy((char *)((int)param_1 + 0x13e),"ress",4);
  local_4 = 0;
  *(undefined1 *)((int)param_1 + 0x142) = 0;
  param_1[0x8f] = 0xb4;
  param_1[0x90] = 0xdc;
  param_1[0x93] = 0;
  param_1[0x94] = 0xffffffff;
  uVar1 = FUN_1002e2b0();
  param_1[0x97] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = uVar1;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1006aa10 */

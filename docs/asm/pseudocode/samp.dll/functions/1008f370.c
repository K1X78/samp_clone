/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1008f370
 * Name: FUN_1008f370
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __thiscall FUN_1008f370(undefined4 *param_1,undefined4 param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10116428;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1008ed00(0);
  local_4 = 0;
  *param_1 = &PTR_FUN_1011d640;
  FUN_1008bcc0();
  param_1[6] = param_2;
  param_1[0xc] = 7;
  DAT_1017f6b0 = 0;
  param_1[0x4f] = 0xf0000000;
  param_1[0x53] = 0xf0000000;
  param_1[0x57] = 0xf0000000;
  param_1[0x5a] = 0xff969696;
  param_1[0x5c] = 0xff969696;
  param_1[0x54] = 0xffffffff;
  param_1[0x58] = 0xffffffff;
  param_1[0x59] = 0xffffffff;
  param_1[0x5e] = 0xffffffff;
  param_1[0x5f] = 0xffffffff;
  param_1[0x60] = 0;
  param_1[0x4e] = 0xf0ffffff;
  param_1[0x50] = 0xffff0000;
  param_1[0x51] = 0xf0505050;
  param_1[0x52] = 0xffc8c8c8;
  param_1[0x55] = 0xf09e9e9e;
  param_1[0x56] = 0xffc8c8ff;
  param_1[0x5b] = 0xffffff00;
  param_1[0x5d] = 0xffc8c8ff;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x1008f370 */

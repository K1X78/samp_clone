/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004a16ef
 * Name: _CallCatchBlock2
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __cdecl
_CallCatchBlock2(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  void *local_1c;
  undefined1 *local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  int local_8;
  
  local_14 = DAT_004ec7b4;
  local_10 = param_2;
  local_8 = param_4 + 1;
  local_18 = &LAB_004a142c;
  local_c = param_1;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_1c;
  return uVar1;
}


/* END FUNCTION 0x004a16ef */

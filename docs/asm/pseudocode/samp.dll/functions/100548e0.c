/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100548e0
 * Name: FUN_100548e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_100548e0(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  undefined2 uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115c48;
  local_c = ExceptionList;
  uVar1 = 0x1005;
  ExceptionList = &local_c;
  FUN_100206c0();
  local_4 = 0;
  FUN_10020700(param_2,CONCAT22(uVar1,param_3));
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x100548e0 */

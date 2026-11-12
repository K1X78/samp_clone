/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022ce0
 * Name: FUN_10022ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10022ce0(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 local_124 [4];
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101140fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_124[0] = 0x3b;
  FUN_1001faa0(local_124,8,1);
  FUN_10022af0(local_120,param_1 + 0x18);
  FUN_10021fc0(local_120,param_2,param_3);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10022ce0 */

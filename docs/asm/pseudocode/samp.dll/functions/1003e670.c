/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1003e670
 * Name: FUN_1003e670
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1003e670(undefined4 param_1,undefined4 param_2,undefined2 param_3)

{
  int iVar1;
  undefined2 uVar2;
  int local_128;
  int local_124 [70];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101150ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(param_1,4,0);
  uVar2 = 0;
  local_4 = 0;
  FUN_1001f470(&local_128,0x20,1);
  iVar1 = FUN_1003c3a0(param_2,CONCAT22(uVar2,param_3));
  local_128 = local_128 - iVar1;
  FUN_1001f7c0(0);
  local_124[0] = local_128;
  FUN_1001faa0(local_124,0x20,1);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1003e670 */

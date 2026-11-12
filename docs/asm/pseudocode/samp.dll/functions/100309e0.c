/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100309e0
 * Name: FUN_100309e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100309e0(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101149cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f280(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),0);
  local_4 = 0;
  iVar1 = FUN_1002fb20(local_120,param_1,param_2,0);
  if ((iVar1 != 0) && (*(char *)(iVar1 + 2) != '\0')) {
    FUN_1001f470(&local_124,0x20,1);
    FUN_100298d0(local_124);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100309e0 */

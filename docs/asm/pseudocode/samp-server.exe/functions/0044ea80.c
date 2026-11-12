/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0044ea80
 * Name: FUN_0044ea80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_0044ea80(undefined4 *param_1)

{
  int iVar1;
  void *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b0d08;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0044ea10(param_1);
  local_4 = 0;
  FUN_0044ea40(param_1,0x40);
  iVar1 = 0x40;
  do {
    local_14 = operator_new(0x40);
    FUN_0044e2a0(param_1,&local_14);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x0044ea80 */

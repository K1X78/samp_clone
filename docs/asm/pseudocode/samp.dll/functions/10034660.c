/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10034660
 * Name: FUN_10034660
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10034660(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114b94;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1003d910();
  *(undefined ***)((int)param_1 + 0xdde) = &PTR_LAB_10119578;
  local_4._0_1_ = 1;
  local_4._1_3_ = 0;
  *param_1 = &PTR_FUN_10119738;
  *(undefined ***)((int)param_1 + 0xdde) = &PTR_LAB_10119658;
  FUN_1001f1f0();
  local_4 = CONCAT31(local_4._1_3_,2);
  _eh_vector_constructor_iterator_((int)param_1 + 0xef3,0x11a,0x20,FUN_10033b40,&LAB_10033b50);
  puVar1 = param_1 + 0x403;
  iVar2 = 0x20;
  do {
    *(undefined1 *)puVar1 = 0;
    puVar1 = (undefined4 *)((int)puVar1 + 0x11a);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  *(undefined4 *)((int)param_1 + 0x323b) = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10034660 */

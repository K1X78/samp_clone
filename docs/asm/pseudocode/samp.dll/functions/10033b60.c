/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10033b60
 * Name: FUN_10033b60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10033b60(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10114b5f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_10119738;
  *(undefined ***)((int)param_1 + 0xdde) = &PTR_LAB_10119658;
  local_4 = 2;
  _eh_vector_destructor_iterator_((int)param_1 + 0xef3,0x11a,0x20,&LAB_10033b50);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_1001f390();
  *(undefined ***)((int)param_1 + 0xdde) = &PTR_LAB_10119578;
  local_4 = 0xffffffff;
  FUN_10040950();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10033b60 */

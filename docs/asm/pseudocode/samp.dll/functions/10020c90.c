/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10020c90
 * Name: FUN_10020c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10020c90(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10113f1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[3] = 0x10;
  puVar1 = operator_new(0x74);
  local_4 = 0;
  if (puVar1 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = puVar1 + 1;
    *puVar1 = 0x10;
    _eh_vector_constructor_iterator_(puVar2,7,0x10,FUN_10020540,FUN_10020550);
  }
  *param_1 = puVar2;
  param_1[1] = 0;
  param_1[2] = 0;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10020c90 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6a60
 * Name: FUN_100c6a60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100c6a60(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10116a1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x24);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    DAT_102acab0 = 0;
  }
  else {
    DAT_102acab0 = FUN_1008c780(pvVar1);
  }
  local_4 = 0xffffffff;
  FUN_1008c860(DAT_102ac9d0);
  FUN_10086a00();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100c6a60 */

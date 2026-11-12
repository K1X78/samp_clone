/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ea40
 * Name: FUN_1000ea40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000ea40(undefined4 *param_1)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  if (DAT_102aca28 != 0) {
    FUN_1000ba40();
    FUN_1000d5a0(0);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000ea40 */

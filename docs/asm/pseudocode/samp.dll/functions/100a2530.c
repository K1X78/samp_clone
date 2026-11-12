/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a2530
 * Name: FUN_100a2530
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a2530(void)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1011ebd8;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &local_14;
  (*(code *)0x60ea90)();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x100a2530 */

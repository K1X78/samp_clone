/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a23d0
 * Name: FUN_100a23d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_100a23d0(void)

{
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_1011eb88;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (DAT_102aca3c != 0) {
    ExceptionList = &local_14;
    FUN_100a1a30();
  }
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) != 0)) {
    local_8 = 0;
    FUN_10012950();
    local_8 = 0xffffffff;
  }
  if (DAT_1018de44 != 0) {
    local_8 = 1;
    FUN_10012950();
    local_8 = 0xffffffff;
  }
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) != 0)) {
    FUN_1001e830();
  }
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14) != 0)) {
    FUN_10012a10();
  }
  if (DAT_102aca10 != 0) {
    FUN_10067940();
  }
  local_8 = 2;
  (*(code *)0x53bee0)();
  local_8 = 0xffffffff;
  if ((DAT_102aca24 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x20) != 0)) {
    FUN_1001e330();
  }
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x100a23d0 */

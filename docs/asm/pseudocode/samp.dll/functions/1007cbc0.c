/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1007cbc0
 * Name: FUN_1007cbc0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined * FUN_1007cbc0(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011628e;
  local_c = ExceptionList;
  if ((_DAT_1017f620 & 1) == 0) {
    _DAT_1017f620 = _DAT_1017f620 | 1;
    local_4 = 0;
    ExceptionList = &local_c;
    FUN_10078240();
    _atexit((_func_4879 *)&LAB_10116b70);
  }
  ExceptionList = local_c;
  return &DAT_1017ee60;
}


/* END FUNCTION 0x1007cbc0 */

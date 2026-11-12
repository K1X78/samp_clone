/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10054150
 * Name: FUN_10054150
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10054150(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115beb;
  local_c = ExceptionList;
  DAT_1015fa58 = DAT_1015fa58 + 1;
  if (DAT_1015fa58 == 1) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x15);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      DAT_1015fa54 = FUN_10053f20(pvVar1);
      ExceptionList = local_c;
      return;
    }
    DAT_1015fa54 = 0;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10054150 */

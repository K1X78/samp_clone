/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100374a0
 * Name: FUN_100374a0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100374a0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114ceb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0x410);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_10024670(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x100374a0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100373e0
 * Name: FUN_100373e0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100373e0(void)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114cab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = operator_new(0xdf4);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_100431b0(pvVar1);
    ExceptionList = local_c;
    return uVar2;
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x100373e0 */

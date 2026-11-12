/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100379d0
 * Name: FUN_100379d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * FUN_100379d0(void)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114e2b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  puVar1 = operator_new(0xe);
  local_4 = 0;
  puVar2 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    FUN_10033720();
    *puVar1 = &PTR_LAB_10119288;
    puVar2 = puVar1;
  }
  ExceptionList = local_c;
  return puVar2;
}


/* END FUNCTION 0x100379d0 */

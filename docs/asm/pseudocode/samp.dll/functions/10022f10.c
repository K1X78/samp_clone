/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10022f10
 * Name: FUN_10022f10
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10022f10(undefined4 param_1)

{
  void *pvVar1;
  undefined4 local_4;
  
  pvVar1 = operator_new(0x18);
  if (pvVar1 == (void *)0x0) {
    local_4 = 0;
  }
  else {
    local_4 = FUN_10022a90();
  }
  FUN_10022a40(param_1,&local_4);
  return;
}


/* END FUNCTION 0x10022f10 */

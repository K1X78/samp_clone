/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10025830
 * Name: FUN_10025830
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_10025830(undefined4 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011434b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_LAB_10118ab0;
  *(undefined1 *)(param_1 + 1) = 0;
  param_1[0x81] = 0;
  pvVar1 = operator_new(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_1002af80();
  }
  param_1[0x82] = uVar2;
  param_1[0x83] = 0;
  *(undefined1 *)(param_1 + 0x85) = 0;
  param_1[0x84] = 1;
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x10025830 */

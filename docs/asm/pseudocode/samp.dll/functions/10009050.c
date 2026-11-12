/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10009050
 * Name: FUN_10009050
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10009050(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112abb;
  local_c = ExceptionList;
  pvVar1 = (void *)**(undefined4 **)(param_1 + 0x3de);
  ExceptionList = &local_c;
  if (pvVar1 != (void *)0x0) {
    ExceptionList = &local_c;
    FUN_10007eb0();
    _free(pvVar1);
  }
  pvVar1 = operator_new(0x402);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    uVar2 = FUN_10007b40();
    **(undefined4 **)(param_1 + 0x3de) = uVar2;
    ExceptionList = local_c;
    return;
  }
  **(undefined4 **)(param_1 + 0x3de) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10009050 */

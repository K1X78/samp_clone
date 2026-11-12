/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10064e80
 * Name: FUN_10064e80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10064e80(undefined4 *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_10115fe8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = &PTR_FUN_1011bae0;
  pvVar1 = *(void **)((int)param_1 + 0x921);
  local_4 = 0;
  if (pvVar1 != (void *)0x0) {
    FUN_10064d80();
    _free(pvVar1);
  }
  pvVar1 = *(void **)((int)param_1 + 0x925);
  if (pvVar1 != (void *)0x0) {
    FUN_10064d80();
    _free(pvVar1);
  }
  if (*(void **)((int)param_1 + 0x929) != (void *)0x0) {
    _free(*(void **)((int)param_1 + 0x929));
  }
  local_4 = 0xffffffff;
  FUN_10060690();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10064e80 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028280
 * Name: FUN_10028280
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10028280(int param_1)

{
  void **ppvVar1;
  uint uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_1011445b;
  local_c = ExceptionList;
  uVar2 = 0;
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar1 = &local_c;
  if (*(int *)(param_1 + 8) != 0) {
    do {
      ExceptionList = ppvVar1;
      _free(*(void **)(*(int *)(param_1 + 4) + uVar2 * 4));
      uVar2 = uVar2 + 1;
      ppvVar1 = ExceptionList;
    } while (uVar2 < *(uint *)(param_1 + 8));
  }
  local_4 = 0xffffffff;
  FUN_100277e0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10028280 */

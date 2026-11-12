/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10056a80
 * Name: FUN_10056a80
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10056a80(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115d8b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 4) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0xa7);
    local_4 = 0;
    if (pvVar1 != (void *)0x0) {
      uVar2 = FUN_10055920();
      *(undefined4 *)(param_1 + 4) = uVar2;
      ExceptionList = local_c;
      return;
    }
    *(undefined4 *)(param_1 + 4) = 0;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10056a80 */

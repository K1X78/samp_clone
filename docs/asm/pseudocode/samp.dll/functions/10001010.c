/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001010
 * Name: FUN_10001010
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __fastcall FUN_10001010(int param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011260b;
  local_c = ExceptionList;
  if (*(int *)(param_1 + 8) == 0) {
    ExceptionList = &local_c;
    pvVar1 = operator_new(0x32d);
    local_4 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_100ab690();
    }
    *(undefined4 *)(param_1 + 8) = uVar2;
  }
  ExceptionList = local_c;
  return *(undefined4 *)(param_1 + 8);
}


/* END FUNCTION 0x10001010 */

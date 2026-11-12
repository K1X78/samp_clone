/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1009f8b0
 * Name: FUN_1009f8b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1009f8b0(int *param_1,int param_2)

{
  int iVar1;
  void *local_14;
  undefined1 *puStack_10;
  undefined *puStack_c;
  undefined4 local_8;
  
  puStack_c = &DAT_1011e658;
  puStack_10 = &LAB_100f93a4;
  local_14 = ExceptionList;
  if ((param_1 != (int *)0x0) && (param_2 != 0)) {
    local_8 = 0;
    iVar1 = *param_1;
    ExceptionList = &local_14;
    if ((399 < *(short *)((int)param_1 + 0x22)) &&
       (ExceptionList = &local_14, *(short *)((int)param_1 + 0x22) < 0x264)) {
      ExceptionList = &local_14;
      (*(code *)0x733160)(param_2);
    }
    (**(code **)(iVar1 + 0x44))();
    (**(code **)(iVar1 + 0x48))();
    (*(code *)0x553260)(param_1);
  }
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1009f8b0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000d270
 * Name: FUN_1000d270
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 __thiscall FUN_1000d270(int param_1,undefined4 param_2,char param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112c8b;
  local_c = ExceptionList;
  if (DAT_102aca24 == 0) {
    return 0;
  }
  ExceptionList = &local_c;
  if (*(int *)(DAT_102ac9e8 + 0x30) == 0) {
    ExceptionList = &local_c;
    uVar1 = FUN_1000c9b0();
    FUN_1006a2b0(uVar1);
  }
  FUN_1001f1f0();
  local_124 = param_4;
  local_4 = 0;
  FUN_1001faa0(&local_124,0x20,1);
  if (param_3 == '\x01') {
    piVar2 = *(int **)(DAT_102aca24 + 0x2c);
    puVar3 = &DAT_10117d60;
  }
  else {
    if (param_3 != '\x02') goto LAB_1000d34c;
    piVar2 = *(int **)(DAT_102aca24 + 0x2c);
    puVar3 = &DAT_10117d5c;
  }
  (**(code **)(*piVar2 + 100))(puVar3,local_120,1,9,0,0);
LAB_1000d34c:
  *(undefined4 *)(param_1 + 0x213) = 1;
  FUN_1000bd40();
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x1000d270 */

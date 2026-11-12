/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10072560
 * Name: FUN_10072560
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10072560(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011622b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  iVar1 = *(int *)(param_1 + 0x8a);
  local_4 = 0;
  iVar2 = FUN_10001010();
  if (((iVar1 < 0) || (9 < iVar1)) || (*(int *)(iVar2 + 0x4c + iVar1 * 4) == 0)) {
    iVar2 = 0;
  }
  else {
    iVar2 = iVar1 * 0x34 + 0x74 + iVar2;
  }
  local_124 = param_2;
  FUN_1001faa0(&local_124,0x20,1);
  local_124 = *(undefined4 *)(param_1 + 0x8a);
  FUN_1001faa0(&local_124,0x20,1);
  FUN_1001fb50(iVar2,0x34);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117f30,local_120,1,9,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10072560 */

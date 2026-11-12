/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100045c0
 * Name: FUN_100045c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_100045c0(int param_1)

{
  DWORD DVar1;
  undefined4 local_128;
  undefined4 local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101126ab;
  local_c = ExceptionList;
  if (*(char *)(DAT_102aca24 + 0x233) == '\0') {
    *(undefined2 *)(param_1 + 0x108) = 0xffff;
    *(undefined2 *)(param_1 + 0x10a) = 0xffff;
    *(undefined2 *)(param_1 + 0x10c) = 0xffff;
    *(undefined2 *)(param_1 + 0x10e) = 0xffff;
    return;
  }
  ExceptionList = &local_c;
  DVar1 = GetTickCount();
  if (100 < DVar1 - *(int *)(param_1 + 0x110)) {
    FUN_10004300(&local_128);
    if (((((short)local_128 != *(short *)(param_1 + 0x108)) ||
         (local_128._2_2_ != *(short *)(param_1 + 0x10a))) ||
        ((short)local_124 != *(short *)(param_1 + 0x10c))) ||
       (local_124._2_2_ != *(short *)(param_1 + 0x10e))) {
      FUN_1001f1f0();
      local_4 = 0;
      FUN_1001fb50(&local_128,8);
      (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_101178b0,local_120,1,9,0,0);
      *(undefined4 *)(param_1 + 0x108) = local_128;
      *(undefined4 *)(param_1 + 0x10c) = local_124;
      local_4 = 0xffffffff;
      FUN_1001f390();
    }
    DVar1 = GetTickCount();
    *(DWORD *)(param_1 + 0x110) = DVar1;
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x100045c0 */

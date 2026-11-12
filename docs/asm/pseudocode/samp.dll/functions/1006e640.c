/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1006e640
 * Name: FUN_1006e640
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_1006e640(int *param_1)

{
  undefined4 uVar1;
  char *_Str;
  long lVar2;
  undefined1 local_128 [4];
  long local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011618b;
  local_c = ExceptionList;
  if ((*param_1 != 0) && (param_1[0xd] != 0)) {
    ExceptionList = &local_c;
    uVar1 = FUN_100888f0(0xffffffff);
    _Str = (char *)FUN_1008a440(uVar1);
    if (_Str != (char *)0x0) {
      lVar2 = _atol(_Str);
      FUN_1001f1f0();
      local_4 = 0;
      local_124 = lVar2;
      FUN_1001faa0(&local_124,0x10,1);
      local_128[0] = 0;
      FUN_1001faa0(local_128,8,1);
      (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011c6d0,local_120,1,9,0,0);
      local_4 = 0xffffffff;
      FUN_1001f390();
    }
    if ((*param_1 != 0) && (param_1[0xd] != 0)) {
      *(undefined1 *)(param_1[0xd] + 0x13) = 0;
      (**(code **)(*(int *)param_1[0xe] + 0x38))(0);
      (**(code **)(*(int *)param_1[0xe] + 0x40))(0);
      FUN_100a0530(0,0);
      *param_1 = 0;
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1006e640 */

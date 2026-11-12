/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00463500
 * Name: FUN_00463500
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00463500(undefined4 *param_1)

{
  int *_Memory;
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b1328;
  local_c = ExceptionList;
  local_4 = 0;
  uVar4 = 0;
  ExceptionList = &local_c;
  iVar1 = thunk_FUN_0045b300((int)param_1);
  if (iVar1 != 0) {
    do {
      puVar2 = (undefined4 *)FUN_00463150(param_1,uVar4);
      _Memory = (int *)*puVar2;
      if (_Memory != (int *)0x0) {
        thunk_FUN_0044e430(_Memory);
        _free(_Memory);
      }
      uVar4 = uVar4 + 1;
      uVar3 = thunk_FUN_0045b300((int)param_1);
    } while (uVar4 < uVar3);
  }
  local_4 = 0xffffffff;
  FUN_00463360(param_1);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00463500 */

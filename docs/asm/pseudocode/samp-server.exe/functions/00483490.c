/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00483490
 * Name: FUN_00483490
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00483490(void *param_1)

{
  char cVar1;
  void *_Memory;
  int *_Memory_00;
  int *piVar2;
  int iVar3;
  void **ppvVar4;
  int local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b17a8;
  local_c = ExceptionList;
  local_14 = **(int **)((int)param_1 + 4);
  local_4 = 0;
  ExceptionList = &local_c;
  ppvVar4 = &local_c;
  local_10 = param_1;
  if ((int *)local_14 != *(int **)((int)param_1 + 4)) {
    do {
      iVar3 = local_14;
      FUN_00482540(*(int *)(local_14 + 0x10));
      _Memory = *(void **)(iVar3 + 0x10);
      if (_Memory != (void *)0x0) {
        _free(_Memory);
        *(undefined4 *)(iVar3 + 0x10) = 0;
      }
      FUN_00482610(&local_14);
      ppvVar4 = ExceptionList;
    } while (local_14 != *(int *)((int)param_1 + 4));
  }
  ExceptionList = ppvVar4;
  _Memory_00 = *(int **)(*(int *)((int)param_1 + 4) + 4);
  cVar1 = *(char *)((int)_Memory_00 + 0x15);
  while (cVar1 == '\0') {
    FUN_00482730((int *)_Memory_00[2]);
    piVar2 = (int *)*_Memory_00;
    _free(_Memory_00);
    _Memory_00 = piVar2;
    cVar1 = *(char *)((int)piVar2 + 0x15);
  }
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  local_4 = 0xffffffff;
  FUN_00482e00(param_1,&local_10,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
  _free(*(void **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00483490 */

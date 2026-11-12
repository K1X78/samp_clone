/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00491ce0
 * Name: FUN_00491ce0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00491ce0(void *param_1)

{
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  puStack_8 = &LAB_004b19d8;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_004913a0(*(int **)(*(int *)((int)param_1 + 4) + 4));
  *(int *)(*(int *)((int)param_1 + 4) + 4) = *(int *)((int)param_1 + 4);
  *(undefined4 *)((int)param_1 + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)param_1 + 4) = *(undefined4 *)((int)param_1 + 4);
  *(int *)(*(int *)((int)param_1 + 4) + 8) = *(int *)((int)param_1 + 4);
  local_4 = 0xffffffff;
  FUN_004919f0(param_1,&local_10,(int *)**(int **)((int)param_1 + 4),*(int **)((int)param_1 + 4));
  _free(*(void **)((int)param_1 + 4));
  *(undefined4 *)((int)param_1 + 4) = 0;
  *(undefined4 *)((int)param_1 + 8) = 0;
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00491ce0 */

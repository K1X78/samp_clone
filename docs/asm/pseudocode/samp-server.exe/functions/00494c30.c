/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494c30
 * Name: FUN_00494c30
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00494c30(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *_Memory;
  undefined4 local_120 [69];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1b8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044d8a0(local_120);
  local_4 = 0;
  FUN_00493960(param_1,&DAT_004bff28,local_120,0xffff);
  FUN_00465f60(param_1[2]);
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    thunk_FUN_0046da90(piVar1);
    _free(piVar1);
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    FUN_00467c00(pvVar2);
    _free(pvVar2);
    param_1[3] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    _free((void *)param_1[4]);
    param_1[4] = 0;
  }
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    FUN_00465820(pvVar2);
    _free(pvVar2);
    param_1[5] = 0;
  }
  _Memory = (undefined4 *)param_1[6];
  if (_Memory != (undefined4 *)0x0) {
    FUN_004652b0(_Memory);
    _free(_Memory);
    param_1[6] = 0;
  }
  pvVar2 = (void *)param_1[7];
  if (pvVar2 != (void *)0x0) {
    FUN_00466bb0((int)pvVar2);
    _free(pvVar2);
    param_1[7] = 0;
  }
  if ((void *)param_1[9] != (void *)0x0) {
    _free((void *)param_1[9]);
    param_1[9] = 0;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    FUN_00464510(piVar1);
    _free(piVar1);
    param_1[8] = 0;
  }
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    FUN_00464930(pvVar2);
    _free(pvVar2);
    param_1[10] = 0;
  }
  _DAT_0051c180 = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0xc;
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  *(undefined4 *)((int)param_1 + 0x62) = 0x3c03126f;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  *(undefined4 *)((int)param_1 + 0x5e) = 2;
  local_4 = 0xffffffff;
  FUN_0044d9b0((int)local_120);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x00494c30 */

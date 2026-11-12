/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00494ab0
 * Name: FUN_00494ab0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_00494ab0(undefined4 *param_1)

{
  int *piVar1;
  void *pvVar2;
  undefined4 *_Memory;
  
  FUN_00491fa0("--- Server Shutting Down.");
  piVar1 = (int *)*param_1;
  if (piVar1 != (int *)0x0) {
    thunk_FUN_0046da90(piVar1);
    _free(piVar1);
    *param_1 = 0;
  }
  pvVar2 = (void *)param_1[1];
  if (pvVar2 != (void *)0x0) {
    thunk_FUN_0046d190(pvVar2);
    _free(pvVar2);
    param_1[1] = 0;
  }
  pvVar2 = (void *)param_1[0xf];
  if (pvVar2 != (void *)0x0) {
    FUN_00483490(pvVar2);
    _free(pvVar2);
    param_1[0xf] = 0;
  }
  if ((void *)param_1[0xe] != (void *)0x0) {
    _free((void *)param_1[0xe]);
    param_1[0xe] = 0;
  }
  piVar1 = (int *)param_1[8];
  if (piVar1 != (int *)0x0) {
    FUN_00464510(piVar1);
    _free(piVar1);
    param_1[8] = 0;
  }
  pvVar2 = (void *)param_1[3];
  if (pvVar2 != (void *)0x0) {
    FUN_00467c00(pvVar2);
    _free(pvVar2);
    param_1[3] = 0;
  }
  pvVar2 = (void *)param_1[2];
  if (pvVar2 != (void *)0x0) {
    FUN_00466b60(pvVar2);
    _free(pvVar2);
    param_1[2] = 0;
  }
  pvVar2 = (void *)param_1[5];
  if (pvVar2 != (void *)0x0) {
    FUN_00465820(pvVar2);
    _free(pvVar2);
    param_1[5] = 0;
  }
  if ((void *)param_1[4] != (void *)0x0) {
    _free((void *)param_1[4]);
    param_1[4] = 0;
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
  pvVar2 = (void *)param_1[10];
  if (pvVar2 != (void *)0x0) {
    FUN_00464930(pvVar2);
    _free(pvVar2);
    param_1[10] = 0;
  }
  (**(code **)(*(int *)param_1[0x10] + 0x18))(100,0);
  FUN_00497cc0((int *)param_1[0x10]);
  FUN_0044faa0((undefined4 *)param_1[0x10]);
  return;
}


/* END FUNCTION 0x00494ab0 */

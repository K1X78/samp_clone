/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004849f0
 * Name: FUN_004849f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 * __fastcall FUN_004849f0(undefined4 *param_1)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b181b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined2 *)((int)param_1 + 0x2d53) = 0xffff;
  *(undefined4 *)((int)param_1 + 0x2d4f) = 0;
  *(undefined4 *)((int)param_1 + 0x2d4b) = 0;
  *(undefined4 *)((int)param_1 + 0x30cb) = 0;
  *(undefined4 *)((int)param_1 + 0x2cf5) = 0;
  *(undefined1 *)((int)param_1 + 0x30c2) = 0;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined2 *)(param_1 + 7) = 0;
  *(undefined1 *)((int)param_1 + 0x1e) = 0;
  puVar3 = (undefined4 *)((int)param_1 + 0x27);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)puVar3 + 2) = 0;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined4 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0;
  *(undefined4 *)((int)param_1 + 0x72) = 0;
  *(undefined4 *)((int)param_1 + 0x76) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0;
  puVar3 = (undefined4 *)((int)param_1 + 0x7e);
  for (iVar2 = 0x11; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined4 *)((int)param_1 + 0x105) = 0;
  *(undefined4 *)((int)param_1 + 0x109) = 0;
  *(undefined4 *)((int)param_1 + 0x10d) = 0;
  *(undefined4 *)((int)param_1 + 0x111) = 0;
  *(undefined2 *)((int)param_1 + 0x115) = 0;
  puVar3 = (undefined4 *)((int)param_1 + 0x117);
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = 0;
    puVar3 = puVar3 + 1;
  }
  *(undefined2 *)puVar3 = 0;
  *(undefined1 *)((int)param_1 + 0x3075) = 0;
  pvVar1 = operator_new(0x102e);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_004880a0((int)pvVar1);
  }
  local_4 = 0xffffffff;
  *(int *)((int)param_1 + 0x30cf) = iVar2;
  FUN_00484600((int)param_1);
  ExceptionList = local_c;
  return param_1;
}


/* END FUNCTION 0x004849f0 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005a40
 * Name: FUN_10005a40
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_10005a40(int param_1,uint param_2)

{
  int iVar1;
  uint local_124;
  undefined1 local_120 [276];
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011280b;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  local_4 = 0;
  if ((((ushort)param_2 < 2000) && (*(int *)(iVar1 + 0x3074 + (param_2 & 0xffff) * 4) != 0)) &&
     (*(int *)(iVar1 + 0x1134 + (param_2 & 0xffff) * 4) != 0)) {
    iVar1 = FUN_100abbe0();
    if (iVar1 == 0) {
      *(ushort *)(param_1 + 0xfe) = (ushort)param_2;
    }
    iVar1 = FUN_100b6fa0();
    if (iVar1 != 0) {
      FUN_1009d580();
    }
    iVar1 = FUN_100b7940();
    if (iVar1 == 0) {
      local_124 = param_2;
      FUN_1001faa0(&local_124,0x10,1);
      (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117964,local_120,1,10,0,0);
    }
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_c;
  return;
}


/* END FUNCTION 0x10005a40 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005920
 * Name: FUN_10005920
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10005920(uint param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 local_128 [4];
  uint local_124;
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101127eb;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_124 = param_1;
  FUN_1001faa0(&local_124,0x10,1);
  local_128[0] = param_2 != 0;
  FUN_1001faa0(local_128,8,1);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_10117960,local_120,1,10,0,0);
  iVar1 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc);
  if (((((ushort)param_1 < 2000) && (*(int *)(iVar1 + 0x3074 + (param_1 & 0xffff) * 4) != 0)) &&
      (iVar1 = *(int *)(iVar1 + 0x1134 + (param_1 & 0xffff) * 4), iVar1 != 0)) &&
     (iVar2 = FUN_100b6fa0(), iVar2 != 0)) {
    FUN_100b1f10(&DAT_10117840,*(undefined4 *)(iVar1 + 0x44),3,2);
    DAT_1013c0a4 = GetTickCount();
  }
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10005920 */

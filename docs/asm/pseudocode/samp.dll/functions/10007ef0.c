/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10007ef0
 * Name: FUN_10007ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10007ef0(int param_1)

{
  int *piVar1;
  int iVar2;
  char local_124 [4];
  undefined1 local_120 [252];
  void *pvStack_24;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011296b;
  local_c = ExceptionList;
  if (*(char *)(param_1 + 0x400) != -0x80) {
    ExceptionList = &local_c;
    iVar2 = FUN_100a70f0();
    piVar1 = *(int **)(DAT_102aca24 + 0x2c);
    if ((*(short *)(iVar2 + 0x20) == 0) || (*(short *)(iVar2 + 0x50) != 0)) {
      if ((*(short *)(iVar2 + 0x1e) != 0) && (*(short *)(iVar2 + 0x4e) == 0)) {
        *(undefined1 *)(param_1 + 0x401) = 1;
        (**(code **)(*piVar1 + 100))(&DAT_101179c0,0,1,8,0,0);
        ExceptionList = pvStack_24;
        return;
      }
      if (*(char *)(param_1 + 0x401) != '\0') {
        FUN_10007d10(*(undefined1 *)(param_1 + 0x400));
        *(undefined1 *)(param_1 + 0x401) = 0;
        ExceptionList = local_c;
        return;
      }
    }
    else {
      local_124[0] = FUN_100a7300();
      if (local_124[0] != -1) {
        *(undefined1 *)(param_1 + 0x401) = 1;
        FUN_1001f1f0();
        local_4 = 0;
        FUN_1001faa0(local_124,8,1);
        (**(code **)(*piVar1 + 100))(&DAT_101179c4,local_120,1,8,0,0);
        local_4 = 0xffffffff;
        FUN_1001f390();
      }
    }
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10007ef0 */

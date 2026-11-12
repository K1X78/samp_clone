/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10005860
 * Name: FUN_10005860
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10005860(char *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined1 local_124 [4];
  undefined1 local_120 [252];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101127cb;
  pvStack_c = ExceptionList;
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  ExceptionList = &pvStack_c;
  FUN_1001f1f0();
  local_4 = 0;
  local_124[0] = (undefined1)((int)pcVar2 - (int)(param_1 + 1));
  FUN_1001faa0(local_124,8,1);
  FUN_1001fb50(param_1,(int)pcVar2 - (int)(param_1 + 1) & 0xff);
  (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011795c,local_120,1,8,0,0);
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x10005860 */

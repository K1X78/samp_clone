/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10069340
 * Name: FUN_10069340
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10069340(char *param_1)

{
  char cVar1;
  char *pcVar2;
  int local_124;
  undefined1 local_120 [276];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011606b;
  local_c = ExceptionList;
  if (DAT_102aca24 != 0) {
    ExceptionList = &local_c;
    FUN_1001f1f0();
    local_4 = 0;
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_124 = (int)pcVar2 - (int)(param_1 + 1);
    FUN_1001faa0(&local_124,0x20,1);
    FUN_1001fb50(param_1,(int)pcVar2 - (int)(param_1 + 1));
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011c310,local_120,1,8,0,0);
    local_4 = 0xffffffff;
    FUN_1001f390();
  }
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10069340 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10053c60
 * Name: FUN_10053c60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10053c60(char *param_1,int param_2)

{
  char cVar1;
  char *pcVar2;
  uint local_128;
  char *local_124;
  uint local_120 [3];
  undefined4 local_114;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  cVar1 = FUN_10053b40(&stack0x00000010);
  if (cVar1 == '\0') {
    ExceptionList = local_c;
    return;
  }
  FUN_10053af0(&stack0x00000010);
  if (param_1 == (char *)0x0) {
    local_124 = param_1;
    FUN_1001fbf0(&local_124,0x10,1);
    ExceptionList = local_c;
    return;
  }
  FUN_1001f1f0();
  local_4 = 0;
  if (0 < param_2) {
    pcVar2 = param_1;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (param_2 <= (int)pcVar2 - (int)(param_1 + 1)) {
      param_2 = param_2 + -1;
      goto LAB_10053d19;
    }
  }
  pcVar2 = param_1;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  param_2 = (int)pcVar2 - (int)(param_1 + 1);
LAB_10053d19:
  FUN_100268c0(param_1,param_2,local_120);
  local_128 = local_120[0];
  FUN_1001fbf0(&local_128,0x10,1);
  FUN_1001faa0(local_114,local_120[0] & 0xffff,1);
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10053c60 */

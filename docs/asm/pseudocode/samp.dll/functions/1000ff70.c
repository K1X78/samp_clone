/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000ff70
 * Name: FUN_1000ff70
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000ff70(undefined4 *param_1)

{
  int iVar1;
  char local_121 [277];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_1011300b;
  local_c = ExceptionList;
  local_121[0] = '\0';
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_4 = 0;
  FUN_1001f470(local_121,8,1);
  iVar1 = *(int *)(*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8) + 0x1e);
  if ((local_121[0] == '\x02') || ((local_121[0] != '\0' && (*(int *)(iVar1 + 0x306) != 0)))) {
    FUN_10003b20();
  }
  else {
    *(undefined4 *)(iVar1 + 0x306) = 0;
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1000ff70 */

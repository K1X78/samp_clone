/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000fbb0
 * Name: FUN_1000fbb0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1000fbb0(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte local_23e;
  char local_23d;
  uint local_23c;
  undefined4 local_238;
  int local_234 [71];
  char local_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10112f8b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  iVar2 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
  pcVar3 = local_118;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  local_c = 0;
  local_23e = 0;
  local_23d = '\0';
  local_238 = 0;
  FUN_1001f470(&local_23c,0x10,1);
  FUN_1001f470(local_234,0x20,1);
  FUN_1001f470(&local_23d,8,1);
  FUN_1001f470(&local_23e,8,1);
  FUN_1001f960(local_118,local_23e);
  pcVar3 = local_118;
  local_118[local_23e] = '\0';
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  if ((uint)((int)pcVar3 - (int)(local_118 + 1)) < 0x19) {
    uVar4 = 1;
    if (local_23d == '\0') {
      uVar4 = local_238;
    }
    FUN_10014100(local_23c,local_118,uVar4);
    if (((local_234[0] != 0) && ((ushort)local_23c < 0x3ec)) &&
       (*(int *)(iVar2 + (local_23c & 0xffff) * 4 + 0xfd6) != 0)) {
      FUN_10015e00(local_234[0]);
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1000fbb0 */

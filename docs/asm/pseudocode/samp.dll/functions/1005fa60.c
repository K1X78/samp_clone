/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1005fa60
 * Name: FUN_1005fa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1005fa60(char *param_1,char *param_2,int param_3)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  int iVar7;
  undefined4 local_260;
  void *local_25c;
  undefined4 local_258;
  undefined4 local_254;
  undefined4 local_250;
  undefined4 local_24c;
  void *local_248;
  undefined4 local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 local_238;
  uint local_234;
  undefined1 local_230 [548];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10115ecb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_100635c0();
  local_260 = 0;
  local_25c = (void *)0x0;
  local_258 = 0;
  local_254 = 0;
  local_250 = 0;
  local_4 = 0;
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  thunk_FUN_10063d30(param_2,(int)pcVar3 - (int)(param_2 + 1));
  FUN_10063ce0(&local_260);
  local_24c = local_260;
  local_248 = local_25c;
  local_244 = local_258;
  local_240 = local_254;
  local_23c = local_250;
  iVar7 = 0;
  do {
    bVar2 = *(byte *)((int)&local_24c + iVar7);
    bVar5 = bVar2 & 3;
    bVar4 = bVar2 >> 2 & 3;
    bVar6 = bVar2 >> 4 & 3;
    bVar2 = bVar2 >> 6;
    if (bVar4 < bVar5) {
      bVar4 = bVar5 << 2 | bVar4;
    }
    else {
      bVar4 = bVar4 << 2 | bVar5;
    }
    if (bVar2 < bVar6) {
      bVar2 = bVar6 << 2 | bVar2;
    }
    else {
      bVar2 = bVar2 << 2 | bVar6;
    }
    *(byte *)((int)&local_24c + iVar7) = bVar2 << 4 | bVar4;
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x14);
  if (DAT_102aca24 == 0) {
    param_3 = param_3 + -1;
  }
  FUN_10057170(local_230,&local_24c);
  FUN_1005f930(local_230,0x10,0,0);
  FUN_10059380(param_3);
  iVar7 = FUN_1005a910(&local_24c,0x10);
  if (*(uint *)(iVar7 + 0x18) < 0x10) {
    pcVar3 = (char *)(iVar7 + 4);
  }
  else {
    pcVar3 = *(char **)(iVar7 + 4);
  }
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
    *param_1 = cVar1;
    param_1 = param_1 + 1;
  } while (cVar1 != '\0');
  if (0xf < local_234) {
    _free(local_248);
  }
  local_234 = 0xf;
  local_238 = 0;
  local_248 = (void *)((uint)local_248 & 0xffffff00);
  local_4 = 0xffffffff;
  FUN_10063550();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x1005fa60 */

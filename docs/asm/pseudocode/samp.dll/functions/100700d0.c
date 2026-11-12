/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100700d0
 * Name: FUN_100700d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_100700d0(int param_1,char param_2)

{
  char cVar1;
  char cVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  size_t _Count;
  char local_1c4 [4];
  undefined4 local_1c0;
  undefined4 local_1bc;
  char local_1b8 [136];
  undefined1 local_130 [284];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_101161cb;
  local_14 = ExceptionList;
  if (*(int *)(param_1 + 0x28) == 0) {
    return;
  }
  local_1c0 = CONCAT22(local_1c0._2_2_,*(undefined2 *)(param_1 + 0x30));
  pcVar3 = local_1b8;
  for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  iVar5 = *(int *)(param_1 + 0x2c);
  cVar2 = '\0';
  local_1bc = 0xffffffff;
  if (((iVar5 == 2) || (iVar5 == 4)) || (iVar5 == 5)) {
    ExceptionList = &local_14;
    local_1bc = FUN_100888f0(0xffffffff);
    uVar4 = FUN_100888f0(0xffffffff);
    pcVar3 = (char *)FUN_1008a440(uVar4);
    if (pcVar3 != (char *)0x0) {
      _strncpy(local_1b8,pcVar3,0x80);
    }
    FUN_100b5c00(local_1b8);
    pcVar3 = local_1b8;
    cVar2 = (char)local_1b8;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  else {
    if ((iVar5 != 1) && (ExceptionList = &local_14, iVar5 != 3)) goto LAB_100701cb;
    _Count = 0x80;
    ExceptionList = &local_14;
    pcVar3 = (char *)FUN_100850d0();
    _strncpy(local_1b8,pcVar3,_Count);
    pcVar3 = local_1b8;
    cVar2 = (char)local_1b8;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
  }
  cVar2 = (char)pcVar3 - (cVar2 + '\x01');
LAB_100701cb:
  if (*(int *)(param_1 + 0x81) != 0) {
    FUN_1001f1f0();
    local_c = 0;
    FUN_1001faa0(&local_1c0,0x10,1);
    local_1c4[0] = param_2;
    FUN_1001faa0(local_1c4,8,1);
    local_1c0 = local_1bc;
    FUN_1001faa0(&local_1c0,0x10,1);
    local_1c4[0] = cVar2;
    FUN_1001faa0(local_1c4,8,1);
    if (cVar2 != '\0') {
      FUN_1001fb50(local_1b8,cVar2);
    }
    (**(code **)(**(int **)(DAT_102aca24 + 0x2c) + 100))(&DAT_1011c348,local_130,1,9,0,0);
    local_c = 0xffffffff;
    FUN_1001f390();
  }
  FUN_1006f2a0();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x100700d0 */

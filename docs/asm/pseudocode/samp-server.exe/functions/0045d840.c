/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0045d840
 * Name: FUN_0045d840
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_0045d840(void *param_1)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  char *pcVar4;
  int iVar5;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1138;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0044ea10(&local_1c);
  local_4 = 0;
  FUN_0044e2a0(&local_1c,(undefined4 *)((int)param_1 + 0x10));
  uVar1 = local_18;
  uVar3 = local_10;
  while( true ) {
    if (local_14 < uVar1) {
      iVar5 = uVar3 - uVar1;
    }
    else {
      iVar5 = -uVar1;
    }
    if (local_14 + iVar5 == 0) break;
    local_18 = uVar1 + 1;
    if (local_18 == uVar3) {
      pcVar4 = *(char **)(local_1c + -4 + uVar3 * 4);
      local_18 = 0;
    }
    else if (local_18 == 0) {
      pcVar4 = *(char **)(local_1c + -4 + uVar3 * 4);
    }
    else {
      pcVar4 = *(char **)(local_1c + -4 + local_18 * 4);
    }
    if ((*pcVar4 == '\0') &&
       (iVar5 = 0, *(int *)(pcVar4 + 4) != -1 && -1 < *(int *)(pcVar4 + 4) + 1)) {
      pcVar2 = pcVar4 + 0xd0;
      do {
        FUN_0044e2a0(&local_1c,(undefined4 *)pcVar2);
        iVar5 = iVar5 + 1;
        pcVar2 = pcVar2 + 4;
        uVar3 = local_10;
      } while (iVar5 < *(int *)(pcVar4 + 4) + 1);
    }
    uVar1 = local_18;
    FUN_0045c910(param_1,pcVar4);
    pcVar4[0] = '\0';
    pcVar4[1] = '\0';
    pcVar4[2] = '\0';
    pcVar4[3] = '\0';
  }
  local_4 = 0xffffffff;
  FUN_0045bc40(&local_1c);
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x0045d840 */

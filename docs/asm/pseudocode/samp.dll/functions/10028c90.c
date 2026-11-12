/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10028c90
 * Name: FUN_10028c90
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __fastcall FUN_10028c90(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10114498;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_10027670();
  local_4 = 0;
  FUN_100276c0(param_1 + 0x10);
  while( true ) {
    if (local_14 < local_18) {
      iVar3 = local_10 - local_18;
    }
    else {
      iVar3 = -local_18;
    }
    if (local_14 + iVar3 == 0) break;
    local_18 = local_18 + 1;
    if (local_18 == local_10) {
      pcVar2 = *(char **)(local_1c + -4 + local_10 * 4);
      local_18 = 0;
    }
    else if (local_18 == 0) {
      pcVar2 = *(char **)(local_1c + -4 + local_10 * 4);
    }
    else {
      pcVar2 = *(char **)(local_1c + -4 + local_18 * 4);
    }
    if ((*pcVar2 == '\0') &&
       (iVar3 = 0, *(int *)(pcVar2 + 1) != -1 && -1 < *(int *)(pcVar2 + 1) + 1)) {
      pcVar1 = pcVar2 + 0x8d;
      do {
        FUN_100276c0(pcVar1);
        iVar3 = iVar3 + 1;
        pcVar1 = pcVar1 + 4;
      } while (iVar3 < *(int *)(pcVar2 + 1) + 1);
    }
    FUN_10028310(pcVar2);
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
  }
  local_4 = 0xffffffff;
  FUN_100276a0();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10028c90 */

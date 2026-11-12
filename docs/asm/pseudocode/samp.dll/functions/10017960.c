/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10017960
 * Name: FUN_10017960
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10017960(undefined4 *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char local_148 [36];
  int local_124;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101133db;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  local_148[0] = '\0';
  local_148[1] = '\0';
  local_148[2] = '\0';
  local_148[3] = '\0';
  local_148[4] = '\0';
  local_148[5] = '\0';
  local_148[6] = '\0';
  local_148[7] = '\0';
  local_148[8] = '\0';
  local_148[9] = '\0';
  local_148[10] = '\0';
  local_148[0xb] = '\0';
  local_148[0xc] = '\0';
  local_148[0xd] = '\0';
  local_148[0xe] = '\0';
  local_148[0xf] = '\0';
  local_148[0x10] = '\0';
  local_148[0x11] = '\0';
  local_148[0x12] = '\0';
  local_148[0x13] = '\0';
  local_148[0x14] = '\0';
  local_148[0x15] = '\0';
  local_148[0x16] = '\0';
  local_148[0x17] = '\0';
  local_148[0x18] = '\0';
  local_148[0x19] = '\0';
  local_148[0x1a] = '\0';
  local_148[0x1b] = '\0';
  local_148[0x1c] = '\0';
  local_148[0x1d] = '\0';
  local_148[0x1e] = '\0';
  local_148[0x1f] = '\0';
  local_4 = 0;
  local_148[0x20] = 0;
  FUN_1001f960(local_148,0x20);
  iVar2 = FUN_10001010();
  if (iVar2 != 0) {
    pcVar3 = local_148;
    do {
      cVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
    } while (cVar1 != '\0');
    local_124 = (int)pcVar3 - (int)(local_148 + 1);
    if (local_124 == 0) {
      FUN_100adf80(0);
      pcVar3 = "";
    }
    else {
      FUN_100adf80(local_148);
      pcVar3 = local_148;
    }
    FUN_100adf00(pcVar3);
  }
  local_4 = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_c;
  return;
}


/* END FUNCTION 0x10017960 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000aa60
 * Name: FUN_1000aa60
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

void __thiscall FUN_1000aa60(int param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  int iVar4;
  undefined1 local_2b8 [7];
  undefined1 local_2b1;
  uint local_2b0;
  uint local_2ac [4];
  undefined1 local_29c [276];
  char local_188 [356];
  void *pvStack_24;
  uint uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_10112c46;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  FUN_1001f300(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 8),1);
  pcVar3 = local_188;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar3[0] = '\0';
    pcVar3[1] = '\0';
    pcVar3[2] = '\0';
    pcVar3[3] = '\0';
    pcVar3 = pcVar3 + 4;
  }
  *pcVar3 = '\0';
  local_4 = 0;
  local_2b1 = 0;
  local_2ac[2] = 0;
  local_2ac[1] = 0;
  local_2ac[3] = 0;
  local_2b0 = 0;
  FUN_1001f470(&local_2b1,8,1);
  FUN_1001f470(local_2ac + 2,0x20,1);
  FUN_1001f470(local_2ac + 1,0x10,1);
  FUN_1001f470(local_2ac + 3,0x10,1);
  FUN_1001f470(&local_2b0,0x20,1);
  local_2b0 = local_2b0 ^ 0xfde;
  if (DAT_102aca10 != 0) {
    FUN_10067b60(DAT_102aca10,"Connected. Joining the game...");
  }
  *(undefined4 *)(param_1 + 0x3cd) = 6;
  iVar4 = *(int *)(*(int *)(param_1 + 0x3de) + 8);
  if (*(uint *)(iVar4 + 0x1a) < 0x10) {
    pcVar3 = (char *)(iVar4 + 6);
  }
  else {
    pcVar3 = *(char **)(iVar4 + 6);
  }
  pcVar1 = pcVar3 + 1;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  FUN_1001f1f0();
  local_4 = CONCAT31(local_4._1_3_,1);
  local_2ac[0] = 0xfde;
  FUN_1001faa0(local_2ac,0x20,1);
  local_2b8[0] = 1;
  FUN_1001faa0(local_2b8,8,1);
  local_2b8[0] = (undefined1)((int)pcVar3 - (int)pcVar1);
  FUN_1001faa0(local_2b8,8,1);
  iVar4 = *(int *)(*(int *)(param_1 + 0x3de) + 8);
  if (*(uint *)(iVar4 + 0x1a) < 0x10) {
    iVar4 = iVar4 + 6;
  }
  else {
    iVar4 = *(int *)(iVar4 + 6);
  }
  FUN_1001fb50(iVar4,(int)pcVar3 - (int)pcVar1 & 0xff);
  local_2ac[0] = local_2b0;
  FUN_1001faa0(local_2ac,0x20,1);
  FUN_1005fa60(local_188,0xc9236c,0x3e9);
  pcVar3 = local_188;
  do {
    cVar2 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar2 != '\0');
  local_2b8[0] = (undefined1)((int)pcVar3 - (int)(local_188 + 1));
  FUN_1001faa0(local_2b8,8,1);
  FUN_1001fb50(local_188,(int)pcVar3 - (int)(local_188 + 1) & 0xff);
  local_2b8[0] = 9;
  FUN_1001faa0(local_2b8,8,1);
  FUN_1001fb50("0.3.DL-R1",9);
  local_2ac[0] = local_2b0;
  FUN_1001faa0(local_2ac,0x20,1);
  (**(code **)(**(int **)(param_1 + 0x2c) + 100))(&DAT_10117bf8,local_29c,1,8,0,0);
  uStack_1c = uStack_1c & 0xffffff00;
  FUN_1001f390();
  uStack_1c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = pvStack_24;
  return;
}


/* END FUNCTION 0x1000aa60 */

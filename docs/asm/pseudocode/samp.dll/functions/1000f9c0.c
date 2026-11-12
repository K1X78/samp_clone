/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1000f9c0
 * Name: FUN_1000f9c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

void FUN_1000f9c0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined1 local_145a;
  undefined1 local_1459;
  short local_1458 [2];
  int local_1454;
  undefined1 local_1450 [280];
  char local_1338 [264];
  undefined4 local_1230 [66];
  undefined4 local_1128 [66];
  char local_1020 [4100];
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10112f6b;
  local_14 = ExceptionList;
  uStack_1c = 0x1000f9e6;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  pcVar2 = local_1338;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  puVar4 = local_1128;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  puVar4 = local_1230;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *(undefined1 *)puVar4 = 0;
  pcVar2 = local_1020;
  for (iVar3 = 0x400; iVar3 != 0; iVar3 = iVar3 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  local_c = 0;
  FUN_1001f470(local_1458,0x10,1);
  FUN_1001f470(&local_1459,8,1);
  FUN_1001f470(&local_145a,8,1);
  FUN_1001f960(local_1338,local_145a);
  FUN_1001f470(&local_145a,8,1);
  FUN_1001f960(local_1128,local_145a);
  FUN_1001f470(&local_145a,8,1);
  FUN_1001f960(local_1230,local_145a);
  uVar7 = 0;
  puVar6 = local_1450;
  pcVar2 = local_1020;
  uVar5 = 0x1000;
  FUN_100536f0(pcVar2,0x1000,puVar6,0);
  FUN_10053d90(pcVar2,uVar5,puVar6,uVar7);
  pcVar2 = local_1338;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  local_1454 = (int)pcVar2 - (int)(local_1338 + 1);
  if (local_1454 != 0) {
    pcVar2 = local_1020;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    local_1454 = (int)pcVar2 - (int)(local_1020 + 1);
    if (local_1454 != 0) {
      FUN_1006fa50((int)local_1458[0],local_1459,local_1338,local_1020,local_1128,local_1230,1);
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1000f9c0 */

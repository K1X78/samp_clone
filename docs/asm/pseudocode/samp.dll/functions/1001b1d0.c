/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001b1d0
 * Name: FUN_1001b1d0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001b1d0(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  undefined1 local_c7b;
  undefined1 local_c7a;
  char local_c79;
  ushort local_c78 [2];
  ushort local_c74 [2];
  undefined4 local_c70;
  undefined4 local_c6c;
  undefined4 local_c68;
  undefined4 local_c64;
  undefined4 local_c60;
  undefined4 local_c5c;
  undefined4 local_c58;
  int local_c54;
  undefined1 local_c50 [280];
  char local_b38 [264];
  char local_a30 [264];
  char local_928 [264];
  char local_820 [2060];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_10113a1b;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_1001f300(*param_1,((int)(param_1[1] + ((int)param_1[1] >> 0x1f & 7U)) >> 3) + 1,0);
  iVar5 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0x14);
  local_c = 0;
  FUN_1001f470(local_c74,0x10,1);
  if ((local_c74[0] < 0x835) && (*(int *)(iVar5 + 4 + (uint)local_c74[0] * 4) != 0)) {
    iVar5 = *(int *)(iVar5 + 0x20d4 + (uint)local_c74[0] * 4);
  }
  else {
    iVar5 = 0;
  }
  pcVar2 = local_a30;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = local_928;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = local_b38;
  for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  pcVar2 = local_820;
  for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
    pcVar2[0] = '\0';
    pcVar2[1] = '\0';
    pcVar2[2] = '\0';
    pcVar2[3] = '\0';
    pcVar2 = pcVar2 + 4;
  }
  *pcVar2 = '\0';
  local_c7b = 0;
  local_c70 = 0;
  FUN_1001f470(&local_c79,8,1);
  if (local_c79 == '\x01') {
    FUN_1001f470(&local_c7a,8,1);
    FUN_1001f470(local_c78,0x10,1);
    FUN_1001f470(&local_c7b,8,1);
    FUN_1001f960(local_a30,local_c7b);
    FUN_1001f470(&local_c7b,8,1);
    FUN_1001f960(local_928,local_c7b);
    FUN_1001f470(&local_c70,0x20,1);
    pcVar2 = local_a30;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(local_a30 + 1)) < 0x20) {
      pcVar2 = local_928;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar2 - (int)(local_928 + 1)) < 0x20) {
        uVar3 = (uint)local_c78[0];
        if (uVar3 == 0xffff) {
          uVar3 = 0xffffffff;
        }
        if (iVar5 != 0) {
          FUN_100a8120(uVar3,local_c7a,local_a30,local_928,local_c70);
        }
      }
    }
  }
  else if (local_c79 == '\x02') {
    FUN_1001f470(&local_c7a,8,1);
    FUN_1001f470(&local_c58,8,1);
    FUN_1001f470(&local_c7b,8,1);
    FUN_1001f960(local_b38,local_c7b);
    FUN_1001f470(&local_c60,8,1);
    FUN_1001f470(&local_c68,8,1);
    FUN_1001f470(&local_c6c,0x20,1);
    FUN_1001f470(&local_c64,0x20,1);
    FUN_1001f470(&local_c5c,8,1);
    uVar8 = 0;
    puVar7 = local_c50;
    pcVar2 = local_820;
    uVar6 = 0x800;
    FUN_100536f0(pcVar2,0x800,puVar7,0);
    FUN_10053d90(pcVar2,uVar6,puVar7,uVar8);
    pcVar2 = local_b38;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if ((uint)((int)pcVar2 - (int)(local_b38 + 1)) < 0x20) {
      pcVar2 = local_820;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      local_c54 = (int)pcVar2 - (int)(local_820 + 1);
      if ((local_c54 != 0) && (iVar5 != 0)) {
        FUN_100a82a0(local_c7a,local_820,local_c58,local_b38,local_c60,local_c68,local_c6c,local_c64
                     ,local_c5c);
      }
    }
  }
  local_c = 0xffffffff;
  FUN_1001f390();
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x1001b1d0 */

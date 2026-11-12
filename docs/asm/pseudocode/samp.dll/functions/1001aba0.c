/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x1001aba0
 * Name: FUN_1001aba0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_1001aba0(byte param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_b53;
  undefined1 local_b52;
  char local_b51;
  ushort local_b50 [2];
  undefined4 local_b4c;
  uint local_b48;
  undefined4 local_b44;
  undefined4 local_b40;
  undefined4 local_b3c;
  undefined4 local_b38;
  undefined4 local_b34;
  undefined4 local_b30;
  int local_b2c;
  char local_b28 [264];
  char local_a20 [264];
  char local_918 [264];
  char local_810 [2060];
  
  local_b4c = 0;
  local_b53 = 0;
  for (local_b48 = (uint)param_1; local_b48 != 0; local_b48 = local_b48 - 1) {
    pcVar2 = local_b28;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    *pcVar2 = '\0';
    pcVar2 = local_918;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    *pcVar2 = '\0';
    pcVar2 = local_a20;
    for (iVar4 = 0x40; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    *pcVar2 = '\0';
    pcVar2 = local_810;
    for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
      pcVar2[0] = '\0';
      pcVar2[1] = '\0';
      pcVar2[2] = '\0';
      pcVar2[3] = '\0';
      pcVar2 = pcVar2 + 4;
    }
    *pcVar2 = '\0';
    FUN_1001f470(&local_b51,8,1);
    if (local_b51 == '\x01') {
      FUN_1001f470(&local_b52,8,1);
      FUN_1001f470(local_b50,0x10,1);
      FUN_1001f470(&local_b53,8,1);
      FUN_1001f960(local_b28,local_b53);
      FUN_1001f470(&local_b53,8,1);
      FUN_1001f960(local_918,local_b53);
      FUN_1001f470(&local_b4c,0x20,1);
      pcVar2 = local_b28;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar2 - (int)(local_b28 + 1)) < 0x20) {
        pcVar2 = local_918;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        if ((uint)((int)pcVar2 - (int)(local_918 + 1)) < 0x20) {
          uVar3 = (uint)local_b50[0];
          if ((uVar3 == 0xffff) || (20000 < uVar3)) {
            uVar3 = 0xffffffff;
          }
          if (param_2 != 0) {
            FUN_100a8120(uVar3,local_b52,local_b28,local_918,local_b4c);
          }
        }
      }
    }
    else if (local_b51 == '\x02') {
      FUN_1001f470(&local_b52,8,1);
      FUN_1001f470(&local_b40,8,1);
      FUN_1001f470(&local_b53,8,1);
      FUN_1001f960(local_a20,local_b53);
      FUN_1001f470(&local_b38,8,1);
      FUN_1001f470(&local_b3c,8,1);
      FUN_1001f470(&local_b44,0x20,1);
      FUN_1001f470(&local_b30,0x20,1);
      FUN_1001f470(&local_b34,8,1);
      uVar7 = 0;
      pcVar2 = local_810;
      uVar5 = 0x800;
      uVar6 = param_3;
      FUN_100536f0(pcVar2,0x800,param_3,0);
      FUN_10053d90(pcVar2,uVar5,uVar6,uVar7);
      pcVar2 = local_a20;
      do {
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      if ((uint)((int)pcVar2 - (int)(local_a20 + 1)) < 0x20) {
        pcVar2 = local_810;
        do {
          cVar1 = *pcVar2;
          pcVar2 = pcVar2 + 1;
        } while (cVar1 != '\0');
        local_b2c = (int)pcVar2 - (int)(local_810 + 1);
        if ((local_b2c != 0) && (param_2 != 0)) {
          FUN_100a82a0(local_b52,local_810,local_b40,local_a20,local_b38,local_b3c,local_b44,
                       local_b30,local_b34);
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x1001aba0 */

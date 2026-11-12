/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00496450
 * Name: FUN_00496450
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __thiscall FUN_00496450(void *this,ushort *param_1)

{
  byte bVar1;
  ushort uVar2;
  void *this_00;
  byte *pbVar3;
  char *pcVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  byte local_349;
  short *local_348;
  uint local_344;
  uint local_340;
  uint local_33c;
  undefined1 local_338 [280];
  byte local_220 [524];
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1b6b;
  local_14 = ExceptionList;
  iVar8 = 0;
  ExceptionList = &local_14;
  FUN_0044d930(local_338,*(undefined4 **)(param_1 + 8),*(uint *)(param_1 + 4),'\0');
  local_c = 0;
  if (*(int *)((int)this + 8) != 0) {
    uVar2 = *param_1;
    uVar7 = (uint)uVar2;
    if (uVar2 < 1000) {
      iVar8 = *(int *)(*(int *)((int)this + 8) + 0x25d84 + (uint)uVar2 * 4);
    }
    local_349 = 0;
    local_340 = uVar7;
    FUN_0044da70(local_338,&local_349,8,'\x01');
    if (iVar8 != 0) {
      pbVar3 = local_220;
      for (iVar8 = 0x80; iVar8 != 0; iVar8 = iVar8 + -1) {
        pbVar3[0] = 0;
        pbVar3[1] = 0;
        pbVar3[2] = 0;
        pbVar3[3] = 0;
        pbVar3 = pbVar3 + 4;
      }
      local_33c = 0;
      *pbVar3 = 0;
      FUN_0044da70(local_338,(byte *)&local_33c,0x20,'\x01');
      if ((local_33c != 0) && (local_33c < 0x101)) {
        FUN_0044de00(local_338,local_220,local_33c);
        if (*(int *)((int)*(void **)((int)this + 8) + uVar7 * 4 + 0x2cecc) == 0) {
          local_344 = uVar7;
          pcVar4 = _strtok((char *)local_220," ");
          if (pcVar4 != (char *)0x0) {
            iVar8 = __stricmp(pcVar4,"login");
            if (iVar8 == 0) {
              pbVar3 = (byte *)_strtok((char *)0x0," ");
              if (pbVar3 != (byte *)0x0) {
                local_348 = (short *)inet_ntoa((in_addr)((_union_1226 *)(param_1 + 1))->S_un_b);
                pbVar5 = (byte *)FUN_00490ba0(DAT_004fc43c,"rcon_password");
                pbVar6 = pbVar3;
                do {
                  bVar1 = *pbVar6;
                  bVar9 = bVar1 < *pbVar5;
                  if (bVar1 != *pbVar5) {
LAB_00496654:
                    iVar8 = (1 - (uint)bVar9) - (uint)(bVar9 != 0);
                    goto LAB_00496659;
                  }
                  if (bVar1 == 0) break;
                  bVar1 = pbVar6[1];
                  bVar9 = bVar1 < pbVar5[1];
                  if (bVar1 != pbVar5[1]) goto LAB_00496654;
                  pbVar6 = pbVar6 + 2;
                  pbVar5 = pbVar5 + 2;
                } while (bVar1 != 0);
                iVar8 = 0;
LAB_00496659:
                this_00 = *(void **)((int)this + 4);
                if (iVar8 == 0) {
                  if (this_00 != (void *)0x0) {
                    FUN_0046be60(this_00,local_348,(short *)pbVar3,1);
                  }
                  if (*(void **)this != (void *)0x0) {
                    FUN_0046eab0(*(void **)this,local_348,(short *)pbVar3,1);
                  }
                  uVar7 = local_340;
                  *(undefined4 *)(*(int *)((int)this + 8) + 0x2cecc + local_344 * 4) = 1;
                  FUN_00465c30(*(void **)((int)this + 8),(ushort)local_340);
                  FUN_00491fa0("RCON (In-Game): Player #%d (%s) has logged in.");
                  pcVar4 = "SERVER: You are logged in as admin.";
                }
                else {
                  if (this_00 != (void *)0x0) {
                    FUN_0046be60(this_00,local_348,(short *)pbVar3,0);
                  }
                  if (*(void **)this != (void *)0x0) {
                    FUN_0046eab0(*(void **)this,local_348,(short *)pbVar3,0);
                  }
                  uVar7 = local_340;
                  FUN_00465c30(*(void **)((int)this + 8),(ushort)local_340);
                  FUN_00491fa0("RCON (In-Game): Player #%d (%s) failed login.");
                  pcVar4 = "SERVER: Bad admin password. Repeated attempts will get you banned.";
                }
                FUN_00495ae0(this,(ushort)uVar7,0xffffffff,pcVar4);
              }
            }
          }
        }
        else {
          pbVar3 = local_220;
          do {
            bVar1 = *pbVar3;
            pbVar3 = pbVar3 + 1;
          } while (bVar1 != 0);
          local_344 = (int)pbVar3 - (int)(local_220 + 1);
          if (local_344 == 0) {
            FUN_00495ae0(this,uVar2,0xffffffff,"You forgot the RCON command!");
          }
          else {
            FUN_00465c30(*(void **)((int)this + 8),uVar2);
            FUN_00491fa0("RCON (In-Game): Player [%s] sent command: %s");
            DAT_004ebce4 = uVar2;
            FUN_00490ce0(DAT_004fc43c,(short *)local_220);
            DAT_004ebce4 = 0xffff;
          }
        }
      }
    }
  }
  local_c = 0xffffffff;
  FUN_0044d9b0((int)local_338);
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x00496450 */

/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x0049cea0
 * Name: FUN_0049cea0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_0049cea0(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  void *this;
  char cVar3;
  undefined4 *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  byte *pbVar7;
  void *pvVar8;
  int iVar9;
  uint uVar10;
  undefined2 uVar11;
  undefined4 in_stack_fffff878;
  undefined2 uVar13;
  undefined4 *puVar12;
  in_addr iStack_75c;
  undefined2 uStack_758;
  _union_1226 local_754;
  uint local_750;
  undefined2 uStack_74c;
  byte bStack_74a;
  byte bStack_749;
  _union_1226 _Stack_748;
  int iStack_744;
  undefined4 uStack_740;
  void *local_73c;
  int local_738;
  byte local_734 [36];
  int local_710 [2];
  int iStack_708;
  undefined1 auStack_600 [8];
  undefined4 local_5f8 [69];
  undefined1 auStack_4e4 [28];
  byte abStack_4c8 [8];
  byte local_4c0 [256];
  char acStack_3c0 [8];
  byte abStack_3b8 [256];
  char acStack_2b8 [8];
  byte abStack_2b0 [256];
  undefined1 auStack_1b0 [412];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  uVar11 = (undefined2)((uint)in_stack_fffff878 >> 0x10);
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1d03;
  local_14 = ExceptionList;
  local_738 = 0;
  iVar9 = param_1[1];
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return;
  }
  if (iVar9 == 0) {
    return;
  }
  local_754 = (_union_1226)((_union_1226 *)(param_1 + 2))->S_addr;
  local_750 = CONCAT22(local_750._2_2_,*(undefined2 *)(param_1 + 3));
  ExceptionList = &local_14;
  FUN_0044d930(local_710,(undefined4 *)*param_1,(int)(iVar9 + (iVar9 >> 0x1f & 7U)) >> 3,'\0');
  local_c = 0;
  uVar13 = 0x49;
  FUN_0044d8a0(local_5f8);
  local_73c = *(void **)((int)DAT_004fc438 + 8);
  local_734[0] = 0;
  local_734[1] = 0;
  local_734[2] = 0;
  local_734[3] = 0;
  pbVar7 = local_4c0;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  local_c = CONCAT31(local_c._1_3_,1);
  puVar4 = (undefined4 *)
           (**(code **)(*DAT_0051c18c + 0xe4))
                     (local_754.S_addr,CONCAT22(uVar13,(undefined2)local_750));
  (**(code **)(*DAT_0051c18c + 0xe8))(&local_750,(uint)puVar4 & 0xffff);
  pbVar7 = abStack_2b0;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  pbVar7 = abStack_3b8;
  for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
    pbVar7[0] = 0;
    pbVar7[1] = 0;
    pbVar7[2] = 0;
    pbVar7[3] = 0;
    pbVar7 = pbVar7 + 4;
  }
  bStack_749 = 0;
  uStack_74c = (ushort)(byte)uStack_74c;
  FUN_0044da70(local_710,local_734 + 4,0x20,'\x01');
  FUN_0044da70(local_710,(byte *)((int)&uStack_740 + 3),8,'\x01');
  FUN_0044da70(local_710,&bStack_74a,8,'\x01');
  FUN_0044de00(local_710,local_4c0,(uint)bStack_74a);
  local_4c0[bStack_74a] = 0;
  FUN_0044da70(local_710,local_734,0x20,'\x01');
  FUN_0044da70(local_710,&bStack_749,8,'\x01');
  if (bStack_749 == 0) {
    pcVar5 = inet_ntoa((in_addr)local_754.S_un_b);
    uVar13 = (undefined2)((uint)pcVar5 >> 0x10);
    pcVar5 = "(0) Invalid client connecting from %s";
LAB_0049d13a:
    FUN_00491fa0(pcVar5);
    uVar11 = (undefined2)iStack_744;
  }
  else {
    iVar9 = (**(code **)(*DAT_0051c18c + 0x90))(local_754.S_addr,local_750 & 0xffff);
    if ((iVar9 != 0) && (*(char *)(iVar9 + 0xcb5) == '\x01')) {
      FUN_0044de00(local_710,abStack_2b0,(uint)bStack_749);
      abStack_2b0[bStack_749] = 0;
      if (local_710[0] == iStack_708 || local_710[0] - iStack_708 < 0) {
        uStack_74c = uStack_74c & 0xff;
LAB_0049d0d8:
        abStack_3b8[0] = 'u';
        abStack_3b8[1] = 'n';
        abStack_3b8[2] = 'k';
        abStack_3b8[3] = 'n';
        abStack_3b8[4] = 'o';
        abStack_3b8[5] = 'w';
        abStack_3b8[6] = 'n';
        abStack_3b8[7] = '\0';
LAB_0049d116:
        uVar6 = FUN_0044eec0(&DAT_004ebdd4,(int *)&_Stack_748.S_addr);
        this = local_73c;
        if ((char)uVar6 == '\0') {
          puVar12 = puVar4;
          iVar9 = FUN_00463da0(local_73c,(ushort)puVar4);
          if (iVar9 != 0) {
            FUN_0044ef80(&local_754,'\x01');
            FUN_00491fa0("Player slot (%u) is taken. Kicking %s.");
            FUN_00494040(DAT_004fc438,(uint)puVar4);
            goto LAB_0049d4d1;
          }
          uVar6 = CONCAT22((short)((uint)puVar12 >> 0x10),(undefined2)local_750);
          cVar3 = (**(code **)(*DAT_0051c18c + 0x100))(local_754.S_addr,uVar6);
          uVar13 = (undefined2)((uint)uVar6 >> 0x10);
          if ((((cVar3 != '\0') && ((ushort)puVar4 < 0x3e9)) && (local_738 == 0xfde)) &&
             ((DAT_004fc470 == ((uint)local_73c ^ 0xfde) &&
              (_Stack_748.S_un_b.s_b4 == *(UCHAR *)((int)DAT_004fc438 + 0x6b))))) {
            pbVar7 = abStack_4c8;
            do {
              bVar1 = *pbVar7;
              pbVar7 = pbVar7 + 1;
            } while (bVar1 != 0);
            if ((((int)pbVar7 - (int)(abStack_4c8 + 1) == (local_754.S_addr >> 0x10 & 0xff)) &&
                (cVar3 = FUN_00468ee0((char *)abStack_4c8), cVar3 == '\0')) &&
               ((2 < local_754.S_un_b.s_b3 &&
                ((local_754.S_un_b.s_b3 < 0x15 &&
                 (iVar9 = FUN_00465de0(this,(char *)abStack_4c8), iVar9 == 0)))))) {
              iStack_744 = iVar9;
              FUN_0049cd80(auStack_1b0,acStack_2b8,0x10,(undefined4 *)0x0,(undefined1 *)0x0);
              FUN_0049b4c0(auStack_1b0,0x3e9,&iStack_744);
              if (iStack_744 == 0) {
                pvVar8 = FUN_0049b860(auStack_1b0,local_734,0x10);
                local_14 = (void *)CONCAT31(local_14._1_3_,2);
                uStack_740 = 1;
                if (0x28 < *(uint *)((int)pvVar8 + 0x14)) goto LAB_0049d2f7;
                pvVar8 = FUN_0049b860(auStack_1b0,auStack_4e4,0x10);
                uStack_740 = 3;
                if (*(uint *)((int)pvVar8 + 0x14) < 2) goto LAB_0049d2f7;
                bVar2 = false;
              }
              else {
LAB_0049d2f7:
                bVar2 = true;
              }
              uVar10 = uStack_740;
              if ((uStack_740 & 2) != 0) {
                uVar10 = uStack_740 & 0xfffffffd;
                FUN_00490740((int)auStack_4e4);
              }
              local_14 = (void *)0x1;
              if ((uVar10 & 1) != 0) {
                FUN_00490740((int)local_734);
              }
              if (bVar2) {
                pcVar5 = inet_ntoa(iStack_75c);
                uVar11 = (undefined2)((uint)pcVar5 >> 0x10);
                FUN_00491fa0("Invalid client connecting from %s");
                (**(code **)(*DAT_0051c18c + 0x2c))(local_750,CONCAT22(uVar11,uStack_74c));
              }
              else {
                pvVar8 = FUN_0049b860(auStack_1b0,local_734,0x10);
                local_14._0_1_ = 3;
                if (*(uint *)((int)pvVar8 + 0x18) < 0x10) {
                  pcVar5 = (char *)((int)pvVar8 + 4);
                }
                else {
                  pcVar5 = *(char **)((int)pvVar8 + 4);
                }
                iVar9 = FUN_004661c0(this,puVar4,abStack_4c8,pcVar5,acStack_3c0,0);
                local_14 = (void *)CONCAT31(local_14._1_3_,1);
                uVar11 = 0x49;
                FUN_00490740((int)local_734);
                if (iVar9 == 0) {
                  (**(code **)(*DAT_0051c18c + 0x2c))(iStack_75c.S_un,CONCAT22(uVar11,uStack_758));
                }
                else {
                  iVar9 = (**(code **)(*DAT_0051c18c + 0x90))(local_750,CONCAT22(uVar11,uStack_74c))
                  ;
                  if (iVar9 != 0) {
                    *(undefined1 *)(iVar9 + 0xcb6) = 1;
                    FUN_00496740(DAT_004fc438,(uint)puVar4);
                  }
                }
              }
              goto LAB_0049d4d1;
            }
          }
          FUN_0044df40(auStack_600,&stack0xfffff8a0,8,'\x01');
          (**(code **)(*DAT_0051c18c + 0x8c))
                    (&DAT_004c0170,auStack_600,1,6,0,iStack_75c.S_un,CONCAT22(uVar11,uStack_758),0,0
                     ,DAT_004ebddc,DAT_004ebde0,0);
          goto LAB_0049d4b5;
        }
      }
      else {
        FUN_0044da70(local_710,(byte *)((int)&uStack_74c + 1),8,'\x01');
        if (uStack_74c._1_1_ < 0x19) {
          if (uStack_74c._1_1_ == 0) goto LAB_0049d0d8;
          FUN_0044de00(local_710,abStack_3b8,(uint)uStack_74c._1_1_);
          abStack_3b8[uStack_74c._1_1_] = 0;
          goto LAB_0049d116;
        }
      }
      pcVar5 = inet_ntoa((in_addr)local_754.S_un_b);
      uVar13 = (undefined2)((uint)pcVar5 >> 0x10);
      pcVar5 = "Invalid client connecting from %s";
      goto LAB_0049d13a;
    }
    pcVar5 = inet_ntoa((in_addr)local_754.S_un_b);
    uVar13 = (undefined2)((uint)pcVar5 >> 0x10);
    FUN_00491fa0("(1) Invalid client connecting from %s");
LAB_0049d4b5:
    uVar11 = (undefined2)local_750;
    _Stack_748 = local_754;
  }
  (**(code **)(*DAT_0051c18c + 0x2c))(_Stack_748.S_addr,CONCAT22(uVar13,uVar11));
LAB_0049d4d1:
  local_c = local_c & 0xffffff00;
  FUN_0044d9b0((int)local_5f8);
  local_c = 0xffffffff;
  FUN_0044d9b0((int)local_710);
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x0049cea0 */

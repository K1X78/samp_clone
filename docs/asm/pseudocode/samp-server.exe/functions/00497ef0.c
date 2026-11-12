/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00497ef0
 * Name: FUN_00497ef0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void __cdecl FUN_00497ef0(undefined4 *param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined2 unaff_BX;
  undefined4 unaff_ESI;
  byte *pbVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  char *pcVar9;
  undefined4 uStack_37c;
  undefined2 auStack_378 [2];
  undefined4 local_374;
  uint local_370;
  undefined4 uStack_36c;
  undefined2 uStack_368;
  undefined4 uStack_364;
  int local_360;
  void *pvStack_35c;
  undefined1 auStack_358 [4];
  undefined4 local_354;
  byte abStack_350 [4];
  undefined4 local_34c;
  undefined4 local_348 [70];
  undefined1 local_230 [264];
  byte abStack_128 [16];
  byte abStack_118 [260];
  void *local_14;
  undefined1 *puStack_10;
  uint local_c;
  
  local_c = 0xffffffff;
  puStack_10 = &LAB_004b1bf6;
  local_14 = ExceptionList;
  iVar5 = param_1[1];
  if ((undefined4 *)*param_1 == (undefined4 *)0x0) {
    return;
  }
  if (iVar5 == 0) {
    return;
  }
  local_374 = param_1[2];
  local_370 = CONCAT22(local_370._2_2_,*(undefined2 *)(param_1 + 3));
  ExceptionList = &local_14;
  FUN_0044d930(local_230,(undefined4 *)*param_1,((int)(iVar5 + (iVar5 >> 0x1f & 7U)) >> 3) + 1,'\0')
  ;
  local_c = 0;
  FUN_0044d8a0(local_348);
  local_34c = *(undefined4 *)((int)DAT_004fc438 + 8);
  local_c = CONCAT31(local_c._1_3_,1);
  local_360 = 0;
  local_354 = FUN_00490c80(DAT_004fc43c,"maxnpc");
  puVar2 = (undefined4 *)(**(code **)(*DAT_0051c18c + 0xe4))(local_374,local_370 & 0xffff);
  (**(code **)(*DAT_0051c18c + 0xe8))(&uStack_364,(uint)puVar2 & 0xffff);
  pbVar6 = abStack_118;
  for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
    pbVar6[0] = 0;
    pbVar6[1] = 0;
    pbVar6[2] = 0;
    pbVar6[3] = 0;
    pbVar6 = pbVar6 + 4;
  }
  FUN_0044da70(local_230,abStack_350,0x20,'\x01');
  FUN_0044da70(local_230,(byte *)((int)&uStack_364 + 3),8,'\x01');
  FUN_0044da70(local_230,(byte *)((int)&uStack_36c + 3),8,'\x01');
  FUN_0044de00(local_230,abStack_118,uStack_36c >> 0x18);
  abStack_118[uStack_36c >> 0x18] = 0;
  FUN_0044da70(local_230,(byte *)&local_360,0x20,'\x01');
  uVar3 = FUN_0044eec0(&DAT_004ebdd4,(int *)&pvStack_35c);
  if ((char)uVar3 == '\0') {
    uVar8 = 0x49;
    cVar1 = (**(code **)(*DAT_0051c18c + 0x100))(local_374,local_370 & 0xffff);
    if ((cVar1 != '\0') && ((ushort)puVar2 < 0x3e9)) {
      iVar5 = (**(code **)(*DAT_0051c18c + 0x90))(uStack_37c,CONCAT22(uVar8,auStack_378[0]));
      if ((iVar5 == 0) || (*(char *)(iVar5 + 0xcb5) != '\x02')) {
        FUN_0044ef80(&stack0xfffffc7c,'\x01');
        FUN_00491fa0("[connection:npc:error] (2) invalid client connecting from %s");
LAB_00498252:
        iVar5 = *DAT_0051c18c;
      }
      else {
        iVar5 = FUN_00465fe0((int)pvStack_35c);
        if (uStack_364 <= iVar5) {
          pbVar6 = &stack0xfffffc78;
LAB_004981fb:
          FUN_0044df40(auStack_358,pbVar6,8,'\x01');
          (**(code **)(*DAT_0051c18c + 0x80))
                    (&DAT_004c0170,auStack_358,1,8,0,unaff_ESI,unaff_BX,0,0);
          goto LAB_00498252;
        }
        if (((local_360 != 0xfde) || (DAT_004fc470 != (local_370 ^ 0xfde))) ||
           (local_374._3_1_ != *(char *)((int)DAT_004fc438 + 0x6b))) {
          pbVar6 = &stack0xfffffc78;
          goto LAB_004981fb;
        }
        cVar1 = FUN_00468ee0((char *)abStack_128);
        if (((cVar1 != '\0') || (uStack_37c._3_1_ < 3)) ||
           ((0x18 < uStack_37c._3_1_ ||
            (iVar5 = FUN_00465de0(pvStack_35c,(char *)abStack_128), iVar5 != 0)))) {
          auStack_378[0] = CONCAT11(auStack_378[0]._1_1_,2);
          pbVar6 = (byte *)auStack_378;
          goto LAB_004981fb;
        }
        iVar4 = FUN_004661c0(pvStack_35c,puVar2,abStack_128,(char *)0x0,(char *)0x0,1);
        iVar5 = *DAT_0051c18c;
        if (iVar4 != 0) {
          iVar5 = (**(code **)(iVar5 + 0x90))(uStack_36c,uStack_368);
          if (iVar5 != 0) {
            *(undefined1 *)(iVar5 + 0xcb6) = 1;
            FUN_00496740(DAT_004fc438,(uint)puVar2);
          }
          goto LAB_004982f5;
        }
      }
      (**(code **)(iVar5 + 0x2c))(unaff_ESI,unaff_BX);
      goto LAB_004982f5;
    }
    FUN_0044df40(abStack_350,&stack0xfffffc80,8,'\x01');
    uVar7 = 0x49;
    uVar8 = auStack_378[0];
    (**(code **)(*DAT_0051c18c + 0x80))
              (&DAT_004c0170,abStack_350,1,8,0,uStack_37c,auStack_378[0],0,0);
    (**(code **)(*DAT_0051c18c + 0x2c))(uStack_37c,CONCAT22(uVar7,uVar8));
    FUN_0044ef80(&local_374,'\x01');
    pcVar9 = "[connection:npc:error] (1) bad player ID (%s)";
  }
  else {
    FUN_0044ef80(&local_374,'\x01');
    pcVar9 = "[connection:npc:error] (0) bad player ID (%s)";
  }
  FUN_00491fa0(pcVar9);
LAB_004982f5:
  local_c = local_c & 0xffffff00;
  FUN_0044d9b0((int)local_348);
  local_c = 0xffffffff;
  FUN_0044d9b0((int)local_230);
  ExceptionList = local_14;
  return;
}


/* END FUNCTION 0x00497ef0 */

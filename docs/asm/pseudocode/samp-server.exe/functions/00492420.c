/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x00492420
 * Name: FUN_00492420
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_00492420(void)

{
  void *pvVar1;
  ulong uVar2;
  char *pcVar3;
  undefined4 *puVar4;
  int iVar5;
  char *pcVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined1 local_66;
  undefined1 local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  undefined4 local_60;
  undefined4 local_5c;
  void *local_58;
  DWORD local_54;
  undefined4 *local_50;
  char local_4c [64];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1a1c;
  local_c = ExceptionList;
  local_66 = 1;
  local_60 = 0x32;
  local_5c = 0x2000;
  local_65 = 0;
  local_62 = 1;
  local_61 = 0;
  local_64 = 1;
  local_63 = 1;
  ExceptionList = &local_c;
  FUN_00492380();
  FUN_00491fa0("");
  FUN_00491fa0("SA-MP Dedicated Server");
  FUN_00491fa0("----------------------");
  FUN_00491fa0("v0.3.DL-R1, (C)2005-2018 SA-MP Team\n");
  uVar2 = FID_conflict___time32((undefined4 *)0x0);
  FUN_004a1dfc(uVar2);
  DAT_004fc470 = _rand();
  DAT_004fc474 = _rand();
  uVar8 = FUN_0044e910();
  DAT_004fc478 = (int)uVar8;
  local_58 = operator_new(0xc);
  local_4 = 0;
  if (local_58 == (void *)0x0) {
    DAT_004fc43c = (void *)0x0;
  }
  else {
    DAT_004fc43c = (void *)FUN_00491d70((int)local_58);
  }
  local_4 = 0xffffffff;
  FUN_00491ab0(DAT_004fc43c,"announce",2,0,&local_66,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"maxplayers",1,0,&local_60,&LAB_00491e50);
  FUN_00491ab0(DAT_004fc43c,"mtu",1,0,&DAT_004ebd20,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"port",1,0,&local_5c,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"lanmode",2,0,&local_65,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"query",2,0,&local_64,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"rcon",2,0,&local_63,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"logqueries",2,0,&DAT_004fc458,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"stream_rate",1,0,&DAT_004ebd00,&LAB_00491ef0);
  FUN_00491ab0(DAT_004fc43c,"stream_distance",0,0,&DAT_004ebcfc,&LAB_00491f40);
  FUN_00491ab0(DAT_004fc43c,"sleep",1,0,&DAT_004ebd04,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"maxnpc",1,0,&DAT_004fc45c,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"onfoot_rate",1,0,&DAT_004ebcec,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"incar_rate",1,0,&DAT_004ebcf0,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"weapon_rate",1,0,&DAT_004ebcf4,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"chatlogging",1,0,&DAT_004ebd08,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"timestamp",2,0,&local_62,(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"bind",0,(char *)0x0,(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"password",0,(char *)0x0,&LAB_00492300);
  FUN_00491c40(DAT_004fc43c,"hostname",0,"SA-MP Server",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"language",0,(char *)0x0,(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"mapname",4,"San Andreas",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"weburl",4,"www.sa-mp.com",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"rcon_password",0,"changeme",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"gravity",0,"0.008",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"weather",4,"10",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"gamemodetext",0,"Unknown",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"filterscripts",0,"",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"plugins",0,"",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"nosign",0,"",(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"logtimeformat",0,"[%H:%M:%S]",(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"messageholelimit",1,0,&DAT_004ebd0c,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"messageslimit",1,0,&DAT_004ebd10,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"ackslimit",1,0,&DAT_004ebd14,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"playertimeout",1,0,&DAT_004ebd18,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"minconnectiontime",1,0,&DAT_004fc460,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"myriad",2,0,&local_61,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"lagcompmode",1,0,&DAT_004ebd1c,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"connseedtime",1,0,&DAT_004ebd24,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"db_logging",1,0,&DAT_004fc464,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"db_log_queries",1,0,&DAT_004fc468,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"conncookies",1,0,&DAT_004ebd28,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"cookielogging",1,0,&DAT_004fc47c,(undefined *)0x0);
  FUN_00491ab0(DAT_004fc43c,"useartwork",2,0,&DAT_004fc46c,(undefined *)0x0);
  FUN_00491c40(DAT_004fc43c,"artpath",0,"models",(undefined *)0x0);
  iVar5 = 0;
  do {
    _sprintf(local_4c,"gamemode%u",iVar5);
    FUN_00491c40(DAT_004fc43c,local_4c,0,"",(undefined *)0x0);
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x10);
  FUN_00490ce0(DAT_004fc43c,(short *)"exec server");
  pcVar3 = (char *)FUN_00490ba0(DAT_004fc43c,"rcon_password");
  iVar5 = 9;
  bVar7 = true;
  pcVar6 = "changeme";
  do {
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    bVar7 = *pcVar3 == *pcVar6;
    pcVar3 = pcVar3 + 1;
    pcVar6 = pcVar6 + 1;
  } while (bVar7);
  if (bVar7) {
    FUN_00491fa0("Error: Your password must be changed from the default password, please change it."
                );
  }
  else {
    FUN_00490b80(DAT_004fc43c,"maxplayers",2);
    FUN_00490b80(DAT_004fc43c,"mtu",2);
    FUN_00490b80(DAT_004fc43c,"bind",2);
    FUN_00490b80(DAT_004fc43c,"port",2);
    FUN_00490b80(DAT_004fc43c,"rcon_bind",2);
    FUN_00490b80(DAT_004fc43c,"rcon_port",2);
    FUN_00490b80(DAT_004fc43c,"filterscripts",2);
    FUN_00490b80(DAT_004fc43c,"plugins",2);
    FUN_00490b80(DAT_004fc43c,"nosign",2);
    FUN_00490b80(DAT_004fc43c,"onfoot_rate",2);
    FUN_00490b80(DAT_004fc43c,"incar_rate",2);
    FUN_00490b80(DAT_004fc43c,"weapon_rate",2);
    FUN_00490b80(DAT_004fc43c,"logtimeformat",2);
    FUN_00490b80(DAT_004fc43c,"lagcompmode",2);
    FUN_00490b80(DAT_004fc43c,"useartwork",2);
    FUN_00490b80(DAT_004fc43c,"artpath",2);
    iVar5 = FUN_00490c80(DAT_004fc43c,"lagcompmode");
    if (iVar5 < 1) {
      pcVar3 = "Off";
    }
    else {
      pcVar3 = "On";
    }
    FUN_00491c40(DAT_004fc43c,"lagcomp",6,pcVar3,(undefined *)0x0);
    if (DAT_004fc46c == '\0') {
      pcVar3 = "No";
    }
    else {
      pcVar3 = "Yes";
    }
    FUN_00491c40(DAT_004fc43c,"artwork",6,pcVar3,(undefined *)0x0);
    FUN_00491c40(DAT_004fc43c,"version",6,"0.3.DL-R1",(undefined *)0x0);
    SetConsoleCtrlHandler((PHANDLER_ROUTINE)&LAB_00491da0,1);
    DAT_004fc434 = CreateEventA((LPSECURITY_ATTRIBUTES)0x0,1,0,(LPCSTR)0x0);
    local_58 = CreateThread((LPSECURITY_ATTRIBUTES)0x0,0,(LPTHREAD_START_ROUTINE)&LAB_00492270,
                            (LPVOID)0x0,0,&local_54);
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_00468200);
    timeBeginPeriod(1);
    local_50 = operator_new(0x4c0);
    local_4 = 1;
    if (local_50 == (undefined4 *)0x0) {
      DAT_004fc440 = (void *)0x0;
    }
    else {
      DAT_004fc440 = (void *)FUN_0046a3a0(local_50);
    }
    local_4 = 0xffffffff;
    FUN_0046a740(DAT_004fc440,"plugins");
    if (DAT_004fc46c != '\0') {
      puVar4 = operator_new(0x10d);
      local_4 = 2;
      local_50 = puVar4;
      if (puVar4 == (undefined4 *)0x0) {
        DAT_004fc444 = (char *)0x0;
      }
      else {
        pcVar3 = (char *)FUN_00490ba0(DAT_004fc43c,"artpath");
        DAT_004fc444 = FUN_00497480(puVar4,pcVar3);
      }
      local_4 = 0xffffffff;
      FUN_004976a0(DAT_004fc444,"artconfig.txt");
    }
    local_50 = operator_new(0x3ed8);
    local_4 = 3;
    if (local_50 == (undefined4 *)0x0) {
      DAT_004fc438 = (undefined4 *)0x0;
    }
    else {
      DAT_004fc438 = FUN_004946b0(local_50);
    }
    local_4 = 0xffffffff;
    FUN_004935f0(DAT_004fc438,1);
    pcVar3 = (char *)FUN_00490ba0(DAT_004fc43c,"rcon_bind");
    if ((pcVar3 == (char *)0x0) || (puVar4 = DAT_004fc438, *pcVar3 == '\0')) {
      FUN_00490ba0(DAT_004fc43c,"bind");
      puVar4 = DAT_004fc438;
    }
    while (DAT_004fc438 = puVar4, DAT_004fc450 == '\0') {
      FUN_00496a90(puVar4);
      if (DAT_004fc454 == 1) {
        FUN_00494c30(DAT_004fc438);
        DAT_004fc454 = 0;
      }
      SetEvent(DAT_004fc434);
      WaitForSingleObject(DAT_004fc434,0xffffffff);
      uVar8 = FUN_0044e910();
      if (DAT_004ebd24 < (int)uVar8 - DAT_004fc478) {
        DAT_004fc474 = _rand();
        uVar8 = FUN_0044e910();
        DAT_004fc478 = (int)uVar8;
      }
      Sleep(DAT_004ebd04);
      puVar4 = DAT_004fc438;
    }
    if (puVar4 != (undefined4 *)0x0) {
      FUN_00494ab0(puVar4);
      _free(puVar4);
    }
    pvVar1 = DAT_004fc440;
    if (DAT_004fc440 != (void *)0x0) {
      FUN_00469f20((int)DAT_004fc440);
      _free(pvVar1);
    }
    TerminateThread(local_58,0);
    CloseHandle(DAT_004fc434);
    pvVar1 = DAT_004fc43c;
    if (DAT_004fc43c != (void *)0x0) {
      FUN_00491ce0(DAT_004fc43c);
      _free(pvVar1);
    }
    _fclose(DAT_004fc430);
  }
  ExceptionList = local_c;
  return 0;
}


/* END FUNCTION 0x00492420 */

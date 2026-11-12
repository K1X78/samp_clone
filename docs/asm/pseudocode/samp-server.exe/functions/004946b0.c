/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp-server.exe.official
 * Entry: 0x004946b0
 * Name: FUN_004946b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_004946b0(undefined4 *param_1)

{
  char cVar1;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined *puVar11;
  int unaff_EDI;
  char *pcVar12;
  undefined8 uVar13;
  char local_318 [500];
  char acStack_124 [256];
  void *pvStack_24;
  undefined4 uStack_1c;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_004b1aea;
  pvStack_c = ExceptionList;
  ExceptionList = &pvStack_c;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  *(undefined1 *)((int)param_1 + 0x77) = 1;
  param_1[9] = 0;
  param_1[8] = 0;
  param_1[10] = 0;
  param_1[0x14] = 0;
  *(undefined1 *)((int)param_1 + 0x6b) = 1;
  _DAT_0051c180 = 0;
  *(undefined1 *)((int)param_1 + 0x5a) = 0;
  *(undefined1 *)((int)param_1 + 0x59) = 0xc;
  *(undefined1 *)((int)param_1 + 0x5d) = 1;
  *(undefined1 *)((int)param_1 + 0x5b) = 1;
  *(undefined4 *)((int)param_1 + 0x62) = 0x3c03126f;
  *(undefined4 *)((int)param_1 + 0x66) = 0;
  *(undefined1 *)((int)param_1 + 0x6a) = 0;
  *(undefined4 *)((int)param_1 + 0x7e) = 0;
  *(undefined4 *)((int)param_1 + 0x82) = 0;
  *(undefined1 *)(param_1 + 0x1b) = 0;
  *(undefined4 *)((int)param_1 + 0x6e) = 0x461c4000;
  *(undefined1 *)((int)param_1 + 0x79) = 0;
  *(undefined4 *)((int)param_1 + 0x7a) = 0x461c4000;
  *(undefined4 *)((int)param_1 + 0x72) = 0x428c0000;
  *(undefined1 *)((int)param_1 + 0x76) = 0;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  pvVar2 = operator_new(0x10);
  local_4 = 0;
  if (pvVar2 == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00483580((int)pvVar2);
  }
  local_4 = 0xffffffff;
  param_1[0xf] = iVar3;
  puVar4 = operator_new(800);
  local_4 = 1;
  if (puVar4 == (undefined4 *)0x0) {
    puVar4 = (undefined4 *)0x0;
  }
  else {
    puVar4 = FUN_00481380(puVar4);
  }
  param_1[0xe] = puVar4;
  local_4 = 0xffffffff;
  iVar3 = FUN_00490c80(DAT_004fc43c,"maxplayers");
  if (1000 < iVar3) {
    FUN_00490ca0(DAT_004fc43c,"maxplayers",1000);
  }
  FUN_00490ba0(DAT_004fc43c,"bind");
  uVar5 = FUN_00490c80(DAT_004fc43c,"port");
  uVar6 = FUN_00490c80(DAT_004fc43c,"maxplayers");
  FUN_00490cc0(DAT_004fc43c,"lanmode");
  piVar7 = FUN_0044fa40();
  param_1[0x10] = piVar7;
  FUN_0049d510(piVar7);
  uVar13 = FUN_0044e910();
  _DAT_0051c184 = (undefined4)uVar13;
  uVar13 = thunk_FUN_0044e910();
  param_1[0x11] = (int)uVar13;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  FUN_0046a980((ushort)uVar5);
  iVar3 = DAT_004ebd20;
  cVar1 = (**(code **)(*(int *)param_1[0x10] + 0x108))();
  if (cVar1 == '\0') {
    FUN_00491fa0("Can\'t set the fucking MTU");
  }
  cVar1 = (**(code **)(*(int *)param_1[0x10] + 4))(uVar6,0,DAT_004ebd04,uVar5,uVar6);
  if (cVar1 == '\0') {
    if (iVar3 == 0) {
      FUN_00491fa0("Unable to start server on port: %d. Port in use?");
    }
    else {
      FUN_00491fa0("Unable to start server on %s:%d. Port in use?");
    }
  }
  else {
    FUN_004942b0((int)param_1);
    iVar8 = FUN_00493520(param_1,0);
    if (iVar8 == 0) {
      FUN_00491fa0("I couldn\'t load any gamemode scripts. Please verify your server.cfg");
      FUN_00491fa0("It needs a gamemode0 line at the very least.");
      __fcloseall();
                    /* WARNING: Subroutine does not return */
      _exit(1);
    }
    (**(code **)(*(int *)param_1[0x10] + 0x54))();
    pcVar9 = (char *)FUN_00490ba0(DAT_004fc43c,"password");
    if ((pcVar9 != (char *)0x0) && (*pcVar9 != '\0')) {
      (**(code **)(*(int *)param_1[0x10] + 0x10))(pcVar9);
    }
    _sprintf(acStack_124,"%02d:%02d",(uint)*(byte *)((int)param_1 + 0x59),0);
    FUN_00491c40(DAT_004fc43c,"worldtime",4,acStack_124,(undefined *)0x0);
    if (unaff_EDI != 0) {
      param_1[0x14] = 1;
    }
    GetCurrentDirectoryA(0x200,&stack0xfffffcdc);
    pcVar9 = &stack0xfffffcdc;
    do {
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    if (pcVar9[(int)(local_318 + (-0xd - (int)&stack0xfffffcdd))] != '\\') {
      pcVar9[(int)(local_318 + (-0xc - (int)&stack0xfffffcdd))] = '\\';
      pcVar9[(int)(local_318 + (-0xb - (int)&stack0xfffffcdd))] = '\0';
    }
    pcVar9 = &stack0xfffffcdb;
    do {
      pcVar12 = pcVar9;
      pcVar9 = pcVar12 + 1;
    } while (pcVar12[1] != '\0');
    builtin_strncpy(pcVar12 + 1,"scriptfiles\\",0xd);
    SetEnvironmentVariableA("AMXFILE",&stack0xfffffcdc);
    puVar4 = operator_new(0x1034);
    uStack_1c = 2;
    if (puVar4 == (undefined4 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = FUN_0046a990(puVar4);
    }
    param_1[1] = uVar10;
    if (iVar3 == 0) {
      puVar11 = &DAT_004b7128;
      if (unaff_EDI == 0) {
        puVar11 = &DAT_004bfdec;
      }
      _printf("\nStarted server on port: %d, with maxplayers: %d lanmode is %s.\n\n",uVar5 & 0xffff,
              uVar6 & 0xffff,puVar11);
    }
    else {
      puVar11 = &DAT_004b7128;
      if (unaff_EDI == 0) {
        puVar11 = &DAT_004bfdec;
      }
      _printf("\nStarted server on %s:%d, with maxplayers: %d lanmode is %s.\n\n",iVar3,
              uVar5 & 0xffff,uVar6 & 0xffff,puVar11);
    }
    *(undefined4 *)((int)param_1 + 0x5e) = 0;
  }
  ExceptionList = pvStack_24;
  return param_1;
}


/* END FUNCTION 0x004946b0 */

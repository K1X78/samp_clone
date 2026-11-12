/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100c6780
 * Name: FUN_100c6780
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_100c6780(HMODULE param_1,int param_2)

{
  code *pcVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  CHAR local_110;
  char acStack_10f [4];
  char acStack_10b [4];
  undefined1 auStack_107 [251];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_101169fc;
  local_c = ExceptionList;
  if (param_2 == 1) {
    DAT_102ac9c8 = param_1;
    ExceptionList = &local_c;
    FUN_100c5c90();
    if ((DAT_102abe78 != 0) || (DAT_102abe7c != 0)) {
      SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)&LAB_10060430);
      DAT_102ac9cc = FUN_100c66b0;
      GetModuleFileNameA(DAT_102ac9c8,&local_110,0x104);
      pcVar4 = &local_110;
      do {
        cVar3 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar3 != '\0');
      iVar5 = (int)pcVar4 - (int)acStack_10f;
      cVar3 = (&local_110)[iVar5];
      while (cVar3 != '\\') {
        iVar2 = iVar5 + -10;
        iVar5 = iVar5 + -1;
        cVar3 = auStack_107[iVar2];
      }
      builtin_strncpy(acStack_10f + iVar5,"samp",4);
      builtin_strncpy(acStack_10b + iVar5,".saa",4);
      auStack_107[iVar5] = 0;
      pvVar6 = operator_new(0x935);
      local_4 = 0;
      if (pvVar6 == (void *)0x0) {
        DAT_102ac9d4 = (int *)0x0;
      }
      else {
        DAT_102ac9d4 = (int *)FUN_10064dd0(pvVar6);
      }
      local_4 = 0xffffffff;
      cVar3 = (**(code **)(*DAT_102ac9d4 + 4))("samp.saa");
      if (cVar3 == '\0') {
        pcVar1 = (code *)swi(3);
        uVar7 = (*pcVar1)();
        return uVar7;
      }
      AddFontResourceA("gtaweap3.ttf");
      AddFontResourceA("sampaux3.ttf");
      FUN_10062720();
      FUN_100623f0();
      pvVar6 = operator_new(0x142);
      local_4 = 1;
      if (pvVar6 == (void *)0x0) {
        DAT_102aca3c = 0;
      }
      else {
        DAT_102aca3c = FUN_1009fdc0(pvVar6);
      }
      __beginthread((_StartAddress *)&LAB_100c5150,0,(void *)0x0);
    }
  }
  else if ((param_2 == 0) && ((DAT_102abe78 != 0 || (DAT_102abe7c != 0)))) {
    ExceptionList = &local_c;
    FUN_10062810();
  }
  ExceptionList = local_c;
  return 1;
}


/* END FUNCTION 0x100c6780 */

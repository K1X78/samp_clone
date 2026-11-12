/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100972b0
 * Name: FUN_100972b0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100972b0(int param_1,int param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  CHAR local_428;
  undefined4 local_427;
  undefined1 local_325;
  char local_320;
  undefined4 local_31f;
  char local_218;
  undefined4 local_217;
  undefined1 local_110 [268];
  
  if ((((param_3 == (char *)0x0) || (*param_3 == '\0')) || (param_1 == 0)) || (param_2 < 10)) {
    return 0x80070057;
  }
  local_428 = '\0';
  puVar6 = &local_427;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  local_218 = '\0';
  puVar6 = &local_217;
  for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = 0;
    puVar6 = puVar6 + 1;
  }
  *(undefined2 *)puVar6 = 0;
  *(undefined1 *)((int)puVar6 + 2) = 0;
  GetModuleFileNameA((HMODULE)0x0,&local_428,0x104);
  local_325 = 0;
  pcVar2 = _strrchr(&local_428,0x5c);
  if (pcVar2 != (char *)0x0) {
    pcVar4 = &local_218;
    iVar5 = 0x104;
    iVar3 = 1 - (int)pcVar4;
    do {
      if (pcVar4[(int)(pcVar2 + iVar3)] == '\0') {
        if (iVar5 != 0) goto LAB_1009736c;
        break;
      }
      *pcVar4 = pcVar4[(int)(pcVar2 + iVar3)];
      pcVar4 = pcVar4 + 1;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
    pcVar4 = pcVar4 + -1;
LAB_1009736c:
    *pcVar4 = '\0';
    *pcVar2 = '\0';
    pcVar2 = _strrchr(&local_218,0x2e);
    if (pcVar2 != (char *)0x0) {
      *pcVar2 = '\0';
    }
  }
  cVar1 = FUN_100961c0(param_1,param_2,param_3,&local_428,&local_218);
  if (cVar1 == '\0') {
    FUN_1007bc80(local_110,0x104,"media\\%s",param_3);
    local_320 = FUN_100961c0(param_1,param_2,local_110,&local_428,&local_218);
    if (local_320 == '\0') {
      puVar6 = &local_31f;
      for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = 0;
        puVar6 = puVar6 + 1;
      }
      *(undefined2 *)puVar6 = 0;
      *(undefined1 *)((int)puVar6 + 2) = 0;
      pcVar2 = &local_320;
      iVar5 = 0x104;
      iVar3 = (int)param_3 - (int)pcVar2;
      do {
        if (pcVar2[iVar3] == '\0') {
          if (iVar5 != 0) goto LAB_10097434;
          break;
        }
        *pcVar2 = pcVar2[iVar3];
        pcVar2 = pcVar2 + 1;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
      pcVar2 = pcVar2 + -1;
LAB_10097434:
      *pcVar2 = '\0';
      cVar1 = FUN_10096320(param_1,param_2,&DAT_101183bc,&local_320);
      if ((cVar1 == '\0') &&
         (cVar1 = FUN_10096320(param_1,param_2,&local_428,&local_320), cVar1 == '\0')) {
        FUN_1007bc80(&local_320,0x104,"media\\%s",param_3);
        cVar1 = FUN_10096320(param_1,param_2,&DAT_101183bc,&local_320);
        if ((cVar1 == '\0') &&
           (cVar1 = FUN_10096320(param_1,param_2,&local_428,&local_320), cVar1 == '\0')) {
          FUN_1007bc60(param_1,param_2,param_3);
          return 0x80040903;
        }
      }
    }
  }
  return 0;
}


/* END FUNCTION 0x100972b0 */

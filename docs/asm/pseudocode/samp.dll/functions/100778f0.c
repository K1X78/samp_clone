/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100778f0
 * Name: FUN_100778f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4 FUN_100778f0(char *param_1,size_t param_2,char *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  char local_530;
  undefined4 local_52f;
  undefined1 local_42d;
  CHAR local_428;
  undefined4 local_427;
  undefined1 local_325;
  CHAR local_320;
  undefined4 local_31f;
  undefined1 local_218;
  undefined4 local_217;
  char local_110 [259];
  undefined1 local_d;
  
  if ((((param_3 != (char *)0x0) && (*param_3 != '\0')) && (param_1 != (char *)0x0)) &&
     (9 < (int)param_2)) {
    local_218 = 0;
    puVar4 = &local_217;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    FUN_10076200(&local_218,0x104);
    local_428 = '\0';
    puVar4 = &local_427;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    local_320 = '\0';
    puVar4 = &local_31f;
    for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    }
    *(undefined2 *)puVar4 = 0;
    *(undefined1 *)((int)puVar4 + 2) = 0;
    GetModuleFileNameA((HMODULE)0x0,&local_428,0x104);
    local_325 = 0;
    pcVar2 = _strrchr(&local_428,0x5c);
    if (pcVar2 != (char *)0x0) {
      lstrcpynA(&local_320,pcVar2 + 1,0x104);
      *pcVar2 = '\0';
      pcVar2 = _strrchr(&local_320,0x2e);
      if (pcVar2 != (char *)0x0) {
        *pcVar2 = '\0';
      }
    }
    cVar1 = FUN_100762f0(param_1,param_2,param_3,&local_428,&local_320,&local_218);
    if (cVar1 == '\0') {
      __snprintf(local_110,0x104,"media\\%s",param_3);
      local_d = 0;
      local_530 = FUN_100762f0(param_1,param_2,local_110,&local_428,&local_320,&local_218);
      if (local_530 == '\0') {
        puVar4 = &local_52f;
        for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
        *(undefined2 *)puVar4 = 0;
        *(undefined1 *)((int)puVar4 + 2) = 0;
        _strncpy(&local_530,param_3,0x104);
        local_42d = 0;
        cVar1 = FUN_10076470(param_1,param_2,&DAT_101183bc,&local_530);
        if (cVar1 == '\0') {
          cVar1 = FUN_10076470(param_1,param_2,&local_428,&local_530);
          if (cVar1 == '\0') {
            __snprintf(&local_530,0x104,"media\\%s",param_3);
            local_42d = 0;
            cVar1 = FUN_10076470(param_1,param_2,&DAT_101183bc,&local_530);
            if (cVar1 == '\0') {
              cVar1 = FUN_10076470(param_1,param_2,&local_428,&local_530);
              if (cVar1 == '\0') {
                _strncpy(param_1,param_3,param_2);
                param_1[param_2 - 1] = '\0';
                return 0x80004005;
              }
            }
          }
        }
      }
    }
    return 0;
  }
  return 0x80070057;
}


/* END FUNCTION 0x100778f0 */

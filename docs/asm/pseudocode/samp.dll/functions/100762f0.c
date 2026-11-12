/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100762f0
 * Name: FUN_100762f0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


bool FUN_100762f0(char *param_1,size_t param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  DWORD DVar1;
  
  _strncpy(param_1,param_3,param_2);
  param_1[param_2 - 1] = '\0';
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    __snprintf(param_1,param_2,"..\\%s",param_3);
    param_1[param_2 - 1] = '\0';
    DVar1 = GetFileAttributesA(param_1);
    if (DVar1 == 0xffffffff) {
      __snprintf(param_1,param_2,"..\\..\\%s",param_3);
      param_1[param_2 - 1] = '\0';
      DVar1 = GetFileAttributesA(param_1);
      if (DVar1 == 0xffffffff) {
        __snprintf(param_1,param_2,"..\\..\\%s",param_3);
        param_1[param_2 - 1] = '\0';
        DVar1 = GetFileAttributesA(param_1);
        if (DVar1 == 0xffffffff) {
          __snprintf(param_1,param_2,"%s\\%s",param_4,param_3);
          param_1[param_2 - 1] = '\0';
          DVar1 = GetFileAttributesA(param_1);
          if (DVar1 == 0xffffffff) {
            __snprintf(param_1,param_2,"%s\\..\\%s",param_4,param_3);
            param_1[param_2 - 1] = '\0';
            DVar1 = GetFileAttributesA(param_1);
            if (DVar1 == 0xffffffff) {
              __snprintf(param_1,param_2,"%s\\..\\..\\%s",param_4,param_3);
              param_1[param_2 - 1] = '\0';
              DVar1 = GetFileAttributesA(param_1);
              if (DVar1 == 0xffffffff) {
                __snprintf(param_1,param_2,"%s\\..\\%s\\%s",param_4,param_5,param_3);
                param_1[param_2 - 1] = '\0';
                DVar1 = GetFileAttributesA(param_1);
                if (DVar1 == 0xffffffff) {
                  __snprintf(param_1,param_2,"%s\\..\\..\\%s\\%s",param_4,param_5,param_3);
                  param_1[param_2 - 1] = '\0';
                  DVar1 = GetFileAttributesA(param_1);
                  if (DVar1 == 0xffffffff) {
                    __snprintf(param_1,param_2,"%s%s",param_6,param_3);
                    param_1[param_2 - 1] = '\0';
                    DVar1 = GetFileAttributesA(param_1);
                    return DVar1 != 0xffffffff;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return true;
}


/* END FUNCTION 0x100762f0 */

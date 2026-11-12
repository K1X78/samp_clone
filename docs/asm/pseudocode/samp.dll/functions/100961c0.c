/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100961c0
 * Name: FUN_100961c0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


undefined4
FUN_100961c0(LPCSTR param_1,uint param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)

{
  DWORD DVar1;
  char *pcVar2;
  
  if (param_2 < 0x80000000) {
    FUN_10077b90(param_1,param_2,param_3);
  }
  DVar1 = GetFileAttributesA(param_1);
  if (DVar1 == 0xffffffff) {
    FUN_1007bc80(param_1,param_2,"..\\%s",param_3);
    DVar1 = GetFileAttributesA(param_1);
    if (DVar1 == 0xffffffff) {
      FUN_1007bc80(param_1,param_2,"..\\..\\%s",param_3);
      DVar1 = GetFileAttributesA(param_1);
      if (DVar1 == 0xffffffff) {
        FUN_1007bc80(param_1,param_2,"..\\..\\%s",param_3);
        DVar1 = GetFileAttributesA(param_1);
        if (DVar1 == 0xffffffff) {
          FUN_1007bc80(param_1,param_2,"%s\\%s",param_4,param_3);
          DVar1 = GetFileAttributesA(param_1);
          if (DVar1 == 0xffffffff) {
            FUN_1007bc80(param_1,param_2,"%s\\..\\%s",param_4,param_3);
            DVar1 = GetFileAttributesA(param_1);
            if (DVar1 == 0xffffffff) {
              FUN_1007bc80(param_1,param_2,"%s\\..\\..\\%s",param_4,param_3);
              DVar1 = GetFileAttributesA(param_1);
              if (DVar1 == 0xffffffff) {
                FUN_1007bc80(param_1,param_2,"%s\\..\\%s\\%s",param_4,param_5,param_3);
                DVar1 = GetFileAttributesA(param_1);
                if (DVar1 == 0xffffffff) {
                  FUN_1007bc80(param_1,param_2,"%s\\..\\..\\%s\\%s",param_4,param_5,param_3);
                  DVar1 = GetFileAttributesA(param_1);
                  if (DVar1 == 0xffffffff) {
                    pcVar2 = (char *)FUN_10093290();
                    if (*pcVar2 != '\0') {
                      FUN_1007bc80(param_1,param_2,&DAT_1011c92c,pcVar2,param_3);
                      DVar1 = GetFileAttributesA(param_1);
                      if (DVar1 != 0xffffffff) {
                        return 1;
                      }
                    }
                    return 0;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
}


/* END FUNCTION 0x100961c0 */

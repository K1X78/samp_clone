/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x100a4fa0
 * Name: FUN_100a4fa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_100a4fa0(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  
  if ((DAT_102aca24 != 0) && (DAT_102aca3c != 0)) {
    iVar2 = FUN_10001010();
    if (iVar2 != 0) {
      FUN_10001010();
      iVar2 = FUN_100aba90();
      if (iVar2 != 0) {
        FUN_10001010();
        iVar2 = FUN_100abbe0();
        if (iVar2 == 0) {
          FUN_10001010();
          iVar2 = FUN_100abc20();
          if (iVar2 == param_1) {
            uVar3 = FUN_100a3840(param_2);
            _DAT_10151afc = (short)uVar3;
            if (_DAT_10151afc != -1) {
              _DAT_1018f624 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
              if (_DAT_1018f624 != 0) {
                if ((*(char *)(*(int *)(DAT_102aca24 + 0x3d5) + 0x22) != '\0') &&
                   (cVar1 = *(char *)(*(int *)(_DAT_1018f624 + 0x1e) + 0x130), cVar1 != -1)) {
                  iVar2 = FUN_100010f0(uVar3);
                  if (*(char *)(iVar2 + 0x19) == cVar1) {
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
  return 0;
}


/* END FUNCTION 0x100a4fa0 */

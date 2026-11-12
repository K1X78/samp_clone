/*
 * Generated Ghidra pseudocode, NOT verified source.
 * Binary: samp.dll.official
 * Entry: 0x10001aa0
 * Name: FUN_10001aa0
 * Status: ok
 * Full provenance, body ranges, references: ../index.json
 * Diagnostic: 
 */


void FUN_10001aa0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((DAT_102aca24 != 0) && (DAT_1013c0a0 == 0)) {
    iVar3 = *(int *)(*(int *)(DAT_102aca24 + 0x3de) + 8);
    if ((iVar3 != 0) && (*(int *)(*(int *)(DAT_102aca24 + 0x3de) + 0xc) != 0)) {
      switch(param_2) {
      case 1:
        iVar3 = FUN_10001120(param_3);
        if (iVar3 != 0) {
          FUN_100b7c20(param_4);
          return;
        }
        break;
      case 2:
        iVar3 = FUN_10001120(param_3);
        if (iVar3 != 0) {
          FUN_100b7b00(param_4);
          return;
        }
        break;
      case 3:
        iVar3 = FUN_10001120(param_3);
        if (iVar3 != 0) {
          FUN_100b6e20(param_4,param_5);
          return;
        }
        break;
      case 4:
        if ((ushort)param_1 < 0x3ed) {
          iVar2 = FUN_100010f0(param_1);
          piVar1 = *(int **)(iVar3 + 0x1e);
          iVar3 = FUN_10001120(param_3);
          if ((((((iVar3 != 0) && (iVar2 != 0)) && (piVar1 != (int *)0x0)) &&
               ((*piVar1 != 0 && (*(int *)(iVar2 + 4) != 0)))) &&
              ((iVar3 = FUN_100aba90(), iVar3 != 0 &&
               ((iVar3 = FUN_100aba90(), iVar3 != 0 && (iVar3 = FUN_100abbe0(), iVar3 == 0)))))) &&
             (iVar3 = FUN_100abbe0(), iVar3 != 0)) {
            iVar3 = FUN_100ab8b0();
            iVar4 = FUN_100ab8b0();
            if (iVar3 == iVar4) {
              if (param_4 != 0) {
                if (*(int *)(iVar2 + 8) != 0) {
                  FUN_100b6bd0(param_5);
                }
                FUN_100acf60(param_5,0);
                FUN_100ac3b0(0);
                return;
              }
              if (*(int *)(iVar2 + 8) != 0) {
                FUN_100b6bd0(0);
              }
              FUN_100acf60(0,0);
              FUN_100ac3b0(1);
            }
          }
        }
      }
    }
  }
  return;
}


/* END FUNCTION 0x10001aa0 */
